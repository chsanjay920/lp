for x in $*
do
if [ -f $x ]
then
echo "$x is a file"
echo "number of lines are "
wc -l $x 
elif [ -d $x ]
then
echo "is a directory"
else
echo "invalid value"
fi
done
