arr=()
echo " enter the number of elements "
read n
echo "Enter the elements in array "
for ((i=0;i<n;i++))
do
        read arr[i]
done
for (( i=1;i<n;i++))
do
        key=${arr[i]}
        j=$((i - 1))
         while [ $j -ge 0 -a ${arr[j]} -gt $key ]
        do
                arr[$((j + 1))]=${arr[j]}
                j=$((j-1))
        done
        arr[$((j + 1))]=$key

done
echo "Sorted Array "
for ((i=0;i<n;i++))
do
        echo "${arr[i]}"
done