# Cisco Packet Tracer
### 💻 CLI Modes
| **CLI** | **Descricao Modo** |
|---------|---------------|
|Router>|EXEC|
|Router#|Privileged(EN) EXEC|
|Router(config)#|Global Config| 
|Router(config-if)#|Interface Config|
|Router(config-line)#|Line Config| 

### 📖 Comandos
| **Prompt** | **Comando** | **Descrição** |
|-------------|-------------|----------------|
| `Router>` | `enable` | Entra no modo EXEC privilegiado. |
| `Router#` | `configure terminal` | Entra no modo de configuração global. |
| `Router(config)#` | `hostname R1` | Altera o nome do router para R1. |
| `R1(config)#` | `no ip domain lookup` | Desativa a pesquisa DNS automática. |
| `R1(config)#` | `banner motd @` | Inicia e altera o banner (MOTD). |
| `R1(config)#` | `enable secret cisco` | Define a senha secreta do modo EXEC. |
| `R1(config)#` | `service password-encryption` | Criptografa todas as senhas armazenadas. |
| `R1(config)#` | `line vty 0 4` | Entra na configuração das **linhas virtuais** (Telnet/SSH). |
| `R1(config-line)#` | `password cisco` | Define a senha de acesso remoto. |
| `R1(config-line)#` | `login` | Exige autenticação por senha para acesso remoto. |
| `R1(config-line)#` | `exec-timeout 10 0` | Desconecta sessão após 10 minutos de inatividade. |
| `R1(config-line)#` | `logging synchronous` | Evita que mensagens interrompam comandos digitados. |
| `R1(config-line)#` | `exit` | Retorna ao modo de configuração global. |
| `R1(config)#` | `line console 0` | Entra na configuração da porta de console. |
| `R1(config-line)#` | `password cisco` | Define senha para acesso via console. |
| `R1(config-line)#` | `login` | Obriga autenticação na consola. |
| `R1(config-line)#` | `exit` | Retorna ao modo de configuração global. |
| `R1(config)#` | `interface fastEthernet 0/0` | Entra na configuração de uma porta do dispositivo |
| `R1(config-if)#` | `ip address 192.168.0.254 255.255.255.0` | Atribui IP e máscara à interface. |
| `R1(config-if)#` | `no shutdown` | Ativa a interface (por padrão vem desativada). |
| `R1(config-if)#` | `exit` | Volta ao modo global de configuração. |
| `R1(config)#` | `end` | Retorna ao modo EXEC privilegiado. |
| `R1#` | `copy running-config startup-config` | Salva a configuração atual na NVRAM (torna-a permanente). |

---

## 💡 Dicas
- `show running-config` → exibe toda a configuração atual.  
- `show ip interface brief` → mostra IPs e estado das interfaces.  
- depois de qualquer configuração, executar **sempre**: `copy running-config startup-config`.
