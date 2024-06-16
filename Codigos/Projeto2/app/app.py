import os
import psycopg2
from flask import Flask, render_template, request

app = Flask(__name__)

# Conexão com o banco de dados
conn = psycopg2.connect(
    dbname="pdv",
    user="postgres",
    password="123456",
    host="db",
    port="5432"
)

@app.route('/', methods=['GET', 'POST'])
def index():
    consulta_resultado = None
    colunas = None
    erro = None

    if request.method == 'POST':
        comando_sql = request.form['comandoSQL']
        cursor = conn.cursor()

        try:
            cursor.execute(comando_sql)
            rows = cursor.fetchall()
            colunas = [desc[0] for desc in cursor.description]  # Obtém os nomes das colunas
            conn.commit()
        except psycopg2.Error as e:
            conn.rollback()  # Faz rollback da transação em caso de erro
            erro = f"Erro ao executar comando SQL: {e}"
            rows = []
        finally:
            cursor.close()

        consulta_resultado = rows

    return render_template('index.html', consulta_resultado=consulta_resultado, colunas=colunas, erro=erro)

if __name__ == "__main__":
    app.run(host='0.0.0.0', port=5000)
