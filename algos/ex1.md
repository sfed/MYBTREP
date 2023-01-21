Algorithme calculVitesse; 

Var distance, duree, vitesse : Entier; 
Début 

distance ← 0; 
duree ← 0; 
vitesse ← 0; 

Ecrire (" Donnez la distance parcourue en kilomètre ") ; 
lire(distance) ;  
Ecrire ("Donnez la durée de la course en minutes") ;  
lire(duree) ;  

vitesse = distance * 60 /duree

Ecrire ("votre vitesse est " &vitesse) ;  

Fin 