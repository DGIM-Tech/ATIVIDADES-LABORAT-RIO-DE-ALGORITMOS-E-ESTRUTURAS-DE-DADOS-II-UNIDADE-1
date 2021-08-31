#include <stdio.h>
#include <iostream>
using namespace std;
typedef int chave;

class Node
{
private:
	chave K;
	Node* esq;
	Node* dir;

public:
	Node(chave K)
	{
		this->K = K;
		this->dir = 0;
		this->esq = 0;
	}

	void setEsq(Node* n)
	{
		esq = n;
	}
	void setDir(Node* n)
	{
		dir = n;
	}

	Node* getEsq()
	{
		return esq;
	}
	Node* getDir()
	{
		return dir;
	}
	chave getChave()
	{
		return K;
	}
};

class arvore
{
public:
	Node* raiz;

public:
	arvore()
	{
		raiz = 0;
	};
	Node* getRaiz()
	{
		return raiz;
	}
void setraiz(Node* n){
		raiz = n;
	}

	//0%
	void visitar(Node*);

	//Implementado
	void inserir(chave);
	Node* inserirRecursivo(Node* n, chave ch);

	//8%
	bool contem(chave);
	bool contemRecursivo(Node* n, chave ch);

	//15%

	Node* buscar(int ch)
	{
		if (getRaiz() == NULL)
			return  NULL;
		Node* atual = getRaiz();
		while (atual->getChave() != ch)
		{
			if(ch < atual->getChave() ) atual = atual->getEsq();
			else atual = atual->getDir();
			if (atual == NULL)
				return NULL;
		}
		return atual;

	}

	//15%

	bool apagar(int v)
	{
if (getRaiz() == NULL)
			return false;
		Node *atual = getRaiz();
		Node *pai = getRaiz();
		bool filho_esq = true;
		while(atual->getChave() != v)
		{
			
			pai = atual;
			if(v < atual->getChave())
			{
				atual = atual->getEsq();
				filho_esq = true;
			}
			else
			{
				atual = atual->getDir();
				filho_esq = false;
			}
			if (atual == NULL)
				return false;
		}

if (atual->getEsq() == NULL && atual->getDir() == NULL) {
 if (atual == getRaiz())
   raiz = NULL;
    else if (filho_esq) {
	pai->setEsq(NULL);
	} 
    else pai->setDir(NULL);
	}
	else if (atual->getDir() == NULL)
	{
		if(atual == getRaiz()) 
		setraiz(atual->getDir());
	else if (filho_esq) pai->setEsq( atual->getEsq()); 
			else pai->setDir(atual->getEsq()); 
	}
    else if (atual->getEsq() == NULL)
		{
			if (atual == getRaiz()) setraiz(atual->getDir()); 
			else if (filho_esq) pai->setEsq(atual->getDir()); 
			else pai->setDir(atual->getDir()); 
		}
		else
		{
			Node *sucessor = node_sucessor(atual);
		
			if (atual == getRaiz()) setraiz(sucessor); // se raiz
			else if(filho_esq) pai->setEsq(sucessor); // se for filho a esquerda do pai
			else pai->setDir( sucessor); 
			sucessor->setEsq(atual->getEsq()) ; 
		}

		return true;
	}
		Node *node_sucessor(Node *apaga)   // O parametro é a referencia para o No que deseja-se apagar
	{
		Node *paidosucessor = apaga;
		Node *sucessor = apaga;
		Node *atual = apaga->getDir(); // vai para a subarvore a direita

		while (atual != NULL)   // enquanto nao chegar no Nó mais a esquerda
		{
			paidosucessor = sucessor;
			sucessor = atual;
			atual = atual->getEsq(); 
		}
		
		if (sucessor != apaga->getDir())   // se sucessor nao é o filho a direita do Nó que deverá ser eliminado
		{
			paidosucessor->setEsq(sucessor->getDir()); // pai herda os filhos do sucessor que sempre serão a direita
		

			sucessor->setDir( apaga->getDir()); 
		
		}
		return sucessor;
	}

	//5%
	int maiorElemento(){
		 Node *atual = getRaiz();
    Node *anterior = NULL;
    while (atual != NULL) {
      anterior = atual;
      atual = atual->getDir();
    }
    return anterior->getChave();
  }


