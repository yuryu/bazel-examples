package main

import "testing"

func TestHello(t *testing.T) {
	expected := "Hello, world"
	got := hello()
	if expected != got {
		t.Errorf("hello FAILED, expected %s but got %s", expected, got)
	}
}
