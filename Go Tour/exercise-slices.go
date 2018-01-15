package main

import "golang.org/x/tour/pic"

func Pic(dx, dy int) [][]uint8 {
	list := make([][]uint8, dy)
	for i := range list {
		list[i] = make([]uint8, dx)
	}

	for i := 0; i < len(list); i++ {
		for j := 0; j < len(list[i]); j++ {
			list[i][j] = uint8(i ^ j)
		}
	}
	return list
}

func main() {
	pic.Show(Pic)
}
