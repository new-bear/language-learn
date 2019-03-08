package main

import (
	"fmt"
)

func main() {
	// 标准定义
	var a string = "abc"
	fmt.Println(a)

	// 声明 1 个或者多个变量
	var b, c int = 1, 2
	fmt.Println(b, c)

	// 自动推断已经初始化的变量类型
	var d = true
	fmt.Println(d)

	// 根据变量类型自动初始化值
	var e int
	fmt.Println(e)

	// 等于var f string = "short"
	f := "abc"
	fmt.Println(f)
}
