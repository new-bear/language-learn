package main

import (
	"fmt"
	"time"
)

func worker(doing chan bool, done chan bool) {
	fmt.Println("working...")

	doing <- true
	time.Sleep(1 * time.Second)
	fmt.Println("doing")

	done <- true
	time.Sleep(1 * time.Second)
	fmt.Println("done")
}

func main() {
	doing := make(chan bool, 1)
	done := make(chan bool, 1)
	go worker(doing, done)
	<-doing
	<-done
}
