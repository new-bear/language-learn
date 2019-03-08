package main

import (
	"fmt"
	"runtime"
	"sync/atomic"
	"time"
)

func main() {
	var ops uint64 = 0

	for i := 0; i < 50; i++ {
		go func() {
			for {
				atomic.AddUint64(&ops, 1)

				opsFinal := atomic.LoadUint64(&ops)
				fmt.Println("ops", opsFinal)

				runtime.Gosched()
			}
		}()
	}

	time.Sleep(time.Microsecond * 10)
}
