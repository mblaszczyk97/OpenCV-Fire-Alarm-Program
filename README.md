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
<br>
TEST1
<br>
Algorytm RGB: 
<br>
<img src="https://i.imgur.com/IfVzXUF.png"/>
<br>
<br>
Algorytm YCbCr:
<br>
<img src="https://i.imgur.com/Nnw0bv5.png"/>
<br>
<br>
Jak widaæ na pierwszym porównaniu z pozoru oba algorytmy maj¹ podobn¹ efektywnoœæ natomiast nie do koñca jest to prawda.
<br>
TEST2
<br>
Algorytm RGB: 
<br>
<img src="https://i.imgur.com/0fYAc0U.png"/>
<br>
<br>
Algorytm YCbCr:
<br>
<img src="https://i.imgur.com/o6w0rG8.png"/>
<br>
<br>
W drugim przypadku widaæ ju¿ pewne ró¿nice. Algorytm YCbCr wy³apuje tak¿e rozmazane strefy po¿aru, a tak¿e dym, czego nie mo¿na powiedzieæ o algorytmie RGB.
Jest to tak¿e czêœciowo pewnym problemem tego algorytmu poniewa¿ zdarzaj¹ siê sytuacje kieedy wykrywa element ruchomy jako po¿ar gdy jest to mg³a lub zwyk³y dym, a nawet czasem oœwietlenie.
<br>
TEST3
<br>
Algorytm RGB: 
<br>
<img src="https://i.imgur.com/plXY6oW.png"/>
<br>
<br>
Algorytm YCbCr:
<br>
<img src="https://i.imgur.com/kGhngWc.png"/>
<br>
<br>
Na trzecim teœcie mo¿na zauwa¿yæ ciekawy fakt, ¿e algorytm RGB nie potrafi wykryæ wystrzelonych pocisków b³yskowych, natomiast algorytm YCbCr nie ma z tym ¿adnych problemów.
Tak jak przy teœcie numer dwa powiedzia³em: tak czu³e wykrywanie jest jednoczeœnie wad¹ jak i zalet¹, wiêc w zale¿noœci od zastosowania warto rozwa¿yæ u¿ywany przez nas algorytm.