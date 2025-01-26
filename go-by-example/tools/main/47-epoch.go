package main

import (
	"fmt"
	"time"
)

func main() {
	now := time.Now()

	nanos := now.UnixNano()
	millis := nanos / 1000000
	secs := now.Unix()

	fmt.Println(now)
	fmt.Println(secs)
	fmt.Println(millis)
	fmt.Println(nanos)

	fmt.Println(time.Unix(secs, 0))
	fmt.Println(time.Unix(0, nanos))
}
