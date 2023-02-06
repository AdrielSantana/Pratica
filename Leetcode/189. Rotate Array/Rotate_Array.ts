function rotateNumber(nums: number[], k: number): number[] {
  let i: number;
  let newNums: number[] = [];
  let lastIndex: number = nums.length - 1;

  for (i = 0; i < nums.length; i++) {
    // O(n)
    let rotations: number = k > nums.length ? k % nums.length : k;

    let nextIndex: number = i + rotations;

    let placeIndex: number;

    if (nextIndex <= lastIndex) {
      placeIndex = nextIndex;
    } else {
      placeIndex = nextIndex - lastIndex - 1;
    }

    newNums[placeIndex] = nums[i];
  }
  return newNums;
}

console.log(rotateNumber([0, 1, 3, 4], 5));

function rotate(nums: number[], k: number): void {
  // without 0(1) extra-space
  let i: number;
  let lastIndex: number = nums.length - 1;
  let numsCopy: number[] = [...nums];

  for (i = 0; i < nums.length; i++) {
    // O(n)
    let rotations: number = k > nums.length ? k % nums.length : k;

    let nextIndex: number = i + rotations;

    let placeIndex: number;

    if (nextIndex <= lastIndex) {
      placeIndex = nextIndex;
    } else {
      placeIndex = nextIndex - lastIndex - 1;
    }

    nums[placeIndex] = numsCopy[i];
  }
}
