package main

import "fmt"

// 参数列表的另一种形式 -> x int, y int
func add(x, y int) int {
	return x + y
}

func main() {
	fmt.Println(add(42, 45))
}