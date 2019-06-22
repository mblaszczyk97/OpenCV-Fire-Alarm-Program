# OpenCV-Fire-Alarm-Program

[PL]
Opis:
Celem programu jest wykrywanie po�ar�w za pomoc� detekcji pikseli i decydowaniu czy dany piksel oznacza po�ar.
Dodatkowo u�ywam tutaj wykrywanie ruchu do uruchamiania algorytmu tylko wtedy gdy kamera wykryje zmien� w obrazie (np. p�omie�).

U�yte rozwi�zania:

U�y�em tutaj wzoru na rozpoznanie koloru po parametrach przechwyconych z kana��w RGB. </br>
Drugi algorytm por�wnawcy dzia�a podobnie ale dla przestrzeni barw YCbCr. </br>

Por�wnanie:

1. Po przewrodzonych testach pierwszy zasadniczy wniosek jest taki, �e por�wnywania na przestrzeni bar YCbCr jest o wiele d�u�sze (ponad 10krotnie).
W tym wypadku algorytm u�ywaj�cy kana��w RGB dzia�a o wiele szybciej i sprawniej.

2. Ciekawe wyniki mo�na zaobserwowa� por�wnywaj�c jako�� wykrywania po�ar�w w obu algorytmach:
Algorytm RGB: 
<br>
<img src="https://i.imgur.com/IfVzXUF.png"/>
<br>
<br>
Algorytm YCbCr:
<br>
<img src="https://i.imgur.com/Nnw0bv5.png"/><br>
<br>
<br>