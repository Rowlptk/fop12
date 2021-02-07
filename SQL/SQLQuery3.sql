create database fop12

use fop12

-- constraints
create table school (
	id int identity(101,1),
	name varchar(50) not null,
	contact numeric(10, 0) unique not null,
	email varchar(100) null,
	fee money default 1000,
	mark int not null check(mark>=40 and mark<=100)
)

select * from school

insert into school(name,contact,email,fee,mark)
values('Anil',9801200111, 'anil@anil.com',2030.99, 90),
('Samrat', 9801200112, 'samrat@sam.com', 1500.8, 89)

-- error in not null
insert into school(contact,email,fee,mark)
values(9801200113,'a@a.com',1100,77)

-- error in unique
insert into school(name,contact,email,fee,mark)
values('Thanos',9801200111,'a@a.com',1100,77)

-- null case
insert into school(name,contact,fee,mark)
values('Thanos',9801200113,1100,77)

-- default value
insert into school(name,contact,mark)
values('Thanos2',9801200114,77)

-- error in check
insert into school(name,contact,mark)
values('Thanos3',9801200115,12)

select * from school


Fk and pk