          void entrypoint_302_01() {
          	start()
/*< 19>*/ 	switch (context_related3(0)) {
          	  case 0:
/*< 82>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 3585), ('next', 16), ('param3', 13)])
/*< 16>*/ 		switch (story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */]) {
          		  case 0:
/*< 14>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Herzlich willkommen!")
/*<156>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 53), ('param3', 13)])
          			flw_53:
/*< 53>*/ 			switch (context_related2(1)) {
          			  case 0:
/*< 84>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5640), ('next', 54), ('param3', 13)])
/*< 54>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Du kannst so lange nach Rubinen\ngraben, bis du auf eine Bombe stößt!\nHast du Lust auf meine spannende\n<b<Risiko-Rubinjagd>>?\n\x0E\x01\x09\x04\x14\x1614Oh, du siehst ganz schön müde aus.\nKomm wieder, wenn du deine Herzen\naufgefüllt hast.")
/*<118>*/ 				set_camera(5, 0)
/*<119>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Darf ich dir vielleicht diesen Platz\ndort drüben anbieten? Dort kannst\ndu dich erholen.")
          			  case 1:
/*< 83>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 6), ('next', 1), ('param3', 13)])
/*<  1>*/ 				printf(/* textboxtype: 1, unk: 1 */ "Du kannst so lange nach Rubinen\ngraben, bis du auf eine Bombe stößt!\nMöchtest du auf <b<Risiko-Rubinjagd\n>>gehen?\n[1]Anfänger[2]Fortgeschrittener[3]Experte[4-]Beenden")
          				flw_85:
/*< 85>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 3), ('param3', 13)])
/*<  3>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					switch (temp_flags[14 /* 0x0 40 */]) {
          					  case 0:
          						flw_74:
/*< 74>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 87), ('param3', 12)])
/*< 87>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5638), ('next', 59), ('param3', 13)])
/*< 59>*/ 						printf(/* textboxtype: 1, unk: 1 */ "Eine Runde auf dem Feld kostet\n<r<30 Rubine>>. Möchtest du graben?\n[1]Graben[2-]Nicht\ngraben")
/*< 88>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 37), ('param3', 13)])
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*<110>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 30), ('next', 109), ('param3', 23)])
/*<109>*/ 							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 37)])) {
          							  case 0:
/*< 36>*/ 								rupees += -30;
/*< 90>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5400), ('next', 34), ('param3', 13)])
/*< 34>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Ich hoffe, du gräbst tonnenweise\nRubine aus! Viel Glück!")
/*< 57>*/ 								temp_flags[14 /* 0x0 40 */] = true;
/*< 33>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 47), ('param3', 33)])
/*< 47>*/ 								changeScene(1, 0) // 
          							  case 1:
/*< 89>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4633), ('next', 35), ('param3', 13)])
/*< 35>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Du hast nicht genug Rubine. Komm\nwieder, wenn du dir das Spiel leisten\nkannst.")
          							}
          						  case 1:
/*< 75>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 38), ('param3', 12)])
/*< 38>*/ 							printf(/* textboxtype: 1, unk: 1 */ "An welcher Schwierigkeitsstufe\nmöchtest du dich versuchen?\n[1]Anfänger[2]Fortgeschrittener[3]Experte[4-]Nicht\ngraben")
          							goto flw_85
          						}
          					  case 1:
