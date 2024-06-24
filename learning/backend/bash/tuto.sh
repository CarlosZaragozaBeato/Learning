#!/bin/bash

# Hola echo "message"
# echo "Hola"

# Variables
# nombre="Mundo"
# echo "Hola, $nombre"

# Condicionales
# numero=10
#
# if [$numero -gt 5]; then
# 	echo "El numero $numero es mayor que 5"
# else
# 	echo "El numero $numero es menor que 5"
# fi

# Bucles
## FORN
# for i in {1..5}; do
# 	echo "Numero ${i}"
# done
## WHILE
# contador=1
# while [ $contador -le 5 ]; do
# 	echo "Contador: $contador"
# 	contador=$((contador + 1))
# done

# funciones
# mi_funcion() {
# 	echo "Hola desde funcion"
# }
# mi_funcion

# Manipulacion de archivos
# crear_eliminar() {
# 	touch $1
# 	rm $1
# }
# crear_eliminar "test.txt"

# listar
# ls ./

# Redireccion y pipes
# Redireccion
# echo "Esto se guarda en un archivo de texto" >archivos.txt

# Pipes
# cat archivos.txt | grep "archivo de texto"

# Validacion
# if [ -z "$1" ]; then
# 	echo "Uso. $0 <nombre>"
# 	exit 1
# fi
#
# nombre="$1"
# echo "Hola, $nombre"

# mkdir /directorio/inexistente 2>/dev/null
# if [ $? -ne 0 ]; then
# 	echo "Error: No se puede crear el directorio"
# 	exit 1
# fi

# Arrays
# frutas=("manzana", "banana", "cereza")
# for fruta in "${frutas[@]}"; do
# 	echo "Me gusta la $fruta"
# done

# Encuenta todas las lineas que contienen "error" y muestra la tercera columna
# echo "error errror errorr error" >archivo.log
# grep "error" archivo.log | awk '{print $3}'
# rm archivo.log

# while getopts ":a:b:" opcion; do
# 	case $opcion in
# 	a) valor_a=$OPTARG ;;
# 	b) valor_b=$OPTARG ;;
# 	\\?) echo "Opcion invalida: - $OPTARG" ;;
# 	esac
# done
#
# echo "Valor de -a: $valor_a"
# echo "Valor de -b: $valor_b"

# cat <<EOF
# Este es un bloque de texto
# que se imprime en la salida estándar.
# EOF

# sleep 10 &
# PID=$!
# echo "El comando se esta ejecutando en segundo plano conPID: $PID"
# wait $PID
# echo "El comando ha terminado"
