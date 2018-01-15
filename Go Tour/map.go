package main

import "fmt"

type Mapper struct {
	Lat, Long float64
}

var m map[string]Mapper

var n = map[string]Mapper{
	"Google": Mapper{
		37.4333, -122.4356,
	},
	"Facebook": {
		57.4245, -52.3242,
	},
}

func main() {
	m = make(map[string]Mapper)
	m["Bell Labs"] = Mapper{
		34.2345, -23.5467,
	}

	fmt.Println(m["Bell Labs"])
	fmt.Println(n)
}
