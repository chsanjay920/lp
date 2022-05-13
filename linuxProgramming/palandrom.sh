echo "Enter a number"
read number
num=$number
rev=0
while [ $number -gt 0 ]
do
	mod=$(($number%10))
	rev=$(($(($rev*10))+$mod))
	number=$(($number/10))
done

if [ $num -eq $rev ]
then
echo "palindrom"
else
echo "not a palindrom"
fi
