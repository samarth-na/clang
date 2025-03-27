function patternn() {
	const mainarr = [1, 2, 3, 4, 5];

	let chars: string[] = [];
	mainarr.forEach((value) => {
		let line: string = "";
		for (let i = 0; i < value; i++) {
			line += "X";
		}
		console.log(line);
		//line += "\n";
	});
}
patternn();
