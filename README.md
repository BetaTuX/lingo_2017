# lingo_2017
Projet de 1ère année. Le but était de réaliser un 'lingo' pour jouer seul face à l'ordinteur.

*Projet réalisé en 4 heures lors d'un examen*

## Comment jouer ?
Pour lancer le jeu il suffit de donner en paramètre à l'éxécutable *lingo* un fichier contenant des mots différents.

**EXEMPLE** (lingo.txt):
```
pangolin
pantalon
tonnerre
banane
pomme
```

ensuite vous exécutez la commande
```bash
./lingo lingo.txt
```

les caractères remplacés par :
- '*' : caractère faux
- '?' : caractère existant dans la chaine, mais mal placé
- sinon, le caractère est affiché car il est valide et bien placé
