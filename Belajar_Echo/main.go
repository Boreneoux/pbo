package main

import (
	"github.com/labstack/echo"
	"net/http"
	"fmt"
)

func main() {
	e := echo.New()
	// add middleware and routes
	// ...
	if err := e.Start(":8080"); err != http.ErrServerClosed {
	  fmt.Println(err)
	}
  }
  