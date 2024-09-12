echo "Enter a numbers "
read num1
flag=0
if [ $num1 -lt 2 ]
then 
echo " Not a prime number "
exit
fi
for((i=2;i*i<=num1;i++))
do
if [ $((num1 % i )) -eq 0 ]
then 
flag=1
break
fi
done
if [ $flag -eq 1 ]
then 
echo "$num1 is not prime number "
else
echo "$num1 is prime "
fi