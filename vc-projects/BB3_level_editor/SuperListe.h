/******************************************************************
*
* 
*		----------------
*		   SuperListe.h
*		----------------
*			
*
*		Liste de pointeurs (void*) doublement cha�n�e
*		MAIS � sens unique
*
*
*		Prosper / LOADED -   V 1.0 - 28 Juin 2000
*
*
*
******************************************************************/


#ifndef _SuperListe_
#define _SuperListe_

//-----------------------------------------------------------------------------
//		Structure CELLULE pour rendre la liste plus jolie
//-----------------------------------------------------------------------------

struct CELLULE
{
	CELLULE *	prev;
	void *		data;
	CELLULE *	next;
};

//-----------------------------------------------------------------------------
//		La classe SuperListe en personne
//-----------------------------------------------------------------------------

class SuperListe
{
protected:
	CELLULE *	tete;		// Tete de la liste
	CELLULE *	obs;		// Observateur
	int			nb_elem;	// Nombre d'�lements

public:
	//
	// Constructeur normal
	//
	SuperListe();
	
	//
	// Met l'observateur sur la t�te
	//
	void 	start();

	//
	// Avance l'observateur
	//
	void 	suivant();

	//
	// Rajoute une cellule en t�te de liste
	//
	void	ajoute( void * nouvo);

	//
	// Supprime la cellule observ�e 
	//
	// ! ATTENTION !
	//
	// La suppression avance l'observateur !!!
	//
	void	supprime();

	//
	// Supprime la cellule observ�e, mais pas la valeur contenue
	//
	void *	supprimePorc();	

	//
	// Vide la liste
	//
	void	vide();

	//
	// Renvoit le nombre d'�l�ments contenus
	//
	int		taille();

	//
	// Indique si la fin de la liste a �t� atteinte
	//
	bool	fin();

	//
	// Indique VRAI si la liste est vide (ne contient aucune cellule)
	//
	bool	estVide();

	//
	// Renvoit la valeur de la cellule observ�e
	//
	void *	info();

	void	(trier( int (*fonc)( const void *, const void*)));
};

#endif
