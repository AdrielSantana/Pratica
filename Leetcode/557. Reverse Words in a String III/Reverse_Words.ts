function reverseWords(s: string): string {
  let result: string = "";

  let i: number = 0;
  let j: number = 0;

  while (j <= s.length) {
    if (s[i] != " ") {
      j++;
    } else {
      i++;
    }

    if (s[j] == " " || j == s.length) {
      let r: number = j - 1;
      while (i <= r) {
        result += s[r];
        r--;
      }
      i = j;
      j++;
      if (j <= s.length) {
        result += " ";
      }
    }
  }

  return result;
}

console.log(reverseWords("Cargas Dágua!"));