/*< 21>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Das Anfängerfeld bietet weniger Orte\nzum Graben. Genau das Richtige für\nEinsteiger.")
          						goto flw_74
          					}
          				  case 1:
/*< 62>*/ 					switch (temp_flags[15 /* 0x0 80 */]) {
          					  case 0:
          						flw_76:
/*< 76>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 91), ('param3', 12)])
/*< 91>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5638), ('next', 22), ('param3', 13)])
/*< 22>*/ 						printf(/* textboxtype: 1, unk: 1 */ "Eine Runde kostet <r<50 Rubine>>.\nMöchtest du graben?\n[1]Graben[2-]Nicht\ngraben")
/*< 92>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 31), ('param3', 13)])
/*< 31>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							switch (has_rupees(50)) {
          							  case 0:
/*< 30>*/ 								rupees += -50;
/*< 96>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5400), ('next', 27), ('param3', 13)])
/*< 27>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Ich hoffe, du gräbst tonnenweise\nRubine aus! Viel Glück!")
/*< 60>*/ 								temp_flags[15 /* 0x0 80 */] = true;
/*< 26>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 45), ('param3', 33)])
/*< 45>*/ 								changeScene(2, 0) // 
          							  case 1:
/*< 95>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4633), ('next', 29), ('param3', 13)])
/*< 29>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Du hast nicht genug Rubine. Komm\nwieder, wenn du dir das Spiel leisten\nkannst.")
          							}
          						  case 1:
/*< 77>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 32), ('param3', 12)])
/*< 32>*/ 							printf(/* textboxtype: 1, unk: 1 */ "An welcher Schwierigkeitsstufe\nmöchtest du dich versuchen?\n[1]Anfänger[2]Fortgeschrittener[3]Experte[4-]Nicht\ngraben")
          							goto flw_85
          						}
          					  case 1:
/*< 63>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Das Feld für Fortgeschrittene bietet\nmehr Orte zum Graben. Aber hüte dich\nvor fiesen <y<Rubin-Fallen>>!")
          						goto flw_76
          					}
          				  case 2:
/*< 64>*/ 					switch (temp_flags[16 /* 0x3 01 */]) {
          					  case 0:
          						flw_78:
/*< 78>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 93), ('param3', 12)])
/*< 93>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5638), ('next', 23), ('param3', 13)])
/*< 23>*/ 						printf(/* textboxtype: 1, unk: 1 */ "Eine Runde kostet <r<70 Rubine>>.\nMöchtest du graben?\n[1]Graben[2-]Nicht\ngraben")
/*< 94>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 24), ('param3', 13)])
/*< 24>*/ 						switch (choice(2)) {
          						  case 0:
/*<113>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 70), ('next', 112), ('param3', 23)])
/*<112>*/ 							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 39)])) {
          							  case 0:
/*< 15>*/ 								rupees += -70;
/*< 98>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5400), ('next', 6), ('param3', 13)])
/*<  6>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Ich hoffe, du gräbst tonnenweise\nRubine aus! Viel Glück!")
/*< 61>*/ 								temp_flags[16 /* 0x3 01 */] = true;
/*<  4>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 46), ('param3', 33)])
/*< 46>*/ 								changeScene(3, 0) // 
          							  case 1:
/*< 97>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4633), ('next', 13), ('param3', 13)])
/*< 13>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Du hast nicht genug Rubine. Komm\nwieder, wenn du dir das Spiel leisten\nkannst.")
          							}
          						  case 1:
/*< 79>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 25), ('param3', 12)])
/*< 25>*/ 							printf(/* textboxtype: 1, unk: 1 */ "An welcher Schwierigkeitsstufe\nmöchtest du dich versuchen?\n[1]Anfänger[2]Fortgeschrittener[3]Experte[4-]Nicht\ngraben")
          							goto flw_85
          						}
          					  case 1:
/*< 65>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Auf dem Expertenfeld befinden sich\nmehr Bomben, aber auch wertvollere\nRubine!\n\nDie Chancen, sich dort eine goldene\nNase zu verdienen, stehen wirklich\nnicht schlecht!")
          						goto flw_78
          					}
          				  case 3:
/*< 86>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5379), ('next', 5), ('param3', 13)])
/*<  5>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Bitte komm bald wieder!")
          				}
          			}
          		  case 1:
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 2 */ "Oh! Ich sehe, dies ist dein erster\nBesuch bei mir? Danke, dass du\nhier vorbeischaust!")
/*<155>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 154), ('param3', 13)])
/*<154>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Mein Name ist <b<Cippolino>>! Es freut\nmich sehr, deine Bekanntschaft zu\nmachen!\n\nIch habe die Aufsicht über die\n<r<Risiko-Rubinjagd>>.")
/*< 18>*/ 			story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */] = true;
          			goto flw_53
          		}
          	  case 1:
