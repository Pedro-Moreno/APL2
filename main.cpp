// /*
//     Faculdade de Computação e Informática
//     Estrutura de Dados II
//     Professor: Jean M. Laine
//     Aplicação 2 (Parte A e B)
//     Alunos:
//         - Diego Guedes de Moraes (32148127)
//         - Erick Cauã Ferreira Gomes (32116251)
//         - Laura C. Balbachan dos Santos (32173008)
//         - Pedro Moreno Campos (32172656)
// */

#include <iostream>
#include <fstream>
#include "AVL.h"
#include "leituraCSV.h"
#include <string>
#include <locale.h>

using namespace std;

void gravarCSV(AVL *arvore, ofstream &arquivoAux)
{
    arquivoAux.open("alimentos_backup.csv");

    arvore->PreencheArquivo(arquivoAux);
}

int main()
{
    AVL *tree = new AVL();
    int option;
    string nomeAlimento, nomeArquivo;
    ofstream arquivoBkp;

    cout << "Digite o nome do arquivo: " << endl;
    cin >> nomeArquivo;

    leituraCSV(tree, nomeArquivo);

    do
    {
        cout << "\n\n"
             << "\n***********************************"
             << "\n\tMenu - Arvore AVL\n"
             << "\nEntre com a opcao:"
             << "\n ----1: Remover alimento"
             << "\n ----2: Imprimir em ordem"
             << "\n ----3: Salvar em um arquivo CSV"
             << "\n ----4: Carregar novo arquivo CSV"
             << "\n ----0: Sair do programa\n"
             << "\n***********************************"
             << "\n-> ";
        cin >> option;

        switch (option)
        {
        case 1:
        {
            cin.ignore();
            cout << "\n Informe o alimento a ser excluído -> ";
            getline(cin, nomeAlimento);
            tree->Remove(nomeAlimento);
            break;
        }
        case 2:
        {
            cout << "\n Imprimindo em ordem...\n";
            tree->TraverseInOrder();
            break;
        }
        case 3:
        {
            cout << "\n Salvando informações em um arquivo CSV de Backup...";
            gravarCSV(tree, arquivoBkp);
            break;
        }
        case 4:
        {
            cout << "Carregando nova árvore";
            tree->Clear();
            leituraCSV(tree, "alimentos_backup.csv");
            break;
        }

        case 0:
        {
            cout << "Saindo do programa \n";
            break;
        }

        default:
            cout << "\n Opcao invalida! \n\n\n";
        } // fim switch
    } while (option != 0);

    return 0;
}