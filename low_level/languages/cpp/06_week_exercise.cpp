// #include <iostream>
// #include <thread>

// void funcion_hilo(int id) {
//     std::cout << "Hilo " << id << " ejecutándose..." << std::endl;
// }

// int main() {
//     std::thread hilo1(funcion_hilo, 1);
//     std::thread hilo2(funcion_hilo, 2);

//     hilo1.join();
//     hilo2.join();

//     std::cout << "Todos los hilos han terminado." << std::endl;

//     return 0;
// }

// #include <iostream>
// #include <thread>

// void tarea_larga() {
//     std::this_thread::sleep_for(std::chrono::seconds(2));
//     std::cout << "Tarea larga completada." << std::endl;
// }

// void tarea_corta() {
//     std::cout << "Tarea corta completada." << std::endl;
// }

// int main() {
//     std::thread hilo_largo(tarea_larga);
//     std::thread hilo_corto(tarea_corta);

//     hilo_largo.join();
//     hilo_corto.join();

//     std::cout << "Todas las tareas han terminado." << std::endl;

//     return 0;
// }

// #include <iostream>
// #include <thread>
// #include <mutex>

// std::mutex mtx;

// void funcion_critica() {
//     std::lock_guard<std::mutex> lock(mtx);
//     std::cout << "Sección crítica protegida por mutex." << std::endl;
// }

// int main() {
//     std::thread hilo1(funcion_critica);
//     std::thread hilo2(funcion_critica);

//     hilo1.join();
//     hilo2.join();

//     std::cout << "Ambos hilos han completado la sección crítica." << std::endl;

//     return 0;
// }
// #include <iostream>
// #include <thread>
// #include <mutex>
// #include <condition_variable>

// std::mutex mtx;
// std::condition_variable cv;
// bool condicion = false;

// void hilo_espera() {
//     std::unique_lock<std::mutex> lock(mtx);
//     cv.wait(lock, [] { return condicion; });
//     std::cout << "La condición se ha cumplido." << std::endl;
// }

// void hilo_notifica() {
//     std::this_thread::sleep_for(std::chrono::seconds(2));
//     {
//         std::lock_guard<std::mutex> lock(mtx);
//         condicion = true;
//     }
//     cv.notify_one();
// }

// int main() {
//     std::thread hilo1(hilo_espera);
//     std::thread hilo2(hilo_notifica);

//     hilo1.join();
//     hilo2.join();

//     return 0;
// }

// #include <iostream>
// #include <thread>
// #include <future>

// void funcion_promesa(std::promise<int>& prom) {
//     std::this_thread::sleep_for(std::chrono::seconds(2));
//     prom.set_value(42);
// }

// int main() {
//     std::promise<int> prom;
//     std::future<int> futuro = prom.get_future();

//     std::thread hilo(funcion_promesa, std::ref(prom));

//     std::cout << "Esperando el resultado..." << std::endl;
//     int resultado = futuro.get();
//     std::cout << "El resultado es: " << resultado << std::endl;

//     hilo.join();

//     return 0;
// }

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
