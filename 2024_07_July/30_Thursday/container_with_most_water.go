func maxArea(height []int) int {
    max_area, left, right := 0, 0, len(height) - 1

    for left < right {
        max_area = max(max_area, (right - left) * min(height[left], height[right]))

        if height[left] < height[right] {
            left++
        } else {
            right--
        }
    }

    return max_area
}