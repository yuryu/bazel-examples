package main

import "fmt"

func hello() string {
	return "Hello, world"
}

func main() {
	fmt.Printf(hello() + "\n")
}
