package main

import "fmt"

func main() {

	person := map[string]string{
		"name":    "jefry",
		"address": "jakarta",
	}

	fmt.Println(person)
	fmt.Println(person["name"])
	fmt.Println(person["address"])

	person["title"] = "dosen"
	fmt.Println(person)

	var nama[5] string
	nama[0] = "Icul"
	nama[1] = "A"
	nama[2] = "B"
	nama[3] = "C"
	nama[4] = "D"

	iniSlice := [] int{1,2,3,4,5,6,7,8}
	iniArray := [6] int{1,2,3,4,5,6}


	fmt.Println(nama)
	fmt.Println(iniSlice)
	fmt.Println(iniArray)

}