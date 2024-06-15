
# Como Desinstalar Completamente o Docker do Ubuntu

## Passos para desinstalar o Docker:

### 1. Remover pacotes Docker
Primeiro, remova os pacotes Docker instalados no seu sistema. Use os seguintes comandos:

```sh
sudo apt-get purge docker-ce docker-ce-cli containerd.io
sudo apt-get purge docker docker-engine docker.io containerd runc
```

### 2. Excluir todos os contêineres, volumes, imagens e configurações
Certifique-se de excluir todos os contêineres, volumes, imagens e configurações associados ao Docker. Use os seguintes comandos:

```sh
sudo rm -rf /var/lib/docker
sudo rm -rf /var/lib/containerd
```

### 3. Remover dependências e pacotes adicionais
Remova dependências e pacotes adicionais que foram instalados com o Docker:

```sh
sudo apt-get autoremove -y --purge docker-ce docker-ce-cli containerd.io
sudo apt-get autoremove -y --purge docker docker-engine docker.io containerd runc
```

### 4. Remover arquivos de configuração
Remova quaisquer arquivos de configuração adicionais relacionados ao Docker:

```sh
sudo rm /etc/docker
sudo rm -rf /etc/systemd/system/docker.service.d
sudo rm /etc/systemd/system/docker.service
sudo rm /etc/systemd/system/docker.socket
```

### 5. Atualizar a lista de pacotes e limpar pacotes desnecessários
Atualize a lista de pacotes e limpe pacotes desnecessários que possam ter ficado:

```sh
sudo apt-get update
sudo apt-get autoremove -y
sudo apt-get autoclean
```

### 6. Verificar e reiniciar o sistema
Por fim, é sempre uma boa prática verificar se tudo foi removido corretamente e reiniciar o sistema:

```sh
sudo reboot
```

Seguindo esses passos, o Docker será completamente removido do seu sistema Ubuntu.
