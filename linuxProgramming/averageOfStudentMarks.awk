BEGIN{print("id","name","total","Average")}
{
total=$3+$4+$5+$6+$7
avg=total/5
print($1,$2,total,avg)
}
