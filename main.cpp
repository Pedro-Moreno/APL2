// /*
//     Faculdade de Computação e Informática
//     Estrutura de Dados II
//     Professor: Jean M. Laine
//     Aplicação 1 (Parte A e B)
//     Aplicação que ajuda a controlar as calorias e a perda de peso
//     Alunos:
//         - Diego Guedes de Moraes (32148127)
//         - Erick Cauã Ferreira Gomes (32116251)
//         - Laura C. Balbachan dos Santos (32173008)
//         - Pedro Moreno Campos (32172656)
// */

#include <iostream>
#include "AVL.h"
#include "leituraCSV.h"

#include <locale.h>

using namespace std;

int main()
{
    AVL *tree = new AVL();

    leituraCSV(tree);

    cout << tree->GetRoot()->GetID();

    int option;
    string x;

    do
    {
        cout << "\n\n"
             << "\n***********************************"
             << "\n\tMenu - Arvore AVL\n"
             << "\nEntre com a opcao:"
             << "\n ----1: Remover alimento"
             << "\n ----2: Imprimir em ordem"
             << "\n ----3: Imprimir em Pré-ordem"
             << "\n ----4: Imprimir em Pós-ordem"
             << "\n ----0: Sair do programa\n"
             << "\n***********************************"
             << "\n-> ";
        cin >> option;

        switch (option)
        {
        case 1:
        {
            cout << "\n Informe o alimento a ser excluído -> ";
            cin >> x;
            tree->Remove(x);
            break;
        }
        case 2:
        {
            cout << "\n Imprimindo em ordem...";
            tree->TraverseInOrder();
            break;
        }
        case 3:
        {
            // cout << "\n Imprimindo em pr�-ordem...";
            // tree.preOrder(tree.getSource());
            break;
        }
        case 4:
        {
            // cout << "\n Imprimindo em p�s-ordem...";
            // tree.posOrder(tree.getSource());
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