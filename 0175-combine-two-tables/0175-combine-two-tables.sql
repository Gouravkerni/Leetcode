select  firstname, lastname, city,state
from person
left join address
on Person.personId = Address.personId;