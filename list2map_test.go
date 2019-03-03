package learngo

import (
	"fmt"
	"testing"
)

func MGetBookPackInfo(bookIdList []int64) ([]map[string]string, error) {
	data1 := map[string]string{"foo": "json", "bar": "json string"}
	data2 := map[string]string{"foo": "json", "bar": "json string"}

	data := make([]map[string]string, 3)
	data[0] = data1
	data[1] = data2

	return data, nil
}

func TestList2map(t *testing.T) {
	bookIdList := make([]int64, 3)
	bookIdList[0] = 1
	bookIdList[1] = 2

	maps, _ := MGetBookPackInfo(bookIdList)

	fmt.Println("map:", maps)
}
