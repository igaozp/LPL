package main

import (
	"fmt"
)

type Bulk struct {
	Length, Width, Height float64
}

// 在结构体的基础上上定义方法，b 为方法的调用者
func (b *Bulk) Volume() float64 {
	return b.Length * b.Width * b.Height
}

func main() {
	b := &Bulk{1, 2, 3}
	fmt.Println(b.Volume())
}
