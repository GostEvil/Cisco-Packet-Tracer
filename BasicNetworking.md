# Setup
#### Device names
```
Switch# configure terminal
Switch(config)# hostname Sw-Floor-1
Sw-Floor-1(config)#
```

#### Switch Config
```bash
config t
hostname s1
line console 0
banner motd "no enter"
exit
copy running-config startup-config
```
#### Conf with Password Security
```bash 
password letmein
login
enable secret itsasecret
exit
service password-encryption
exit
```

#### Set Clock
```bash
show clock
clock timezone EST -5
no clock timezone   <!-- reverter o clock set -->
```
