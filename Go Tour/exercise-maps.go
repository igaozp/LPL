package main

import (
	"golang.org/x/tour/wc"
	"strings"
)

func WorldCount(s string) map[string]int {
	list := strings.Fields(s)
	mapper := make(map[string]int, len(list))

	for _, v := range list {
		mapper[v]++
	}

	return mapper
}

func main() {
	wc.Test(WorldCount)
}
