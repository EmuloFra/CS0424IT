

# funzione quadrato ( perimetro lato per quattro)
def perimetro_quadrato():
    lato_quadrato = input("Inserisci il lato del quadrato: ")
    l_q = float (lato_quadrato)
    perimetro_quadrato = l_q * 4
    print("Il perimetro di questa figura è", perimetro_quadrato)

# funzione circonferenza (circonferenza = 2 * pi greco)
def circonferenza():
    raggio = input("Inserisci il raggio: ")
    r = float (raggio)
    circonferenza= r * 2 * 3.14
    print("La circonferenza di questa figura è", circonferenza)

# funzione rettangolo (perimetro base per 2 + altezza per 2)
def rettangolo():
    base_rettangolo = input("Inserisci la base: ")
    altezza_rettangolo = input("Inserisci l'altezza: ")
    b = float (base_rettangolo)
    h = float (altezza_rettangolo)
    perimetro_rettangolo = (b*2) + (h*2)
    print("Il perimetro di questa figura è", perimetro_rettangolo)


# menù di scelta

print("A) Perimetro del quadrato")
print("B) Circonferenza del cerchio")
print("C) Perimetro del rettangolo")
x = input("Seleziona la figura di cuoi vuoi conoscere il perimetro!:")
    
if (x == "A"):
    perimetro_quadrato()
elif (x == "B"):
    circonferenza ()
elif (x == "C"):
    rettangolo ()
else:
      print ("Non hai selezionato qualcosa di valido. Prova a metterla maiuscola la prossima volta!")











