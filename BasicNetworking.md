# Setup
# Basic Switch Config
config t
hostname s1
line console 0
banner motd "no enter"
exit
copy running-config startup-config

# Basic Conf with Password Security
password letmein
login
enable secret itsasecret
exit
service password-encryption
exit

# Set Clock
show clock
clock timezone EST -5
no clock timezone   <!-- reverter -->

