function search(nums: number[], target: number): number {
  let result: number = -1;

  let min: number = 0;
  let max: number = nums.length - 1;
  let mid: number;

  while (min <= max) { //O(log n)
    mid = Math.floor((min + max) / 2);

    if (target == nums[mid]) {
      return mid;
    }

    target > nums[mid] ? (min = mid + 1) : (max = mid - 1);
  }

  return result;
}

console.log("Indice: " + search([-1, 0, 3, 5, 9, 12], 3));
