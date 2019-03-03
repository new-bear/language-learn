package main

import "fmt"

type person struct {
	name string
	age  int
}

func main() {
	fmt.Println(person{"Alice", 20})
	fmt.Println(person{name: "Bob", age: 30})
	fmt.Println(person{name: "Charles"})

	s := person{name: "David", age: 40}
	fmt.Println(s.name)

	sp := &s
	fmt.Println(sp.age)

	sp.age = 41
	fmt.Println(s.age)
}
