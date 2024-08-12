let char = "hello world"
let len = char.length;
console.log(len)
    let list = [
                [12, 23, 34],
                [45, 56, 67],
                [78, 89, 90]
               ]
    console.log(list[1][1])
    console.log(list)  
const data = "Manchester,London,Liverpool,Birmingham,Leeds,Carlisle";
const city = data.split(",");
console.log(city)

let numarraay = [5,4,3,2,1,0,7]

for (let num of numarraay) {
    let index = numarraay.indexOf(num)
        
    console.log("*".repeat(num)+"*".repeat(index))
}
