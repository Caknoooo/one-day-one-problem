package main

func lengthOfLongestSubstring(s string) int {
    n := len(s)
    maxLength := 0
    charSet := make(map[byte]struct{})
    left := 0

    for right := 0; right < n; right++ {
        if _, found := charSet[s[right]]; !found {
            charSet[s[right]] = struct{}{}
            maxLength = max(maxLength, right - left + 1)
        } else {
            for found := true; found; {
                delete(charSet, s[left])
                left++
                _, found = charSet[s[right]]
            }
            charSet[s[right]] = struct{}{}
        }
    }

    return maxLength
}

func main() {
		println(lengthOfLongestSubstring("abcabcbb"))
		println(lengthOfLongestSubstring("bbbb"))
		println(lengthOfLongestSubstring("pwwkew"))
}
