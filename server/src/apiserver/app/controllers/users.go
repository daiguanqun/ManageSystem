package controllers

import (
	"apiserver/app/models"
	"github.com/revel/revel"
	"strconv"
)

type Users struct {
	GormController
}

func (c Users) Auth() revel.Result {
	user := models.NewUser()
	c.Params.Bind(&user.Username, "name")
	c.Params.Bind(&user.Password, "pwd")
	revel.INFO.Println(user)
	ret := c.Txn.Where(user).First(&models.User{})
	if ret.Error == nil {
		return c.RenderJson(ret.Value)
	}
	return nil
}

func (c Users) Modify() revel.Result {
	user := models.NewUser()
	var err error
	user.ID, err = strconv.Atoi(c.Params.Form.Get("id"))
	if err != nil {
		return c.RenderJson(c.Params)
	}
	user.Username = c.Params.Form.Get("name")
	user.Password = c.Params.Form.Get("pwd")
	user.Privilege, err = strconv.Atoi(c.Params.Form.Get("code"))
	if err != nil {
		return c.RenderJson(c.Params)
	}
	ret := c.Txn.Save(user)
	return c.RenderJson(ret)
}

func (c Users) Add() revel.Result {
	user := models.NewUser()
	user.Username = c.Params.Form.Get("name")
	user.Password = c.Params.Form.Get("pwd")
	user.Privilege, _ = strconv.Atoi(c.Params.Form.Get("code"))
	ret := c.Txn.Create(user)
	return c.RenderJson(ret)
}

func (c Users) Delete() revel.Result {
	user := models.NewUser()
	c.Params.Bind(&user.ID, "id")
	ret := c.Txn.Delete(user)
	return c.RenderJson(ret)
}
