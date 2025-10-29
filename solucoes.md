## 2.9.1
```bash
enable
config terminal
hostname Class-A #Name switch
enable secret C4aJa #secret
line console 0 #password for all lines
password R4Xe3
login
line vty 0 4
password R4Xe3
login
exit
service password-encryption #encrypt all pass
banner motd Unauthorized access to this device is prohibited! # set motd
interface vlan 1 #configure addressing
ip address 128.107.20.10 255.255.255.0
no shutdown #save config
end
copy running-config startup-config

