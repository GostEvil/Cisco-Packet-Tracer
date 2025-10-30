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
Enter configuration commands, one per line.
End with CNTL/Z.
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