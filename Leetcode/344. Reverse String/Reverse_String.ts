function reverseString(s: string[]): void {
  let i: number = 0;
  let j: number = s.length - 1;

  while (i < j) {
    let temp: string;

    temp = s[i];
    s[i] = s[j];
    s[j] = temp;

    i++;
    j--;
  }

  console.log(s);
}

reverseString(["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l"]);
