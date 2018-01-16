package main

import (
	"math"
	"fmt"
)

type Point struct {
	X, Y float64
}

func (v *Point) Scale(f float64) {
	v.X = v.X * f
	v.Y = v.Y * f
}

func (v *Point) Abs() float64 {
	return math.Sqrt(v.X*v.X + v.Y*v.Y)
}

func main() {
	p := &Point{3, 4}
	fmt.Printf("Before scaling: %+v, Abs: %v\n", p, p.Abs())
	p.Scale(5)
	fmt.Printf("After scaling: %+v, Abs: %v\n", p, p.Abs())
}
