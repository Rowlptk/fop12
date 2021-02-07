-- comment : 
-- create database

create database fop12;

-- use database
use fop12;

-- create table
create table students
(
	std_id int,
	std_name varchar(50)
)

-- view table
select * from students

-- insert into table
insert into students(std_id, std_name)
values(101,'Anil'),(102,'Samrat'),(103,'Rabindra')


-- modify datatype in a column
alter table students alter column std_id varchar(10);

select std_name from students

insert into students
values('101A','Thanos') 

select * from students

-- add column to table
alter table students add contact bigint;

-- update command
update students
set contact = 9801200111
where std_id = '101'

-- delete column
alter table students drop column contact

select * from students

-- delete rows
delete from students where std_id = '101A'

-- empty table
truncate table students

-- delete table
drop table students

-- delete database
drop database fop12

use fop12














