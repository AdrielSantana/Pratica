function twoSum(numbers: number[], target: number): number[] | void {
  let i: number = 0;
  let j: number = numbers.length - 1;

  while (i < j) {
    if (numbers[i] + numbers[j] == target) {
      return [i + 1, j + 1];
    } else if (numbers[i] + numbers[j] > target) {
      j--;
    } else {
      i++;
    }
  }
}

console.log(twoSum([2, 7, 11, 15], 18));
