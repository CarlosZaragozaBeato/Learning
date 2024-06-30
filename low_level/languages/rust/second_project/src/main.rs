fn saludar(nombre: &str) {
    println!("Hola, {}!", nombre);
}

fn sumar(a: i32, b: i32) -> i32 {
    a + b
}

fn imprimir_resultado(a:i32, b:i32) {
    let resultado = a + b ;
    println!("EL RESULTADO ES : {}", resultado);
}

fn cuadrado(x:i32) -> i32{
    x * x
}

fn imprimir_cuadrado(x:i32){
    let resultado = cuadrado(x);
    println!("El cuadrado de x: {} es {}", x, resultado);
}

fn aplicar_funcion(f:fn (i32) -> i32, valor:i32) -> i32{
    f(valor)
}
fn doblar(x:i32)->i32 {
    x * 2
}



fn main() {
    saludar("carlao");
    let resultado = sumar(5,7);
    println!("LA SUMA DE  5 Y 7 ES : {}", resultado);

    imprimir_resultado(10,20);

    // funciones anonimas
    let multiplicar = |a:i32, b:i32| a * b ;
    let producto = multiplicar(3, 4);
    println!("El producto  de 3 y 4 es {}", producto);
    
    imprimir_cuadrado(4);
    
    let resultado_v2 = aplicar_funcion(doblar, 5);
    println!("EL RESULTADO ES : {}", resultado_v2);


}
