          void entrypoint_110_01() {
          	start()
/*< 37>*/ 	switch (story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */]) {
          	  case 0:
/*< 29>*/ 		switch (loadzone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<126>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Tu veux que je réexplique\nles règles du jeu ?\n[1]Oui[2-]Non,\nc'est bon ")
/*<127>*/ 			switch (choice(2)) {
          			  case 0:
/*< 30>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x602Ouvre grand tes oreilles, voici les\nrègles du jeu !\n\n\n\x0E\x01\x09\x04\x12\x600Le canon au centre de l'île te propulse\ndans les airs. Tu dois atterrir en chute\nlibre sur une case du plateau tournant.\n\nSi tu atterris sur une case colorée,\ntes gains dépendront de la couleur\nde cette case.\n\n\x0E\x01\x09\x04\x0D\x600Mais si tu atterris sur une case grise,\nappelée <r<case roupir>>, c'est moi qui\nempoche les gains !\n\n\x0E\x01\x09\x04\x12\x1100Tu auras beau être avide et tenter\nd'atterrir sur une case de grande\nvaleur, au bout du compte, c'est un\njeu de <r<hasard>>...\nIl faudra pas te fâcher si tu atterris sur\nune <r<case roupir>>.")
/*<129>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x600Pendant ta chute, tu croiseras\ndes <r<anneaux bonus >>et des <r<balles\nmalchance >>!\n\n\x0E\x01\x09\x04\x0D\x600Chaque fois que tu passes à travers un\n<r<anneau bonus>>, ton multiplicateur de\nrubis augmente.\n\nEt c'est pas tout ! Plus tu passes à\ntravers des anneaux, plus le plateau\nralentit. Pratique pour viser !\n\n\x0E\x01\x09\x04\x12\xC00Par contre, si tu percutes une <r<balle\nmalchance>>, ton multiplicateur retombe\nà 1 !\n\n\x0E\x01\x09\x04\x0D\x600Quoi d'autre... Ah, oui ! Durant ta\nchute, tu <r<ne peux pas déployer >>ton\nparachâle, alors fais attention !")
          			  case 1:
/*<128>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x06Monte dans le canon et c'est parti\nmon kiki !")
          			}
          		  case 1:
/*< 75>*/ 			switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          			  case 0:
          				flw_77:
/*< 77>*/ 				switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          				  case 0:
/*< 79>*/ 					OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 84), ('param3', 12)])
/*< 84>*/ 					switch (loadzone_temp_flags[6 /* 0x1 40 */]) {
          					  case 0:
/*< 85>*/ 						printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x01Quoi ? Tu veux rejouer ?\nTu es un vrai casse\x2010cou, toi !\n\n\nC'est <r<20 rubis>> la partie. Tu es prêt ?\n[1]Jouer[2]Règles du jeu[3-]Quitter")
          						flw_33:
/*< 33>*/ 						switch (choice(3)) {
          						  case 0:
/*< 76>*/ 							switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          							  case 0:
/*<  6>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 10>*/ 									rupees += -20;
          									flw_82:
/*< 82>*/ 									loadzone_temp_flags[5 /* 0x1 20 */] = true;
/*<  5>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Par ici, mon p'tit gars ! Quand tu es\nprêt, saute dans le canon situé au\ncentre de l'île.\n\nCanon affûté, partez !")
/*<144>*/ 									switch (loadzone_temp_flags[8 /* 0x0 01 */]) {
          									  case 0:
/*<145>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', -1), ('param3', 33)])
          									  case 1:
/*<146>*/ 										loadzone_temp_flags[8 /* 0x0 01 */] = true;
/*< 80>*/ 										set_camera(1, 0)
/*<  3>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 81), ('param3', 33)])
/*< 81>*/ 										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 80), ('next', -1), ('param3', 6)])
          									}
          								  case 1:
/*<  7>*/ 									printf(/* textboxtype: 1, unk: 0 */ "~~~\x0E\x01\x09\x04\x16\xC03C'est ballot, tu n'as pas assez de rubis !\n\x0E\x01\x09\x04\x00\x600Reviens me voir quand tu auras de quoi\npayer !")
          								}
          							  case 1:
          								flw_74:
