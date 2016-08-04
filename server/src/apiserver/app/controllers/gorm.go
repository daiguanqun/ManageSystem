package controllers

import (
	"apiserver/app/models"
	"database/sql"
	"github.com/jinzhu/gorm"
	_ "github.com/jinzhu/gorm/dialects/mysql"
	"github.com/revel/revel"
)

type GormController struct {
	*revel.Controller
	Txn *gorm.DB
}

var Gdb *gorm.DB

func InitDB() {
	var err error

	Gdb, err = gorm.Open("mysql", "root:root@tcp(127.0.0.1:3306)/test")
	if err != nil {
		revel.ERROR.Println("FATAL", err)
		panic(err)
	}

	Gdb.AutoMigrate(&models.User{})
}

func (c *GormController) Begin() revel.Result {
	txn := Gdb.Begin()
	if txn.Error != nil {
		panic(txn.Error)
	}
	c.Txn = txn
	return nil
}

func (c *GormController) Commit() revel.Result {
	if c.Txn == nil {
		return nil
	}
	c.Txn.Commit()
	if err := c.Txn.Error; err != nil && err != sql.ErrTxDone {
		panic(err)
	}
	c.Txn = nil
	return nil
}

func (c *GormController) Rollback() revel.Result {
	if c.Txn == nil {
		return nil
	}
	c.Txn.Rollback()
	if err := c.Txn.Error; err != nil && err != sql.ErrTxDone {
		panic(err)
	}
	c.Txn = nil
	return nil
}
