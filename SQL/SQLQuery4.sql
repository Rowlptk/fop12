/*
pk and fk
*/
use fop12

create table nepali_citizen
(
	id int identity(1,1) primary key,
	name varchar(30) not null,
	c_number int unique not null
)
go
create table nepal_team (
	id int foreign key references nepali_citizen(id),
	team varchar(20) not null
)


select * from nepali_citizen
select * from nepal_team

insert into nepali_citizen(name, c_number) values('K P Oli', 162017136),
('Puspa Kamal Dahal', 162017137), ('Madhav Nepal', 162017138),
('Sher Bahadur Deuba', 162017139)

insert into nepal_team(id, team) values (1, 'football'),(1,'tennis'),
(2, 'cricket'),(4,'kabaddi')

insert into nepal_team(id, team) values(5, 'rugby')


join

create view tableJoin as
select A.name, A.c_number, B.team
from nepali_citizen A
join
nepal_team B
on
A.id = B.id;


select * from nepali_citizen
select * from nepal_team

select * from tableJoin


--constraint, fk, pk, join, view

-- stored procedure
create procedure sp_crud
@id int,
@name varchar(30),
@cNum int,
@stmt varchar(20) = ''
as
Begin
	if @stmt = 'insert'
	begin
		insert into nepali_citizen(name, c_number) values(@name,@cNum);
	end
	if @stmt = 'select'
	begin
		select * from nepali_citizen where id = @id;
	end
	if @stmt = 'update'
	begin
		update nepali_citizen set name = @name, c_number = @cNum where id = @id;
	end
	if @stmt = 'delete'
	begin
		delete from nepali_citizen where id = @id;
	end

end



select * from nepali_citizen

exec sp_crud @id=1, @name='', @cNum=0, @stmt='select'
exec sp_crud @id=1, @name='Khadga Prasad Oli', @cNum=12345678, @stmt='update'
exec sp_crud @id=1, @name='Khadga Prasad Oli', @cNum=12345678, @stmt='update'
exec sp_crud @id=0, @name='Babu Ram Bhattrai', @cNum=12345679, @stmt='insert'
exec sp_crud @id=5, @name='', @cNum=0, @stmt='delete'











































