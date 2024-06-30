fn main() {

    // // 01 HELLO WORLD
    // println!("Hello, world!");
    // println!("Goodbye, World!!");
    //
    // println!("----------------------------");
    //
    // // 02 VARIABLES Y MUTABILIDAD
    // let x = 5;
    // println!("El valor de x es: {}",x);
    //
    // let mut y = 10;
    // println!("El valor de y es: {}",y);
    //
    // y = 15;
    // println!("El valor de y es: {}", y);
    //
    // println!("----------------------------");
    // // 03 TIPOS DE DATOS BASICOS
    //
    // //ENTEROS 
    // let a:i32=10;
    // let b:u32=20;
    //
    // // FLOTANTES 
    // let c:f32 = 3.14;
    // let c:f64 = 3.145521455214;
    //
    // // BOOLEANOS 
    // let e:bool = true;
    // let f:bool = false;
    //
    // // CHARACTERES 
    // let g:char = 'A';
    // let h:char = 'B';
    //
    // // TUPLAS
    // let tup: (i32,f64,u8) = (800,6.4,1);
    // let (x, y, z) = tup;
    // println!("El valor de y es: {}", y);
    //
    // // ARREGLOS 
    // let arr: [i32; 3] = [1,2,3];
    // println!("El primer elemento es: {}", arr[0]);
    //


    // EJERCICIO VARIABLES 
    // let x = 5;
    // println!("El valor de x es: {}", x);
    //
    // let mut y = 10;
    // println!("El valor de y es: {}", y);
    // y += 150;
    // println!("El nuevo valor de y es: {}", y);
    //
    // let a:i32 = 10;
    // let b:u32 = 20;
    // let c:f32 = 2.1;
    // let d:f64 = 2.256987;
    // let e:bool=true;
    // let f: bool = false;
    // let g:char = 'A';
    // let h: char = 'B';
    //
    // println!("a: {}, b: {}, c: {}, d: {}, e: {}, f: {}, g: {}, h: {}", a, b, c, d, e, f, g, h);
    //
    // let tup: (i32, f64, u8) = (500, 6.4, 1);
    // let (_z, _w, _y) = tup;
    // println!("El valor de y es: {}", _y);
    //
    // let arr: [i32;4] = [1,2,3,4];
    // println!("Los valores del array son: {}", arr[0]);



     // Operadores básicos y control de flujo (if, else, loop, while, for)
    
    // Operadores aritméticos
    // let sum = 5 + 10;
    // let difference = 10.5 - 4.3;
    // let product = 4 * 30;
    // let quotient = 56.7 / 32.2;
    // let remainder = 43 % 5;
    // println!("Suma: {}, Diferencia: {}, Producto: {}, Cociente: {}, Resto: {}", sum, difference, product, quotient, remainder);
    //
    // // Operadores de comparación y lógicos
    // let is_equal = 5 == 5;
    // let is_not_equal = 5 != 6;
    // let is_greater = 10 > 5;
    // let is_less = 5 < 10;
    // let is_greater_or_equal = 5 >= 5;
    // let is_less_or_equal = 5 <= 5;
    // let and = true && false;
    // let or = true || false;
    // let not = !true;
    // println!("is_equal: {}, is_not_equal: {}, is_greater: {}, is_less: {}, is_greater_or_equal: {}, is_less_or_equal: {}", is_equal, is_not_equal, is_greater, is_less, is_greater_or_equal, is_less_or_equal);
    // println!("and: {}, or: {}, not: {}", and, or, not);    // IF Y ELSE 
    //
    //
    // let number = 7;
    // if number < 5{
    //     println!("EL NUMERO ES MAYOR DE 5");
    // }else if number == 5{
    //     println!("EL NUMERO ES IGUAL A 5");
    // }else{
    //     println!("EL NUMERO ES MENOR A 5");
    // }
    //
    // // loop
    // let mut count = 0;
    // loop {
    //     count += 1;
    //     if count == 5{
    //         break;
    //     }
    //     println!("DENTRO DE LOOP: {}", count);
    // }
    // println!("EL LOOP SE ROMPIO EN {}", count);
    //
    //
    // // while
    // let mut number_while = 3;
    // while number_while != 0{
    //     println!("EL NUMERO ACTUAL: WHILE {}", number_while);
    //     number_while -= 1;
    // }
    //
    //
    // // for loop 
    // let a:[i32; 10] = [1,2,3,4,5,6,7,8,9,10];
    //
    // for element in a.iter(){
    //     println!("EL VALOR ES : {}", element);
    // }
    //
    // for number_for in 1..4{
    //     println!("EL NUMERO ES : {}", number_for);
    // }
    //

}
