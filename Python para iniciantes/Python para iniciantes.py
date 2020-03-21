
""" Curso gratuito da Udemy de Python para iniciantes , link: https://www.udemy.com/course/python-para-iniciantes/ """

""" ============================== Sobre Python shell ============================== """

a = 1 ; b = 2 ; c = 3

d = a + b + c

print( "\nA: " + str( a ) + 
       "\nB: " + str( b ) + 
       "\nC: " + str( c ) +

       "\n\nD = a + b + c"  
      
       "\n\nD = " + str( a ) + " + " + str( b ) + " + " + str( c ) +

       "\n\nD: " + str( d ) )

""" ============================== Variáveis ============================== """

nome          = "Marcelo"
dias          = 30
valorHora     = 4
horasTrabalho = 8

vencimentoMensal = valorHora * horasTrabalho * dias

print( "\nNome................: " + nome                      +  
       "\nDias................: " + str( dias          )      +
       "\nHoras trabalhadas...: " + str( horasTrabalho )      +
       "\nValor por hora ganho: " + str( valorHora     )      +
       
       "\n\nValor hora float..: " + str( float( valorHora ) ) +
       
       "\n\nValor para string: " + str( valorHora ) )

n1 = 11 ; n2 = 10

r  = n1 + n2

print( "\nNúmero 1: " + str( n1 ) +
       "\nNúmero 2: " + str( n2 ) +

       "\n\nResultado = número 1 + número 2" 
       
       "\n\nResultado = " + str( n1 ) + " + " + str( n2 ) +
       
       "\n\nResultado = " + str( r ) )

print( "\n10.5 como inteiro: " + str( int  ( 10.5 ) ) + 
       "\n10.5 como float..: " + str( float( 10.5 ) ) )

""" ============================== Strings ============================== """

nome = "Marcelo Alvarez"

print(   "\nNome: " + nome + 
       
       "\n\nCaracteres posição 0-7.......: " + nome[ 0 : 7 ] +
         "\nCaracteres posição 1-5.......: " + nome[ 1 : 5 ] +
       
         "\nCaracter na posição 0 de nome: " + nome[ 0     ] + 
       
       "\n\nNome + nome: " + nome + nome +
         "\nNome * 3...: " + nome * 3    +
        
       "\n\nHá a letra M dentro de nome ?" )

if "M" in nome : print( "Sim" )
else           : print( "Não" )

""" ============================== Listas ============================== """

lista = [ 1 , 4 , 7 , "Marcelo" , 23 , 14 ]

print( '\n' + str( lista ) )

lista.append( "Python" ) ; print( '\n' + str( lista ) )
lista.append( 20       ) ; print( '\n' + str( lista ) )

print( "\nMarcelo está na posicao " + str( lista.index( "Marcelo" ) ) + " na lista." 
     "\n\n20 está na posicao "      + str( lista.index( 20        ) ) + " na lista." 

     "\n\nHá " + str( lista.count( 4 ) ) + " números 4 na lista." )

lista.append( 4 )

print( "\nHá " + str( lista.count( 4 ) ) + " números 4 na lista.\n" )

print( lista )

lista.remove( 4 ) ; print( '\n' + str( lista ) )
lista.reverse(  ) ; print( '\n' + str( lista ) )

lista2 = [ 1 , 9 , 3 , 4 , 2 , 7 , 6 ]

print( '\n' + str( lista2 ) )

lista2.sort() ; print( '\n' + str( lista2 ) )

""" ============================== Dicionários =============================="""

telefone = { "Mar": 111111111 , "ce": 222222222 , "lo": 333333333 }

print( '\n' + str( telefone ) )

telefone[ "dos" ] = 444444444

print( '\n' + str( telefone ) )

del telefone[ "dos" ]

print( '\n' + str( telefone ) )

""" ============================== Tuplas =============================="""

tuplas = ( "Marcelo" , "Python" , "Udemy" )

print( '\n' + str( tuplas ) )

print ( '\n' + tuplas[ 0 ] )
print ( '\n' + tuplas[ 1 ] )
print ( '\n' + tuplas[ 2 ] )

print( '\n' + str( tuplas[ 0 : 3 ] ) )

print( "\nComprimento de tuplas: " + str( len( tuplas ) ) )

print( "\nTuplas + tuplas: " + str( tuplas + tuplas ) )

print( "\nTuplas * 5: " + str( tuplas * 5 ) + '\n' )

if 4 in tuplas : print( "4 está dentro de tuplas."     )
else           : print( "4 não está dentro de tuplas." )

if "Udemy" in tuplas : print( "\nUdemy esta dentro de tuplas.\n" )
else                 : print( "\nUdemy não esta dentro de tuplas.\n" )

lista = [ 1 , 4 , "Marcelo" ]

print( lista )

tuplas2 = tuple( lista )

print( '\n' + str( tuplas2 ) )

""" ============================== If-else =============================="""

numero = 1

if numero == 1 : print( "\nNumero é igual a 1" )
if numero == 2 : print( "\nNumero é igual a 2" )

if numero == 1 : print( "Numero é igual a 1"     )
else           : print( "Numero não é igual a 1" )

nome = "Marcelo"

if "Z" in nome : print( "\nNome tem a letra Z" )

if   "Z" in nome : print( "\nNome tem a letra Z" )
elif "M" in nome : print( "\nNome tem a letra M" )
else             : pass

""" ============================== For loop =============================="""

for i in range( 0 , 5 ) : print( "I: " , i )

print( '\n' )

for i in nome : print( i )

print( '\n' )

lista = [ "Marcelo" , 19 , "Brasil" ]

for i in lista : print( i )

""" ============================== While =============================="""

print( '\n' ) ; i = 15

while i > 0 :

       print( i ) ; i -= 1

""" ============================== Pass , break , continue =============================="""

print( '\n' ) ; i = 20

while True :
 
       i -= 1 ; print( i ) 

       if i == 2 : break

print( '\n' ) ; i = 10

while True :

       i -= 1

       if i == 4 : continue
       if i == 2 : break

for i in range( 0 , 5 ) : pass














