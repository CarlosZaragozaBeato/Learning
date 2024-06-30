mod saludo;
mod matematicas;
use rand::Rng;


fn main() {
    saludo::decir_hola("Carlos");

    let resultado = matematicas::sumar(5, 10);
    println!("La suma de 5 y 10 es: {}", resultado);


    let mut rng = rand::thread_rng();
    let n: u32 = rng.gen_range(1..101);
    println!("Número aleatorio: {}", n);
}
