          void entrypoint_302_01() {
          	start()
/*< 19>*/ 	switch (context_related3(0)) {
          	  case 0:
/*< 82>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 3585), ('next', 16), ('param3', 13)])
/*< 16>*/ 		switch (story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */]) {
          		  case 0:
/*< 14>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Bienvenue, l'ami!")
/*<156>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 53), ('param3', 13)])
          			flw_53:
/*< 53>*/ 			switch (context_related2(1)) {
          			  case 0:
/*< 84>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5640), ('next', 54), ('param3', 13)])
/*< 54>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Voici. Le jeu consiste à creuser\npour trouver plein de rubis sans\ntrouver de bombes. Tu veux jouer\nau <b<Fouille\x2010rub>>...\n\x0E\x01\x09\x04\x14\x1614Ouf... Ça va pas fort, fort, toi!\nReviens me voir quand tu auras\nrepris des forces. Vu?")
/*<118>*/ 				set_camera(5, 0)
/*<119>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Tu peux t'asseoir juste là, si tu veux.")
          			  case 1:
/*< 83>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 6), ('next', 1), ('param3', 13)])
/*<  1>*/ 				printf(/* textboxtype: 1, unk: 1 */ "Des rubis en masse! Des explosions\nsurprises! C'est ce qui t'attend chez\nle bon Radigume! Veux\x2010tu jouer au\n<b<Fouille\x2010rubis>>? Hm? Hm?\n[1]Débutant[2]Intermédiaire[3]Expert[4-]Non merci")
          				flw_85:
/*< 85>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 3), ('param3', 13)])
/*<  3>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					switch (temp_flags[14 /* 0x0 40 */]) {
          					  case 0:
          						flw_74:
/*< 74>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 87), ('param3', 12)])
/*< 87>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5638), ('next', 59), ('param3', 13)])
/*< 59>*/ 						printf(/* textboxtype: 1, unk: 1 */ "C'est <r<30 rubis >>la partie.\nVeux\x2010tu jouer? Hm? Hm?\n\n[1]Absolument[2-]Non merci")
/*< 88>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 37), ('param3', 13)])
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*<110>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 30), ('next', 109), ('param3', 23)])
/*<109>*/ 							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 37)])) {
          							  case 0:
/*< 36>*/ 								rupees += -30;
/*< 90>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5400), ('next', 34), ('param3', 13)])
/*< 34>*/ 								printf(/* textboxtype: 1, unk: 0 */ "J'espère que tu déterreras des tonnes\nde rubis! Je te souhaite bonne chance!")
/*< 57>*/ 								temp_flags[14 /* 0x0 40 */] = true;
/*< 33>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 47), ('param3', 33)])
/*< 47>*/ 								changeScene(1, 0) // 
          							  case 1:
/*< 89>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4633), ('next', 35), ('param3', 13)])
/*< 35>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Tu n'as pas assez d'argent, ma foi!\nReviens me voir quand tu seras\ncapable de payer! Vu?")
          							}
          						  case 1:
/*< 75>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 38), ('param3', 12)])
/*< 38>*/ 							printf(/* textboxtype: 1, unk: 1 */ "À quel niveau veux\x2010tu jouer, hm? Hm?\n[1]Débutant[2]Intermédiaire[3]Expert[4-]Quitter")
          							goto flw_85
          						}
          					  case 1:
/*< 21>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Le champ de rubis niveau débutant\npossède peu de trous. C'est idéal\npour les novices.")
          						goto flw_74
          					}
          				  case 1:
/*< 62>*/ 					switch (temp_flags[15 /* 0x0 80 */]) {
          					  case 0:
          						flw_76:
/*< 76>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 91), ('param3', 12)])
/*< 91>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5638), ('next', 22), ('param3', 13)])
/*< 22>*/ 						printf(/* textboxtype: 1, unk: 1 */ "C'est <r<50 rubis>> la partie.\nVeux\x2010tu jouer? Hm? Hm?\n[1]Absolument[2-]Non merci")
/*< 92>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 31), ('param3', 13)])
/*< 31>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							switch (has_rupees(50)) {
          							  case 0:
/*< 30>*/ 								rupees += -50;
/*< 96>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5400), ('next', 27), ('param3', 13)])
/*< 27>*/ 								printf(/* textboxtype: 1, unk: 0 */ "J'espère que tu déterreras des tonnes\nde rubis! Je te souhaite bonne chance!")
/*< 60>*/ 								temp_flags[15 /* 0x0 80 */] = true;
/*< 26>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 45), ('param3', 33)])
/*< 45>*/ 								changeScene(2, 0) // 
          							  case 1:
/*< 95>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4633), ('next', 29), ('param3', 13)])
/*< 29>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Tu n'as pas assez d'argent, ma foi!\nReviens me voir quand tu seras\ncapable de payer! Vu?")
          							}
          						  case 1:
/*< 77>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 32), ('param3', 12)])
/*< 32>*/ 							printf(/* textboxtype: 1, unk: 1 */ "À quel niveau veux\x2010tu jouer, hm? Hm?\n[1]Débutant[2]Intermédiaire[3]Expert[4-]Quitter")
          							goto flw_85
          						}
          					  case 1:
