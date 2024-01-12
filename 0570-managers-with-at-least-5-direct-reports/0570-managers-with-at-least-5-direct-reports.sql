# Write your MySQL query statement below
SELECT e.name FROM Employee e 
JOIN Employee  ep ON e.id = ep.managerId 
GROUP BY e.name, e.id HAVING COUNT(ep.id) >= 5;
