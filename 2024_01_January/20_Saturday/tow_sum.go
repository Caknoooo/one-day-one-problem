func twoSum(nums []int, target int) []int {
    numMap := make(map[int]int)
    size := len(nums)

    for i := 0; i < size; i++ {
        numMap[nums[i]] = i
    }

    for i := 0; i < size; i++ {
        cmpl := target - nums[i]
        if idx, found := numMap[cmpl]; found && idx != i {
            return []int{i, idx}
        }
    }

    return []int{}
}