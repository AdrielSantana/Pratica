function sortedSquares(nums: number[]): number[] {
  let min: number = 0;
  let max: number = nums.length - 1;

  let result: number[] = [];

  while (min <= max) {
    // O(n)
    if (nums[min] < 0) {
      if (Math.abs(nums[min]) >= nums[max]) {
        result.push(nums[min] ** 2); // 0(1)
        min++;
      } else {
        result.push(nums[max] ** 2); // 0(1)
        max--;
      }
    } else {
      result.push(nums[max] ** 2); // 0(1)
      max--;
    }
  }

  result.reverse(); // O(n)

  return result;
}

console.log(sortedSquares([-4, -1, 0, 3, 10]));
