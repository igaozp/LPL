package main

import "fmt"

func main() {
	i, j := 42, 2701

	p := &i         // 指向 i 的指针
	fmt.Println(*p) // 取指针所指向的值
	*p = 21         // 通过指针更改变量的值
	fmt.Println(i)

	p = &j // 指向 j
	*p = *p / 37
	fmt.Println(j)
}
