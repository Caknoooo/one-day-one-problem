package main

import "sort"

func findMedianSortedArrays(nums1 []int, nums2 []int) float64 {
	mergeArr := append(nums1, nums2...)
	sz := len(mergeArr)
	sort.Ints(mergeArr)

	if sz%2 != 0 {
		return float64(mergeArr[sz/2])
	}

	return float64(mergeArr[(sz-1)/2]+mergeArr[sz/2]) / 2.0
}

func main() {
	println(findMedianSortedArrays([]int{1, 3}, []int{2}))
	println(findMedianSortedArrays([]int{1, 2}, []int{3, 4}))
}