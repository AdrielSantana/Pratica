function rotateNumber(nums: number[], k: number): number[] {
  let i: number;
  let newNums: number[] = [];

  for (i = 0; i < nums.length; i++) {
    // O(n)
    let rotations: number = k > nums.length ? k % nums.length : k;

    let nextIndex: number = i + rotations;

    let placeIndex: number;

    if (nextIndex < nums.length) {
      placeIndex = nextIndex;
    } else {
      placeIndex = nextIndex - nums.length;
    }

    newNums[placeIndex] = nums[i];
  }
  return newNums;
}

console.log(rotateNumber([0, 1, 3, 4], 5));

function rotate(nums: number[], k: number): void {
  // without 0(1) extra-space
  let i: number;
  let numsCopy: number[] = [...nums];

  for (i = 0; i < nums.length; i++) {
    // O(n)
    let rotations: number = k > nums.length ? k % nums.length : k;

    let nextIndex: number = i + rotations;

    let placeIndex: number;

    if (nextIndex < nums.length) {
      placeIndex = nextIndex;
    } else {
      placeIndex = nextIndex - nums.length;
    }

    nums[placeIndex] = numsCopy[i];
  }
}
