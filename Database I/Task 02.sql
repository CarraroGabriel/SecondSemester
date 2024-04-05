/* 1, 2 e 3 */ -- 1) Criar a tabela Tb_AlunoXYZ a qual possuirá os seguintes campos:
               -- 2) Criar a tabela Tb_OficinaXYZ a qual possuirá os seguintes campos:
               -- 3) Criar a tabela Tb_OficinaAlunoXYZ a qual possuirá os seguintes campos:

create table tb_alunoXYZ (cd_aluno integer not null, nm_aluno char (60));
create table tb_oficinaXYZ (cd_obra integer not null,
							nm_oficina varchar (60) not null);
create table tb_oficinaAlunoXYZ (cd_oficina integer, cd_aluno integer,
							nu_ano integer not null
							constraint chk_ano
							check (nu_ano > 2017 and nu_ano < 2021));
alter table tb_alunoXYZ add constraint pk_nmAluno primary key (nm_aluno);

/* 4, 5 e 6 */ -- 4) Alterar o nome da tabela Tb_AlunoXYZ para Tb_Aluno
               -- 5) Alterar o nome da tabela Tb_OficinaXYZ para Tb_Oficina
               -- 6) Alterar o nome da tabela Tb_OficinaAlunoXYZ para Tb_OficinaAluno
alter table tb_alunoXYZ rename to tb_aluno;
alter table tb_oficinaXYZ rename to tb_oficina;
alter table tb_oficinaAlunoXYZ rename to tb_oficinaAluno;

/* 7, 8 e 9 */ -- 7) Adicionar a tabela Tb_Oficina o seguinte campo:
               -- a) Nu_Ano – Ano em que a oficina ocorreu, Integer, Obrigatório, deve ser maior que 2017 e menor que 2021
               -- 8) Eliminar o campo Nu_Ano da tabela Tb_OficinaAluno
               -- 9) Remover a chave primaria da tabela Tb_Aluno
alter table tb_oficina add nu_ano integer not null
								constraint chk_ano 
								check (nu_ano > 2017 and nu_ano < 2021);
alter table tb_oficinaAluno drop column nu_ano;
alter table tb_aluno drop constraint pk_nmAluno;

/* 10, 11 e 12 */ -- 10) Adicionar a chave primária na tabela Tb_Aluno a qual é composta pelo campo Cd_Aluno
                  -- 11) Alterar o nome do campo Cd_Obra da tabela Tb_Oficina para Cd_Oficina
                  -- 12) Adicionar a chave primária na tabela Tb_Oficina a qual é composta pelo campo Cd_Oficina
alter table tb_aluno add constraint pk_cdAluno primary key (cd_aluno);
alter table tb_oficina rename column cd_obra to cd_oficina;
alter table tb_oficina add constraint pk_cdoficina primary key (cd_oficina);

/* 13, 14 e 15 */ -- 13) Adicionar a chave primária na tabela Tb_OficinaAluno a qual é composta dos campos Cd_Oficina e Cd_Aluno
                  -- 14) Adicionar a chave estrangeira na tabela Tb_OficinaAluno referente ao campo Cd_Oficina o qual refere-se a tabela Tb_Oficina
                  -- 15) Fazer com que os campos Cd_Oficina e Cd_Aluno na tabela Tb_OficinaAluno sejam obrigatórios

alter table tb_oficinaAluno add constraint pk_cdOficinaAluno
								primary key (cd_oficina, cd_aluno);
alter table tb_oficinaAluno add constraint fk_cdoficina 
								foreign key (cd_oficina) 
								references tb_oficina;
alter table tb_oficinaAluno alter column cd_oficina set not null;
alter table tb_oficinaAluno alter column cd_aluno set not null;

/* 16, 17 e 18 */ -- 16) Adicionar a Chave Estrangeira na Tabela Tb_OficinaAluno referente ao campo Cd_Aluno o qual refere-se a tabela Tb_Aluno
                  -- 17) Alterar o tipo do campo Nm_Aluno da tabela Tb_Aluno de CHAR para VARCHAR (como o mesmo tamanho – 60)
                  -- 18) Adicionar o campo Fl_Sexo na tabela Tb_Aluno, cujo tipo é Char(1), Obrigatório, com valor default sendo ‘M’, e sendo permitido apenas a entrada de ‘M’ ou ‘F’
alter table tb_oficinaAluno add constraint fk_cdaluno 
								foreign key (cd_aluno)
								references tb_aluno;
