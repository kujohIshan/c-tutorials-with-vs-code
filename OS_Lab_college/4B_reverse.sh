function reverse(){
    x=$1
    rev=0
    echo "After reverse"
    while((x!=0))
    do
    dig=$((x % 10))
    rev=$((rev*10 + dig))
    x=$((x / 10))
    done
    echo "$rev"
}
reverse 24