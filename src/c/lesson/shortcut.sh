echo  "\n   \033[0;32m Enter C File you would like to save and run \n \033[0m"
read file
clang ${file}.c -o ${file} -lcs50
open -a Terminal ${PWD}/${file}