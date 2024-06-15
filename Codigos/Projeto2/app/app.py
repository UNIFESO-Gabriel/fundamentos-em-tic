import os, psycopg2
from flask import Flask, render_template, request

app = Flask(__name__)

# Simula uma conexão com o banco de dados
# Substitua pelas suas credenciais reais do PostgreSQL

conn = psycopg2.connect(
    dbname="seu_banco_de_dados",
    user="seu_usuario",
    password="sua_senha",
    host="localhost",
    port="5432"
)

@app.route('/', methods=['GET', 'POST'])
def index():
    
    if request.method == 'POST':
        
        comando_sql = request.form['comandoSQL']
        cursor = conn.cursor()
        cursor.execute(comando_sql)
        rows = cursor.fetchall()
        conn.commit()
        cursor.close()
        
        return render_template('index.html', consulta_resultado=rows)
    
    else:
        return render_template('index.html', consulta_resultado=None)


if __name__ == "__main__":
    
    app.run(host='0.0.0.0', port=5000)
