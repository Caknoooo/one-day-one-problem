package main

func romanToInt(s string) int {
    maps := make(map[byte]int)
    res := 0

    maps['I'] = 1
    maps['V'] = 5
    maps['X'] = 10
    maps['L'] = 50
    maps['C'] = 100
    maps['D'] = 500
    maps['M'] = 1000

    for i := 0; i < len(s); i++ {
        if i < len(s) - 1 && maps[s[i]] < maps[s[i+1]] {
            res -= maps[s[i]]
        } else {
            res += maps[s[i]]
        }
    }

    return res 
}

func main() {
		println(romanToInt("III"))
		println(romanToInt("IV"))
		println(romanToInt("IX"))
		println(romanToInt("LVIII"))
		println(romanToInt("MCMXCIV"))
}