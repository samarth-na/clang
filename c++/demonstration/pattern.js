function pattern() {
  const mainarr = [1, 2, 3, 4, 5];
  mainarr.forEach((value) => {
    let line = "";
    for (let i = 0; i < value; i++) {
      line += "x";
    }
    console.log(line);
  });
}
pattern();
