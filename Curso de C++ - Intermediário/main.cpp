
/*
    Curso de C++ - Intermediário

        - Link: https://www.udemy.com/home/my-courses/learning/
*/

// Bibliotecas usadas:

    #include <iostream>
    #include <bits/stdc++.h>

int main()
{
    // ============================== 4.Hello world! ==============================

    std :: cout << "\n\n4.Hello world!" ;

    // ============================== 5.Declarando variáveis ==============================

    int idade = 20 ;
    float pi = 3.14 ;

    std :: cout << "\n\n5.Idade: " << idade
                << "\n  Pi...: "        << pi ;

    // ============================== 6.Operadores ==============================

    int var , n1 = 10 , n2 = 20 ;
    float r = ( float ) n1 / n2 ;

    std :: cout << "\n\n6.Var: " << var
                << "\n\nResultado = N1 / N2 "
                << "\nResultado = " << n1 << " / " << n2
                << "\nResultado = " << r ;

    n1++    ; std :: cout << "\n\nN = " << n1 ;
    n1 += 5 ; std :: cout << "  \nN = " << n1 ;
    n1 -= 5 ; std :: cout << "  \nN = " << n1 ;
    n1 *= 5 ; std :: cout << "  \nN = " << n1 ;
    n1 /= 5 ; std :: cout << "  \nN = " << n1 ;

    n1 =   10 + 20   / 2 ; std :: cout << "\n\nN = " << n1 ;
    n1 = ( 10 + 20 ) / 2 ; std :: cout << "  \nN = " << n1 ;

    // ============================== 7.Variável caractere( char ) ==============================

    n1 = 10 ;
    n2 = -n1 ;

    std :: cout << "\n\n7.N1: " <<   n1
                << "  \n  N2: " <<   n2
                << "  \n  N1: " <<   n1++
                << "  \n  N1: " << ++n1 ;

    n2 =   n1++ ; std :: cout << "\n  N2: " << n2 ;
    n2 = ++n1   ; std :: cout << "\n  N2: " << n2 ;

    char c1 = 'a' , c2 = 'b' , c3 = '\''  ;
    int soma = c1 + c2 ;

    std :: cout << "\n\nC1: " << c1
                << "  \nC2: " << c2
                << "  \nC3: " << c3

                << "\n\nInt c1: " << ( int )c1
                << "  \nInt c2: " << ( int )c2

                << "\n\nInt a + b : " << soma ;

    // ============================== 8.Declaração condicional if parte 1 ==============================

    int dinheiro = 20 ;

    if ( dinheiro > 10 ) { std :: cout << "\n\n8.Eu vou ao cinema." ; }

    dinheiro = 9 ;

    if ( dinheiro > 10 ) { std :: cout << "\nEu vou ao cinema."     ; }
    else                 { std :: cout << "\nEu nao vou ao cinema." ; }

    n1 = 10 ;

    if ( n1 == 10 ) { std :: cout << "\n\nN1 eh igual a 10.         " ; }
    if ( n1 >  10 ) { std :: cout << "\n\nN1 eh maior que 10.       " ; }
    if ( n1 <  10 ) { std :: cout << "\n\nN1 eh menor que 10.       " ; }
    if ( n1 >= 10 ) { std :: cout << "\n\nN1 eh maior ou igual a 10." ; }

    if ( n1 != 10 )
    {
        std :: cout << "\n\nN1 eh diferente de 10." ; n1++ ;
    }
    std :: cout << "\n\nN1: " << n1 ;

    // ============================== 9.Declaração condicional if parte 2 ==============================

    if ( n1 > 5 )
    {
        if ( n1 <= 10 ) { std :: cout << "\n\n9.N1 eh maior que 5 e menor ou igual a 10." ; }
    }
    if ( ( n1 % 2 == 0 ) && n1 < 20 ) { std :: cout << "\n\nN1 eh par e menor que 20. " ; }
    if ( ( n1 % 2 == 0 ) || n1 < 20 ) { std :: cout << "\n\nN1 eh par ou menor que 20." ; }

    if ( ! ( n1 % 2 == 0 ) ) { std :: cout << "\n\nN1 eh impar." ; }

    bool bool_var = 10 > 20 , var1 = false , var2 = true ;

    std :: cout << "\n\nBool_var( 10 > 20 ) eh " << bool_var ;

    if (   bool_var ) { std :: cout << " , logo eh verdadeiro." ; }
    if ( ! bool_var ) { std :: cout << " , logo eh falso.     " ; }

    if ( var1 and var2 )
    {
        std :: cout << "\n\nAprendendo C++." ;
    }

    // ============================== 10.Comando switch ==============================

    switch( n1 )
    {
        case 9  : std :: cout << "\n\n10.N1: 9 " ; break ;
        case 10 : std :: cout << "\n\n10.N1: 10" ; break ;
        case 11 : std :: cout << "\n\n10.N1: 11" ; break ;

        default : std :: cout << "\n\n10.Numero invalido." ;
    }
    char op = 'Q' ;

    switch( op )
    {
        case 'Q' : std :: cout << "\n\nVoce saiu do sistema." ; break ;
        case 'q' : std :: cout << "\n\nVoce saiu do sistema." ; break ;

        default : std :: cout << "\n\nOpcao invalida." ;
    }

    std :: cout << "Informe uma conta , ex: 1 + 1.\n\nConta: " ;
    std :: cin >> n1 >> op >> n2 ; fflush( stdin ) ;

    switch( op )
    {
        case '+' : std :: cout << n1 << ' ' << op << ' ' << n2 << " = " << n1 + n2 ; break ;
        case '-' : std :: cout << n1 << ' ' << op << ' ' << n2 << " = " << n1 - n2 ; break ;
        case '*' : std :: cout << n1 << ' ' << op << ' ' << n2 << " = " << n1 * n2 ; break ;
        case '/' : std :: cout << n1 << ' ' << op << ' ' << n2 << " = " << n1 / n2 ; break ;

        default : std :: cout << "Conta invalida."; break ;
    }

    // ============================== 11.Depurando programas ==============================

    int ano ;

    std :: cout << "\n\n11.Informe em que ano voce nasceu: " ;
    std :: cin >> ano ;

    idade = 2020 - ano ;

    std :: cout << "\nVoce tem " << idade << " anos." ;

    // ============================== 12.Loop comando while ==============================

    int i = 0 ;

    std :: cout << "\n\n12.\n\n" ;

    while ( i <= 100 )
    {
        // if ( i > 50 ) { break ; }

        if ( i % 2 != 0 ) { i++ ; continue ; }

        std :: cout << i << std :: endl ;

        i++ ;
    }

    n1 = 1 ;

    std :: cout << "\n" ;

    while ( n1 <= 10 )
    {
        i = 0 ;

        while ( i < 3 )
        {
            std :: cout << "N1: " << n1 << std :: endl ;

            i++ ;
        }
        n1++ ;
    }

    // ============================== 13.Loop comando for ==============================

    std :: cout << "\n13.\n\n" ;

    for ( i = 0 ; i <= 100 ; i++ )
    {
        std :: cout << i << std :: endl ;
    }
    i = 0 ;

    for ( ; ; )
    {
        if ( i > 100 ) { break ; }

        std :: cout << std :: endl << i ; i++ ;
    }
    int j ;

    std :: cout << std :: endl ;

    for ( i = 0 , j = 0 ; i <= 10 ; i++ , j++ )
    {
        std :: cout << "\nI: " << i ;
        std :: cout << "\nJ: " << j ;
    }

    std :: cout << "\n\nInforme um numero: " ;
    std :: cin >> n1 ;

    int fat = 1 ;

    for ( i = 1 ; i < n1 ; i++ )
    {
        fat *= i + 1 ;
    }
    std :: cout << "Fatorial de " << n1 << ": " << fat ;

    // ============================== 14.Criando funçoes ==============================

    return 0 ;
}
