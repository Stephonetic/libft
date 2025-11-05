
// int wordcount(char const *s, char c) //c ist der separator
// {
// 	int wordcount;// was wir brauchen
// 	wordcount = 0;//wo wir ansetzen

// 	int counter;//womit wir das durchzaehlen (bedingung erfuellen fuer wordcount, muss gezaehlt werden)
// 	counter = 0;// wo wir anfangen

// 	while (s[counter] != '/0')//waehrend der counter nicht am ende angekommen ist
// 	{
// 		if(s[counter] == c)//erhoehe den wordcount(unter der bedingung, dass ein separator erkannt wurde, das ist ein wort)
// 		{
// 			wordcount++;
// 		}
// 		counter++;//zaehle weiter, indem du den conuter erhoest und weiter schaust
// 	}
// return (wordcount);//vorarbeit fuer dir definition des mallocs (die anzahl der "leute", die wir allokieren koennen (hier: woerter))
// }

// // aufruf would be like: char **doublepointerchar = ft_split(addressen_chaos, ".")

// char	**ft_split(char const *s, char c)
// {
// 	char **addressen;//Was wir durchsuchen wollen (hier, splitten)
// 	int wordcounter;
// 	wordcounter = wordcount(s, c);
// 	addressen = (char **)malloc((wordcounter + 1) * sizeof(char *));// wir muessen einen zweidimensionalen pointer zurueckgeben, da wir mit mehr bedingungen arbeiten (siehe foto), **ft_split)
// 	int counter;//wie wir das durchfuehern wollen (mit einem counter durchzaehlen)(s[counter] nennt nur die position des strings s)

// 	counter = 0;//start definition, integer immer mit 0 initialisieren, aktuelle position  
// 	while (s[counter] != '\0')// solange der counter nicht am ende eines strings angekommen ist (/0) mache....
// 	{
// 		if (s[counter] == c)
// 		{
// 			// teilen, ganz am ende geschrieben! splitten braucht alle bedingungen
// 		}
// 		counter++;//counter erhoehen (durchzaehlen, meistens mit while schleifen verbunden!)
// 	}

// 	return addressen;
// }

// char *string = "Hallo";

// char *string;
// string = malloc(wordcount); // Tisch "2rwuifke" (adresse zum tisch) allokiert/reserviert fuer 7 personen