alter table tb_aluno alter column nm_aluno type varchar (60);
alter table tb_aluno add fl_sexo char (1) not null
								 DEFAULT 'M'
								 constraint chk_sexo
								 check (fl_sexo in ('M', 'F'));
/* 19 */ -- 19) Inserir na Tabela Tb_Aluno os seguintes dados (Conforme o que esta na tabela abaixo)
-- Cd_Aluno  Nm_Aluno
--  1        MARINA
--  2        PEDRO
--  3        LUIS
--  4        FERNANDO
--  5        Carla
--  6        maria

insert into tb_aluno values (1, 'MARINA');
insert into tb_aluno values (2, 'PEDRO');
insert into tb_aluno values (3, 'LUIS');
insert into tb_aluno values (4, 'FERNANDO');
insert into tb_aluno values (5, 'Carla', 'F');
insert into tb_aluno values (6, 'maria', 'F');
select * from tb_aluno;

/* 20 */ -- 20) Inserir na Tabela Tb_Oficina os seguintes registros:
-- Cd_Oficina                Nm_Oficina           Nu_Ano
--   33                     Robotica              2018
--   44                     Banco de dados        2018
--   55                     Teatro                2016
--   66                     Musica                2017
--   77                     Direito               2018
insert into tb_oficina values (33, 'Robotica', 2018);
insert into tb_oficina values (44, 'Banco de dados', 2018);
insert into tb_oficina values (55, 'Teatro', 2016); /* teste constraint check */
insert into tb_oficina values (66, 'Musica', 2017); /* teste constraint check */
insert into tb_oficina values (77, 'Direito', 2018);
select * from tb_oficina;

/* 21 e 22 */ -- 21) Atualizar a tabela Tb_Aluno, transformando o conteúdo do campo Nm_Aluno em maiúsculo
              -- 22) Atualizar a tabela Tb_Oficina, transformando o conteúdo do campo Nm_Oficina em maiúsculo
update tb_aluno set nm_aluno = upper (nm_aluno);
select * from tb_aluno;
update tb_oficina set nm_oficina = upper (nm_oficina);
select * from tb_oficina;

/* 24 */ -- 24) Inserir na Tabela Tb_OficinaAluno os seguintes dados
-- Cd_Oficina          Cd_Aluno
--    33                 1
--    44                 2
--    33                 3
--    44                 5
--    66                 6
--    33                 2
--    44                 1
insert into tb_oficinaAluno values (33, 1);
insert into tb_oficinaAluno values (44, 2);
insert into tb_oficinaAluno values (33, 3);
insert into tb_oficinaAluno values (44, 5);
insert into tb_oficinaAluno values (66, 6); /* Teste FK */
insert into tb_oficinaAluno values (33, 2);
insert into tb_oficinaAluno values (44, 1);
select * from tb_oficinaAluno;

/* 25 */ -- 25) Listar o Nome do aluno, o nome da Oficina e o ano em que este participou, deve ser
         -- impresso em ordem de nome do aluno (Alfabetica), ano (decrescente) e nome da Oficina (Alfabetica)
select nm_aluno, nm_oficina, nu_ano from tb_aluno A, tb_oficina B, tb_oficinaAluno C 
													 where A.cd_aluno = C.cd_aluno  
													 and B.cd_oficina = C.cd_oficina 
													 order by nm_aluno ASC, nu_ano DESC, nm_oficina ASC;
/* 26 e 27 */ -- 26) Qual o ano que teve o menor número de alunos inscritos
              -- 27) Qual a oficina que teve o maior número de alunos inscritos no ano de 2018
select MIN (nu_ano) from tb_oficina B, tb_oficinaAluno C where B.cd_oficina = C.cd_oficina; 
select nm_oficina, count (*) from tb_oficina B, tb_oficinaAluno C 
								  where B.cd_oficina = C.cd_oficina 
								  group by nm_oficina, nu_ano
								  having nu_ano = 2018;								  

/* 28 e 29 */ -- 28) Qual oficina que não teve alunos inscritos, listar por ordem de ano (Crescente) e de nome de oficina (Alfabética)
              -- 29) Qual o aluno que não participou de oficinas dentre todos os anos
select nu_ano, nm_oficina from tb_oficina where cd_oficina not in 
						  (select cd_oficina from tb_oficinaAluno)
						  order by nu_ano ASC, nm_oficina ASC;
select nm_aluno from tb_aluno where cd_aluno not in
				(select cd_aluno from tb_oficinaAluno);

/* 30 */ -- 30) Qual o aluno que mais participou de oficinas
select * from tb_aluno;
select * from tb_oficinaAluno;
select nm_aluno from tb_aluno A, tb_oficinaAluno C
				where A.cd_aluno = C.cd_aluno
				group by A.cd_aluno 
				having count (*) > 1
				order by count (*) DESC;
				
