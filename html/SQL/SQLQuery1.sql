create database fop12;

use fop12;

create table student_details
(
	student_id int,
	student_name varchar(20),
	student_contact Numeric(10,0),
)

select * from student_details;

insert into student_details(student_id, student_name, student_contact)
values(101,'Rabindra Khatri', 9801200111),
(102, 'Anil Tamang', 9801200110),
(103, 'Keshab Nepali',9801200112)

insert into student_details(student_id, student_name, student_contact)
values(104,'Samrat Hona', 980120011)

select * from student_details where student_id = 101
select student_contact from student_details where student_name = 'Anil Tamang'




