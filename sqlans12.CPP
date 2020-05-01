Program of SQL of Q28 

Select *
From employee
Where deptno=20;
Select *
From employee
Where job=”clerk” or salary between 1000 and 2000

Select name
From employee
Order by salary;

Select name,sal,deptno
From employee
Where job=”manager”;

Select count(*)
From employee
Where salary<3000;
Insert into employee(empno,name,job,mgr,hiredate,sal,deptno)
Values(11,”miller”,”manager”,7698,{25/05/98},4300,20);

 OUTPUT : 	2
5000
9000
4500

select name
from employee
where deptno=10 or deptno=20;
UNION
Select deptno
From department
Where deptno=10 or deptno=20;

Select sum(sal),distinct deptno
From employee;

Select sum(sal),name,distinct  deptno
From employee
Where name=’%N’ or name=’%P’;

Select sum(sal),distinct deptno
From employee
Where sum(sal)>20000;
	

