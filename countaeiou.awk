echo 'enter a filename'
read fn
awk '$0 !~/[aeiou]/ { c=c+1 }
END	{ print("The no.of lines that do not contain vowels:",c) }' $fn
