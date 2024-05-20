# Configuração do PostgreSQL com Docker

### Criando uma aplicação terminal para gerenciamento e execução de *queries* de um banco de dados em PostgreSQL isolado em ambiente Docker.

## 1. PostgreSQL [![GitHub repository](https://img.shields.io/badge/GitHub-repository-blue?logo=github&style=flat-square&link=https://github.com/postgres/postgres)](https://github.com/postgres/postgres)

PostgreSQL, frequentemente abreviado como Postgres, é um banco de dados relacional de código aberto e altamente avançado. Ele foi desenvolvido pela primeira vez em 1986 como parte do projeto POSTGRES na Universidade da Califórnia, em Berkeley, e foi lançado oficialmente ao público em 1996.

Aqui estão alguns pontos-chave sobre o PostgreSQL:

1. Código Aberto: PostgreSQL é distribuído sob a licença PostgreSQL, uma licença de código aberto permissiva que permite a utilização, modificação e distribuição do software gratuitamente;

2. Conformidade com ACID: PostgreSQL é conhecido por sua conformidade com ACID (Atomicidade, Consistência, Isolamento e Durabilidade), garantindo transações seguras e confiáveis;

3. Suporte a SQL Avançado: Ele suporta uma ampla gama de tipos de dados e funcionalidades SQL, incluindo subconsultas, junções complexas, índices, triggers, visões, e muito mais;

4. Extensibilidade: PostgreSQL é altamente extensível. Usuários podem definir novos tipos de dados, operadores, funções, agregados e métodos de índice. Isso permite personalizações específicas para diferentes aplicações;

5. Suporte a JSON e HSTORE: Além dos dados relacionais tradicionais, PostgreSQL oferece suporte robusto para armazenar e consultar dados JSON e hstore, o que facilita o trabalho com dados semiestruturados;

6. Replicação e Recuperação: PostgreSQL suporta replicação de streaming, replicação lógica e várias opções de backup e recuperação, o que o torna adequado para aplicações de alta disponibilidade e recuperação de desastres;

7. Comunidade Ativa e Extensiva Documentação: Há uma comunidade ativa de desenvolvedores e usuários que contribuem para o desenvolvimento contínuo do PostgreSQL. A documentação oficial é abrangente e bem mantida;

8. Compatibilidade com Diversas Plataformas: PostgreSQL é compatível com diversos sistemas operacionais, incluindo Linux, Windows e macOS.

## 2. Docker [![Docker repository](https://img.shields.io/badge/Docker-repository-blue?logo=docker&style=flat-square&link=https://github.com/docker/docker)](https://github.com/docker)

Docker é uma plataforma de código aberto que automatiza a implantação de aplicações dentro de contêineres de software, proporcionando um ambiente consistente para desenvolvimento, teste e produção. Lançado em 2013, Docker revolucionou a forma como as aplicações são desenvolvidas e executadas, simplificando a criação, distribuição e execução de aplicativos em qualquer ambiente.

Principais características do Docker:

1. Contêineres: Docker utiliza contêineres para empacotar uma aplicação e todas as suas dependências em uma única unidade executável. Isso garante que a aplicação funcione de maneira idêntica, independentemente do ambiente em que é executada;

2. Imagens Docker: Uma imagem Docker é um pacote leve, standalone e executável que inclui tudo o que é necessário para rodar um pedaço de software, incluindo código, runtime, bibliotecas e configurações. As imagens podem ser compartilhadas por meio do Docker Hub ou repositórios privados;

3. Docker Hub: Um serviço de registro público de Docker que permite aos usuários encontrar e compartilhar contêineres. Ele possui uma vasta biblioteca de imagens oficiais de diversos softwares, como sistemas operacionais, bancos de dados e ferramentas de desenvolvimento;

4. Portabilidade: Os contêineres Docker podem ser executados em qualquer lugar, desde o laptop de um desenvolvedor até servidores em produção, e até mesmo na nuvem. Isso facilita a movimentação de aplicações entre diferentes ambientes sem ajustes adicionais;

5. Isolamento: Cada contêiner Docker é isolado, com seu próprio sistema de arquivos, rede e espaço de processo, o que aumenta a segurança e evita conflitos entre aplicações;

6. Eficiência: Os contêineres são mais leves e eficientes em termos de recursos do que máquinas virtuais, permitindo maior densidade de aplicações no mesmo hardware;

7. Orquestração: Ferramentas como Docker Compose e Kubernetes facilitam a definição e a gestão de aplicações multi-contêiner, permitindo escalar aplicações horizontalmente e gerenciar seus ciclos de vida de forma eficaz.

## Tutorial para Configuração do Ambiente no Ubuntu

### 1. Verifique se o Docker já está instalado

Para isso, abra o terminal ou aperte **Ctrl + Alt + Del** e digite os seguintes comandos:

```bash
docker --version
sudo systemctl status docker
```

Se o Docker estiver instalado, aparecerá algo como: 

```console
Docker version 20.10.7, build f0df350

● docker.service - Docker Application Container Engine
   Loaded: loaded (/lib/systemd/system/docker.service; enabled; vendor preset: enabled)
   Active: active (running) since Mon 2021-07-05 09:42:15 UTC; 1h 23min ago
     Docs: https://docs.docker.com

```

Caso aparecer saídas semelhantes a estas, vá para o Passo 3.

### 2. Instalando o Docker

Antes de instalar o Docker, é uma boa prática garantir que seus pacotes do sistema estejam atualizados. Execute os seguintes comandos:

```bash
sudo apt-get update
sudo apt-get upgrade
```

Em seguida, instale as dependências para permitir que o sistema use repositórios HTTPS:

```bash
sudo apt-get install apt-transport-https ca-certificates curl software-properties-common
```