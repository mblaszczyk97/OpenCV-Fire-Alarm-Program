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

</br>
TEST1
</br>

Algorytm RGB: 
</br>
<img src="https://i.imgur.com/IfVzXUF.png"/>
</br>
</br>
Algorytm YCbCr:
</br>
<img src="https://i.imgur.com/Nnw0bv5.png"/>
</br>
</br>
Jak wida� na pierwszym por�wnaniu z pozoru oba algorytmy maj� podobn� efektywno�� natomiast nie do ko�ca jest to prawda.

</br>
TEST2
</br>

Algorytm RGB: 
</br>
<img src="https://i.imgur.com/0fYAc0U.png"/>
</br>
</br>
Algorytm YCbCr:
</br>
<img src="https://i.imgur.com/o6w0rG8.png"/>
</br>
</br>
W drugim przypadku wida� ju� pewne r�nice. Algorytm YCbCr wy�apuje tak�e rozmazane strefy po�aru, a tak�e dym, czego nie mo�na powiedzie� o algorytmie RGB.
Jest to tak�e cz�ciowo pewnym problemem tego algorytmu poniewa� zdarzaj� si� sytuacje kieedy wykrywa element ruchomy jako po�ar gdy jest to mg�a lub zwyk�y dym, a nawet czasem o�wietlenie.

</br>
TEST3

</br>
Algorytm RGB: 
</br>
<img src="https://i.imgur.com/plXY6oW.png"/>
</br>
</br>
Algorytm YCbCr:
</br>
<img src="https://i.imgur.com/kGhngWc.png"/>
</br>
</br>
Na trzecim te�cie mo�na zauwa�y� ciekawy fakt, �e algorytm RGB nie potrafi wykry� wystrzelonych pocisk�w b�yskowych, natomiast algorytm YCbCr nie ma z tym �adnych problem�w.
Tak jak przy te�cie numer dwa powiedzia�em: tak czu�e wykrywanie jest jednocze�nie wad� jak i zalet�, wi�c w zale�no�ci od zastosowania warto rozwa�y� u�ywany przez nas algorytm.
</br>
</br>
�r�d�a:
Advanced Concepts for Intelligent Vision Systems: 11th International - https://books.google.pl/books?id=vUFuCQAAQBAJ&printsec=frontcover&hl=pl#v=onepage&q&f=false