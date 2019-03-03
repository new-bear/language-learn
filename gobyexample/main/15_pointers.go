package main

import "fmt"

func postval(ival int) {
	ival = 0
}

func postptr(iptr *int) {
	*iptr = 0
}

func main() {
	i := 1
	fmt.Println("init:", i)

	postval(i)
	fmt.Println("postval:", i)

	postptr(&i)
	fmt.Println("postptr:", i)

	fmt.Println("pointer:", &i)
}
