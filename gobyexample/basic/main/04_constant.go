package main

import (
	"fmt"
	"math"
)

/*
	Go 支持字符、字符串、布尔和数值 常量 。
	const 用于声明一个常量。const 语句可以出现在任何 var 语句可以出现的地方
*/

const str string = "const string"

func main() {
	fmt.Println(str)

	// 数值型常量是没有确定的类型的，直到它们被给定了一个类型，比如说一次显示的类型转化。
	const n = 5000000

	const d = 3e20 / n
	fmt.Println(d)

	fmt.Println(math.Sin(n))
}
