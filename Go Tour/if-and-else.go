package main

import (
	"math"
	"fmt"
)

func Pow(x, n, lim float64) float64 {
	// 变量 v 的作用域只在 if 语句里面
	if v := math.Pow(x, n); v < lim {
		return v
	} else {
		fmt.Printf("%g >= %g\n", v, lim)
	}
	return lim
}

func main() {
	fmt.Println(
		Pow(3, 2, 10),
		Pow(3, 3, 20),
	)
}
