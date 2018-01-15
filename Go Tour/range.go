package main

import "fmt"

var num = []int{1, 2, 4, 8, 16, 32, 64, 128}

func main() {
	// range 将返回两个值，第一个是当前下标，
	// 第二个是该下标所对应元素的一个拷贝
	for i, v := range num {
		fmt.Printf("2**%d = %d\n", i, v)
	}

	// 只保留下标
	for i := range num {
		num[i] = 1 << uint(i)
	}
	// 通过赋值给 _ 来忽略下标
	for _, value := range num {
		fmt.Printf("%d\t", value)
	}
}
