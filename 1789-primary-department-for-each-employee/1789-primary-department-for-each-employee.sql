# Write your MySQL query statement below
select employee_id,department_id 
from employee where primary_flag='Y'
union
select employee_id,department_id
from employee group by employee_id
having count(department_id)=1;


# SELECT employee_id, department_id
# FROM Employee 
# WHERE primary_flag = 'Y'
# UNION
# SELECT employee_id, department_id
# FROM Employee 
# GROUP BY employee_id
# HAVING COUNT(employee_id) = 1
# ORDER BY employee_id;







