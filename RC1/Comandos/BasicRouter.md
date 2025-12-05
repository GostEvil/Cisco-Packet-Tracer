> **Module 10**
## Basic Router Configuration
Configure device name
`hostname Router`
Secure pivileged ESEC mode
`enable secret pass`
Secure user EXEC mode
```
line console 0
password pass
login
```
Secure remote Telnet / SSH access
```
line vty 0 4  
password pass  
login  
transport input {ssh/telnet}
```
Secure all passwords in config file
```
exit
service password-encryption
```
Provide legal notification
`banner motd # msg #`
Save config
````
end
copy running-config startup-config
````
#### Exemplo de Configuração de Router
```
Router> enable
Router# configure terminal
Router(config)# hostname R1
R1(config)#
R1(config)# enable secret class
R1(config)#
R1(config)# line console 0
R1(config-line)# password cisco
R1(config-line)# login
R1(config-line)# exit
R1(config)#
R1(config)# line vty 0 4
R1(config-line)# password cisco
R1(config-line)# login
R1(config-line)# transport input ssh telnet
R1(config-line)# exit
R1(config)#
R1(config)# service password-encryption
R1(config)#
R1(config)# banner motd # Unauthorized access is prohibited! #
R1(config)#
R1(config)#end
R1# copy running-config startup-config
R1#
```

## Configure Router Interfaces
```
interface g0/0
ip address ipv4 mask
ipv6 address ipv6 masc
no shutdown
```
#### Configure Router Interfaces Example
```
R1> enable
R1# configure terminal
R1(config)# interface gigabitEthernet 0/0/0
R1(config-if)# description Link to LAN
R1(config-if)# ip address 192.168.10.1 255.255.255.0
R1(config-if)# ipv6 address 2001:db8:acad:10::1/64
R1(config-if)# no shutdown
R1(config-if)# exit
```
