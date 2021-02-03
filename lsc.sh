# a script that does the following:
#1. Takes the directory path as input.
#2. Traverses the directories and subdirectories beneath the input directory, recursively, upto the leaf nodes (files) 
#3. Outputs the following for each category of files - count and size in KB/MB.
#4. Example categories of files are - plain text file, Java source file, image file, PDF files, spreadsheets, documents, binaries, etc
#
#Sample output:
#Java source files | 2,500 |   5 MB
#Image files       | 1,000 | 100 MB

#! /bin/bash

echo "Enter Directory : "

read dir
#Find all files with the extensions, print the number of bytes and name for each file
find $dir -name '*' -type f -printf '%b.%f\0' |
	#Only keep the number of bytes and extension and Calculate total count and size per extension using AWK
	awk -F . -v RS='\0' '{if (NF==2) $(NF+1)=" "; s[$NF] += $1; n[$NF]++} END {for (e in s) printf "%s files  |%d|  %d\n", e, n[e], s[e]*512}' |
	#also sort and call the numfmt command in the shell to make the thing human-readable and format the table	
	sort -r | 
	numfmt --field 4 --to=iec-i --suffix=B
