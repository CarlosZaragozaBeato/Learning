fn longest<'a>(x: &'a str, y: &'a str) -> &'a str {
    if x.len() > y.len() {
        x
    } else {
        y
    }
}
fn main() {


    // OWNERSHIP
    // let x = String::from("Hello");
    // let y = x;
    // // println!("{}",x);
    // println!("{}", y);
    

    // Borrowing and References
    // let s = String::from("hello");
    // //Prestamo inmutable 
    // let r1 = &s;
    // let r2 = &s;
    // println!("{} y {}", r1, r2);
    //
    // // Prestamo muable 
    // let mut s2 = String::from("hello");
    // let r3 = &mut s2;
    // r3.push_str(", wold");
    // println!("{}", r3);

    
    // Lifetimes
//     let string1 = String::from("long string is long");
//     let string2 = String::from("xyz");
//     let result = longest(string1.as_str(), string2.as_str());
//     println!("La cadena más larga es {}", result);
}
