(select u.name as results from MovieRating t
join Users u on t.user_id = u.user_id
group by t.user_id 
ORDER BY count(t.user_id) desc, u.name asc
limit 1)

union all

(select m.title as results from MovieRating t
join Movies m on t.movie_id = m.movie_id
where t.created_at BETWEEN "2020-02-01" AND "2020-02-29"
group by t.movie_id
ORDER BY avg(t.rating) desc, m.title asc limit 1)