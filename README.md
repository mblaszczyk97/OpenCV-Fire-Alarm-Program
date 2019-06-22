# OpenCV-Fire-Alarm-Program

[PL]
Opis:
Celem programu jest wykrywanie poøarÛw za pomocπ detekcji pikseli i decydowaniu czy dany piksel oznacza poøar.
Dodatkowo uøywam tutaj wykrywanie ruchu do uruchamiania algorytmu tylko wtedy gdy kamera wykryje zmienÍ w obrazie (np. p≥omieÒ).

Uøyte rozwiπzania:

Uøy≥em tutaj wzoru na rozpoznanie koloru po parametrach przechwyconych z kana≥Ûw RGB. </br>
Drugi algorytm porÛwnawcy dzia≥a podobnie ale dla przestrzeni barw YCbCr. </br>

PorÛwnanie:

1. Po przewrodzonych testach pierwszy zasadniczy wniosek jest taki, øe porÛwnywania na przestrzeni bar YCbCr jest o wiele d≥uøsze (ponad 10krotnie).
W tym wypadku algorytm uøywajπcy kana≥Ûw RGB dzia≥a o wiele szybciej i sprawniej.

2. Ciekawe wyniki moøna zaobserwowaÊ porÛwnywajπc jakoúÊ wykrywania poøarÛw w obu algorytmach:

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
Jak widaÊ na pierwszym porÛwnaniu z pozoru oba algorytmy majπ podobnπ efektywnoúÊ natomiast nie do koÒca jest to prawda.

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
W drugim przypadku widaÊ juø pewne rÛønice. Algorytm YCbCr wy≥apuje takøe rozmazane strefy poøaru, a takøe dym, czego nie moøna powiedzieÊ o algorytmie RGB.
Jest to takøe czÍúciowo pewnym problemem tego algorytmu poniewaø zdarzajπ siÍ sytuacje kieedy wykrywa element ruchomy jako poøar gdy jest to mg≥a lub zwyk≥y dym, a nawet czasem oúwietlenie.

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
Na trzecim teúcie moøna zauwaøyÊ ciekawy fakt, øe algorytm RGB nie potrafi wykryÊ wystrzelonych pociskÛw b≥yskowych, natomiast algorytm YCbCr nie ma z tym øadnych problemÛw.
Tak jak przy teúcie numer dwa powiedzia≥em: tak czu≥e wykrywanie jest jednoczeúnie wadπ jak i zaletπ, wiÍc w zaleønoúci od zastosowania warto rozwaøyÊ uøywany przez nas algorytm.
</br>
</br>
èrÛd≥a:
Advanced Concepts for Intelligent Vision Systems: 11th International - https://books.google.pl/books?id=vUFuCQAAQBAJ&printsec=frontcover&hl=pl#v=onepage&q&f=false