
echo "enter a filename"
read fn
awk '{ w=w+NF
c=c+length($0)
}
END { print("No.of lines:",NR)
print("No.of words:",w)
print("No.of characters:",c)
}' $fn
