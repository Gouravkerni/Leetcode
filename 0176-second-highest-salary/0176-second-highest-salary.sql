# Write your MySQL query statement below
SELECT max(salary) AS SecondHighestSalary
from employee
where salary < (
        SELECT max(salary)
    FROM Employee
);

