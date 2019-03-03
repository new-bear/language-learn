package main

import (
	"fmt"
	"time"
)

func main() {
	messages := make(chan string)

	go func() {
		fmt.Println("1")
		messages <- "ping"
		time.Sleep(3 * time.Second)
		fmt.Println("2")
	}()

	msg := <-messages
	fmt.Println(msg)
}
