#include <iostream>
#include "classes.h"

int main() {
    Produto produto1("Arroz", 5.0, 1);
    Produto produto2("Feijão", 4.0, 2);

    Estoque estoque;
    estoque.adicionarProduto(produto1, 10);
    estoque.adicionarProduto(produto2, 15);

    CarrinhoDeCompras carrinho;
    carrinho.adicionarProduto(produto1, 3);
    carrinho.adicionarProduto(produto2, 2);

    carrinho.exibirConteudo();

    return 0;
}
