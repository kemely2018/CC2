/*Explique por qu�, dadas las funciones de 4.1 SUM (1, 10.0) es un error de 
sintaxis. (Sugerencia: Piense en la promoci�n y la degradaci�n: la conversi�n 
de argumentos entre tipos en una llamada de funci�n. 
Recuerda que el compilador convierte entre tipos num�ricos
para ti si es necesario.) 
RESPUESTA:
Mezclar y emparejar un int con un doble hace que sea ambiguo lo que uno desea 
llamar. El compilador podr�a convertir 1 a un doble y llamar a la versi�n 
doble de SUM, o podr�a convertir 10,0 en un int y llamar a la versi�n int.*/
