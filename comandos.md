# CLI Modes
Router> <– User EXEC Mode
Router# <– Privileged EXEC mode
Router(config)# <– Global Configuration Mode
Router(config-if)# <– Interface Configuration Mode
Router(config-line)# <– Line Configuration Mode 



# 📘 Tabela de Configuração Cisco Router 1841 — Cisco Packet Tracer

| **Modo** | **Comando** | **Descrição** |
|-----------|--------------|----------------|
| `Router>` | `enable` | Entra no **modo privilegiado (EXEC privilegiado)**. |
| `Router#` | `configure terminal` | Entra no **modo de configuração global**. |
| `Router(config)#` | `hostname 1841` | Define o nome do roteador. |
| `1841(config)#` | `no ip domain lookup` | Desativa a pesquisa DNS automática (evita travar se errar um comando). |
| `1841(config)#` | `banner motd @`<br>`--########################################--`<br>`Only Authorized Personnel!!`<br>`--########################################--`<br>`@` | Cria o **banner MOTD (Message of the Day)**, mostrado ao aceder via console ou remoto. |
| `1841(config)#` | `enable secret cisco` | Define a **senha secreta (criptografada)** para o modo privilegiado. |
| `1841(config)#` | `service password-encryption` | Ativa a **encriptação de senhas** simples no ficheiro de configuração. |
| `1841(config)#` | `line vty 0 4` | Acede às **linhas virtuais** (VTY), permitindo até 5 conexões simultâneas (Telnet/SSH). |
| `1841(config-line)#` | `password cisco` | Define a senha de acesso remoto. |
| `1841(config-line)#` | `login` | Exige autenticação (uso da senha) para acesso remoto. |
| `1841(config-line)#` | `exec-timeout 10 0` | Termina a sessão após **10 minutos de inatividade**. (Evita `0 0`, que nunca desconecta.) |
| `1841(config-line)#` | `logging synchronous` | Sincroniza mensagens do sistema com o input do utilizador (evita interrupções no terminal). |
| `1841(config-line)#` | `exit` | Volta ao modo anterior. |
| `1841(config)#` | `line console 0` | Configura a **porta de console física** do roteador. |
| `1841(config-line)#` | `password cisco` | Define a senha da consola. |
| `1841(config-line)#` | `login` | Obriga login ao aceder pela consola. |
| `1841(config-line)#` | `exit` | Volta ao modo de configuração global. |
| `1841(config)#` | `interface fastEthernet 0/0` | Entra na configuração da **interface FastEthernet 0/0**. |
| `1841(config-if)#` | `ip address 192.168.0.254 255.255.255.0` | Define o **endereço IP** e **máscara de sub-rede** da interface. |
| `1841(config-if)#` | `no shutdown` | Ativa a interface (por padrão vem desativada). |
| `1841(config-if)#` | `exit` | Volta ao modo global. |
| `1841(config)#` | `end` | Volta diretamente ao **modo EXEC privilegiado**. |
| `1841#` | `copy running-config startup-config` | Salva a configuração atual (RAM) na memória **NVRAM**, tornando-a permanente. |

---

## 💡 Dicas adicionais

- **Comando útil:** `show running-config` → exibe toda a configuração atual.  
- **Comando útil:** `show ip interface brief` → mostra IPs e estado das interfaces.  
- **Boa prática:** depois de qualquer configuração, **sempre** executar `copy running-config startup-config`.
