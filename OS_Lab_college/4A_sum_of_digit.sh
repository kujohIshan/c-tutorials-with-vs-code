function sumdigit(){
    x=$1
    sum=0
    while(($x != 0))
    do
    digit=$(( x % 10))
    sum=$((sum + digit ))
    x=$((x /10))
    done
    echo "the sum is $sum"
}
sumdigit $1