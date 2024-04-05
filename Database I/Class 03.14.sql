create table tb_estado (cd_estado char(2), nm_estado varchar(30) not null);
create table tb_cliente (id_cliente integer, nm_cliente varchar (50) not null,
						cd_estado char(2) not null);

alter table tb_estado add constraint pk_cdEstado primary key (cd_estado);
alter table tb_estado add constraint uk_nmEstado unique (nm_estado);
alter table tb_cliente add constraint pk_idCliente primary key (id_cliente);
alter table tb_cliente add constraint fk_cdEstado foreign key (cd_estado) references tb_estado; 
alter table tb_cliente add nu_idade integer not null;

insert into tb_estado values ('RS', 'RIO GRANDE DO SUL');
insert into tb_estado values ('SC', 'SANTA CATARINA');
insert into tb_estado values ('RJ', 'RIO DE JANEIRO');
insert into tb_estado values ('SP', 'SAO PAULO');

insert into tb_cliente values ('1', 'LUIS', 'RS', 55);
insert into tb_cliente values ('2', 'PEDRO', 'SC', 16);
insert into tb_cliente values ('3', 'DAVID', 'RJ', 19);
insert into tb_cliente values ('4', 'MARTA', 'RS', 32);
insert into tb_cliente values ('5', 'CARLA', 'RS', 40);
insert into tb_cliente values ('6', 'JOSE', 'SC', 28);

select * from tb_estado;
select * from tb_cliente;

/* Quantas pessoas existem por estado? */
select cd_estado, count (*) from tb_cliente
						   group by cd_estado;
/* Liste os estados utilizados na tb_cliente */
select distinct cd_estado from tb_cliente;

/* */
select nm_estado, count (*) as total from tb_cliente A, tb_estado B
				  where A.cd_estado = B.cd_estado
				  group by nm_estado
				  order by nm_estado;
				  
/* Qual a maior idade na tabela tb_cliente */
select MAX (nu_idade) from tb_cliente;

/* Qual a média das idades na tabela tb_cliente */
select AVG (nu_idade) from tb_cliente;

/* Qual o valor total da soma das idades na tabela tb_cliente */
select SUM (nu_idade) from tb_cliente;

/* Listar o estado e a quantidade de clientes vinculados a este, porém somente aqueles que possuírem mais que 1 cliente */
select nm_estado, count (*) as total from tb_cliente A, tb_estado B
				  where A.cd_estado = B.cd_estado
				  group by nm_estado
				  having count (*) > 1;
				  
/* Qual o nome do cliente mais velho */
select MAX (nu_idade) from tb_cliente;
select nm_cliente from tb_cliente
                  where nu_idade = (select MAX (nu_idade) from tb_cliente);
insert into tb_cliente values ('7', 'JOAQUIM', 'RS', '80');
select nm_cliente from tb_cliente
                  where nu_idade = (select MAX (nu_idade) from tb_cliente);
				  
/* Qual o nome do cliente mais novo */
select nm_cliente from tb_cliente
				  where nu_idade = (select MIN (nu_idade) from tb_cliente);
				  
/* Liste o nome dos clientes que comecem com L */
select nm_cliente from tb_cliente where nm_cliente like 'L%';

/*  */
insert into tb_cliente values ('8', 'Maria', 'RS', '30');


/* Liste os nomes que tenham a letra D no final do nome */
select nm_cliente from tb_cliente where nm_cliente like '%D';

/* Liste os nomes que tenham a letra A no nome */
select nm_cliente from tb_cliente where nm_cliente like '%A%'; /* Não aparece a Maria */
select nm_cliente from tb_cliente where nm_cliente ilike '%A%';
select nm_cliente from tb_cliente where upper (nm_cliente) like '%A%';

/* underline */
select * from tb_cliente;
select nm_cliente from tb_cliente where nm_cliente ilike '_AR%';

/* Liste o nome das pessoas que possuam letra minúscula no nome */
select nm_cliente from tb_cliente where nm_cliente != UPPER(nm_cliente);

/* Liste o código do estado que mais possui clientes */
select cd_estado, count (*) as total from tb_cliente
				  group by cd_estado;
select MAX(total) from (select cd_estado, count(*) as total from tb_cliente
					   group by cd_estado) X;
select cd_estado from (select cd_estado, count(*) as total from tb_cliente
					   group by cd_estado) Y 
					   where total = 
					   (select MAX(total) from (select cd_estado, count(*) as total from tb_cliente
					   group by cd_estado)X);
/* outra forma de fazer a lista e criação de View */
create table tb_total_estado as select cd_estado, 
                  count (*) as total from tb_cliente
				  group by cd_estado;
select * from tb_total_estado;
create view vw_total_estado as select cd_estado, 
                  count (*) as total from tb_cliente
				  group by cd_estado;
select * from vw_total_estado;
insert into tb_cliente values ('9', 'CARINE', 'RS', 34);
select * from tb_total_estado;
select * from vw_total_estado;
select cd_estado from (select cd_estado, count(*) as total from tb_cliente
					   group by cd_estado) Y 
					   where total = 
					   (select MAX(total) from vw_total_estado);
					   
/* Criar uma View que liste o nome e a idade dos clientes */
create view vw_cliente as select nm_cliente, nu_idade
					   from tb_cliente;
select * from vw_cliente;