#!/bin/bash
for source_file in *.c; do
	gcc -Wall -pedantic -Werror -Wextra -c -fPIC "$source_file" -o "${source_file%.c}.o"
done


gcc -shared -o liball.so *.o

rm *.o

echo "Dynamic library liball.so has been created."

