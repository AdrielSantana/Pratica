var solution = function (isBadVersion: any) {
  return function (n: number): number {
    let min: number = 0;
    let max: number = n;
    let mid;

    while (min <= max) { // O(log n)
      mid = Math.floor((min + max) / 2);

      let req: boolean = isBadVersion(mid);

      if (req == isBadVersion(1) && req == true) {
        return 1;
      }

      if (req == true && isBadVersion(mid - 1) == false) {
        return mid;
      }

      if (req == false) {
        min = mid + 1;
      } else {
        max = mid - 1;
      }
    }
    return mid;
  };
};