/*< 63>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Le champ de rubis niveau\nintermédiaire possède un\npeu plus de trous. Mais...\ngare aux <y<roupirs>>!")
          						goto flw_76
          					}
          				  case 2:
/*< 64>*/ 					switch (temp_flags[16 /* 0x3 01 */]) {
          					  case 0:
          						flw_78:
/*< 78>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 93), ('param3', 12)])
/*< 93>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5638), ('next', 23), ('param3', 13)])
/*< 23>*/ 						printf(/* textboxtype: 1, unk: 1 */ "C'est <r<70 rubis>> la partie.\nVeux\x2010tu jouer? Hm? Hm?\n[1]Absolument[2-]Non merci")
/*< 94>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 24), ('param3', 13)])
/*< 24>*/ 						switch (choice(2)) {
          						  case 0:
/*<113>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 70), ('next', 112), ('param3', 23)])
/*<112>*/ 							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 39)])) {
          							  case 0:
/*< 15>*/ 								rupees += -70;
/*< 98>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5400), ('next', 6), ('param3', 13)])
/*<  6>*/ 								printf(/* textboxtype: 1, unk: 0 */ "J'espère que tu déterreras des tonnes\nde rubis! Je te souhaite bonne chance!")
/*< 61>*/ 								temp_flags[16 /* 0x3 01 */] = true;
/*<  4>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 46), ('param3', 33)])
/*< 46>*/ 								changeScene(3, 0) // 
          							  case 1:
/*< 97>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4633), ('next', 13), ('param3', 13)])
/*< 13>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Tu n'as pas assez d'argent, ma foi!\nReviens me voir quand tu seras\ncapable de payer! Vu?")
          							}
          						  case 1:
/*< 79>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 25), ('param3', 12)])
/*< 25>*/ 							printf(/* textboxtype: 1, unk: 1 */ "À quel niveau veux\x2010tu jouer, hm? Hm?\n[1]Débutant[2]Intermédiaire[3]Expert[4-]Quitter")
          							goto flw_85
          						}
          					  case 1:
/*< 65>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Le champ de rubis niveau expert\nest plein de bombes, mais a aussi\nplus de rubis de valeur. Tu peux\ndéterrer toute une richesse!")
          						goto flw_78
          					}
          				  case 3:
/*< 86>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5379), ('next', 5), ('param3', 13)])
/*<  5>*/ 					printf(/* textboxtype: 1, unk: 0 */ "À la prochaine chicane!")
          				}
          			}
          		  case 1:
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 2 */ "Ma foi, c'est ton baptême de\nFouille\x2010rubis! J'en suis très honoré!")
/*<155>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 154), ('param3', 13)])
/*<154>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Je m'appelle <b<Radigume>>. Enchanté de\nfaire ta connaissance, petit! C'est moi\nle responsable de <r<Fouille\x2010rubis>>.")
/*< 18>*/ 			story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */] = true;
          			goto flw_53
          		}
          	  case 1:
/*< 69>*/ 		story_flags[185 /* us: 805A9AE9 0x01, jp: 805ACD69 0x01 */] = true;
/*<106>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 72), ('param3', 44)])
/*< 72>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 20), ('param3', 12)])
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Tu as déterré <r<<r<\x0E\x02\x03\x06\x00\x00Í<r< rubis>>.")
/*< 71>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 39), ('param3', 33)])
/*< 39>*/ 		switch (context_related3(2)) {
          		  case 0:
/*<104>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4628), ('next', 7), ('param3', 13)])
/*<  7>*/ 			switch (context_related3(3)) {
          			  case 0:
/*< 11>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Tu n'as pas déterré un seul rubis?\nJe te plains. Pauvre toi.")
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
/*< 56>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Tu as l'air exténué. Reviens me voir\nquand tu auras repris des forces. Vu?")
/*<116>*/ 						set_camera(5, 0)
/*<117>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Tu veux faire une pause? Assieds\x2010toi\nen face de moi. Ça va te faire du bien.")
          					  case 1:
/*<  2>*/ 						printf(/* textboxtype: 1, unk: 1 */ "Veux\x2010tu rejouer? Hm? Hm?\nQuel niveau? Hm?\n[1]Débutant[2]Intermédiaire[3]Expert[4-]J'ai fini")
          						goto flw_85
          					}
          				  case 1:
/*< 51>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Écoute bien mon conseil, petit.\nLes <r<rubis de faible valeur >>ont <r<peu\nde bombes >>aux alentours. Vu?\n\nPar contre, si tu déterres un <r<rubis\nde grande valeur>>, il y a de fortes\nchances qu'<r<une bombe ne soit pas loin>>.\n\nSi ton premier trou contient une\nbombe...\x0E\x01\x04\x02\x14 il faut admettre la défaite et\nréessayer. Ne baisse pas les bras,\ntu vois!")
/*< 52>*/ 					story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */] = true;
          					goto flw_55
          				}
          			  case 1:
