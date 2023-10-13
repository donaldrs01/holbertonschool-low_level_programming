#!/bin/bash

c_files=$(ls *.c 2>/dev/null)

if [ -z "$c_files" ]; then
	echo "No .c files found in the current directory."
	exit 1
fi

for file in $c_files; do
	object_file="${file%.c}.o"
	gcc -c "$file" -o "$object_file"
done

ar rcs liball.a *.o

rm -f *.o

echo "Static library liball.a has been created."
