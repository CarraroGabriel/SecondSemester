/* 1 e 2 */ -- 1) Criar a tabela Tb_Pessoa a qual conterá os seguintes campos
            -- 2)Inserir no mínimo 20 registros nesta tabela, alguns sem informar o CPF
create table tb_pessoa (i_cd_pessoa integer not null, s_nm_pessoa varchar (60) not null, b_fl_sexo boolean default False not null, b_fl_ativo boolean,
						s_nu_cpf varchar (11), i_nu_idade integer not null);
						
insert into tb_pessoa values (1, 'Leandra Costa', False, True, 15213855123, 23);
insert into tb_pessoa values (2, 'Marcelo Ferraz', True, True, 12324678901, 37);
insert into tb_pessoa (i_cd_pessoa, s_nm_pessoa, b_fl_sexo, b_fl_ativo, i_nu_idade) values (3,'Thomaz Silva', True, False, 48);
insert into tb_pessoa values (4, 'Luis Andrade', True, True, 32489578834, 21);
insert into tb_pessoa (i_cd_pessoa, s_nm_pessoa, b_fl_sexo, b_fl_ativo, i_nu_idade) values (5, 'Larissa Freitas', False, False, 22);
insert into tb_pessoa (i_cd_pessoa, s_nm_pessoa, b_fl_sexo, b_fl_ativo, i_nu_idade) values (6, 'Kaylani Andrade', False, True, 18);
insert into tb_pessoa values (7, 'Carlos Silva', True, True, 12345678911, 20);
insert into tb_pessoa values (8, 'Nathalia Andrade', False, True, 23456789101, 32);
insert into tb_pessoa (i_cd_pessoa, s_nm_pessoa, b_fl_sexo, b_fl_ativo, i_nu_idade) values (9, 'Paulo Morales', True, True, 25);
insert into tb_pessoa values (10, 'Julia Santos', False, True, 56789012345, 19);
insert into tb_pessoa values (11, 'Luan Krug', True, True, 32457689102, 21);
insert into tb_pessoa values (12, 'Lorraine Andrade', False, True, 27351586080, 18);
insert into tb_pessoa values (13, 'Lorenzo Vasconcelos', True, True, 83269475047, 24);
insert into tb_pessoa values (14, 'Marcela Loures', False, True, 01101909048, 34);
insert into tb_pessoa (i_cd_pessoa, s_nm_pessoa, b_fl_sexo, b_fl_ativo, i_nu_idade) values (15, 'Geraldo da Silva', True, False, 58);
insert into tb_pessoa (i_cd_pessoa, s_nm_pessoa, b_fl_sexo, b_fl_ativo, i_nu_idade) values (16, 'Kleber de Oliveira', True, False, 38);
insert into tb_pessoa (i_cd_pessoa, s_nm_pessoa, b_fl_sexo, b_fl_ativo, i_nu_idade) values (17,'Beatriz Carvalho', False, True, 27);
insert into tb_pessoa values (18, 'Clarisse Pontes', False, True, 63371066010, 25);
insert into tb_pessoa values (19, 'Isabelle Silva', False, True, 66629136004, 22);
insert into tb_pessoa (i_cd_pessoa, s_nm_pessoa, b_fl_sexo, b_fl_ativo, i_nu_idade) values (20, 'Rafael Tavares', True, False, 42);
select * from tb_pessoa;

/* 3 */ -- 3) Crie uma tabela Tb_Seguranca que deverá conter todos os registros da tabela Tb_Pessoa
select * into tb_segurança from tb_pessoa;
select * from tb_segurança;

/*4 e 5 */ -- 4) Liste todos os registros da tabela Tb_Pessoa 5) Quantos registros foram inseridos na tabela Tb_Pessoa ?
select * from tb_pessoa;
select count (*) from tb_pessoa;

/* 6 */ -- 6) Quantas pessoas estão sem CPF ?
select count (*) from tb_pessoa where s_nu_cpf is null;

/* 7, 8, 9 e 10 */ -- 7) Liste o nome das pessoas em ordem alfabética 8) Liste o nome das pessoas do sexo feminino 
                   -- 9) Quantas pessoas estão ativas? 10) Quantas pessoas estão ativas e sem CPF ?
select s_nm_pessoa from tb_pessoa order by s_nm_pessoa;
select count (*) from tb_pessoa where b_fl_sexo is false;
select count (*) from tb_pessoa where b_fl_ativo is true;
select count (*) from tb_pessoa where b_fl_ativo is true and s_nu_cpf is null;

/* 11 */ -- 11) Delete todas os registros das pessoas inativas
delete from tb_pessoa where b_fl_ativo is false;
select * from tb_pessoa;

/* 12 e 13 */ -- 12) Elimine a tabela Tb_Pessoa 13) Recrie a tabela Tb_Pessoa com os dados da tabela Tb_Segurança
drop table tb_pessoa;
select * into tb_pessoa from tb_segurança;

/* 14 */ -- 14) Quantas pessoas tem em seu nome letras minúsculas?
select count (*) from tb_pessoa where s_nm_pessoa = lower(s_nm_pessoa);

/* 15 e 16 */ -- 15) Listar o nome das pessoas que estejam com a idade entre 18 e 25 (utilizar between) 
              -- 16) Elaborar o mesmo comando da questão 15, porem utilizando o operador AND
select s_nm_pessoa from tb_pessoa where i_nu_idade between 18 and 25;
select s_nm_pessoa from tb_pessoa where i_nu_idade >= 18 and i_nu_idade <= 25;

/* 17 e 18 */ -- 17) Listar o nome da Pessoas que tem como sobrenome “SILVA” 
              -- 18) Quantas pessoas possuem em seu nome a palavra “ANDRADE”
select s_nm_pessoa from tb_pessoa where s_nm_pessoa like '%Silva';
select s_nm_pessoa from tb_pessoa where s_nm_pessoa like '%Andrade%';

/* 19 */ -- 19) Liste o nome das pessoas que Inicia com “L”, tenham como sobrenome “KRUG” 
-- (Caso não exista um registro que atenda as necessidades da questão, providencie o cadastramento
-- de pelo menos dois registros que atendam a esta solicitação)
select s_nm_pessoa from tb_pessoa where s_nm_pessoa like 'L%Krug';
insert into tb_pessoa values (21, 'Lorena Krug', False, True, 44844887017, 25);
insert into tb_pessoa values (22, 'Leonardo Krug', True, False, 29390736005, 48);

/* 20 */ -- 20) Transforme todos os nomes das pessoas cadastradas na tabela Tb_Pessoa em maiúsculo. 
update tb_pessoa set s_nm_pessoa = upper (s_nm_pessoa);
select * from tb_pessoa;