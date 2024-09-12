echo "Enter 3 numbers "
read num1
read num2
read num3
if [ $num1 -gt $num2 -a $num1 -lt $num3 -o $num1 -lt $num2 -a $num1 -gt $num3 ]
then
echo "$num1 is the 2nd largest "
elif [ $num2 -gt $num1 -a $num2 -lt $num3 -o $num2 -lt $num1 -a $num2 -gt $num3 ]
then 
echo "$num2 is the 2nd largest "
else
echo "$num3 is 2nd largest "
fi