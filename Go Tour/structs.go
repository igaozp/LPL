package main

import "fmt"

type Vertex struct {
	X float64
	Y float64
}

var (
	v1      = Vertex{1, 2}  // 类型为 Vertex
	v2      = Vertex{X: 1}  // Y: 0 被省略
	v3      = Vertex{}      // X: 0 Y: 0 被省略
	pointer = &Vertex{1, 2} //  类型为 *Vertex
)

func main() {
	fmt.Println(Vertex{1, 2})

	// 初始化结构体
	v := Vertex{1, 2}
	v.X = 4
	fmt.Println(v.X)

	// 结构体指针
	p := &v
	p.X = 1e9
	fmt.Println(v)

	fmt.Println(v1, pointer, v2, v3)
}