/*< 74>*/ 								story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */] = true;
          								goto flw_82
          							}
          						  case 1:
/*< 34>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x602Ouvre grand tes oreilles, voici les\nrègles du jeu !\n\n\n\x0E\x01\x09\x04\x12\x600Le canon au centre de l'île te propulse\ndans les airs. Tu dois atterrir en chute\nlibre sur une case du plateau tournant.\n\nSi tu atterris sur une case colorée,\ntes gains dépendront de la couleur\nde cette case.\n\n\x0E\x01\x09\x04\x0D\x600Mais si tu atterris sur une case grise,\nappelée <r<case roupir>>, c'est moi qui\nempoche les gains !\n\n\x0E\x01\x09\x04\x12\x1100Tu auras beau être avide et tenter\nd'atterrir sur une case de grande\nvaleur, au bout du compte, c'est un\njeu de <r<hasard>>...\nIl faudra pas te fâcher si tu atterris sur\nune <r<case roupir>>.")
/*< 35>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x600Pendant ta chute, tu croiseras\ndes <r<anneaux bonus >>et des <r<balles\nmalchance >>!\n\n\x0E\x01\x09\x04\x0D\x600Chaque fois que tu passes à travers un\n<r<anneau bonus>>, ton multiplicateur de\nrubis augmente.\n\nEt c'est pas tout ! Plus tu passes à\ntravers des anneaux, plus le plateau\nralentit. Pratique pour viser !\n\n\x0E\x01\x09\x04\x12\xC00Par contre, si tu percutes une <r<balle\nmalchance>>, ton multiplicateur retombe\nà 1 !\n\n\x0E\x01\x09\x04\x0D\x600Quoi d'autre... Ah, oui ! Durant ta\nchute, tu <r<ne peux pas déployer >>ton\nparachâle, alors fais attention !")
          						  case 2:
/*< 36>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x16\xD05Ben alors !\nT'as le vertige, p'tit gars ?")
          						}
          					  case 1:
/*<  9>*/ 						printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x0D\x601Youhou ! Te revoilà !\nTu es avide de sensations fortes,\np'tit gars ?\n\n\x0E\x01\x09\x04\x09\x600Cette fois, ce sera pas gratuit.\nC'est <r<20 rubis >>la partie.\nÇa t'intéresse ?\n[1]Jouer[2]Règles du jeu[3-]Quitter")
/*< 83>*/ 						loadzone_temp_flags[6 /* 0x1 40 */] = true;
          						goto flw_33
          					}
          				  case 1:
/*< 78>*/ 					printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x01Youpiii ! Par ici, mon p'tit gars.\nTu es avide de sensations fortes ?\n\n\nPour te remercier d'avoir retrouvé\nma roulette, cette partie est gratuite !\n[1]Jouer[2]Règles du jeu[3-]Quitter")
          					goto flw_33
          				}
          			  case 1:
