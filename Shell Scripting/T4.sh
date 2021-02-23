#Write a shell script to copy one file to another line by line.

#! /bin/bash

function copy(){
    while read line
    do
        echo $line >> $2
    done < $1
    echo "Done"
    return
}

function main(){
    local source
    local dest
    while [ 1 ]
    do
        read -p "Enter source  : " source
        if [ -z $source ]
        then
            return 
        else
            if [ ! -f $source ]
            then
                echo "No such source file"
                continue
            fi
            read -p "Enter dest  : " dest
            if [ ! -f $dest ]
            then
                echo "no such dest file"
                continue
            fi
            copy "$source" "$dest"
        fi
    done
}
main
