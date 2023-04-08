#include"header_database.h"

#ifndef header_estoque_h
#define header_estoque_h 

int buscaProduto(int id_produto, Produtos produto){

    int cont;

    for(cont = 0; cont < size_stock; cont++){

        if(id_produto == produto_posto[cont].identificacao_produto){

            if(produto_posto[cont].quantidade > 0){

                strcpy(produto.nome, produto_posto[cont].nome);
                produto.identificacao_produto = produto_posto[cont].identificacao_produto;
                produto.quantidade = produto_posto[cont].quantidade;
                produto.preco = produto_posto[cont].preco;
                produto.cat.identificacao_categoria_pai = produto_posto[cont].cat.identificacao_categoria_pai;
                produto.cat.identificacao_categoria = produto_posto[cont].cat.identificacao_categoria;
                strcpy(produto.cat.nome_categoria, produto_posto[cont].cat.nome_categoria);

                return 1;

            };

        };

    };

    return 0;

};

// void pos_venda(Produtos *produto){

//     for (int cont = 0; cont < size_stock; cont++){

//         if (produto->identificacao_produto == produto_posto[cont]->identificacao_produto){



//         };

//     };

// };

#endif