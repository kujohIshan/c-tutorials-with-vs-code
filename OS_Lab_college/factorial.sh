echo "Enter the number "
read num
fact=1
for((i=num;i>0;i--))
do
fact=$(($fact*i))
done
echo "$fact is the factorial"

# using while loop

echo "Enter the number "
read num
fact=1
i=$num
while [ $i -gt 0 ]
do
fact=$(($fact*i))
i=$((i-1))
done
echo "$fact is factorial "