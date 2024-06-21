//go:build go1.9
// +build go1.9

package main

import (
	"fmt"
	"go/build"
	"log"
)

func main() {
	fmt.Println("go version", build.Version)
	fmt.Println("go env", build.Default)

	pkgs, err := build.ImportDir(".", 0)
	if err != nil {
		log.Fatal(err)
	}
	for _, pkg := range pkgs.Imports {
		fmt.Println(pkg)
	}
	for _, f := range pkgs.GoFiles {
		fmt.Println(f)
	}
	for _, f := range pkgs.CgoFiles {
		fmt.Println(f)
	}
	for _, f := range pkgs.TestGoFiles {
		fmt.Println(f)
	}
}
