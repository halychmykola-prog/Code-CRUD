#include <iostream>
using namespace std;

void aggiunta(int v[], int dim)
{
    
}

void visualizzazione(int v[], int dim)
{
    cout<<"Array visualizzato:";
    for(int i=0;i<dim;i++)
    {
        if(i>9 && i<20)
            cout<<endl;
        if(i>19 && i<30)
            cout<<endl;
        if(i>29 && i<40)
            cout<<endl;
        if(i>39 && i<50)
            cout<<endl;
            
        cout<<" ["<<v[i]<<"]";
        
    }
    
    
    
}

void modifica(int v[], int dim)
{
    
}

void cancellazione(int v[], int dim)
{
    
}






int main()
{
	int v[50] = {12, 45, 3, 67, 29, 54, 1, 70, 18, 39, 22, 60, 7, 41, 33, 9, 55, 26, 48, 14,
               62, 5, 37, 20, 69, 11, 52, 30, 16, 44, 8, 63, 24, 58, 2, 35, 47, 13, 40, 21,
               66, 10, 53, 28, 34, 59, 6, 42, 19, 50};
	int dimension=sizeof(v)/sizeof(v[0]);
	
	
	
	cout<<"Un codice crud per lavorare con gli array"<<endl<<endl;
	char option=0;
	
	do
	{
	    cout<<"Opzioni: "<<endl;
		cout<<"   Per fare fare aggiunta, premi 'C'."<<endl<<"   Per visualizzare array, premi '2'."<<endl<<"   Per fare modifica veloce di array premi 'U'"<<endl;
		cout<<"   Per cancellare un elemento di array premi 'D'."<<endl<<"   Per uscire dal menu premi '0' "<<endl<<endl;
		
		cout<<"Quale operazione vuoi fare? Inserisci la lettera o la cifra: ";
		cin>>option;
		
		cout<<endl;
		
		
		switch(option)
		{
		    case 2: 
		        visualizzazione(v, dimension);
		        break;
		    
		        
		    
		}
		
		
		
		
		
		
	}while(option!=0);

    return 0;
}

/*(C) aggiunta
(R) visualizzazione
(U) modifica
(D) cancellazione*/