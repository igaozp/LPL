package main

import "fmt"

func main() {
	// defer 语句会延迟函数的执行直到上层函数返回
	defer fmt.Println("world")

	fmt.Println("hello")
}
