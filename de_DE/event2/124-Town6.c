          void entrypoint_124_00() {
          	start()
/*< 42>*/ 	switch (loadzone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 43>*/ 		printf(/* textboxtype: 1, unk: 1 */ "Und? Bist du zufrieden? Wenn du noch\nwas brauchst, komm einfach zu mir!")
          	  case 1:
/*< 48>*/ 		switch (loadzone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*< 49>*/ 			printf(/* textboxtype: 1, unk: 1 */ "Willst du doch was kaufen?\n[1]Ja.[2-]Niemals!")
          			flw_3:
/*<  3>*/ 			switch (choice(2)) {
          			  case 0:
/*< 74>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 4), ('param3', 12)])
/*<  4>*/ 				printf(/* textboxtype: 1, unk: 1 */ "Na, welchen dieser Schätze willst du\ndenn haben?\n[1]Blaue\nVogelfeder[2]Goldener\nSchmuckschädel[3]Geschenk\nder Göttin[4-]Etwas\nanderes")
/*<  6>*/ 				switch (choice(4)) {
          				  case 0:
/*<  7>*/ 					printf(/* textboxtype: 1, unk: 1 */ "Eine blaue Vogelfeder soll es sein?\nDie kriegst du für <r<200 Rubine>>! Na, das\nist doch ein gutes Geschäft, oder?\n[1]Ich bin dabei![2-]Zu teuer!")
/*<  9>*/ 					switch (choice(2)) {
          					  case 0:
/*< 11>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 10>*/ 							printf(/* textboxtype: 1, unk: 1 */ "Dann gehört einer dieser Schätze\njetzt dir!")
/*< 13>*/ 							loadzone_temp_flags[0 /* 0x1 01 */] = true;
/*< 34>*/ 							rupees += -200;
/*< 38>*/ 							loadzone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 12>*/ 							printf(/* textboxtype: 1, unk: 1 */ "Da stimmt wohl was nicht... Du hast\nnicht genügend Rubine, du Betrüger!\nKomm wieder, wenn du flüssig bist!")
          						}
          					  case 1:
/*<  8>*/ 						printf(/* textboxtype: 1, unk: 1 */ "Ha! Dein Geiz ist ein Zeichen dafür,\ndass du die Schätze gar nicht wirklich\nhaben willst.")
          					}
          				  case 1:
/*< 14>*/ 					printf(/* textboxtype: 1, unk: 1 */ "Ein goldener Schmuckschädel soll es\nsein? Den kriegst du für <r<200 Rubine>>!\nEin faires Geschäft, oder etwa nicht?\n[1]Ich bin dabei![2-]Zu teuer!")
/*< 16>*/ 					switch (choice(2)) {
          					  case 0:
/*< 18>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 17>*/ 							printf(/* textboxtype: 1, unk: 1 */ "Dann gehört einer dieser Schätze\njetzt dir!")
/*< 20>*/ 							loadzone_temp_flags[1 /* 0x1 02 */] = true;
/*< 35>*/ 							rupees += -200;
/*< 39>*/ 							loadzone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 19>*/ 							printf(/* textboxtype: 1, unk: 1 */ "Da stimmt wohl was nicht... Du hast\nnicht genügend Rubine, du Betrüger!\nKomm wieder, wenn du flüssig bist!")
          						}
          					  case 1:
/*< 15>*/ 						printf(/* textboxtype: 1, unk: 1 */ "Ha! Dein Geiz ist ein Zeichen dafür,\ndass du die Schätze gar nicht wirklich\nhaben willst.")
          					}
          				  case 2:
/*< 21>*/ 					printf(/* textboxtype: 1, unk: 1 */ "Ein Geschenk der Göttin soll es sein?\nDas kriegst du für <r<200 Rubine>>! Na, das\nist doch ein gutes Geschäft, oder?\n[1]Ich bin dabei![2-]Zu teuer!")
/*< 24>*/ 					switch (choice(2)) {
          					  case 0:
/*< 26>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 25>*/ 							printf(/* textboxtype: 1, unk: 1 */ "Dann gehört einer dieser Schätze\njetzt dir!")
/*< 28>*/ 							loadzone_temp_flags[2 /* 0x1 04 */] = true;
/*< 36>*/ 							rupees += -200;
/*< 40>*/ 							loadzone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 27>*/ 							printf(/* textboxtype: 1, unk: 1 */ "Da stimmt wohl was nicht... Du hast\nnicht genügend Rubine, du Betrüger!\nKomm wieder, wenn du flüssig bist!")
          						}
          					  case 1:
/*< 23>*/ 						printf(/* textboxtype: 1, unk: 1 */ "Ha! Dein Geiz ist ein Zeichen dafür,\ndass du die Schätze gar nicht wirklich\nhaben willst.")
          					}
          				  case 3:
/*< 53>*/ 					printf(/* textboxtype: 1, unk: 1 */ "Was anderes... Na ja, wie wär's dann\nmit den Prachtstücken hier?\n[1]Finster-\nhalbmond[2]Schatten-\nkristall[3]Monsterhorn[4-]Etwas\nanderes")
/*< 54>*/ 					switch (choice(4)) {
          					  case 0:
/*< 22>*/ 						printf(/* textboxtype: 1, unk: 1 */ "Ein Finsterhalbmond soll es sein? Den\nkriegst du für <r<100 Rubine>>! Na, das ist\ndoch ein gutes Geschäft, oder nicht?\n[1]Ich bin dabei![2-]Zu teuer!")
/*< 30>*/ 						switch (choice(2)) {
          						  case 0:
/*< 52>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 31>*/ 								printf(/* textboxtype: 1, unk: 1 */ "Dann gehört einer dieser Schätze\njetzt dir!")
/*< 33>*/ 								loadzone_temp_flags[3 /* 0x1 08 */] = true;
/*< 37>*/ 								rupees += -100;
/*< 41>*/ 								loadzone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 32>*/ 								printf(/* textboxtype: 1, unk: 1 */ "Da stimmt wohl was nicht... Du hast\nnicht genügend Rubine, du Betrüger!\nKomm wieder, wenn du flüssig bist!")
          							}
          						  case 1:
/*< 29>*/ 							printf(/* textboxtype: 1, unk: 1 */ "Ha! Dein Geiz ist ein Zeichen dafür,\ndass du die Schätze gar nicht wirklich\nhaben willst.")
          						}
          					  case 1:
/*< 55>*/ 						printf(/* textboxtype: 1, unk: 1 */ "Ein Schattenkristall soll es sein? Den\nkriegst du für <r<100 Rubine>>! Na, das ist\ndoch ein gutes Geschäft, oder nicht?\n[1]Ich bin dabei![2-]Zu teuer!")
/*< 57>*/ 						switch (choice(2)) {
          						  case 0:
/*< 63>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 58>*/ 								printf(/* textboxtype: 1, unk: 1 */ "Dann gehört einer dieser Schätze\njetzt dir!")
/*< 60>*/ 								loadzone_temp_flags[6 /* 0x1 40 */] = true;
/*< 61>*/ 								rupees += -100;
/*< 62>*/ 								loadzone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 59>*/ 								printf(/* textboxtype: 1, unk: 1 */ "Da stimmt wohl was nicht... Du hast\nnicht genügend Rubine, du Betrüger!\nKomm wieder, wenn du flüssig bist!")
          							}
          						  case 1:
/*< 56>*/ 							printf(/* textboxtype: 1, unk: 1 */ "Ha! Dein Geiz ist ein Zeichen dafür,\ndass du die Schätze gar nicht wirklich\nhaben willst.")
          						}
          					  case 2:
/*< 64>*/ 						printf(/* textboxtype: 1, unk: 1 */ "Ein Monsterhorn willst du? Das kriegst\ndu für <r<100 Rubine>>! Na, das ist doch ein\ngutes Geschäft, was sagst du?\n[1]Ich bin dabei![2-]Zu teuer!")
/*< 66>*/ 						switch (choice(2)) {
          						  case 0:
/*< 72>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 67>*/ 								printf(/* textboxtype: 1, unk: 1 */ "Dann gehört einer dieser Schätze\njetzt dir!")
/*< 69>*/ 								loadzone_temp_flags[7 /* 0x1 80 */] = true;
/*< 70>*/ 								rupees += -100;
/*< 71>*/ 								loadzone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 68>*/ 								printf(/* textboxtype: 1, unk: 1 */ "Da stimmt wohl was nicht... Du hast\nnicht genügend Rubine, du Betrüger!\nKomm wieder, wenn du flüssig bist!")
          							}
          						  case 1:
/*< 65>*/ 							printf(/* textboxtype: 1, unk: 1 */ "Ha! Dein Geiz ist ein Zeichen dafür,\ndass du die Schätze gar nicht wirklich\nhaben willst.")
          						}
          					  case 3:
/*< 73>*/ 						printf(/* textboxtype: 1, unk: 1 */ "Was anderes kann ich dir leider nicht\nanbieten. Das musst du dir dann schon\nselbst besorgen, mein Freund!")
          					}
          				}
          			  case 1:
/*<  5>*/ 				printf(/* textboxtype: 1, unk: 1 */ "Wie du willst... Ein aufrichtiger Kerl\nwie du sollte sich sowieso besser nicht\nmit mir einlassen...")
          			}
          		  case 1:
/*< 44>*/ 			switch (scene_flags[80 /* 0xB 01 */]) {
          			  case 0:
/*< 45>*/ 				printf(/* textboxtype: 1, unk: 1 */ "Pssst! Leise! Ich betreibe hier einen\nheimlichen... Ach, du schon wieder!\n\n\nBist du gekommen, um etwas bei mir\nzu kaufen?\n[1]So ist es.[2-]Nein.")
          				goto flw_3
          			  case 1:
/*<  1>*/ 				printf(/* textboxtype: 1, unk: 1 */ "Pssst! Ganz ruhig, Junge! Ich betreibe\nhier nämlich einen <b<heimlichen Handel>>\nmit Schätzen, weißt du? Und ich habe\nalles, was dein Herz begehrt!\nWenn du mich lieb bittest, verkaufe ich\ndir die seltensten Schätze, die es gibt!")
/*<  2>*/ 				printf(/* textboxtype: 1, unk: 1 */ "Ganz billig wird die Sache jedoch nicht.\nAber wenn man die gewünschten Dinge\nnicht findet, oder einfach keine Lust\nhat, danach zu suchen, tja...\nDann kommt man eben zu mir!\nAlso, Lust auf eine kleine nächtliche\nEinkaufstour im Reich der Schätze?\n[1]Ja![2-]Nein.")
/*< 46>*/ 				scene_flags[0 'Skyloft'][80 /* 0xB 01 */] = true;
/*< 47>*/ 				loadzone_temp_flags[5 /* 0x1 20 */] = true;
          				goto flw_3
          			}
          		}
          	}
          }

          void entrypoint_124_01() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Du scheinst ein neugieriges Kerlchen\nzu sein. Schöne Leistung, bis hierher\nnach oben zu klettern... \n\nWenn du von hier <g<abspringst>>, solltest\ndu auf der Spitze eines Turms landen\nkönnen. Klingt doch nach Spaß, oder?\nHi hi hi...")
          }

