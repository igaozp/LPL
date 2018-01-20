package main

import "fmt"

func main() {
	// 带缓冲区的 channel
	ch := make(chan int, 2)
	ch <- 1
	ch <- 2
	fmt.Println(<-ch)
	fmt.Println(<-ch)
}