/* 31 */ -- 31) Eliminar da tabela Tb_Aluno aqueles alunos que jamais participaram de alguma oficina
delete from tb_aluno A where 0 = (select count (*) from tb_oficinaAluno B where B.cd_aluno = A.cd_aluno);
select * from tb_aluno;

/* 32 e 33 */ -- 32) Listar o nome dos alunos que tenham em seu nome a Letra ‘M’
              -- 33) Listar o nome das oficinas em que os alunos que tenham em seu nome a letra ‘M’ participaram
select nm_aluno from tb_aluno where nm_aluno like 'M%';
select nm_oficina from tb_aluno A, tb_oficina B, tb_oficinaAluno C 
                                   where A.cd_aluno = C.cd_aluno 
                                   and B.cd_oficina = C.cd_oficina
		                           and nm_aluno like 'M%';

/* 34 e 35 */ -- 34) Criar a tabela Tb_Curso a qual possui os seguintes campos:
              -- a) Cd_Curso, Integer , Obrigatório
              -- b) Nm_Curso Varchar(30) Obrigatório, Único
              -- 35) Alterar a tabela Tb_Curso adicionando a chave primária Cd_Curso
create table tb_curso (cd_curso integer not null, nm_curso varchar (30) not null);
alter table tb_curso add constraint uk_nmCurso
						 unique (nm_curso);
alter table tb_curso add constraint pk_cdCurso
						 primary key (cd_curso);

/* 36 e 37 */ -- 36) Inserir o campo Cd_Curso na tabela Tb_Aluno
              -- 37) Alterar a tabela Tb_Aluno informando que o campo Cd_Aluno é uma chave estrangeira que se refere a tablea Tb_Curso
alter table tb_aluno add cd_curso integer;
alter table tb_aluno add constraint fk_cdCurso
						 foreign key (cd_curso)
						 references tb_curso;

/* 38 */ -- 38)Inserir os seguintes dados na tabela Tb_Curso
Cd_Curso Nm_Curso
21
INFORMATICA
31
MECANICA
41
LETRAS

insert into tb_curso values (21, 'INFORMATICA');
insert into tb_curso values (31, 'MECANICA');
insert into tb_curso values (41, 'LETRAS');
select * from tb_curso;

/* 39 */ -- 39)Atualizar a tabela Tb_Aluno atualizando o campo Cd_Curso
Cd_Aluno Nm_Aluno Cd_Aluno
1
MARINA 21
2
PEDRO 31
3
LUIS 41
4
FERNANDO 21
5
Carla 31
6
maria 21

select * from tb_aluno
update tb_aluno set cd_curso = 21 where cd_aluno = 1;
update tb_aluno set cd_curso = 31 where cd_aluno = 2;
update tb_aluno set cd_curso = 41 where cd_aluno = 3;
update tb_aluno set cd_curso = 21 where cd_aluno = 4;
update tb_aluno set cd_curso = 31 where cd_aluno = 5;
update tb_aluno set cd_curso = 21 where cd_aluno = 6;
select * from tb_aluno

/* 40 */ -- 40) Alterar a tabela Tb_Aluno fazendo com que o campo Cd_Curso seja obrigatório
alter table tb_aluno alter column cd_curso set not null;

/* 41 */ -- 41) Listar os cursos que não tenham alunos matriculados
select nm_curso from tb_curso where cd_curso not in
					(select cd_curso from tb_aluno);

/* 42 */ -- 42)  Listar o curso que tenha o maior número de alunos
select nm_curso from tb_curso D, tb_aluno A
				where A.cd_curso = D.cd_curso
				group by A.cd_curso, nm_curso
				having count (*) > 1
				order by count (*);
select * from tb_curso;
select * from tb_aluno;

/* 43 */ -- 43) Listar o curso que possua o aluno que mais participou de oficinas em todos os anos
select C.nm_curso from tb_curso C, tb_aluno A, tb_oficinaAluno OA
                  where A.cd_curso = C.cd_curso
                and A.cd_aluno = OA.cd_aluno
                group by C.cd_curso, C.nm_curso
                having count (OA.cd_oficina) = (
                select MAX(total_oficinas)
                from (
                select COUNT(O.cd_oficina) as total_oficinas
                from tb_oficinaAluno O
                group by O.cd_aluno) 
                as max_oficinas);				
select * from tb_curso;
select * from tb_oficinaAluno;
select * from tb_aluno;