#include <windows.h>
#include <iostream>

// Función para realizar un clic izquierdo en las coordenadas especificadas
void clickAt(int x, int y) {
    // Mover el cursor a la posición (x, y)
    SetCursorPos(x, y);

    // Realizar un clic izquierdo
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
}

int main() {
    // Obtener las dimensiones de la pantalla
    int screenWidth = GetSystemMetrics(SM_CXSCREEN);
    int screenHeight = GetSystemMetrics(SM_CYSCREEN);

    // Calcular el centro de la pantalla
    int x = screenWidth / 2;
    int y = screenHeight / 2;

    // Número de clics que quieres realizar
    int numClicks = 50000000;  // Cambia este valor según tus necesidades

    // Pausa breve antes de iniciar los clics para permitir al usuario preparar el puntero
    std::cout << "El programa comenzará en 5 segundos. Prepárate." << std::endl;
    Sleep(5000);

    std::cout << "Iniciando clics..." << std::endl;

    // Realizar los clics
    for (int i = 0; i < numClicks; ++i) {
        clickAt(x, y);
        Sleep(1);
    }

    std::cout << "Clics completados." << std::endl;

    return 0;
}
