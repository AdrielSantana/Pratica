function searchInsert(nums: number[], target: number): number {
  let result: number = 0;

  let min: number = 0;
  let max: number = nums.length - 1;
  let mid: number;

  while (min <= max) { // O(log n)
    mid = Math.ceil((min + max) / 2);

    if (target == nums[mid]) {
      return mid;
    }

    target > nums[mid] ? (min = mid + 1) : (max = mid - 1);

    if (nums[mid] > target) {
      result = mid;
    } else {
      result = mid + 1;
    }
  }

  return result;
}

console.log(searchInsert([1, 3, 5, 6, 9], 10));
