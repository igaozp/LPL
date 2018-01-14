package main

import "fmt"

func main() {
	var i, j = 1, 2
	// 使用 := 初始化变量，不需要加 var 关键字，且只能在函数体内使用
	k := 3
	c, python, java := true, false, "no!"

	fmt.Println(i, j, k, c, python, java)
}
