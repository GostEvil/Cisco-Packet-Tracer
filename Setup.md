# Setup
#### Device names
```
Switch# configure terminal
Switch(config)# hostname Sw-Floor-1
Sw-Floor-1(config)#
```
### Configure Passwords
```
Sw-Floor-1# configure terminal
Sw-Floor-1(config)# line console 0
Sw-Floor-1(config-line)# password cisco
Sw-Floor-1(config-line)# login
Sw-Floor-1(config-line)# end
Sw-Floor-1#
```
**Enable Secret**
```
Sw-Floor-1# configure terminal
Sw-Floor-1(config)# enable secret class
Sw-Floor-1(config)# exit
Sw-Floor-1#
```
**Virtual terminal (VTY)**
```
Sw-Floor-1# configure terminal
Sw-Floor-1(config)# line vty 0 15
Sw-Floor-1(config-line)# password cisco
Sw-Floor-1(config-line)# login
Sw-Floor-1(config-line)# end
```
#### Encrypt Passwords
```
Sw-Floor-1# configure terminal
Sw-Floor-1(config)# service password-encryption
Sw-Floor-1(config)#`
```
**to verify that passwords are encrypted** `show running-config`
```
Sw-Floor-1(config)# end
Sw-Floor-1# show running-config
!
(Output omitted)
!
line con 0
password 7 094F471A1A0A
login
!
```
#### Banner msg
```
Sw-Floor-1# configure terminal
Sw-Floor-1(config)# banner motd #Authorized Access Only#
```
### Configuration Files
**startup-config** → NVRAM (salva, carrega ao ligar)
**running-config** → RAM (atual, muda na hora, perde ao desligar)

**copy running-config startup-config** → Guarda a running config np startup config

### Aceder switch
```
Sw-Floor-1# configure terminal
Sw-Floor-1(config)# interface vlan 1
Sw-Floor-1(config-if)# ip address 192.168.1.20 255.255.255.0
Sw-Floor-1(config-if)# no shutdown
Sw-Floor-1(config-if)# exit
Sw-Floor-1(config)# ip default-gateway 192.168.1.1
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