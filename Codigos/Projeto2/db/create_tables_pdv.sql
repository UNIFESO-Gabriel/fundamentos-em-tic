-- Criação das tabelas
CREATE TABLE categoria (
    categoria_id SERIAL PRIMARY KEY,
    nome VARCHAR(100) NOT NULL
);

CREATE TABLE produto (
    produto_id SERIAL PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    preco DECIMAL(10, 2) NOT NULL,
    quantidade_em_estoque INT NOT NULL,
    categoria_id INT REFERENCES categoria(categoria_id)
);

CREATE TABLE cliente (
    cliente_id SERIAL PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    email VARCHAR(100),
    telefone VARCHAR(20)
);

CREATE TABLE venda (
    venda_id SERIAL PRIMARY KEY,
    cliente_id INT REFERENCES cliente(cliente_id),
    data_venda DATE NOT NULL,
    total DECIMAL(10, 2) NOT NULL
);

CREATE TABLE item_venda (
    item_venda_id SERIAL PRIMARY KEY,
    venda_id INT REFERENCES venda(venda_id),
    produto_id INT REFERENCES produto(produto_id),
    quantidade INT NOT NULL,
    preco_unitario DECIMAL(10, 2) NOT NULL
);
