package main

import "math"

func reverse(x int) int {
    var res int 
    var reverse int

    for x != 0 {
        res = x % 10
        reverse = reverse * 10 + res
        x /= 10
    }

    if reverse > math.MaxInt32 || reverse < math.MinInt32 {
        return 0
    }

    return reverse
}

func main() {
		println(reverse(123))
		println(reverse(-123))
		println(reverse(120))
		println(reverse(1534236469))
}