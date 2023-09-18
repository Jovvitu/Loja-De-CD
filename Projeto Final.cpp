

#include<iostream>
#include<vector>
#include<stdio.h>
#include<string.h>
#define TAMMAX 1000
using namespace std;



// as structs
struct cd{
	char artista[40], gravacao[40], genero[40]; 
	int ano;
	char gravadora[40];
	char tipo_de_gravacao[40];
	float preco;
	int uni_estoque;	
}cds[TAMMAX];

struct pessoa{
	char usuario[40];
	float dinheiro;
	
	
}pessoas[20];
// structs


// funão de remover
int busca(int v[], int tamanho, int valor) {
    int i = 0;
    while (i < tamanho && v[i] != valor) {
        i++;
    }
    if (v[i] == valor) {
        return i;
    } else {
        return -1;
    }
}


void menu() {
    cout << "==============\n";
    cout << "a: Adicionar um novo cd\n";
    cout << "r: Remove Elemento\n";
    cout << "l: Lista de Cds \n";
    cout << "c: Area de compras \n";
    cout << "m: ordem do maior preco para o menor \n";
    cout << "n: ordem do menor preco para o menor\n";
    cout << "f: fim \n";
    cout << "==============\n";
}

int main()
{ setlocale(LC_ALL, "Portuguese");
  char op;
  // acrescentar
  int tamanho = 29, acresc_tamanho = 29;
  //remover
  int v[TAMMAX];
  int tam = 0;
  int valor, res, idx;
  
     cout<<"-----Loja de CDS-----"<<endl;
   
   
   
   //---Dados 
   // nome do artista
   strcpy(cds[0].artista, "Michael Jackson");
   strcpy(cds[1].artista, "AC/DC");
   strcpy(cds[2].artista, "Pink Floyd");
   strcpy(cds[3].artista, "Michael Jackson");
   strcpy(cds[4].artista, "Whitney Houston");
   strcpy(cds[5].artista, "Eagles");
   strcpy(cds[6].artista, "Saturday Night Fever");
   strcpy(cds[7].artista, "Fleetwood Mac");
   strcpy(cds[8].artista, "Shania Twain");
   strcpy(cds[9].artista, "Led Zeppelin");
   strcpy(cds[10].artista, "Nirvana");
   strcpy(cds[11].artista, "Alanis Morissette");
   strcpy(cds[12].artista, "Céline Dion");
   strcpy(cds[13].artista, "Mariah Carey");
   strcpy(cds[14].artista, "The Beatles");
   strcpy(cds[15].artista, "Miles Davis");
   strcpy(cds[16].artista, "Bruce Springsteen ");
   strcpy(cds[17].artista, "N Sync");
   strcpy(cds[18].artista, "Lady Gaga ");
   strcpy(cds[19].artista, "Coldplay");
   strcpy(cds[20].artista, "Adele");
   strcpy(cds[21].artista, "Guns N’ Roses");
   strcpy(cds[22].artista, "Metallica");
   strcpy(cds[23].artista, "Dire Straits");
   strcpy(cds[24].artista, "Eric Clapton");
   strcpy(cds[25].artista, "Peter Frampton");
   strcpy(cds[26].artista, "Phil Collins");
   strcpy(cds[27].artista, "Blackpink");
   strcpy(cds[28].artista, "Bebe Rexha");
   // nome do artista
   
   
   
   // nome da gravação
    strcpy(cds[0].gravacao, "Thriller");
    strcpy(cds[1].gravacao, "Back in Black ");
    strcpy(cds[2].gravacao, "The Dark Side of the Moon");
    strcpy(cds[3].gravacao, "Bad");
    strcpy(cds[4].gravacao, "The Bodyguard");
    strcpy(cds[5].gravacao, "Their Greatest Hits");
    strcpy(cds[6].gravacao, "Os Embalos de Sábado à Noite");
    strcpy(cds[7].gravacao, "Rumours");
    strcpy(cds[8].gravacao, "Come on Over");
    strcpy(cds[9].gravacao, "Led Zeppelin IV");
    strcpy(cds[10].gravacao, "Nevermind");
    strcpy(cds[11].gravacao, "Jagged Little Pill");
    strcpy(cds[12].gravacao, "Falling into You");
    strcpy(cds[13].gravacao, "Music Box");
    strcpy(cds[14].gravacao, "Abbey Road ");
    strcpy(cds[15].gravacao, "Kind of Blue");
    strcpy(cds[16].gravacao, "Born In The U.S.A");
    strcpy(cds[17].gravacao, "No Strings Attached ");
    strcpy(cds[18].gravacao, "21");
    strcpy(cds[19].gravacao, "Born This Way");
    strcpy(cds[20].gravacao, "Mylo Xyloto");
    strcpy(cds[21].gravacao, "Appetite For Destruction");
    strcpy(cds[22].gravacao, "Black Album");
    strcpy(cds[23].gravacao, "Brothers in arms");
    strcpy(cds[24].gravacao, "Unplugged");
    strcpy(cds[25].gravacao, "Frampton Comes Alive");
    strcpy(cds[26].gravacao, "Serious Hits ... Live!");
    strcpy(cds[27].gravacao, "SQUARE UP");
    strcpy(cds[28].gravacao, "ALL YOUR FAULT PT 2");
   // nome da gravação
   
   
   
   
   //ano 
   cds[0].ano = 1982;   
   cds[1].ano = 1980; 
   cds[2].ano = 1973;
   cds[3].ano = 1987;
   cds[4].ano = 1992; 
   cds[5].ano = 1976;
   cds[6].ano = 1977;   
   cds[7].ano = 1977; 
   cds[8].ano = 1997;
   cds[9].ano = 1971;
   cds[10].ano = 1991; 
   cds[11].ano = 1995; 
   cds[12].ano = 1996;   
   cds[13].ano = 1993; 
   cds[14].ano = 1969;
   cds[15].ano = 1959;
   cds[16].ano = 1984; 
   cds[17].ano = 2000;
   cds[18].ano = 2011;
   cds[19].ano = 2011;
   cds[20].ano = 2011;   
   cds[21].ano = 1987; 
   cds[22].ano = 1991;
   cds[23].ano = 1985;
   cds[24].ano = 1992; 
   cds[25].ano = 1976;
   cds[26].ano = 1990;   
   cds[27].ano = 2018; 
   cds[28].ano = 2017;

   //ano
   
   // genero musical
   strcpy(cds[0].genero, "Pop, Pós-disco, R&B");   
   strcpy(cds[1].genero, "Hard Rock");
   strcpy(cds[2].genero, "Rock Progressivo");
   strcpy(cds[3].genero, "Pop, Rock, R&B");
   strcpy(cds[4].genero, "Pop, R&B");
   strcpy(cds[5].genero, "Rock, Country, Rock");
   strcpy(cds[6].genero, "Soul, Musica Disco, Balada");
   strcpy(cds[7].genero, "Pop Rock, Soft Rock, Folk Rock");
   strcpy(cds[8].genero, "Country Pop, Rock");
   strcpy(cds[9].genero, "Hard Rock, Blues Rock, Folk Rock");
   strcpy(cds[10].genero, "Grunge, Rock Alternativo");
   strcpy(cds[11].genero, "Rock Alternativo, Pop Rock");
   strcpy(cds[12].genero, "Pop");
   strcpy(cds[13].genero, "Pop, R&B");
   strcpy(cds[14].genero, "Rock");
   strcpy(cds[15].genero, "Jazz Modal");
   strcpy(cds[16].genero, "Heartland Rock, Pop");
   strcpy(cds[17].genero, "Teen Pop, R&B");
   strcpy(cds[18].genero, "Soul, R&B, Pop");
   strcpy(cds[19].genero, "Electropop, Dance");
   strcpy(cds[20].genero, "Rock Alternativo, Rock Eletronico");
   strcpy(cds[21].genero, "Hard Rock, Glam Metal");
   strcpy(cds[22].genero, "Heavy Metal");
   strcpy(cds[23].genero, "Pop, Rock");
   strcpy(cds[24].genero, "Rock Acustico, Blues");
   strcpy(cds[25].genero, "Rock N Roll");
   strcpy(cds[26].genero, "Rock Pop");
   strcpy(cds[27].genero, "Kpop Dance");
   strcpy(cds[28].genero, "Pop");

   //genero musical
   
   
   //gravadora 
   strcpy(cds[0].gravadora, "Epic");
   strcpy(cds[1].gravadora, "Atlantic Records");
   strcpy(cds[2].gravadora, "Haverst Records");
   strcpy(cds[3].gravadora, "Epic");
   strcpy(cds[4].gravadora, "Arista");
   strcpy(cds[5].gravadora, "Asylum Records");
   strcpy(cds[6].gravadora, "Rso Records");
   strcpy(cds[7].gravadora, "Warner Bros");
   strcpy(cds[8].gravadora, "Mercury");
   strcpy(cds[9].gravadora, "Atlantic Record");
   strcpy(cds[10].gravadora, "Dgc");
   strcpy(cds[11].gravadora, "Maverick");
   strcpy(cds[12].gravadora, "Columbia");
   strcpy(cds[13].gravadora, "Columbia");
   strcpy(cds[14].gravadora, "Apple Records");
   strcpy(cds[15].gravadora, "Columbia");
   strcpy(cds[16].gravadora, "Columbia");
   strcpy(cds[17].gravadora, "Jive");
   strcpy(cds[18].gravadora, "Xl");
   strcpy(cds[19].gravadora, "Interscope");
   strcpy(cds[20].gravadora, "Parlophone");
   strcpy(cds[21].gravadora, "Geffen");   
   strcpy(cds[22].gravadora, "Elektra");
   strcpy(cds[23].gravadora, "Vertigo");
   strcpy(cds[24].gravadora, "Reprise");
   strcpy(cds[25].gravadora, "A&M");
   strcpy(cds[26].gravadora, "Atlantic Records");
   strcpy(cds[27].gravadora, "Yg");
   strcpy(cds[28].gravadora, "Warner Bros");
          
   // gravadora
   
   // tipo de gravação
   strcpy(cds[0].tipo_de_gravacao, "Album");
   strcpy(cds[1].tipo_de_gravacao, "Album");
   strcpy(cds[2].tipo_de_gravacao, "Album");
   strcpy(cds[3].tipo_de_gravacao, "Album");
   strcpy(cds[4].tipo_de_gravacao, "Trilha Sonora");
   strcpy(cds[5].tipo_de_gravacao, "Compilação");
   strcpy(cds[6].tipo_de_gravacao, "Trilha Sonora");
   strcpy(cds[7].tipo_de_gravacao, "Album");
   strcpy(cds[8].tipo_de_gravacao, "Album");
   strcpy(cds[9].tipo_de_gravacao, "Album");
   strcpy(cds[10].tipo_de_gravacao, "Album");
   strcpy(cds[11].tipo_de_gravacao, "Album");
   strcpy(cds[12].tipo_de_gravacao, "Album");
   strcpy(cds[13].tipo_de_gravacao, "Album");
   strcpy(cds[14].tipo_de_gravacao, "Album");
   strcpy(cds[15].tipo_de_gravacao, "Album");
   strcpy(cds[16].tipo_de_gravacao, "Album");
   strcpy(cds[17].tipo_de_gravacao, "Album");
   strcpy(cds[18].tipo_de_gravacao, "Album");
   strcpy(cds[19].tipo_de_gravacao, "Album");
   strcpy(cds[20].tipo_de_gravacao, "Album");
   strcpy(cds[21].tipo_de_gravacao, "Album");
   strcpy(cds[22].tipo_de_gravacao, "Album");
   strcpy(cds[23].tipo_de_gravacao, "Album");
   strcpy(cds[24].tipo_de_gravacao, "Ao Vivo");
   strcpy(cds[25].tipo_de_gravacao, "Ao Vivo");
   strcpy(cds[26].tipo_de_gravacao, "Ao Vivo");
   strcpy(cds[27].tipo_de_gravacao, "Ep");
   strcpy(cds[28].tipo_de_gravacao, "Ep");
  
   // tipo de gravação 
   
   // preço
   cds[0].preco = 50.00;
   cds[1].preco = 30.00;
   cds[2].preco = 32.00;
   cds[3].preco = 70.00;
   cds[4].preco = 19.00;
   cds[5].preco = 28.00;
   cds[6].preco = 15.00;
   cds[7].preco = 30.00;
   cds[8].preco = 25.00;
   cds[9].preco = 30.00;
   cds[10].preco = 39.00;
   cds[11].preco = 35.00;
   cds[12].preco = 37.00;
   cds[13].preco = 25.00;
   cds[14].preco = 29.00;
   cds[15].preco = 50.00;
   cds[16].preco = 45.00;
   cds[17].preco = 20.00;
   cds[18].preco = 58.00;
   cds[19].preco = 36.00;
   cds[20].preco = 42.20;
   cds[21].preco = 24.50;
   cds[22].preco = 29.50;
   cds[23].preco = 41.50;
   cds[24].preco = 35.70;
   cds[25].preco = 39.00;
   cds[26].preco = 24.35;
   cds[27].preco = 29.30;
   cds[28].preco = 40.00;
   cds[28].preco = 35.00;
  
   // preço
   
   // unidades em estoque
   cds[0].uni_estoque = 25;
   cds[1].uni_estoque = 20;
   cds[2].uni_estoque = 30;
   cds[3].uni_estoque = 19;
   cds[4].uni_estoque = 22;
   cds[5].uni_estoque = 13;
   cds[6].uni_estoque = 10;
   cds[7].uni_estoque = 13;
   cds[8].uni_estoque = 20;
   cds[9].uni_estoque = 28;
   cds[10].uni_estoque = 14;
   cds[11].uni_estoque = 19;
   cds[12].uni_estoque = 12;
   cds[13].uni_estoque = 30;
   cds[14].uni_estoque = 10;                  
   cds[15].uni_estoque = 12;
   cds[16].uni_estoque = 7;
   cds[17].uni_estoque = 9;
   cds[18].uni_estoque = 19;
   cds[19].uni_estoque = 22;
   cds[20].uni_estoque = 33;
   cds[21].uni_estoque = 26;
   cds[22].uni_estoque = 20;
   cds[23].uni_estoque = 18;                  
   cds[24].uni_estoque = 12;
   cds[25].uni_estoque = 9;
   cds[26].uni_estoque = 19;
   cds[27].uni_estoque = 10;
   cds[28].uni_estoque = 15;
 
   // unidades em estoques
   
   
   //----Dados
   
   
do{

menu();
        cout << "Escolha: ";
        cin >> op;
switch(op){
  case 'a':  // adcionar os elementos.
    
        if (tamanho == TAMMAX) {
            cout << "Nao ha espaco!\n";
            } 
		else {
			
			cout<<"\n-------Processando um novo cd\n";
            cout << "Informe o nome do artista: ";
            cin >> cds[acresc_tamanho].artista;
            cout << "Informe o nome da gravação: ";
            cin >> cds[acresc_tamanho].gravacao;
            cout << "Informe o ano da gravação: ";
            cin >> cds[acresc_tamanho].ano;
            cout << "Informe o genero da gravação: ";
            cin >> cds[acresc_tamanho].genero;
            cout << "Informe o nome da gravadora: ";
            cin >> cds[acresc_tamanho].gravadora;
            cout << "Informe o tipo de gravação: ";
            cin >> cds[acresc_tamanho].tipo_de_gravacao;
            cout << "Informe o preço da gravação: ";
            cin >> cds[acresc_tamanho].preco;
            cout << "Informe o quanto há do produto no estoque: ";
            cin >> cds[acresc_tamanho].uni_estoque;
            cout << "Valor inserido com sucesso!\n";
            tamanho++;
            acresc_tamanho++;
            }

            
    break;
     
  case 'r':  // remover elementos.
            cout << "Informe valor: ";
            cin >> valor;
            
            if (res < 0)
            {   
                cout << "Elemento nao encontrado!\n";
            }
            else{
            	
                cout << "Elemento removido com sucesso!\n";
            }
            break;
  case 'f':  // encerra as escolhas
     
	 cout<<"\nFinalizando...\n";
	 break;
     
  case 'l': // lista de elementos
    cout<<"\nARTISTA   ANO   GENERO   GRAVADORA   TIPO DE GRAVAÇÃO   PREÇO   ESTOQUE\n";
	for( int i=0; i<tamanho; i++)
      { 
	    cout<<i+1<<"--"<<cds[i].artista<<"  ";
      	cout<<cds[i].ano<<"  ";
      	cout<<cds[i].genero<<"  ";
      	cout<<cds[i].gravadora<<"  ";
      	cout<<cds[i].tipo_de_gravacao<<"  ";
      	cout<<"R$:"<<cds[i].preco<<" ";
      	cout<<cds[i].uni_estoque<<"  ";
      	cout<<"\n";
      	
	  }
	  
      
     break;
	 
  case 'c': // compras
     break;
  
  case 'm':
	 break;
	 
  case 'n':
	 break;
	   	 
  case 'z':
     break; 	    
  default:
     cout<<"opção Invalida\n";	 	 	  	

}}while(op != 'f');

system("Pause");
return 0;
}
