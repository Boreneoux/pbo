package main

import "fmt"

func main(){
	nama := "test"
	if nama == "Ichlas" {
		fmt.Println("Hello Ichlas")
	}else {
		fmt.Println("Hello user")
	}

	var test = "abcd"
	switch test {
	case "test" : fmt.Println("Test")
	case "aku" : fmt.Println("Aku")
	default : fmt.Println("Oke")
	}

	switch length := len(test); length > 3 {
	case true : fmt.Println("Benar")
	case false : fmt.Println("Salah")
	}

}