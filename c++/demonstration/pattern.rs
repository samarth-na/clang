fn main() {
    let mainarr = vec![1, 2, 3, 4, 5]; // Using a vector instead of an array for dynamic size

    for &value in &mainarr {
        // Destructure value from reference to avoid moving out of borrowed content
        for _ in 0..value {
            // Range from 0 to value - 1
            print!("x"); // Rust uses print! instead of fmt.Print
        }
        println!(); // Rust uses println! for newlines
    }
}