/*< 11>*/ 				switch (story_flags[42 /* us: 805A9AE7 0x08, jp: 805ACD67 0x08 */]) {
          				  case 0:
          					goto flw_77
          				  case 1:
/*< 12>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x601Je te dois une fière chandelle, mon\np'tit gars ! Merci d'avoir retrouvé\nma roulette.\n\nMon rêve s'est enfin réalisé !\nBienvenue sur l'<b<île roulette >>!\n\n\nNormalement, c'est 20 rubis la partie...\n\n\n\nMais comme j'ai une dette envers toi,\nje t'offre ta première partie !")
/*<  8>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x602Ouvre grand tes oreilles, voici les\nrègles du jeu !\n\n\n\x0E\x01\x09\x04\x12\x600Le canon au centre de l'île te propulse\ndans les airs. Tu dois atterrir en chute\nlibre sur une case du plateau tournant.\n\nSi tu atterris sur une case colorée,\ntes gains dépendront de la couleur\nde cette case.\n\n\x0E\x01\x09\x04\x0D\x600Mais si tu atterris sur une case grise,\nappelée <r<case roupir>>, c'est moi qui\nempoche les gains !\n\n\x0E\x01\x09\x04\x12\x1100Tu auras beau être avide et tenter\nd'atterrir sur une case de grande\nvaleur, au bout du compte, c'est un\njeu de <r<hasard>>...\nIl faudra pas te fâcher si tu atterris sur\nune <r<case roupir>>.")
/*< 22>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x600Pendant ta chute, tu croiseras\ndes <r<anneaux bonus >>et des <r<balles\nmalchance >>!\n\n\x0E\x01\x09\x04\x0D\x600Chaque fois que tu passes à travers un\n<r<anneau bonus>>, ton multiplicateur de\nrubis augmente.\n\nEt c'est pas tout ! Plus tu passes à\ntravers des anneaux, plus le plateau\nralentit. Pratique pour viser !\n\n\x0E\x01\x09\x04\x12\xC00Par contre, si tu percutes une <r<balle\nmalchance>>, ton multiplicateur retombe\nà 1 !\n\n\x0E\x01\x09\x04\x0D\x600Quoi d'autre... Ah, oui ! Durant ta\nchute, tu <r<ne peux pas déployer >>ton\nparachâle, alors fais attention !")
/*< 13>*/ 					story_flags[42 /* us: 805A9AE7 0x08, jp: 805ACD67 0x08 */] = true;
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x600Il est temps de faire le grand plongeon,\ntu ne crois pas ?\n\n\n[1]OK ![2-]Pas\nmaintenant")
/*<  2>*/ 					switch (choice(2)) {
          					  case 0:
/*<130>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Tu veux que je réexplique\nles règles du jeu ?\n[1]Oui[2-]Non,\nc'est bon ")
/*<131>*/ 						switch (choice(2)) {
          						  case 0:
/*<132>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x602Ouvre grand tes oreilles, voici les\nrègles du jeu !\n\n\n\x0E\x01\x09\x04\x12\x600Le canon au centre de l'île te propulse\ndans les airs. Tu dois atterrir en chute\nlibre sur une case du plateau tournant.\n\nSi tu atterris sur une case colorée,\ntes gains dépendront de la couleur\nde cette case.\n\n\x0E\x01\x09\x04\x0D\x600Mais si tu atterris sur une case grise,\nappelée <r<case roupir>>, c'est moi qui\nempoche les gains !\n\n\x0E\x01\x09\x04\x12\x1100Tu auras beau être avide et tenter\nd'atterrir sur une case de grande\nvaleur, au bout du compte, c'est un\njeu de <r<hasard>>...\nIl faudra pas te fâcher si tu atterris sur\nune <r<case roupir>>.")
/*<133>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x600Pendant ta chute, tu croiseras\ndes <r<anneaux bonus >>et des <r<balles\nmalchance >>!\n\n\x0E\x01\x09\x04\x0D\x600Chaque fois que tu passes à travers un\n<r<anneau bonus>>, ton multiplicateur de\nrubis augmente.\n\nEt c'est pas tout ! Plus tu passes à\ntravers des anneaux, plus le plateau\nralentit. Pratique pour viser !\n\n\x0E\x01\x09\x04\x12\xC00Par contre, si tu percutes une <r<balle\nmalchance>>, ton multiplicateur retombe\nà 1 !\n\n\x0E\x01\x09\x04\x0D\x600Quoi d'autre... Ah, oui ! Durant ta\nchute, tu <r<ne peux pas déployer >>ton\nparachâle, alors fais attention !")
          							goto flw_74
          						  case 1:
          							goto flw_74
          						}
          					  case 1:
/*<  4>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x16\xD05Ben alors !\nT'as le vertige, p'tit gars ?")
          					}
          				}
          			}
          		}
          	  case 1:
/*< 38>*/ 		switch (story_flags[92 /* us: 805A9AF1 0x02, jp: 805ACD71 0x02 */]) {
          		  case 0:
/*<152>*/ 			switch (story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */]) {
          			  case 0:
/*<153>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 31)])
          			  case 1:
/*< 40>*/ 				switch (story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */]) {
          				  case 0:
/*<151>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 91), ('param3', 31)])
/*< 91>*/ 					switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          					  case 0:
/*< 42>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\xC10Ah... Si tu pouvais vraiment la\nretrouver, ce serait formidable...\n\n\nMais je ne me fais pas trop\nd'illusions...")
          					  case 1:
/*<105>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0FBien le bonjour, mon p'tit gars.\nTu as retrouvé ma roulette ?\n\n\nAh non ? Très bien...")
/*<101>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 45), ('param2', 0), ('next', 92), ('param3', 51)])
/*< 92>*/ 						printf(/* textboxtype: 2, unk: 0 */ "La <r<roulette >>recherchée par cet individu\nne figure pas dans la liste des cibles à\n<pling><r<détecter>>.\n\nVoulez\x2010vous la rajouter dans la liste\ndes cibles à <r<<pling>détecter>> ?\n[1]Oui[2-]Pas\nmaintenant")
/*< 93>*/ 						switch (choice(2)) {
          						  case 0:
/*< 94>*/ 							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = true;
/*< 99>*/ 							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*< 98>*/ 							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*< 95>*/ 							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*< 96>*/ 							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*< 97>*/ 							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<135>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 17), ('next', 134), ('param3', 56)])
/*<134>*/ 							printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Très bien, Maître.\n\n\n\nLa <r<roulette>> que recherche cet individu\na été rajoutée dans la liste des cibles à\n<pling><r<détecter>>.")
/*<147>*/ 							printf(/* textboxtype: 2, unk: 0 */ "Sachant que la cible est tombée d'ici,\nla probabilité qu'elle ait atterri dans le\n<b<désert de Lanelle>> est de 90 %. Je vous\nconseille de chercher là\x2010bas.")
          							flw_102:
/*<102>*/ 							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 36)])
          						  case 1:
