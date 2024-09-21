function pattern() {
	const mainarr = [1, 2, 3, 4, 5];

	let chars = [];
	mainarr.forEach((value) => {
		let line = "";
		for (let i = 0; i < value; i++) {
			line += "X";
		}
		chars.push(line);
	});

	console.log(chars);
	let newchars = "";
	chars.forEach((element) => {
		newchars += element + "\n";
	});
	console.log(newchars);
}
pattern();

let message = "Hello, Samarth!\nWelcome to the site.\nEnjoy your stay!";
console.log(message);