/*< 69>*/ 		story_flags[185 /* us: 805A9AE9 0x01, jp: 805ACD69 0x01 */] = true;
/*<106>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 72), ('param3', 44)])
/*< 72>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 20), ('param3', 12)])
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Du hast <r<\x0E\x02\x03\x06\x00\x00Í >><r<\x0E\x03\x04\x02\x1CD>> ausgegraben!")
/*< 71>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 39), ('param3', 33)])
/*< 39>*/ 		switch (context_related3(2)) {
          		  case 0:
/*<104>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4628), ('next', 7), ('param3', 13)])
/*<  7>*/ 			switch (context_related3(3)) {
          			  case 0:
/*< 11>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Wie bitte? Du hast nicht einen einzigen\nRubin ausgegraben? Du... du armer,\narmer Kerl...")
          				flw_103:
/*<103>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 81), ('param3', 13)])
/*< 81>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 108), ('param3', 12)])
/*<108>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 50), ('param3', 45)])
/*< 50>*/ 				switch (story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */]) {
          				  case 0:
          					flw_55:
/*< 55>*/ 					switch (context_related2(1)) {
          					  case 0:
/*<105>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5640), ('next', 56), ('param3', 13)])
/*< 56>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Du siehst abgekämpft aus. Fülle deine\nHerzen wieder auf und versuche es\ndanach erneut.")
/*<116>*/ 						set_camera(5, 0)
/*<117>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Falls du verschnaufen möchtest, nimm\nruhig auf dem Sitz dort Platz.")
          					  case 1:
/*<  2>*/ 						printf(/* textboxtype: 1, unk: 1 */ "Du solltest es gleich noch mal\nversuchen. Hast du Interesse?\n[1]Anfänger[2]Fortgeschrittener[3]Experte[4-]Nicht\ngraben")
          						goto flw_85
          					}
          				  case 1:
/*< 51>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Tipp gefällig? Hör gut zu! <r<Rubine mit\nniedrigem Wert >>haben selten <r<Bomben\n>>in ihrer Nähe.\n\nJe <r<wertvoller der Rubin>>, desto mehr\n<r<Bomben>> befinden sich um ihn herum.\n\n\nSolltest du beim ersten Graben direkt\nauf eine Bombe stoßen...\x0E\x01\x04\x02\x14 Dann hast du\nwohl Pech gehabt.")
/*< 52>*/ 					story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */] = true;
          					goto flw_55
          				}
          			  case 1:
