          void entrypoint_120_20() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Bon, je dépose la soupe ici.\n\n\n\nC'est pas très rassurant\ncomme endroit...")
          }

          void entrypoint_120_21() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Allez, je me sauve !\x0E\x01\x05\x04(\x00")
/*< 25>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*< 23>*/ 	story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */] = true;
/*< 24>*/ 	story_flags[288 /* us: 805A9AFA 0x04, jp: 805ACD7A 0x04 */] = true;
          }

          void entrypoint_120_01() {
/*<  7>*/ 	start()
/*< 32>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*< 34>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Hoho ! Tu as trouvé la Triforce !")
          		flw_35:
/*< 35>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Tu sais au fond de toi ce qu'il te reste\nà faire, petit humain.\n\n\nAvance vers ce en quoi tu crois.")
          		flw_36:
/*< 36>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          	  case 1:
/*< 31>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*< 33>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Hoho ! Tu as trouvé le chemin vers\nla Triforce !")
          			goto flw_35
          		  case 1:
/*< 15>*/ 			switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          			  case 0:
/*< 16>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Tu sais ce que tu as à faire maintenant,\nn'est\x2010ce pas ? Le chant ouvre la porte\nvers la dernière épreuve, qui se trouve\nquelque part dans le <b<ciel>>.\nUne fois l'épreuve réussie, poursuis ton\nchemin vers la <y+<Triforce>>.")
          				goto flw_36
          			  case 1:
/*< 10>*/ 				switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          				  case 0:
/*<  9>*/ 					switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          					  case 0:
/*< 11>*/ 						switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          						  case 0:
/*< 26>*/ 							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 13), ('param3', 6)])
/*< 13>*/ 							changeScene(5, 0) // 
          						  case 1:
          							flw_8:
/*<  8>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Hoho ! Comment vas\x2010tu ?\n\n\n\nReviens quand les trois dragons\nt'auront appris leur mélodie du Chant\ndu héros !\n\nLes dragons se trouvent dans la forêt\nde Firone, au volcan d'Ordinn et dans\nle désert de Lanelle.\n\nCourage, petit humain !")
          						}
          					  case 1:
          						goto flw_8
          					}
          				  case 1:
/*< 21>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*< 12>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Reviens quand les trois dragons\nt'auront appris leur mélodie du Chant\ndu héros !\n\nJe te chanterai alors la dernière.\n\n\n\n\x0E\x01\x08\x02\xFFCDD'ailleurs, ma voix a besoin d'un peu\nd'exercice...\x0E\x01\x08\x02Í")
          					  case 1:
          						printf(/* textboxtype: 1, unk: 0 */ "C'est toi qui m'as apporté ma soupe de\ncitrouille préférée, petit humain ?\n\n\nAprès avoir été possédé par cette\natroce créature, j'ai perdu mon\nesprit...\n\nMais cette soupe que j'aime tant me\nrappelle celui que j'étais.\n\n\nMerci, petit humain...")
/*<  1>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Je suis <b<Narisha>>, le grand esprit qui\nveille sur les cieux. Je servais la\nDéesse <b<Hylia>>, aujourd'hui disparue.\n\nTu t'appelles donc...\x0E\x01\x04\x02\x19 Link,\npetit humain.\n\n\nTes parents t'ont donné un très\njoli nom !\n\n\n\x0E\x01\x04\x02\x14Oh mais... \x0E\x01\x04\x02\x14Cette épée... \x0E\x01\x04\x02\x14Et ce pouvoir\nen ton c\x153ur...\n\n\n\x0E\x03\x01\x00Link... Tu es donc le héros\nélu par la Déesse...\n\n\nJ'en déduis que tu es venu me parler\nde la <y+<Triforce >>?\n\n\n[1]Oui[2]Tu connais ?")
/*<  2>*/ 						switch (choice(2)) {
          						  case 0:
          							flw_4:
/*<  4>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Je m'en doutais.\x0E\x01\x04\x02\x19 Très bien, je vais te\ndire ce que je sais.\n\n\nComme tu le sais sans doute, lorsque\nles serviteurs du mal ont essayé de\ns'emparer de la Triforce...\n\n... la Déesse a tout fait pour les\nen empêcher.\n\n\nElle a donc caché la Triforce à\n<b<Célesbourg>>, dans un endroit connu\nd'elle seule.\n\nJe ne sais donc pas non plus où elle\nse trouve...\n\n\nMais la Déesse m'a laissé un indice...\n\n\n\nEt c'est le <r<Chant du héros>>, que tu peux\njouer avec ta <b<lyre>>, petit humain.")
/*<  5>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Le Chant du héros est la <r<clé>> qui mène à\nl'endroit où la Triforce est cachée.")
/*<  6>*/ 							printf(/* textboxtype: 1, unk: 0 */ "La Déesse a divisé le chant en quatre\nmélodies, et en a donné une à chacun\ndes trois dragons, ainsi qu'à\nmoi\x2010même.\nTu dois donc rassembler toutes les\n<r<<r<<pling><r<mélodies du Chant du héros>>.\n\n\nLorsque tu auras obtenu les trois\npremières, je compléterai le chant en\nte chantant la dernière !\n\nBien. Les dragons se trouvent dans la\nforêt de Firone, au volcan d'Ordinn\net au désert de Lanelle.\n\nVa les trouver !")
/*< 22>*/ 							story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */] = true;
/*< 14>*/ 							story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
/*< 37>*/ 							story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
          						  case 1:
/*<  3>*/ 							printf(/* textboxtype: 1, unk: 0 */ "N'oublie pas à qui tu t'adresses...\n\x0E\x01\x04\x02\x14Mais passons.")
          							goto flw_4
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_120_02() {
/*< 27>*/ 	start()
/*< 28>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*< 30>*/ 		scene_flags[21 'The Sky'][37 /* 0x5 20 */] = true;
          	  case 1:
/*< 29>*/ 		scene_flags[21 'The Sky'][36 /* 0x5 10 */] = true;
          	}
          }

