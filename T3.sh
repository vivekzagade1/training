#Write a shell script which will calculate the factorial of an integer entered from the keyboard

#! /bin/bash

function findFact(){
    if [ $1 == 1 ]
    then
        echo 1
    else
        last=$(findFact $(($1 - 1)) )
        echo $(($1 * $last))
    fi
}

function main(){
    local rno
    local ans
    read -p "Enter number : " rno
    ans=$(findFact "$rno")
    echo $ans
}
main