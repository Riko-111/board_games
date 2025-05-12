# 209.2 Projekt PROI - "Gry planszowe"

### Autorzy
- Przemysław Twarowski
- Adrian Werel
- Cezary Jankowski

## Założenia projektu:
- Stworzenie planszy która obsługuje gry planszowe niezależnie od rozmiaru planszy i ilości graczy

- Dwie reprezentacje:
    - graficzna (GUI)
    - tekstowa

- Istnieje możliwość rozegrania dowolnej liczby partii podanej z góry przez użytkownika
- Rozumienie gier planszowych jako turowe gry planszowe.
- Możliwości graczy i funkcjonalność gry definiowane są przez grę.
- Każda figura na planszy może się poruszać oraz wchodzić w interakcję z polami planszy (domyślnie ruch zerowy oraz brak interakcji)
- Każda gra planszowa realizowana jest jako folder plików / plik .json, zawierający informacje dotyczące wygranej przegranej, wielkości planszy, ilości graczy, ich możliwości, dodatkowych funkcjonalności (karty, kostka) oraz pionków i ich możliwości (ruch, interakcja z polem)
- Plansza jest w stanie wejść w interakcję z każdą grą w sposób polimorficzny
- Każdy gracz może zaczynać turę lub ją zakończyć. Wszystkie funkcjonalności gry dzieją się wewnątrz tury.
- Każda gra ma elementy modularne, realizowane na poziomie deklaracji klasy danej gry
- Klasa gracza i gry są wirtualne: funkcjonalności gry oraz atrybuty graczy są dookreślane poprzez mechanizm dziedziczenia.

## Klasy

*Gra*:
Pola:
- szerokosc
- wysokosc
- vector gracze ktory przechowuje graczy

Metody:
- rozpocznijGre()
- zakonczGre()
- czyWygrana()
- nastepnaTura()


*Plansza*:
Pola:
- vector Figur ktory przechowuje figury

Metody:
- rozegrajGre()

*Pole*:
Pola:
- vector przechowujacy informacje o przebywajacych na danym polu figure/figury
- x, y

Metody:
- efekty pola na graczach
- DodajFigure()
- UsunFigure()


*Figura*:
Pola:
- x, y

Metody:
- Rusz()
- Zmien_x()
- Zmien_y()


*Gracz*:
Pola:
- vector figur które posiada gracz

Metody:
- RozpocznijTure()
- ZakonczTure()

# Zadania do wykonania (issues):
1. Testy
2. implementacja poszczegolnych klas
3. podzial obowiazkow
4. implementacja interfejsu (tekstowego/ GUI)

# Podział obowiązków:
Przemek - klasa Gracz, Figura + dokumentacja

Cezary - klasa Pole, Plansza + GUI + konfiguracja CMake + testy

Adrian - klasa Gra + testy

# Milestones:
- implementacja pierwszej pełnej gry
- gui
