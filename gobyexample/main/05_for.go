package main

import "fmt"

func main() {
	i := 1

	//方式1
	for i <= 3 {
		fmt.Println(i)
		i++
	}

	//方式2
	for j := 0; j < 3; j++ {
		fmt.Println(j)
	}

	//方式3
	for {
		fmt.Println("loop")
		break
	}
}
