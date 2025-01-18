function sum(){
    x=$1
    y=$2
    sum=$((x+y))
    echo "$sum"
}
echo "Enter 2 numbers "
read n1
read n2
sum $n1 $n2