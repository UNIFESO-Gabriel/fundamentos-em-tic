-- Criação do banco de dados
-- Verifica se o banco de dados 'pdv' existe antes de tentar criá-lo
DO $$BEGIN
    IF NOT EXISTS (SELECT 1 FROM pg_database WHERE datname = 'pdv') THEN
        CREATE DATABASE pdv;
    END IF;
END$$;

-- Criação do usuário e atribuição de permissões
-- Verifica se o usuário 'postgres' existe antes de tentar criá-lo
DO $$BEGIN
    IF NOT EXISTS (SELECT 1 FROM pg_roles WHERE rolname = 'postgres') THEN
        CREATE ROLE postgres WITH LOGIN PASSWORD '123456';
    END IF;
END$$;

-- Atribui permissões ao usuário postgres para o banco de dados pdv
ALTER DATABASE pdv OWNER TO postgres;
GRANT ALL PRIVILEGES ON DATABASE pdv TO postgres;


\c pdv;
