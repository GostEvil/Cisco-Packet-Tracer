# 2.9.1
enable
config terminal
hostname Class-A
enable secret C4aJa
line console 0
password R4Xe3
login
line vty 0 4
password R4Xe3
login
exit
service password-encryption
banner motd #Unauthorized access to this device is prohibited!#
interface vlan 1
ip address 128.107.20.10 255.255.255.0
no shutdown
end
copy running-config startup-config

