          void entrypoint_101_30() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
          }

          void entrypoint_101_31() {
/*< 26>*/ 	start()
/*< 64>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 24), ('param3', 12)])
/*< 24>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 19), ('param2', 1), ('next', 25), ('param3', 23)])
/*< 25>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 6)])) {
          	  case 0:
/*< 28>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02<y<10 flèches>>? Une aubaine digne d'un\ngrand guerrier! On voit tout de suite\nque tu es un connaisseur.\n\nMais attention à ne blesser personne,\nhaha! <r<20 rubis>> et elles sont à toi.\n\n\n[1]J'achète[2-]Non merci")
/*< 21>*/ 		switch (choice(2)) {
          		  case 0:
/*< 23>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 26)])
          		  case 1:
/*< 22>*/ 			entrypoint_101_08();
          		}
          	  case 1:
/*< 27>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Toutes mes excuses, plates et sincères,\nmais je ne peux pas vendre de flèches\nà qui n'a pas d'arc!")
          	}
          }

          void entrypoint_101_32() {
/*< 36>*/ 	start()
/*< 65>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 32), ('param3', 12)])
/*< 32>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 92), ('param2', 1), ('next', 31), ('param3', 23)])
/*< 31>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 8)])) {
          	  case 0:
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Intéressé par ces <y<10 bombes>>?\nPrends\x2010les donc, et tu exploseras\nde joie! Haha!\n\nElles sont si pratiques pour faire sauter\ntoutes sortes de choses, comme les\nmurs par exemple! BA-BOUM!\n\nTout cela pour la modique somme de\n<r<20 rubis>>. Tentant, non?\n[1]J'achète[2-]Non merci")
          		flw_33:
/*< 33>*/ 		switch (choice(2)) {
          		  case 0:
/*< 35>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 26)])
          		  case 1:
/*< 34>*/ 			entrypoint_101_08();
          		}
          	  case 1:
/*< 38>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Toutes mes excuses, plates et sincères,\nmais je ne peux pas vendre de bombes\nà qui n'a pas de sac pour les ranger...\n\nJ'en suis fort triste, si triste...")
          	}
          }

          void entrypoint_101_33() {
/*< 46>*/ 	start()
/*< 66>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 47), ('param3', 12)])
/*< 47>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Ah, je vois que ce <y<bouclier de bois\n>>t'intéresse! Tu peux te protéger \ndes attaques grâce à lui!\n\nMais il<r< peut se casser >>s'il encaisse trop\nd'attaques, alors fais bien attention!\n\n\nIl est aussi très vulnérable au feu,\nje t'avertis.\n\n\n<r<50 rubis>> et il est à toi.\n[1]J'achète[2-]Non merci")
/*<125>*/ 	loadzone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_34() {
/*< 48>*/ 	start()
/*< 67>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 50), ('param3', 12)])
/*< 50>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Ah, je vois que ce <y<bouclier de fer\n>>t'intéresse! Il est plus résistant que\nle bouclier de bois, c'est certain!\n\nDe plus, il résiste au feu! Par contre,\nil est sensible à l'électricité.\n\n\n<r<100 rubis>> et il est à toi.\n[1]J'achète[2-]Non merci")
/*<126>*/ 	loadzone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_35() {
/*< 49>*/ 	start()
/*< 68>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 51), ('param3', 12)])
/*< 51>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Ah, je vois que ce <y<bouclier sacré >>a\néveillé ta curiosité... Il porte bien son\nnom, il résiste à tout!\n\nS'il subit de légers dégâts, il peut se\nréparer tout seul et il protège aussi\nbien du feu que de l'électricité. Ce\nbouclier est totalement multi\x2010usage!\nPar contre\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í il a un tout petit défaut de\nrien du tout... Il se brise facilement.\nMais pour une fine lame comme toi,\nce n'est pas un problème, hein?\nC'est <r<500 rubis>>. C'est certes un peu\ncher, mais tu aurais tort de te priver!\n[1]J'achète[2-]Non merci")
/*<127>*/ 	loadzone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_01() {
          	start()
/*< 40>*/ 	switch (loadzone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
          		flw_41:
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Que puis\x2010je donc faire pour toi,\nadmirable jeune homme?\n[1]Explique\x2010moi[2-]Rien du tout")
          		flw_1:
/*<  1>*/ 		switch (choice(2)) {
          		  case 0:
/*<  4>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Très bien, je vais donc tout t'expliquer,\nde A à Z, absolument tout. Oui, tout.\nRien que pour toi.\n\nSi tu veux bien, mets\x2010toi en face\nd'un produit et appuie sur (A)\npour en admirer la qualité.\n\nTu pourras le contempler à loisir,\nautant que tu le désires!\n\n\nEt tu peux acheter tous les articles que\ntu aimes! N'est\x2010ce pas merveilleux?")
/*<139>*/ 			switch (story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */]) {
          			  case 0:
/*<138>*/ 				printf(/* textboxtype: 1, unk: 0 */ "De plus, tu pourras emmener certains\nde mes articles à l'atelier de rénovation\npour les faire améliorer.\n\nLa durabilité des boucliers peut\npar exemple être augmentée\npour une utilisation prolongée!")
/*<140>*/ 				loadzone_temp_flags[1 /* 0x1 02 */] = true;
          			  case 1:
          			}
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Oh, je vois, tu es si intelligent! Tu\nconnais ça, toi! Même pas besoin de\nte renseigner!\n\nRegarde autour, alors. Prends tout\nton temps et admire tout ce que\nj'ai à ta disposition.")
/*< 39>*/ 			loadzone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	  case 1:
/*< 97>*/ 		switch (story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */]) {
          		  case 0:
/*<102>*/ 			switch (scene_flags[123 /* 0xE 08 */]) {
          			  case 0:
          				goto flw_41
          			  case 1:
/*<109>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 110), ('param3', 31)])
/*<110>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01<r<Nouvel arrivage>> aujourd'hui!\nRien que pour toi!\n\n\nL'accessoire indispensable de tout\narcher qui se respecte, le <y<petit\ncarquois>>!\n\nRegarde\x2010moi ça!")
/*<111>*/ 				loadzone_temp_flags[1 /* 0x1 02 */] = true;
/*<115>*/ 				scene_flags[0 'Skyloft'][123 /* 0xE 08 */] = true;
          			}
          		  case 1:
/*< 98>*/ 			switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          			  case 0:
/*<101>*/ 				switch (scene_flags[122 /* 0xE 04 */]) {
          				  case 0:
          					goto flw_41
          				  case 1:
/*<106>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 107), ('param3', 31)])
/*<107>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01<r<Nouvel arrivage>> aujourd'hui!\nRien que pour toi!\n\n\nLe mystérieux, l'incomparable <y<bouclier\nsacré >>enfin sur le marché!\n\n\nContemple\x2010le, oh oui, contemple!")
/*<108>*/ 					loadzone_temp_flags[1 /* 0x1 02 */] = true;
/*<114>*/ 					scene_flags[0 'Skyloft'][122 /* 0xE 04 */] = true;
          				}
          			  case 1:
/*< 96>*/ 				switch (story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */]) {
          				  case 0:
/*<100>*/ 					switch (scene_flags[121 /* 0xE 02 */]) {
          					  case 0:
          						goto flw_41
          					  case 1:
/*<103>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 104), ('param3', 31)])
/*<104>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01<r<Nouvel arrivage>> aujourd'hui!\nRien que pour toi!\n\n\nObserve bien la qualité de ce <y<petit sac\nde bombes>>, un pur joyau!")
/*<105>*/ 						loadzone_temp_flags[1 /* 0x1 02 */] = true;
/*<113>*/ 						scene_flags[0 'Skyloft'][121 /* 0xE 02 */] = true;
          					}
          				  case 1:
/*< 92>*/ 					switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          					  case 0:
/*< 99>*/ 						switch (scene_flags[120 /* 0xE 01 */]) {
          						  case 0:
          							goto flw_41
          						  case 1:
/*< 93>*/ 							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 123), ('param3', 31)])
/*<123>*/ 							switch (scene_flags[124 /* 0xE 10 */]) {
          							  case 0:
/*< 94>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Aujourd'hui, je dispose de tout\n<r<nouveaux articles>>!\n\n\nQue dis\x2010tu de ce superbe <y<bouclier de\nfer>>?")
          								flw_95:
/*< 95>*/ 								loadzone_temp_flags[1 /* 0x1 02 */] = true;
/*<112>*/ 								scene_flags[0 'Skyloft'][120 /* 0xE 01 */] = true;
          							  case 1:
/*<124>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Aujourd'hui, je dispose de tout\n<r<nouveaux articles>>!\n\n\nCe merveilleux, hem, <y<bouclier de fer>>,\net aussi ce <y<petit sac de graines>>!\n\n\nRegarde-moi donc ça!")
          								goto flw_95
          							}
          						}
          					  case 1:
/*<117>*/ 						switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          						  case 0:
/*<118>*/ 							switch (scene_flags[124 /* 0xE 10 */]) {
          							  case 0:
          								goto flw_41
          							  case 1:
/*<119>*/ 								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 122), ('param3', 31)])
/*<122>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01<r<Nouvel arrivage>> aujourd'hui!\nRien que pour toi!\n\n\nRegarde ce <y<petit sac de graines>>.\n\n\n\nPour tous ceux qui possèdent un\nlance\x2010pierre, c'est l'article idéal!")
/*<120>*/ 								loadzone_temp_flags[1 /* 0x1 02 */] = true;
/*<121>*/ 								scene_flags[0 'Skyloft'][124 /* 0xE 10 */] = true;
          							}
          						  case 1:
/*<  2>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Aha, un client! Mais quel bonheur!\nApproche, approche, ne fais pas\nton gêné!\n\nBienvenue à l'armurerie! J'ai tout ce\nqu'il te faut.\n\n\nPrends tout ton temps pour regarder\nmes superbes articles, et fais\x2010moi signe\nsi quelque chose t'intéresse.\n\nC'est la boutique favorite de tous les\nchevaliers!\n\n\nEt n'hésite pas si tu as la moindre\nquestion, je suis là pour toi.\n[1]Parfait[2-]Pas\nbesoin\x0E\x01\x07\x04\x00\x00")
          							goto flw_1
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_101_36() {
/*< 54>*/ 	start()
/*< 69>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 53), ('param3', 12)])
/*< 53>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 52), ('param2', 1), ('next', 52), ('param3', 23)])
/*< 52>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 16)])) {
          	  case 0:
/*< 55>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Ah, tu admires ces <y<10 graines Mojo>>?\nLes projectiles parfaits pour un\nprofessionnel du lance\x2010pierre\ncomme toi!\n<r<20 rubis >>et elles sont à toi.\nDès aujourd'hui!\n[1]J'achète[2-]Non merci")
          		goto flw_33
          	  case 1:
/*< 56>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Je regrette de constater que tu n'as\npas de lance\x2010pierre. Je ne peux \ndonc pas te vendre cet article...\n\nMais tu trouveras ton bonheur parmi\nmes autres articles, j'en suis sûr!\nEncore désolé, toutes mes excuses!")
          	}
          }

          void entrypoint_101_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
          }

          void entrypoint_101_37() {
/*< 71>*/ 	start()
/*< 72>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 141), ('param3', 12)])
/*<141>*/ 	loadzone_temp_flags[5 /* 0x1 20 */] = true;
/*< 81>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 52), ('param2', 1), ('next', 80), ('param3', 23)])
/*< 80>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 20)])) {
          	  case 0:
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Voilà un <y<petit sac de graines>>!\nAvec cela, tu peux stocker 10 graines\nMojo supplémentaires.\n\nL'accessoire indispensable à tous les\nadeptes du lance\x2010pierre!\n\n\nIl coûte <r<100 rubis>>. Une bagatelle!\n[1]J'achète[2-]Non merci")
          		goto flw_33
          	  case 1:
/*< 82>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Je regrette de constater que tu n'as\npas de lance\x2010pierre. Je ne peux \ndonc pas te vendre cet article...\n\nMais tu trouveras ton bonheur parmi\nmes autres articles, j'en suis sûr!\nEncore désolé, toutes mes excuses!")
          	}
          }

          void entrypoint_101_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	switch (random(2)) {
          	  case 0:
/*<  9>*/ 		printf(/* textboxtype: 1, unk: 0 */ "")
          	  case 1:
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 0 */ "")
          	}
          }

          void entrypoint_101_38() {
/*< 74>*/ 	start()
/*< 75>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 142), ('param3', 12)])
/*<142>*/ 	loadzone_temp_flags[5 /* 0x1 20 */] = true;
/*< 83>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 19), ('param2', 1), ('next', 84), ('param3', 23)])
/*< 84>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 22)])) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Voilà un <y<petit carquois>>!\nTu peux y stocker 5 flèches\nsupplémentaires.\n\nL'accessoire indispensable à tous\nles archers qui souhaitent pouvoir\ntirer sans retenue!\n\nIl coûte <r<150 rubis>>. Presque rien,\nfinalement!\n[1]J'achète[2-]Non merci")
          		goto flw_33
          	  case 1:
/*< 85>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Toutes mes excuses, plates et sincères,\nmais je ne peux pas vendre de flèches\nà qui n'a pas d'arc!")
          	}
          }

          void entrypoint_101_04() {
/*< 13>*/ 	start()
/*< 62>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 112), ('param2', 1), ('next', 63), ('param3', 23)])
/*< 63>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 18)])) {
          	  case 0:
/*< 14>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Je suis sincèrement et profondément\ndésolé, vraiment...\n\n\nMais ta sacoche est pleine...\nTu devrais aller déposer des objets\nà la consigne.")
/*<128>*/ 		loadzone_temp_flags[5 /* 0x1 20 */] = false;
          	  case 1:
          	}
          }

          void entrypoint_101_39() {
/*< 77>*/ 	start()
/*< 78>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 143), ('param3', 12)])
/*<143>*/ 	loadzone_temp_flags[5 /* 0x1 20 */] = true;
/*< 87>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 92), ('param2', 1), ('next', 86), ('param3', 23)])
/*< 86>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 24)])) {
          	  case 0:
/*< 79>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Voilà un <y<petit sac de bombes>>!\nTu peux y stocker 5 bombes\nsupplémentaires.\n\nL'accessoire indispensable pour\nsatisfaire toutes tes pulsions\ndestructrices!\n\nIl coûte <r<150 rubis>>. Un investissement\nde choix!\n[1]J'achète[2-]Non merci")
          		goto flw_33
          	  case 1:
/*< 88>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Toutes mes excuses, plates et sincères,\nmais je ne peux pas vendre de bombes\nà qui n'a pas de sac pour les ranger...\n\nJ'en suis fort triste, si triste...")
          	}
          }

          void entrypoint_101_05() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Oh, c'est très triste, mais...\n\n\n\nTu ne peux pas porter davantage\nde ces objets. Achète donc quelque\nchose d'autre!")
/*<129>*/ 	loadzone_temp_flags[5 /* 0x1 20 */] = false;
          }

          void entrypoint_101_06() {
/*< 17>*/ 	start()
/*< 59>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 18), ('param3', 33)])
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x08Oh, là!\x0E\x01\x05\x04\n\x00")
/*< 60>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6), ('param2', 512), ('next', 61), ('param3', 22)])
/*< 61>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Quel petit rigolo tu es, toi! Tu n'as pas\nassez de rubis pour acheter cet article,\nvoyons! Haha!")
/*<130>*/ 	loadzone_temp_flags[5 /* 0x1 20 */] = false;
          }

          void entrypoint_101_07() {
/*< 19>*/ 	start()
/*< 57>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 512), ('next', 43), ('param3', 22)])
/*< 43>*/ 	switch (random(2)) {
          	  case 0:
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Je ne remercie jamais assez mes\nclients. Merci, merci.")
          		flw_144:
/*<144>*/ 		switch (loadzone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*< 90>*/ 			switch (scene_flags[89 /* 0xA 02 */]) {
          			  case 0:
/*<132>*/ 				switch (story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */]) {
          				  case 0:
          					flw_70:
/*< 70>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Je me suis permis de placer cet objet\ndans ta sacoche. Pour <r<équiper>> un objet,\nappuie sur <g<\x0E\x02\x04\x02\x2CD >>et sélectionne celui que\ntu veux.\x0E\x01\x11\x02\x2CD")
          					flw_137:
/*<137>*/ 					loadzone_temp_flags[5 /* 0x1 20 */] = false;
          				  case 1:
/*<134>*/ 					switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          					  case 0:
/*<135>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Si <r<ton bouclier est endommagé>>, je te\nconseille d'aller faire un tour chez\nGondo, à l'<r<atelier de rénovation>>.\n\nSi tu lui fournis des trésors,\nil pourra améliorer ton bouclier\net des tas d'autres objets.")
/*<133>*/ 						story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */] = true;
          						goto flw_137
          					  case 1:
          						goto flw_70
          					}
          				}
          			  case 1:
/*< 89>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Je me suis permis de placer cet\nobjet dans ta sacoche. Pour ouvrir\nta sacoche, maintiens \x0E\x02\x04\x02\x2CD enfoncé...\x0E\x01\x11\x02\x2CD\n\n... et place le curseur sur l'objet\nsouhaité en <g<le pointant >>avec la\nmanette Wii Remote.\n\nUne fois l'objet sélectionné, <g<relâche\n>>\x0E\x02\x04\x02\x2CD pour pouvoir l'utiliser.\x0E\x01\x11\x02\x2CD\nC'est aussi simple que ça.\n\nEt ça vaut aussi pour les boucliers!")
/*< 91>*/ 				story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<116>*/ 				scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
/*<136>*/ 				loadzone_temp_flags[5 /* 0x1 20 */] = false;
          			}
          		  case 1:
          		}
          	  case 1:
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Aaah... C'est toujours un plaisir\nde faire affaire avec toi!")
          		goto flw_144
          	}
          }

          void entrypoint_101_08() {
/*< 29>*/ 	start()
/*< 44>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 58), ('param3', 33)])
/*< 58>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x08...\x0E\x01\x05\x04\x0F\x00")
/*< 45>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6), ('param2', 512), ('next', 30), ('param3', 22)])
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Aucun problème, aucun problème!\nJ'ai de nombreux autres articles\nen rayon, prends ton temps!")
/*<131>*/ 	loadzone_temp_flags[5 /* 0x1 20 */] = false;
          }

