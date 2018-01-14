package main

import "fmt"

// 命名返回值
func split(sum int) (x, y int) {
	x = sum * 4 / 9
	y = sum - x
	// 返回各个返回变量的当前值
	return
}

func main() {
	fmt.Println(split(17))
}