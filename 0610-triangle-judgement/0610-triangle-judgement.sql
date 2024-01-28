# Write your MySQL query statement below
select x,y,z, IF(x+z>y and x+y>z and y+z>x,"Yes","No") as triangle from triangle;