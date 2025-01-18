function prime(){
    x=$1
    count=0
    for((i=2;i< x;i++))
    do
    if [ $((x % i)) -eq 0 ]
    then
    count=$((count+1))
    fi
    done
    if [ $count -eq 0 ]
    then
    echo "$x is prime"
    else
    echo "$x is not prime "
   fi
}
prime 3