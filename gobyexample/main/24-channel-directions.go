package main

import "fmt"

func ping(pings chan<- string, msg string) {
	pings <- msg
}

// pings只允许输出，pongs只允许输入
func pong(pings <-chan string, pongs chan<- string) {
	msg := <-pings
	pongs <- msg
}

func main() {
	pings := make(chan string, 1)
	pongs := make(chan string, 1)

	ping(pings, "pass message")
	pong(pings, pongs)

	fmt.Println(<-pongs)
}
