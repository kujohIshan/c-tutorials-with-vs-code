echo "Enter a number:"
read num1
echo "Enter another number:"
read num2
flag=1
while [ $flag -eq 1 ]
do
echo -e "Enter your choice:\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n5 for exit"
read choice
echo "Your choice is: $choice"
case $choice in 
1 )
sum=$(($num1 + $num2))
echo "The Addition is: $sum"
;;
2 )
sub=$(($num1 - $num2))
echo "The subtraction is: $sub"
;;
4 )
div=$(($num1 / $num2))
echo "The division is: $div"
;;
3 )
mul=$(($num1 * $num2))
echo "The multiply is: $mul"
;;
5 )
echo "Exiting"
flag=0
;;
* )
echo "Invalid choice"
;;
esac
done