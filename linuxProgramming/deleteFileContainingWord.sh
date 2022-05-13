
if [ $# -eq 0 ]
then
echo "Please enter atlest one file"
exit
fi

echo "enter a word"
read word

for file in $*
do
sed "/$word/d" $file | tee tmp
mv tmp $file
done
