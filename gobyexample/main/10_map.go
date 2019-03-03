package main

import "fmt"

func main() {
	// 创建
	m := make(map[string]int)

	// 初始化
	m["k1"] = 7
	m["k2"] = 8

	fmt.Println("map:", m)

	v1 := m["k1"]
	fmt.Println("v1:", v1)
	fmt.Println("len:", len(m))

	delete(m, "k2")
	fmt.Println("map:", m)

	_, prs := m["k2"]
	fmt.Println("prs:", prs)

	// 创建并初始化
	n := map[string]int{"foo": 1, "bar": 2}
	fmt.Println("map:", n)
}