/*<100>*/ 							printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Très bien, Maître.\nLa <pling>fonction détection ne sera pas\nmodifiée.")
          							goto flw_102
          						}
          					}
          				  case 1:
/*< 44>*/ 					switch (story_flags[661 /* us: 805A9B1F 0x08, jp: 805ACD9F 0x08 */]) {
          					  case 0:
/*<103>*/ 						switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          						  case 0:
/*< 49>*/ 							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 113), ('param3', 31)])
/*<113>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*<114>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0FNon, c'est rien. Je ne vais pas\nt'embêter avec mes histoires.\n\n\nLa <b<roulette>> qui était accrochée à mon\ndos n'était qu'un accessoire décoratif...\n\x0E\x01\x04\x02\nmais...\x0E\x01\x04\x02\n j'en ai besoin.\n[1]Je vais la\nchercher[2-]Abandonne")
          								flw_54:
/*< 54>*/ 								switch (choice(2)) {
          								  case 0:
/*< 55>*/ 									printf(/* textboxtype: 1, unk: 0 */ "Et tu peux me dire comment tu comptes\nrécupérer quelque chose qui est tombé\nsous les nuages ? C'est ridicule !")
/*< 56>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 45), ('param2', 0), ('next', 57), ('param3', 51)])
/*< 57>*/ 									printf(/* textboxtype: 2, unk: 0 */ "Je peux ajouter l'objet que recherche\ncette personne à la liste des cibles que\nvous pouvez <pling><r<détecter>>.\n\nToutefois, si vous êtes à la recherche\nd'un autre objet pour quelqu'un\nd'autre, cet objet sera retiré de la\nliste des cibles à détecter.\nDois\x2010je régler la <r<détection>> pour réagir\nà la <r<roulette>> ?\n[1]S'il te plaît[2-]Pas encore")
/*<109>*/ 									switch (choice(2)) {
          									  case 0:
/*<110>*/ 										printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Très bien, Maître. La fonction\n<r<détection >>va être réglée sur la\n<r<roulette>>.")
/*<136>*/ 										story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = true;
/*<141>*/ 										story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<140>*/ 										story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<137>*/ 										story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<138>*/ 										story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<139>*/ 										story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<142>*/ 										OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 17), ('next', 143), ('param3', 56)])
/*<143>*/ 										printf(/* textboxtype: 2, unk: 0 */ "Sachant que la cible est tombée d'ici,\nla probabilité qu'elle ait atterri dans le\n<b<désert de Lanelle>> est de 90 %. Je vous\nconseille de chercher là\x2010bas.")
          										flw_58:
