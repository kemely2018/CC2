/*Explique por qué, dadas las funciones de 4.1 SUM (1, 10.0) es un error de 
sintaxis. (Sugerencia: Piense en la promoción y la degradación: la conversión 
de argumentos entre tipos en una llamada de función. 
Recuerda que el compilador convierte entre tipos numéricos
para ti si es necesario.) 
RESPUESTA:
Mezclar y emparejar un int con un doble hace que sea ambiguo lo que uno desea 
llamar. El compilador podría convertir 1 a un doble y llamar a la versión 
doble de SUM, o podría convertir 10,0 en un int y llamar a la versión int.*/
