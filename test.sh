b=$(<build)
v=$((b + 1))
echo $v > build

echo "start" > builds/$v
echo "ILLEGAL\n" >> builds/$v
./uls -z | cat -e >> builds/$v
echo "\nNOFILE\n" >> builds/$v
./uls xxx >> builds/$v
echo $? >> builds/$v
echo "\nNOARGS\n" >> builds/$v && \
./uls >> builds/$v && \
echo "\nNOARGS2\n" >> builds/$v && \
./uls | cat -e >> builds/$v && \
echo "\nEXAMPLE1\n" >> builds/$v && \
./uls dir1 dir2 dir3/dir4 dir5/dir6/dir7 ../stage01 file1 file2 file3 >> builds/$v && \
echo "\nEXAMPLE2\n" >> builds/$v && \
./uls -l dir2 | cat -e >> builds/$v && \
echo "end" >> builds/$v

diff builds/$b builds/$v
