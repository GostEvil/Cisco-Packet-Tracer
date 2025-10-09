# Cisco-Packet-Tracer
Commands of Cisco Packet Tracer


# Examinar o current switch configuration
show running-config

# Create a Basic Switch Config
1º) Assign a name to a switch
en
conf t
hostname S1
exit

2º) Secure access to the console line
en
conf t
line console 0
password letmein
login
exit
exit

3º) Secure privileged mode access
enable
conf t
enable password cisco
exit

4º) configure an encrypted password to secure access to privilaged mode
conf t
enable secret itsasecret
exit

5º) Encrypt the enable and console passwords
conf t
service password-encryption
exit

# Configure a MOTD Baner
conf t
banner motd "Authorized Access Only!"
exit

# Save configuration files to NVRAM
en
copy running-config startup-config


# Conf Switch Management Interface
conf t
interface vlan 1  //Interface de gerenciamento do switch 
ip address 192.168.1.253 255.255.255.0 //atribui ip à mascara
no shutdown  //ativa a interface vlan 1, permitindo que haja trafego
exit

# Verify the IP address conf on S1 and 
show ip interface brief   //resumo do status e conf (IP, up/down) das interfaces

