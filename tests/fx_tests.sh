#!/bin/bash

make fclean -s
make -s
if [ 0 -ne $? ];then
    echo "KO: the project didn't build"
    exit
fi

touch ./.my_test_file_bta
echo "Pangolin
pantalon
poutre" > ./.my_test_file_bta

./lingo ./.my_test_file_bta
if [ 84 -ne $? ];then
    echo "KO: the project didn't return ERROR"
else
    echo "OK"
fi

touch ./.my_test_file_bta
echo "p4ng0l1n
pant4lon
p0utre" > ./.my_test_file_bta

./lingo ./.my_test_file_bta
if [ 84 -ne $? ];then
    echo "KO: the project didn't return ERROR"
else
    echo "OK"
fi

touch ./.my_test_file_bta
echo "poutre" > ./.my_test_file_bta

echo "poutre" | ./lingo ./.my_test_file_bta | tail -n 1 > .return
if [ 0 -ne $? ];then
    echo "KO: the project didn't return properly"
else
    echo "OK"
fi

rm ./.my_test_file_bta
rm ./.return
