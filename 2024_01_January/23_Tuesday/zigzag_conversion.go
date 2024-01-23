package main

func convert(s string, numRows int) string {
    if numRows <= 1 {
        return s
    }

    v := make([]string, numRows)
    var res string

    j, dir := 0, -1

    for i := 0; i < len(s); i++ {
        if j == numRows - 1 || j == 0 {
            dir *= -1
        }

        v[j] += string(s[i])

        if dir == 1 {
            j++
        } else {
            j--
        }
    }

    for _, x := range v {
        res += x
    }

    return res
} 

func main() {
		println(convert("PAYPALISHIRING", 3))
		println(convert("PAYPALISHIRING", 4))
}