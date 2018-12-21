#/bin/bash
if [ "$#" -eq 2 ];then
echo "`cat $1 | cut -d ',' -f $2 | sort | head -1`"
else
echo "wrong arguments"
fi
