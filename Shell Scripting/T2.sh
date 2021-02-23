#Accept roll number from the user at the command line.  
#Search it in the “student” file.  
#If it is present, then display the name, percentage, grade and class of the student.  
#If the roll number is not present, then display a message “not found”.  
#Allow the user to enter any number of queries.

#! /bin/bash

function findDetail(){
    while IFS="," read -r roll name percentage grade class
    do
        if [ $roll == $1 ]
        then
            echo "Record is : "
            echo "Roll no : $roll Name: $name Percentage : $percentage Grade: $grade Class : $class"
            return
        fi
    done < <(tail -n +2 student.csv)
    echo "No record found"
    return
}

function main(){
    local rno
    while [ 1 ]
    do
        read -p "Enter roll number : " rno
        if [ -z $rno ]
        then
            return 
        else
            findDetail "$rno"
        fi
    done
}
main
