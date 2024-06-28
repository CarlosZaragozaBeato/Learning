import pyautogui
import time

# Definir las coordenadas x e y del centro de la pantalla
screen_width, screen_height = pyautogui.size()
x, y = screen_width // 2, screen_height // 2

# Número de clics que quieres realizar
num_clicks = 1000  # Cambia este valor según tus necesidades

# Pausa breve antes de iniciar los clics para permitir al usuario preparar el puntero
print("El programa comenzará en 5 segundos. Prepárate.")
time.sleep(5)

print("Iniciando clics...")

# Realizar los clics
for i in range(num_clicks):
    pyautogui.click(x, y)

print("Clics completados.")
