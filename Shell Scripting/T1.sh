#Accept a file name and a number (x). Display x lines from the top of the file.  
#Check if the file exists and is readable. The value of x should not exceed the total number of lines in the files. Display suitable messages in case an error is encountered.

#! /bin/bash
function getLines(){
    if [ ! -e $1 ]
    then
        echo "File does not exist"
    elif [ ! -r $1 ]
    then 
        echo "File does exists but not readable"     
    fi

    if [ $2 -gt $(wc -l $1 | cut -c1) ]
    then
        echo "The entered number of lines exceed the total no. of lines in file. Display the whole file [Y | N]?"
        read ans
        if [ "$ans" != "Y" ] && [ "$ans" != "y" ]
        then
            return 1
        fi
    fi

    echo $(head -n $2 $1)
    return 1
}

function main(){
    local fname
    local lines
    read -p "Enter file name : " fname
    read -p "Enter number of lines to be displayed : " lines
    getLines "$fname" "$lines" 
}
main