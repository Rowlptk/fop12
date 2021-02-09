use fop12

create table account
(
	id int,
	name varchar(20),
	balance money
)

--alter table account drop column id
--alter table account add id int identity(1,1)

insert into account(name, balance) values ('abc', 100), ('xyz', 200)

select * from account
insert into account(name, balance) values ('abcd', 200)

create trigger myTrigger
on account
for insert
as
	if (select balance from inserted) = 250
	begin
		print 'this amount is not allowed!'
		rollback transaction;
	end

delete from account where id = 9

select * from account

create trigger myTrigger1
on account
for delete
as
	if (select balance from deleted) = 200
	begin
		print 'this amount cannot be removed!'
		rollback transaction;
	end

drop trigger myTrigger


create table contact_keeper
(
	name varchar(20),
	number bigint unique not null
)

insert into contact_keeper(name, number)
values('ABC', 9801200111),('XYZ',9801200112)

select * from contact_keeper

begin try 
	--insert into contact_keeper(name, number) values ('qwerty', 9801200111);
	print 22/0;
end try
begin catch
	print 'Error'
	print ERROR_MESSAGE();
	print ERROR_NUMBER();
	print Error_severity();
end catch

drop database fop12