/*< 58>*/ 										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 45), ('param3', 36)])
/*< 45>*/ 										story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */] = true;
/*<104>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 59), ('param3', 50)])
/*< 59>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\xC10Ah... Si tu pouvais vraiment la\nretrouver, ce serait formidable...\n\n\nMais je ne me fais pas trop\nd'illusions...")
          									  case 1:
/*<111>*/ 										printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Très bien, Maître.\nPour en faire la cible de ma fonction\ndétection, veuillez vous adresser\nà nouveau à cet individu.")
          										goto flw_58
          									}
          								  case 1:
          									flw_52:
/*< 52>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x10Sans ma roulette, les gens ne pourront\npas venir s'amuser ici.\n\n\n\x0E\x01\x09\x04\n\xC00Quel gâchis !")
/*<112>*/ 									temp_flags[5 /* 0x1 20 */] = true;
          								}
          							  case 1:
/*< 50>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0FSnif... Rien ne va plus...\nÀ quoi bon, maintenant...\n[1]Ça ne\nva pas ?[2-]...")
/*< 51>*/ 								switch (choice(2)) {
          								  case 0:
/*< 53>*/ 									printf(/* textboxtype: 1, unk: 0 */ "La roulette qui était accrochée à mon\ndos est tombée sous les nuages.\n\n\nSans elle, les gens ne pourront pas\ns'amuser ici !\n\n\n\x0E\x01\x09\x04\n\xC00Je ne sais pas quoi faire...\nJe devrais sûrement abandonner.\nElle doit être loin à présent...\n[1]Je vais la\nchercher[2-]Abandonne")
          									goto flw_54
          								  case 1:
          									goto flw_52
          								}
          							}
          						  case 1:
          							flw_41:
/*< 41>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0FSnif...\nMa roulette est tombée sous les nuages.\n\n\nJe ne peux plus réaliser mon rêve\nà présent...\n\n\nRien ne va plus...")
          						}
          					  case 1:
          						goto flw_41
          					}
          				}
          			}
          		  case 1:
/*<107>*/ 			switch (temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Je n'ai pas encore fini les travaux de\nl'<b<île roulette>>.\n\n\nReviens me voir plus tard, je suis sûr\nque ça te plaira !")
          			  case 1:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x01Youpiii !\nPar ici, mon p'tit gars.\n\n\n\x0E\x01\x09\x04\x09\x600Je parie que tu te demandes\nce que je fais ici, pas vrai ?\n[1]Oui, un peu...[2-]Non")
/*< 46>*/ 				switch (choice(2)) {
          				  case 0:
/*< 48>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x02Ah, je savais que tu étais un petit\ncurieux !\n\n\n\x0E\x01\x09\x04\x08\x600J'essaie de transformer cette île en un\nlieu de divertissement qui rendra tout\nle monde heureux !\n\nEt sais\x2010tu comment je vais l'appeler ?\x0E\x01\x04\x02\x1E\nJe la baptiserai l'<b<île roulette >>!\n\n\n\x0E\x01\x09\x04\x12\x600Mais je n'ai pas encore fini les travaux.\nReviens me voir plus tard, je suis sûr\nque ça te plaira !")
/*<106>*/ 					temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*< 47>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\xC03C'est pas vraiment la réponse\nque j'attendais...\n\n\n\x0E\x01\x09\x04\x08\x600Tout ce que je souhaite, moi,\nc'est rendre les gens heureux.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_110_02() {
/*< 21>*/ 	start()
/*< 88>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 31), ('param3', 44)])
/*< 31>*/ 	loadzone_temp_flags[5 /* 0x1 20 */] = false;
/*< 26>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 14), ('param3', 12)])
/*< 14>*/ 	switch (context_related4(0)) {
          	  case 0:
/*<115>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 6912), ('next', 117), ('param3', 13)])
/*<117>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 50), ('next', 15), ('param3', 6)])
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xFF05Oh, c'est ballot !\nTu as atterri sur une case roupir.\n\n\nJ'empoche donc <r<<r<\x0E\x02\x03\x06\x00\x02Í<r< rubis >>! Merci !")
/*< 25>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 89), ('param3', 33)])
          		flw_89:
/*< 89>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 125), ('param3', 45)])
/*<125>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          	  case 1:
/*<116>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 6912), ('next', 118), ('param3', 13)])
/*<118>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 50), ('next', 16), ('param3', 6)])
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xFF05Oh, dommaaage ! Tu as gagné <r<0 rubis>>.\nMais ne baisse pas les bras, reviens me\nvoir quand tu veux !")
          		goto flw_89
          	  case 2:
/*<119>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5888), ('next', 121), ('param3', 13)])
/*<121>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 85), ('next', 17), ('param3', 6)])
/*< 17>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04ÿ\xFF06Wouahou ! Bonne pioche, p'tit gars !\n\n\n\n\x0E\x01\x09\x04\x0D\x600Tu as atterri sur une case \x0E\x02\x03\x06\x00\x00Í rubis\navec un multiplicateur de \x0E\x02\x03\x06\x00\x01Í.\nÇa fait un total de <r<<r<\x0E\x02\x03\x06\x00\x02Í<r< rubis>> !")
/*<123>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			flw_23:
/*< 23>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Et voilà ! \x0E\x02\x03\x06\x00\x02Í rubis pour monsieur !")
/*< 32>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 90), ('param3', 33)])
/*< 90>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 124), ('param3', 45)])
/*<124>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          		  case 1:
/*< 27>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x600Si tu évites toutes les balles malchance,\npasses à travers cinq anneaux bonus et\natterris sur une case 50 rubis...\n\n... tu gagnes un cadeau surprise !\n\n\n\n\x0E\x01\x09\x04\x08\x1000Alors tente ta chance autant de fois\nqu'il faudra !")
          			goto flw_23
          		}
          	  case 3:
/*<120>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 5120), ('next', 122), ('param3', 13)])
/*<122>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 130), ('next', 24), ('param3', 6)])
/*< 24>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04ÿ\xFF06Bingo !\nTu as atterri sur une case 50 rubis !\n\n\nTon multiplicateur est de \x0E\x02\x03\x06\x00\x01Í,\nça fait un total de <r<<r<\x0E\x02\x03\x06\x00\x02Í<r< rubis>> !")
/*< 86>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			goto flw_23
          		  case 1:
/*< 18>*/ 			switch (context_related2(0)) {
          			  case 0:
/*< 20>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Tu es passé à travers tous les anneaux\nbonus, et en plus tu as atterri sur la\ncase 50 rubis ! Tu as bien mérité un\ncadeau surprise !")
/*< 87>*/ 				scene_flags[21 'The Sky'][19 /* 0x3 08 */] = true;
/*<148>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 489), ('param2', 3), ('next', 149), ('param3', 23)])
/*<149>*/ 				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 65)])) {
          				  case 0:
/*<150>*/ 					OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 19), ('param3', 12)])
          					flw_19:
