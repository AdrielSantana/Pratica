function moveZeroes(nums: number[]): void {
  let i: number = 0;
  let j: number = 0;

  while (i < nums.length) {
    //O(n) complexity
    //O(1) space
    if (nums[i] != 0) {
      let temp: number = nums[i];
      nums[i] = nums[j];
      nums[j] = temp;
      j++;
    }
    i++;
  }

  console.log(nums);
}

moveZeroes([1, 2]);
