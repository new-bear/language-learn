package main

import "fmt"

// 普通函数
func plus(a int, b int) int {
	return a + b
}

// 多返回值函数
func vals(a int, b int) (int, int, int) {
	return a, b, a + b
}

// 变参函数
func sum(nums ...int) {
	fmt.Print(nums, " ")
	total := 0

	for _, num := range nums {
		total += num
	}

	fmt.Println(total)
}

func main() {
	res := plus(1, 2)
	fmt.Println(res)

	a, b, c := vals(1, 2)
	fmt.Printf("%d + %d = %d \n", a, b, c)

	_, _, result := vals(1, 2)
	fmt.Println(result)

	sum(1, 2)
	sum(1, 2, 3)
	nums := []int{1, 2, 3, 4}
	sum(nums...)
}
