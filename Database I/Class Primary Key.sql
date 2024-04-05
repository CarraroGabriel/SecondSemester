/* Criação Tabela de Estados */
create table tb_estado (cd_estado char (2), nm_estado varchar (30) not null);
select * from tb_estado;

/* Criação das Regras de Chaves da Tabela */
alter table tb_estado add constraint pk_estado primary key (cd_estado);
alter table tb_estado add constraint uk_nm_estado unique (nm_estado);

/* Inserção de Dados tb_estado */
insert into tb_estado values ('RS', 'RIO GRANDE DO SUL');
insert into tb_estado values ('SC', 'SANTA CATARINA');
insert into tb_estado values ('SP', 'SAO PAULO');
insert into tb_estado values ('RJ', 'RIO DE JANEIRO');
select * from tb_estado;

/* Teste da Primary e Unique Key */
insert into tb_estado values ('FG', 'SAO PAULO');
insert into tb_estado values ('RS', 'NOVO HAMBURGO');

/* -------------- */

/* Criação Tabela de Clientes */
create table tb_cliente (id_cliente integer, nm_cliente varchar (50) not null, cd_estado char (2) not null);
alter table tb_cliente add constraint fk_cliente_estado foreign key (cd_estado) references tb_estado;

/* Criação das Regras de Chaves da Tabela */
alter table tb_cliente add constraint pk_cliente primary key (id_cliente);

/* Inserção de Dados tb_cliente */
insert into tb_cliente values (1, 'LUIS', 'SC');
insert into tb_cliente values (2, 'CARLOS', 'RS');
insert into tb_cliente values (3, 'MARIA', 'SP');
insert into tb_cliente values (4, 'LARISSA', 'RJ');
select * from tb_cliente;

/* Teste da Foreign Key */
insert into tb_cliente values (3, 'PEDRO', 'XY');
insert into tb_cliente values (4, 'MARIA', 'ES');


/* -------------- */

select nm_cliente, A.cd_estado, nm_estado from tb_cliente A, tb_estado B where A.cd_estado = B.cd_estado order by nm_estado;

select count (*) from tb_cliente where cd_estado = 'RS';