/*<  8>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Tu t'es fait plumer, on dirait!\nJe suis désolé pour toi.")
          				goto flw_103
          			  case 2:
/*< 43>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Tu as perdu un peu d'argent. Hm?\nCe n'est pas ton jour de chance.")
          				flw_102:
/*<102>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 80), ('param3', 13)])
/*< 80>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 107), ('param3', 12)])
/*<107>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 55), ('param3', 45)])
          				goto flw_55
          			}
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Tu n'as rien perdu, mais rien gagné\nnon plus. Kif-kif, comme on dit. Hm?")
          			goto flw_102
          		  case 2:
/*< 44>*/ 			switch (context_related2(4)) {
          			  case 0:
/*<100>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 4363), ('next', 10), ('param3', 13)])
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Tu as gagné un peu d'argent.\nBien joué, l'ami.")
          				goto flw_102
          			  case 1:
/*<101>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 4364), ('next', 40), ('param3', 13)])
/*< 40>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Tu as déterré toute une cagnotte!\nFélicitations!")
          				goto flw_102
          			}
          		}
          	  case 2:
/*<111>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 73), ('param3', 44)])
/*< 73>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 159), ('param3', 12)])
/*<159>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Tu as déterré...")
/*< 70>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 99), ('param3', 33)])
/*< 99>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 6415), ('next', 41), ('param3', 13)])
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0 */ "In\x2010croy\x2010able! Tu as déterré\ntous les rubis! Watatow!\nTiens, voici une récompense.")
/*< 42>*/ 		give_item(64 0x40);
          		goto flw_102
          	}
          }

          void entrypoint_302_02() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 7, unk: 0 */ "Bienvenue au <r<Fouille\x2010rubis>>!\nMerci de ta visite, cher client!\n\n\nVoici un précieux conseil.\nLes <r<rubis de faible valeur >>ont\n<r<peu de bombes >>aux alentours.\n\nPar contre, si tu déterres un\n<r<rubis de grande valeur>>, il y a\nde fortes chances qu'<r<une bombe\nne soit pas loin>>.\nAlors fais bien attention.\nÀ très bientôt!")
          }

          void entrypoint_302_03() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf(/* textboxtype: 1, unk: 1 */ "Tu devrais te dépêcher un peu.\nLe temps est presque écoulé.")
          }

          void entrypoint_302_04() {
/*< 68>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 1 */ "Désolé, le temps est écoulé,\npetit! La fête est finie...")
          }

          void entrypoint_302_05() {
/*<114>*/ 	start()
/*<115>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x08\xA04Oh, tu veux faire une pause?\n\n\n\nTu veux bien papoter avec moi\nun instant, tu vois?\n[1]Oui[2-]Non")
/*<120>*/ 	switch (choice(2)) {
          	  case 0:
/*<122>*/ 		printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x0F\x110CSuper! Vas\x2010y, pose\x2010moi une question.\n\x0E\x01\x09\x04\x08\xAFF[1]Qui es\x2010tu?[2]Tu flottes?[3]Tu es ébloui?[4-]Rien\x0E\x01\x09\x04\x13\x16FF")
          		flw_123:
/*<123>*/ 		switch (choice(4)) {
          		  case 0:
/*<125>*/ 			switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA04Je m'appelle <b<Radigume>>.\nJe suis le seul et unique responsable\ndu <r<Fouille\x2010rubis>>! Je n'en suis pas peu\nfier!\nTu peux aussi m'appeler <b<monsieur\nRadigume>>. \x0E\x01\x09\x04\x0D\xF01Je n'y aurais aucune\nobjection... Enchanté, petit!")
          				flw_128:
/*<128>*/ 				printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x13\x1806Tu veux me poser une autre question?\n[1]Qui es\x2010tu?[2]Tu flottes?[3]Tu es ébloui?[4-]Rien")
          				goto flw_123
          			  case 1:
/*<158>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Je m'appelle <b<Radigume>>.\nJe suis le seul et unique responsable\ndu <r<Fouille\x2010rubis>>! Je n'en suis pas peu\nfier!\nTu peux aussi m'appeler <b<monsieur\nRadigume>>. \x0E\x01\x09\x04\x0D\xF01Je n'y aurais aucune\nobjection... Enchanté, petit!\n\n\x0E\x01\x09\x04\x08\xA09J'ai inventé le <b<Fouille\x2010rubis>> parce\nque je voulais que tout le monde\npuisse faire fortune. Pas bête, hm?\n\n\x0E\x01\x09\x04\x10\x1319Mais ils ne veulent pas jouer parce\nqu'ils gagnent déjà tous des tonnes\nde rubis, tu vois...\n\n\x0E\x01\x09\x04\x08\xAFFJ'espère que tu vas devenir un habitué!\nÇa me ferait chaud au c\x153ur, et au\nportefeuille aussi!")
          					flw_124:
/*<124>*/ 					loadzone_temp_flags[0 /* 0x1 01 */] = true;
          					goto flw_128
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA04Je m'appelle <b<Radigume>>.\nJe suis le seul et unique responsable\ndu <r<Fouille\x2010rubis>>! Je n'en suis pas peu\nfier!\nTu peux aussi m'appeler <b<monsieur\nRadigume>>. \x0E\x01\x09\x04\x0D\xF01Je n'y aurais aucune\nobjection... Enchanté, petit!\n\n\x0E\x01\x09\x04\x08\xA09J'ai inventé le <b<Fouille\x2010rubis>> parce\nque je voulais que tout le monde\npuisse faire fortune. Pas bête, hm?\n\n\x0E\x01\x09\x04\x10\x1319Mais ces derniers temps, ça grouille\nde <r<monstres rouges et effrayants>>\ndehors... Les clients se font rares,\ntu comprends?\n\x0E\x01\x09\x04\x08\xAFFÇa me ferait bien plaisir si quelqu'un\nallait faire exploser leur <r<tour de guet\n>>pour les chasser de là. Un bon gros\nBOUM, hm?<pling>")
          					goto flw_124
          				}
          			}
          		  case 1:
/*<130>*/ 			switch (loadzone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*<131>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA05Non, je ne flotte pas. Quelle idée!\nJe suis assis sur ma queue pour que\nles clients admirent mes <r<papattes>>.")
          				goto flw_128
          			  case 1:
/*<151>*/ 				set_camera(1, 0)
/*<148>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\x1605Ha! Ha! Non, je ne flotte pas.\nQuelle drôle d'idée... Je suis\nassis sur ma queue.")
/*<152>*/ 				set_camera(2, 0)
/*<149>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nEn fait, je suis très fier de mes\nbelles <r<papattes>>!")
/*<153>*/ 				set_camera(-1, 0)
/*<150>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xAFFC'est pour ça que je m'assois sur ma\nqueue. Comme ça, mes clients peuvent\nles admirer! Ça mousse les ventes, c'est\npas possible!")
/*<129>*/ 				loadzone_temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_128
          			}
          		  case 2:
/*<133>*/ 			switch (loadzone_temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<135>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA09Non, je ne suis pas ébloui. Je suis\nsimplement à la pointe de la mode.")
          				goto flw_128
          			  case 1:
/*<145>*/ 				set_camera(3, 0)
/*<134>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\x160AAh, tu parles de mes lunettes?\nC'est juste pour le style, tu vois.\nElles me vont bien, hm?")
/*<146>*/ 				set_camera(4, 0)
/*<143>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\xE0BEt ma <r<moustache>>, pas mal, hm?\nElle a une belle ligne, je trouve.\nJe la peigne tous les matins.")
/*<147>*/ 				set_camera(-1, 0)
/*<144>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xAFFJe dois être présentable auprès de\nmes clients, hm? C'est important\nde soigner son apparence.")
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
/*<139>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x1319Ah non? Très bien...\nPrends ton temps et essaie mon\n<b<Fouille\x2010rubis>> quand tu es prêt.")
          						  case 1:
/*<141>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x1319Ah non? Hm. Dommage...\n\n\n\n\x0E\x01\x09\x04\x0D\x100CMerci d'avoir placoté avec moi.\nEn échange, je vais te donner\nun conseil.\n\n\x0E\x01\x09\x04\x08\xA04Tu vois les pierres brillantes qui\nsortent du mur là\x2010bas? C'est un\n<r<gisement de rubis>>.\n\nSi tu <r<lances un projectile>> dessus, tu\nferas sûrement <r<tomber >>quelques rubis.\n<pling>Tu devrais essayer, pour voir!")
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
/*<121>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x1319Oh, dommage...\nEn tout cas, quand tu te sentiras mieux,\nfais donc une partie de <b<Fouille\x2010rubis>>!")
          	}
          }

