package main

import "fmt"

func main() {
	mainarr := []int{1, 2, 3, 4, 5}
	for _, value := range mainarr {
		for i := 1; i <= value; i++ {
			fmt.Print("x")
		}
		fmt.Print("\n")
	}
}
