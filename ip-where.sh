#! /bin/bash
 
# curl foobar https://ip.cn/index.php?ip={ip_address}
for ip in `cat host.txt` ; do
        curl https://ip.cn/index.php?ip=$ip
done
