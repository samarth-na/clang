function pattern() {
	const mainarr = [1, 2, 3, 4, 5];

	let chars = [];
	mainarr.forEach((value) => {
		let line = "";
		for (let i = 0; i < value; i++) {
			line += "X";
		}

		console.log(line);
		chars.push(line);
	});
}
pattern();
