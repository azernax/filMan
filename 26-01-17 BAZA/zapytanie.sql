SELECT filmy.tytul, klienci.imie, klienci.nazwisko, sprzedaz.ilosc_dni, sprzedaz.wartosc FROM baza.filmy INNER JOIN baza.klienci, baza.sprzedaz WHERE filmy.film_id = sprzedaz.sprzedaz_id;
