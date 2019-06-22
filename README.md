# OpenCV-Fire-Alarm-Program

[PL]
Opis:
Celem programu jest wykrywanie po¿arów za pomoc¹ detekcji pikseli i decydowaniu czy dany piksel oznacza po¿ar.
Dodatkowo u¿ywam tutaj wykrywanie ruchu do uruchamiania algorytmu tylko wtedy gdy kamera wykryje zmienê w obrazie (np. p³omieñ).

U¿yte rozwi¹zania:

U¿y³em tutaj wzoru na rozpoznanie koloru po parametrach przechwyconych z kana³ów RGB. </br>
Drugi algorytm porównawcy dzia³a podobnie ale dla przestrzeni barw YCbCr. </br>

Porównanie:

1. Po przewrodzonych testach pierwszy zasadniczy wniosek jest taki, ¿e porównywania na przestrzeni bar YCbCr jest o wiele d³u¿sze (ponad 10krotnie).
W tym wypadku algorytm u¿ywaj¹cy kana³ów RGB dzia³a o wiele szybciej i sprawniej.

2. Ciekawe wyniki mo¿na zaobserwowaæ porównywaj¹c jakoœæ wykrywania po¿arów w obu algorytmach:
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