/*< 19>*/ 					give_item(94 0x5E);
          					goto flw_23
          				  case 1:
          					goto flw_19
          				}
          			  case 1:
/*< 28>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x600Si tu évites toutes les balles malchance,\npasses à travers cinq anneaux bonus et\natterris sur une case 50 rubis...\n\n... tu gagnes un cadeau surprise !\n\n\n\n\x0E\x01\x09\x04\x08\x1000Alors tente ta chance autant de fois\nqu'il faudra !")
          				goto flw_23
          			}
          		}
          	}
          }

          void entrypoint_110_04() {
/*< 61>*/ 	start()
/*< 73>*/ 	switch (loadzone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 66>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x06Merci mille fois ! Je peux désormais\nréaliser mon rêve et inaugurer l'<b<île\nroulette >>!\n\n\x0E\x01\x09\x04\x00\xA00J'y crois pas ! Je suis fou de joie !")
/*< 67>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Tu seras mon premier client !\nMerci mille fois !")
/*< 43>*/ 		story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */] = true;
/*< 60>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 43)])
          	  case 1:
/*< 63>*/ 		switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 65>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Youpiii !\nC'est ma roulette !")
/*< 72>*/ 			loadzone_temp_flags[1 /* 0x1 02 */] = true;
          		  case 1:
/*< 62>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BMais c'est... Non, impossible !\n\n\n\nMais si ! J'en crois pas mes yeux !")
/*< 64>*/ 			loadzone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	}
          }

          void entrypoint_110_05() {
/*< 71>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x12\x04\x00dJ'ai rapporté ce plateau circulaire\ncoloré.")
/*< 70>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 69), ('param3', 33)])
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x12\x04\x00dSi t'as besoin d'autre chose,\nappelle\x2010moi.")
          }

