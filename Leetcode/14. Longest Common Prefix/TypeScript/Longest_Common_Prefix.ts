function longestCommonPrefix(strs: string[]): string {
  let wordi: number = 0;
  let letteri: number = 0;
  let prefix: string = "";

  while (letteri < (strs[wordi].length - 1) || wordi < strs.length - 1) {
    let letter1: string = strs[wordi][letteri];
    let letter2: string = strs[wordi][letteri];

    if (wordi == strs.length - 1 && letter1) {
      prefix += letter1;
      letteri++;
    }

    if (letter1 != letter2) {
      break;
    } else {
      wordi++;
    }
  }

  return prefix;
}

console.log(longestCommonPrefix(["flower", "flow", "flight"]));