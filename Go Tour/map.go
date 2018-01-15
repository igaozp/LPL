package main

import "fmt"

type Mapper struct {
	Lat, Long float64
}

var m map[string]Mapper

func main() {
	m = make(map[string]Mapper)
	m["Bell Labs"] = Mapper{
		34.2345, -23.5467,
	}
	fmt.Println(m["Bell Labs"])
}