	int menorElemento()
	{
		Node *atual = getRaiz();
	Node *anterior = NULL;
		while (atual != NULL)
		{
			anterior = atual;
			atual = atual->getEsq();
		}
		return anterior->getChave();
	}
	//Implementado
	int contElementos();
	int contElementos(Node*);

	//7%
	int altura(Node *atual)
	{
		if(atual == NULL || (atual->getEsq() == NULL && atual->getDir() == NULL))

			return 0;
		else
		{
			if (altura(atual->getEsq()) > altura(atual->getDir()))
				return ( 1 + altura(atual->getEsq()) );
			else
				return ( 1 + altura(atual->getEsq()) );
		}

	}

	//8%
	bool isCheia();

	//8%
	bool isCompleta();

	//15%

	void inOrdem(Node *no)
	{
		if(no != NULL)
		{
			inOrdem(no->getEsq());
			cout << no->getChave() << " ";
			inOrdem(no->getDir());


		}

	}

	void preOrdem(Node *atual)
	{
		if(atual != NULL)
		{
			cout << atual->getChave() << " ";
			preOrdem(atual->getEsq());
			preOrdem(atual->getDir());
		}

	}

	void posOrdem(Node *atual)
	{
		if(atual != NULL)
		{
			posOrdem(atual->getEsq());
			posOrdem(atual-> getDir());
			cout << atual->getChave() << " ";
		}
	}


	//12%
	void largura();

	//7%
	void toList();

	//Desafio(extra) - 20%
	void balancear();
};

void arvore::inserir(chave k)
{
	raiz = inserirRecursivo(raiz, k);
}

Node* arvore::inserirRecursivo(Node* n, chave k)
{
	if (n == 0)
	{ 
		n = new Node(k);
	}
	else if (k > n->getChave())
	{
		n->setDir(inserirRecursivo(n->getDir(), k));
	}
	else if (k < n->getChave())
	{
		n->setEsq(inserirRecursivo(n->getEsq(), k));
	}
	return n;
}

int arvore::contElementos()
{
	return contElementos(raiz);
}

int arvore::contElementos(Node* alvo)
{
	if (alvo == 0)
	{
		return 0;
	}
	else
	{
		return 1 + contElementos(alvo->getEsq()) + contElementos(alvo->getDir());
	}
}
void menu()
{
	printf("1 - para inserir\n");
	printf("2 - para exibir a arvore\n");
	printf("3 - para busca elemento\n");
	printf("4 - para remover\n");
	printf("5 - para sair\n");
}
int main()
{
	int op, chave;
	arvore arv;

	menu();
	scanf("%d", &op);
	while(op != 5)
	{
		if(op == 1)
		{

   arv.inserir(6);
    arv.inserir(4);
    arv.inserir(2);
    arv.inserir(1);
    arv.inserir(3);
    arv.inserir(5);
    arv.inserir(7);
						
			printf("ARVORES INSERIDA COM SUCESSO \n");
		}
		if(op == 2)
		{

			printf("Percorrendo em ordem...\n");
			printf("\n");
			printf("em ordem: ");
			arv.inOrdem(arv.getRaiz());
			printf("\n");
			printf("em pre ordem: ");
			arv.preOrdem(arv.getRaiz());
			printf("\n");
			printf("em pos ordem: ");
			arv.posOrdem(arv.getRaiz());
			printf("\na altura da arvore e: %d \n", arv.altura(arv.raiz));
			printf("o valor menor e: %d\n", arv.menorElemento());
			printf("o maior elemento da avore e: %d", arv.maiorElemento());
			int cont = arv.contElementos();
			printf("\nos elemtos da arvore sao: %d \n", cont);
			printf("\n");
		}
		if(op == 3)
		{

			printf("informe o valor que deseja busca \n");
			scanf("%d", &chave);
			if( arv.buscar(chave) != NULL )
				printf("Valor Encontrado e: %d \n", chave);
			else
				printf(" Valor nao encontrado! \n");
		}
	if(op == 4)
	{
		printf("Informe que deseja remover \n");
		scanf("%d", &chave);
		if ( !arv.apagar(chave) )
			cout << "\n Valor nao encontrado!";
	}

		menu();
		scanf("%d", &op); 
	}
	printf("saindo....");
	return 0;
}
