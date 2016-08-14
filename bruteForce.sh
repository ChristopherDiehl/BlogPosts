#!/bin/bash
	for i in {1..25}
	do
		gcc -Wall decryptor.c -o decrypt
		./decrypt $i "$1"

	done
 