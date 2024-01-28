# Write your MySQL query statement below
select product_id,10 as price 
from products group by product_id having min(change_date)>
'2019-08-16'
union
select product_id,new_price as price from
products where (product_id,change_date) 
in 
(select product_id,max(change_date) from products
 where change_date<='2019-08-16'
 group by product_id);


# # Write your MySQL query statement below
# SELECT product_id, 10 AS price
# FROM Products
# GROUP BY product_id
# HAVING MIN(change_date) > '2019-08-16'
# UNION 
# SELECT product_id, new_price AS price
# FROM Products 
# WHERE (product_id, change_date) 
# IN 
# (SELECT product_id, 
# MAX(change_date)
# FROM Products
# WHERE change_date <= '2019-08-16'
# GROUP BY product_id)