/*<  8>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Du hast einen ziemlich großen\nVerlust hinnehmen müssen.\nEs tut mir wirklich leid für dich...")
          				goto flw_103
          			  case 2:
/*< 43>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Schade. Du konntest deine Ausgaben\nleider nicht decken. Das nennt man\nwohl Pech...")
          				flw_102:
/*<102>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 80), ('param3', 13)])
/*< 80>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 107), ('param3', 12)])
/*<107>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 55), ('param3', 45)])
          				goto flw_55
          			}
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Tja... Keine Verluste, aber auch kein\nGewinn. Es hätte dich schlimmer \ntreffen können.")
          			goto flw_102
          		  case 2:
/*< 44>*/ 			switch (context_related2(4)) {
          			  case 0:
/*<100>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 4363), ('next', 10), ('param3', 13)])
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Du konntest einen kleinen, aber feinen\nGewinn erzielen! Gut gemacht!")
          				goto flw_102
          			  case 1:
/*<101>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 4364), ('next', 40), ('param3', 13)])
/*< 40>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Du hast ein kleines Vermögen sammeln\nkönnen! Glückwunsch!")
          				goto flw_102
          			}
          		}
          	  case 2:
/*<111>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 73), ('param3', 44)])
/*< 73>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 159), ('param3', 12)])
/*<159>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Dein Ergebnis...")
/*< 70>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 99), ('param3', 33)])
/*< 99>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 6415), ('next', 41), ('param3', 13)])
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0 */ "U-u-unglaublich! Du hast alle Rubine\nausgegraben! Dafür gebe ich dir einen\nExtrapreis!")
/*< 42>*/ 		give_item(64 0x40);
          		goto flw_102
          	}
          }

          void entrypoint_302_02() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 7, unk: 0 */ "Herzlichen Dank, dass du dich\nan der <r<Risiko-Rubinjagd\n>>versuchen möchtest.\n\nBeachte Folgendes:\n<r<Rubine mit niedrigem Wert \n>>haben selten <r<Bomben >>in\nihrer Nähe.\n\nJe <r<wertvoller der Rubin>>, desto\nmehr <r<Bomben>> befinden sich um\nihn herum.\n\nViel Glück!")
          }

          void entrypoint_302_03() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf(/* textboxtype: 1, unk: 1 */ "Du solltest allmählich zum Ende\nkommen. Dir läuft die Zeit davon!")
          }

          void entrypoint_302_04() {
/*< 68>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 1 */ "Trödel nicht herum! Dir steht nur eine\ngewisse Zeitspanne zur Verfügung!")
          }

          void entrypoint_302_05() {
/*<114>*/ 	start()
/*<115>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x08\xA04Oh. Du gönnst dir eine Pause?\nWie wäre es mit einem kleinen\nSchwätzchen?\n\nIch habe schon lange nicht mehr\ngepflegt geplaudert.\n[1]Gerne![2-]Nein...")
/*<120>*/ 	switch (choice(2)) {
          	  case 0:
/*<122>*/ 		printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x0F\x110CWundervoll!\nNun gut. Also... Gibt es etwas,\ndas du mich fragen möchtest?\x0E\x01\x09\x04\x08\xAFF[1]Wer bist du?[2]Schwebst du?[3]Ist dir zu hell hier?[4-]...\x0E\x01\x09\x04\x13\x16FF")
          		flw_123:
/*<123>*/ 		switch (choice(4)) {
          		  case 0:
/*<125>*/ 			switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA04Man nennt mich <b<Cippolino>>.\nIch bin Inhaber der <r<Risiko-Rubinjagd>>!\n\n\n\x0E\x01\x09\x04\x09\xB09Ich bin die einzige und deshalb auch\ndie wichtigste Person hier! Schön, dich\nkennenzulernen!")
          				flw_128:
/*<128>*/ 				printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x13\x1806Möchtest du mich noch etwas fragen?[1]Wer bist du?[2]Schwebst du?[3]Ist dir zu hell hier?[4-]...")
          				goto flw_123
          			  case 1:
/*<158>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA04Man nennt mich <b<Cippolino>>.\nIch bin Inhaber der sagenhaften\n<r<Risiko-Rubinjagd>>!\n\nIch bin die einzige und deshalb auch\ndie wichtigste Person hier! \x0E\x01\x09\x04\x0D\xF01Ich freue\nmich, dich kennenzulernen!\n\n\x0E\x01\x09\x04\x08\xA09Ich habe die <b<Risiko-Rubinjagd >>ins\nLeben gerufen, um anderen zu\nReichtum zu verhelfen!\n\n\x0E\x01\x09\x04\x10\x1319Doch die <b<Mogma >>lachen mich nur aus.\nRubine finden sei einfach, sagen sie.\nUnd keiner will spielen...\n\n\x0E\x01\x09\x04\x08\xAFFDeshalb hoffe ich, dass du mein neuer\nStammkunde wirst! Das würde mich\nwirklich freuen!")
          					flw_124:
/*<124>*/ 					loadzone_temp_flags[0 /* 0x1 01 */] = true;
          					goto flw_128
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA04Man nennt mich <b<Cippolino>>.\nIch bin Inhaber der sagenhaften\n<r<Risiko-Rubinjagd>>!\n\nIch bin die einzige und deshalb auch\ndie wichtigste Person hier! \x0E\x01\x09\x04\x0D\xF01Ich freue\nmich, dich kennenzulernen!\n\n\x0E\x01\x09\x04\x08\xA09Ich habe die <b<Risiko-Rubinjagd >>ins\nLeben gerufen, um anderen zu\nReichtum zu verhelfen!\n\n\x0E\x01\x09\x04\x10\x1319Doch seit Kurzem rennen hier diese\nkomischen <r<roten Kerle>> herum und\nvertreiben mir meine Kundschaft.\n\n\x0E\x01\x09\x04\x08\xAFFIch wünschte, es hätte jemand den\nMumm und würde ihre <r<Wachtürme>>\nin die <pling>Luft jagen. Ja, das würde mich\nrichtig glücklich machen!")
          					goto flw_124
          				}
          			}
          		  case 1:
/*<130>*/ 			switch (loadzone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*<131>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA05Nein, ich schwebe nicht. Ich balanciere\nbloß auf meinem Schwanz.\n\n\nDas mache ich, damit Kunden meine\n<r<Prachtklauen >>bewundern können!")
          				goto flw_128
          			  case 1:
/*<151>*/ 				set_camera(1, 0)
/*<148>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\x1605Schweben? Ich? Mumpitz!\nIch balanciere nur auf dem Schwanz.")
/*<152>*/ 				set_camera(2, 0)
/*<149>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nDas mache ich, um meine beiden\n<r<Prachtklauen >>freizuhaben!")
/*<153>*/ 				set_camera(-1, 0)
/*<150>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xAFFIch fühle mich jedes Mal ziemlich\ngeschmeichelt, wenn meine Kunden\nsie bewundern.\n\nDeshalb halte ich mich mit meinem\nSchwanz in der Luft. So etwas spricht\nsich herum!")
/*<129>*/ 				loadzone_temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_128
          			}
          		  case 2:
/*<133>*/ 			switch (loadzone_temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<135>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA09Es ist nicht zu hell hier. Ich trage die\nBrille nur aus modischen Gründen.")
          				goto flw_128
          			  case 1:
/*<145>*/ 				set_camera(3, 0)
/*<134>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\x160AAch, du meinst wegen meiner Brille?\nDie habe ich nur auf, weil sie mich viel\nseriöser wirken lässt.")
/*<146>*/ 				set_camera(4, 0)
/*<143>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\xE0BPassend dazu habe ich mir einen\n<r<Schnurrbart>> stehen lassen! Ich\nkämme ihn jeden Tag!")
/*<147>*/ 				set_camera(-1, 0)
/*<144>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xAFFDas versteht sich von selbst!\nZu meinem Beruf gehört schließlich\nein gepflegtes Äußeres!")
/*<132>*/ 				loadzone_temp_flags[2 /* 0x1 04 */] = true;
          				goto flw_128
          			}
          		  case 3:
/*<137>*/ 			switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<138>*/ 				switch (loadzone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<136>*/ 					switch (loadzone_temp_flags[2 /* 0x1 04 */]) {
          					  case 0:
/*<140>*/ 						switch (scene_flags[39 /* 0x5 80 */]) {
          						  case 0:
          							flw_139:
/*<139>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x1319Hm? Nun gut.\nWenn du bereit bist, versuche dich\nruhig an meiner <b<Risiko-Rubinjagd>>.")
          						  case 1:
/*<141>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x1319Hm? Nun gut.\n\n\n\n\x0E\x01\x09\x04\x0D\x100CDanke, dass du mir Gesellschaft\ngeleistet hast. Zum Dank verrate\nich dir etwas...\n\n\x0E\x01\x09\x04\x08\xA04Siehst du diese glitzernden Steine\nin den Wänden? Das sind Teile\neiner <r<Rubin-Ader>>.\n\nSie ist der Grund, weshalb man hier so\nviele Rubine finden kann.\n\n\nWenn du sie mit einem <r<Projektil>><pling>\ntriffst, <r<brechen >>vielleicht ein paar\nRubine heraus. Versuch es doch mal\nbei Gelegenheit!")
/*<142>*/ 							scene_flags[4 'Eldin Volcano'][39 /* 0x5 80 */] = true;
          						}
          					  case 1:
          						goto flw_139
          					}
          				  case 1:
          					goto flw_139
          				}
          			  case 1:
          				goto flw_139
          			}
          		}
          	  case 1:
/*<121>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x1319Och... Wie schade.\nNa ja, wenn du wieder fit bist,\ngeh ruhig auf <b<Risiko-Rubinjagd>>.")
          	}
          }

