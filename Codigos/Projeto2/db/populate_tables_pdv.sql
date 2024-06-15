-- populate_tables_pdv.sql

-- População das tabelas

-- Insert categorias
INSERT INTO categoria (nome) VALUES
('Eletrônicos'),
('Roupas'),
('Alimentos'),
('Livros'),
('Móveis');

-- Insert produtos
INSERT INTO produto (nome, preco, quantidade_em_estoque, categoria_id) VALUES
('Smartphone', 1500.00, 50, 1),
('Notebook', 3500.00, 30, 1),
('Televisão', 2000.00, 20, 1),
('Camiseta', 50.00, 200, 2),
('Calça Jeans', 120.00, 100, 2),
('Tênis', 250.00, 150, 2),
('Chocolate', 5.00, 500, 3),
('Biscoito', 3.00, 300, 3),
('Macarrão', 4.00, 200, 3),
('Livro de SQL', 100.00, 80, 4),
('Livro de Python', 120.00, 90, 4),
('Sofá', 1500.00, 10, 5),
('Cadeira', 200.00, 40, 5),
('Mesa', 700.00, 15, 5);

-- Insert clientes
INSERT INTO cliente (nome, email, telefone) VALUES
('João Silva', 'joao.silva@example.com', '1111-1111'),
('Maria Souza', 'maria.souza@example.com', '2222-2222'),
('Carlos Pereira', 'carlos.pereira@example.com', '3333-3333'),
('Ana Costa', 'ana.costa@example.com', '4444-4444'),
('Pedro Alves', 'pedro.alves@example.com', '5555-5555'),
('Fernanda Lima', 'fernanda.lima@example.com', '6666-6666'),
('Marcos Rocha', 'marcos.rocha@example.com', '7777-7777'),
('Laura Santos', 'laura.santos@example.com', '8888-8888'),
('Rafael Correia', 'rafael.correia@example.com', '9999-9999'),
('Juliana Almeida', 'juliana.almeida@example.com', '1010-1010');

-- Insert vendas
INSERT INTO venda (cliente_id, data_venda, total) VALUES
(1, '2024-05-01', 1550.00),
(2, '2024-05-02', 122.00),
(3, '2024-05-03', 25.00),
(4, '2024-05-04', 3650.00),
(5, '2024-05-05', 750.00),
(6, '2024-05-06', 200.00),
(7, '2024-05-07', 300.00),
(8, '2024-05-08', 100.00),
(9, '2024-05-09', 2500.00),
(10, '2024-05-10', 80.00),
(1, '2024-05-11', 500.00),
(2, '2024-05-12', 400.00),
(3, '2024-05-13', 120.00),
(4, '2024-05-14', 1700.00),
(5, '2024-05-15', 600.00),
(6, '2024-05-16', 350.00),
(7, '2024-05-17', 450.00),
(8, '2024-05-18', 180.00),
(9, '2024-05-19', 800.00),
(10, '2024-05-20', 1500.00);

-- Insert itens de venda
INSERT INTO item_venda (venda_id, produto_id, quantidade, preco_unitario) VALUES
(1, 1, 1, 1500.00),
(1, 3, 1, 50.00),
(2, 4, 1, 120.00),
(2, 8, 2, 1.00),
(3, 9, 5, 5.00),
(4, 2, 1, 3500.00),
(4, 4, 3, 50.00),
(5, 5, 5, 150.00),
(5, 7, 3, 250.00),
(6, 10, 2, 120.00),
(7, 1, 1, 1500.00),
(7, 2, 1, 3500.00),
(8, 4, 1, 50.00),
(9, 13, 2, 100.00),
(10, 14, 1, 700.00),
(11, 3, 2, 2000.00),
(11, 5, 2, 120.00),
(12, 6, 3, 250.00),
(13, 7, 1, 250.00),
(14, 8, 1, 3.00),
(15, 9, 1, 4.00),
(16, 10, 1, 100.00),
(17, 11, 1, 120.00),
(18, 12, 1, 1500.00),
(19, 13, 2, 200.00),
(20, 14, 1, 700.00);
