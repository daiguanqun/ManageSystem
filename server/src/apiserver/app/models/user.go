package models

type User struct {
	ID        int    `gorm:"primary_key;AUTO_INCREMENT"`
	Username  string `gorm:"not null;unique"`
	Password  string `gorm:"not null"`
	Privilege int
}

func NewUser() *User {
	return &User{}
}
