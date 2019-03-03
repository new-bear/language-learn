package main

import (
	"fmt"
	"math"
)

type geometry interface {
	area() float64
	perimeter() float64
}

type rectangle struct {
	width, height float64
}

type circle struct {
	radius float64
}

func (r rectangle) area() float64 {
	return r.width * r.height
}

func (r rectangle) perimeter() float64 {
	return 2*r.width + 2*r.height
}

func (r circle) area() float64 {
	return math.Pi * r.radius * r.radius
}

func (r circle) perimeter() float64 {
	return 2 * math.Pi * r.radius
}

func measure(g geometry) {
	fmt.Println(g)
	fmt.Println(g.area())
	fmt.Println(g.perimeter())
}

func main() {
	r := rectangle{3, 4}
	c := circle{5}

	measure(r)
	measure(c)
}
