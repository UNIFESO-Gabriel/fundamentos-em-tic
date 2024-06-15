# Usa a imagem base do Python
FROM python:3.9

# Define o diretório de trabalho dentro do container
WORKDIR /app

# Copia os arquivos de código e requisitos para o container
COPY . .

# Instala as dependências Python
RUN pip install -r requirements.txt

# Comando padrão para executar a aplicação Flask
CMD ["python", "app.py"]
