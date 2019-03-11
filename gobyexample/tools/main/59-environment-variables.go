package main

import (
	"fmt"
	"os"
	"strings"
)

func main() {
	//使用 os.Setenv 来设置一个键值队。使用 os.Getenv获取一个键对应的值。如果键不存在，将会返回一个空字符串。
	os.Setenv("FOO", "1")
	fmt.Println("FOO:", os.Getenv("FOO"))

	//使用 os.Environ 来列出所有环境变量键值队。
	// 这个函数会返回一个 KEY=value 形式的字符串切片。
	// 你可以使用strings.Split 来得到键和值。这里我们打印所有的键。
	for _, e := range os.Environ() {
		pair := strings.Split(e, "=")
		fmt.Println(pair[0])
	}
}
