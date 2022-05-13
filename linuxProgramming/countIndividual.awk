BEGIN { printf "Enter the number: "
getline n<"-"
sum=0;
while(n!=0)
{
r=n%10;
sum=sum+r;
n=int(n/10);
}
print "sum",sum
}
