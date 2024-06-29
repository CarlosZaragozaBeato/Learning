// ### Semana 6: Programación Concurrente
// - **Día 36**: Introducción a la concurrencia.
// - **Día 37**: Hilos en C++ (std::thread).
// - **Día 38**: Sincronización (mutex, lock_guard).
// - **Día 39**: Condiciones y variables de condición.
// - **Día 40**: Futuro y promesas.
// - **Día 41**: Atomicidad.
// - **Día 42**: Repaso y ejercicios prácticos.

// Día 36: Introducción a la concurrencia.
// #include <iostream>
// #include <thread>
// #include <mutex>

// std::mutex mtx; // Mutex para proteger el recurso compartido

// int contador = 0; // Recurso compartido

// // Función que incrementa el contador de manera segura
// void incrementar() {
//     std::lock_guard<std::mutex> lock(mtx); // Lock para proteger la sección crítica
//     contador++;
// }

// int main() {
//     std::thread hilos[5];

//     // Crear 5 hilos que incrementan el contador
//     for (int i = 0; i < 5; ++i) {
//         hilos[i] = std::thread(incrementar);
//     }

//     // Esperar a que todos los hilos terminen
//     for (int i = 0; i < 5; ++i) {
//         hilos[i].join();
//     }

//     std::cout << "El valor final del contador es: " << contador << std::endl;

//     return 0;
// }

// Día 37: Hilos en C++ (std::thread).
// #include <iostream>
// #include <thread> // Para std::thread
// #include <chrono> // Para std::chrono

// // Función que será ejecutada por el hilo
// void tarea(int id)
// {
//     std::cout << "Hilo " << id << " iniciado" << std::endl;
//     std::this_thread::sleep_for(std::chrono::seconds(1)); // Simular trabajo
//     std::cout << "Hilo " << id << " terminado" << std::endl;
// }

// int main()
// {
//     std::thread hilo1(tarea, 1); // Crear un hilo que ejecuta la función tarea con el argumento 1
//     std::thread hilo2(tarea, 2); // Crear otro hilo que ejecuta la función tarea con el argumento 2

//     // Esperar a que los hilos terminen
//     hilo1.join();
//     hilo2.join();

//     std::cout << "Programa principal finalizado" << std::endl;

//     return 0;
// }

// Día 38: Sincronización (mutex, lock_guard).
// #include <iostream>
// #include <thread>
// #include <mutex>

// std::mutex mtx; // Mutex global para proteger el recurso compartido

// int contador = 0; // Recurso compartido

// // Función que incrementa el contador de manera segura usando std::lock_guard
// void incrementar()
// {
//     std::lock_guard<std::mutex> lock(mtx); // std::lock_guard adquiere el mutex automáticamente
//     contador++;
//     // El mutex se libera automáticamente al salir del ámbito de std::lock_guard
// }

// int main()
// {
//     std::thread hilos[5];

//     // Crear 5 hilos que incrementan el contador
//     for (int i = 0; i < 5; ++i)
//     {
//         hilos[i] = std::thread(incrementar);
//     }

//     // Esperar a que todos los hilos terminen
//     for (int i = 0; i < 5; ++i)
//     {
//         hilos[i].join();
//     }

//     std::cout << "El valor final del contador es: " << contador << std::endl;

//     return 0;
// }

// Día 39: Condiciones y variables de condición.
// #include <iostream>
// #include <thread>
// #include <mutex>
// #include <condition_variable>

// std::mutex mtx;
// std::condition_variable cv;
// bool condicion = false; // Condición compartida

// // Función que espera a que se cumpla la condición
// void funcion_hilo() {
//     std::unique_lock<std::mutex> lock(mtx);
//     std::cout << "Hilo esperando..." << std::endl;
//     cv.wait(lock, []{ return condicion; }); // Espera hasta que condicion sea true
//     std::cout << "Hilo despierto!" << std::endl;
// }

// int main() {
//     std::thread hilo(funcion_hilo);

//     // Simula algún trabajo...
//     std::this_thread::sleep_for(std::chrono::seconds(2));

//     {
//         std::lock_guard<std::mutex> lock(mtx);
//         std::cout << "Notificando cambio de condición..." << std::endl;
//         condicion = true;
//     }

//     cv.notify_one(); // Notifica a un hilo que espera

//     hilo.join();

//     return 0;
// }

// Día 40: Futuro y promesas.
// #include <iostream>
// #include <thread>
// #include <future>

// // Función que realiza un cálculo y lo almacena en una promesa
// void calcular_valor(std::promise<int>& promesa) {
//     // Simular un cálculo
//     std::this_thread::sleep_for(std::chrono::seconds(2));
//     int resultado = 42;
//     promesa.set_value(resultado); // Establecer el valor calculado en la promesa
// }

// int main() {
//     std::promise<int> promesa;
//     std::future<int> futuro = promesa.get_future();

//     // Crear un hilo para realizar el cálculo
//     std::thread hilo(calcular_valor, std::ref(promesa));

//     // Hacer otras operaciones mientras se calcula el valor

//     // Obtener el resultado cuando esté disponible
//     int resultado = futuro.get(); // Bloquea hasta que se obtenga el resultado

//     std::cout << "El resultado es: " << resultado << std::endl;

//     hilo.join();

//     return 0;
// }

// Día 41: Atomicidad.
// #include <iostream>
// #include <thread>
// #include <atomic>

// std::atomic<int> contador(0);

// void incrementar_contador() {
//     for (int i = 0; i < 10000; ++i) {
//         contador++; // Incremento atómico
//     }
// }

// int main() {
//     std::thread hilo1(incrementar_contador);
//     std::thread hilo2(incrementar_contador);

//     hilo1.join();
//     hilo2.join();

//     std::cout << "Valor final del contador: " << contador << std::endl;

//     return 0;
// }
