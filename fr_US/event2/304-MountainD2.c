          void entrypoint_304_14() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (scene_flags[107 /* 0xC 08 */]) {
          	  case 0:
/*< 63>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\xE09Il y a une légende qui circule parmi les\nMogmas à propos de cet endroit...\n\n\n« <r<La statue qui, sereine, sommeille\nface à sa s\x153ur>> est la clé du passage\nvers le trésor des rois.<r< >>»\n\n« Rassemble ton courage et fais taire ta\npeur, <r<jette\x2010toi dans sa bouche >>et la voie\ns'ouvrira. »\n\n\x0E\x01\x09\x04\x09\x908Je sais pas si c'est juste des racontars\nou la vérité, mais j'peux t'dire qu'on\nva vérifier ça, c'est sûr.")
          	  case 1:
/*< 98>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 99), ('param3', 49)])
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x0B\x04\x00\x3F4\x0E\x01\x09\x04ÿ\xFF02Aaah, enfin un peu d'air!")
/*<100>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 59), ('param3', 17)])
/*< 59>*/ 		printf(/* textboxtype: 1, unk: 0 */ "...\x0E\x01\x08\x02\x2CD\x0E\x01\x09\x04\n\x5304 AAAAAH!\n\n\n\n\x0E\x01\x08\x02Í\x0E\x01\x09\x04\x09\x9FFFais-moi pas peur comme ça! Je\npensais que tu étais un monstre!\n\n\n...\x0E\x01\x09\x04\x0B\xC07 Oh?\n\n\n\nJe vois que t'as des <y<gants creuse\x2010tout>>...\n\n\n\n\x0E\x01\x09\x04ÿ\xFF0ADis\x2010moi, t'es qui et tu fais quoi ici?\n[1]Je cherche\ndes trésors[2]En fait...")
/*< 60>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_62:
/*< 62>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\xD05Hmm, je vois...\n\n\n\n\x0E\x01\x09\x04\x0C\xD07Hein? Moi?\n\n\n\n\x0E\x01\x09\x04\x09\x90AJe suis <b<Aurélio>>, Mogma en chef.\n\n\n\nPour ne rien te cacher, c'est moi qui ai\ninventé les gants que tu portes!\n\n\n\x0E\x01\x09\x04\x09\x90BHohoho!")
/*< 61>*/ 			printf(/* textboxtype: 1, unk: 0 */ "...\x0E\x01\x09\x04\x0C\x409 Ouais, il me semble que t'as l'air un\npeu perdu. Pas le genre de gars que\nj'amènerais à la chasse au trésor.\n\n\x0E\x01\x09\x04\x09\xE08Bof, je me trompe peut-être.\nDis-moi, es-tu au courant?\n\n\nOn dit qu'y a un grand trésor ici...\n\n\n\nMais aucun de ceux qui l'ont cherché\nn'est jamais revenu pour en parler...\n\n\nCombien de chasseurs de trésors ont\ndisparu ici, personne le sait...\n\n\n\x0E\x01\x09\x04\x0C\x409Je t'avertis en tant que compagnon\nchercheur de trésor...\n\n\n\x0E\x01\x09\x04ÿ\xFF08Veux-tu quand même continuer?\n[1]Oui[2]...")
/*< 80>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_76:
/*< 76>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x905Oho, je vois... Laisse\x2010moi te raconter\nune légende qui circule parmi les\nchercheurs de trésors...\n\n\x0E\x01\x09\x04ÿ\xFF0BElle est bien connue de tous les\nMogmas.\n\n\n\x0E\x01\x09\x04\x0C\xD0AT'es prêt?\n\n\n\n« <r<La statue qui, sereine, sommeille\nface à sa s\x153ur>> est la clé du passage\nvers le trésor des rois.<r< >>»\n\n« Rassemble ton courage et fais taire ta\npeur, <r<jette\x2010toi dans sa bouche >>et la voie\ns'ouvrira. »\n\n\x0E\x01\x09\x04ÿ\x509Rappelle\x2010toi de ça!\n[1]Merci[2]Tu peux\nrépéter?")
          				flw_78:
/*< 78>*/ 				switch (choice(2)) {
          				  case 0:
/*< 79>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x905Mes gars sont en train de fouiller les\nenvirons à la recherche de trésors.\nSi tu te perds, hésite pas à leur\ndemander conseil.")
/*< 64>*/ 					scene_flags[15 'Eldin: Fire Sanctuary'][107 /* 0xC 08 */] = true;
          				  case 1:
/*< 77>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04ÿ\x07Hohoho! Ça t'intéresse, hein?\n\n\n\nÉcoute bien...\n\n\n\n\x0E\x01\x09\x04\x0C\xD0A« <r<La statue qui, sereine, sommeille\nface à sa s\x153ur>> est la clé du passage\nvers le trésor des rois.<r< >>»\n\n« Rassemble ton courage et fais taire ta\npeur, <r<jette\x2010toi dans sa bouche >>et la voie\ns'ouvrira. »\n\n\x0E\x01\x09\x04\x09\x109L'as\x2010tu mémorisé?\n[1]Oui[2]Encore une fois")
          					goto flw_78
          				}
          			  case 1:
          				goto flw_76
          			}
          		  case 1:
          			goto flw_62
          		}
          	}
          }

          void entrypoint_304_15() {
/*< 65>*/ 	start()
/*< 66>*/ 	printf(/* textboxtype: 7, unk: 0 */ "En commençant par celle qui\na le moins d'ailes, apporte la\nlumière aux statues en leur\naccordant une prière.\nLorsqu'elles auront toutes\nretrouvé la lumière, le trésor\ndes rois t'appartiendra.")
          }

          void entrypoint_304_16() {
/*< 67>*/ 	start()
/*< 82>*/ 	switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 85>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\xA02Les gants que je t'ai donnés étaient une\nassez belle pièce de ma collection.")
          	  case 1:
/*< 83>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\xA01Yo, bonhomme! Es-tu satisfait des\ngants que je t'ai donnés?\n\n\nSi tu veux voir ce qu'il y a à la surface\npendant que tu creuses, appuie sur (Z).\x0E\x01\x11\x02\x7CD\n\n\nEn passant, nous les Mogmas, on\npeut aussi savoir ce qui se passe\nà la surface!")
/*< 84>*/ 		loadzone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_304_17() {
/*< 68>*/ 	start()
/*<170>*/ 	switch (story_flags[84 /* us: 805A9AE8 0x01, jp: 805ACD68 0x01 */]) {
          	  case 0:
/*<171>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\xA0DAh nooon! J'me suis encore planté!\nOn dirait que je ne suis pas capable\nde faire comme il faut!")
          	  case 1:
/*< 87>*/ 		switch (loadzone_temp_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\xA0ET'as vraiment découvert où était\nle trésor sur la carte?")
          		  case 1:
/*< 88>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\xB12Ah! Mais je t'ai donné une carte au\ntrésor exprès!\n\n\n\x0E\x01\x09\x04\x1B\xA0DOuais... Ça fait un peu aventurier\namateur, ça...")
/*< 89>*/ 			loadzone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	}
          }

          void entrypoint_304_18() {
/*< 69>*/ 	start()
/*< 92>*/ 	switch (loadzone_temp_flags[2 /* 0x1 04 */]) {
          	  case 0:
/*< 90>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\xF09Tant qu'y a plein de monstres qui\ntraînent ici, on devrait déguerpir.")
          	  case 1:
/*< 91>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\xF0BHé, bonhomme! T'es encore vivant?\n\n\n\nJ'ai vu qu'y avait des tonnes de\nmonstres partout!\n\n\n\x0E\x01\x09\x04\x0E\xE0AJ'me demande bien ce qu'ils\ncherchaient...")
/*< 93>*/ 		loadzone_temp_flags[2 /* 0x1 04 */] = true;
          	}
          }

          void entrypoint_304_01() {
/*< 14>*/ 	start()
/*< 10>*/ 	switch (scene_flags[100 /* 0xD 10 */]) {
          	  case 0:
/*<101>*/ 		switch (scene_flags[50 /* 0x7 04 */]) {
          		  case 0:
/*<105>*/ 			switch (scene_flags[108 /* 0xC 10 */]) {
          			  case 0:
/*<103>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x3311\x120FHé, bonhomme!\n\n\n\nPas mal, c'que tu viens de faire\navec la lave, là...\n\n\n\x0E\x01\x09\x04\x3311\x1213Tant qu'à y être... tu voudrais pas voir\nc'que tu peux faire pour cette chaîne?")
          			  case 1:
/*<138>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 51), ('next', 139), ('param3', 32)])
/*<139>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 51), ('param2', 100), ('next', 137), ('param3', 16)])
/*<137>*/ 				set_camera(6, 0)
/*<102>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x3311\x1208Hé oh!\n\n\n\nMais t'es un champion, bonhomme!\nJe t'ai vu battre ces monstres à plate\ncouture! Impressionnant!\n\n\x0E\x01\x09\x04\x3311\x1213En passant, pourrais-tu me\ndécrocher de là?")
/*<104>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][108 /* 0xC 10 */] = true;
/*<176>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          			}
          		  case 1:
/*<114>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 1536), ('next', 12), ('param3', 13)])
/*< 12>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x13\x1317C'est chaud! C'est chaud! C'est chaud!\n\n\n\nHé! Je ne donne pas de spectacle!\nVa voir ailleurs si j'y suis! Va! Va!")
          		}
          	  case 1:
/*<115>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 51), ('next', 113), ('param3', 32)])
/*<113>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13311), ('param2', 1536), ('next', 111), ('param3', 13)])
/*<111>*/ 		set_camera(3, 0)
/*< 11>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x3313\x1917Ouf! Ç'a l'air chaud! On dit que c'est\nbon pour les courbatures, ça!")
/*<112>*/ 		set_camera(4, 0)
/*<117>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 51), ('param2', 100), ('next', 116), ('param3', 16)])
/*<116>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x3316\x1614Hein? J'savais pas qu'ils recrutaient\nde nouveaux gardiens!\n\n\nEh!\n\n\n\nÇa me fait de la peine de te dire ça,\nmais ça me fait ni chaud ni froid votre\ninterrogatoire! J'vous dirai rien!\n\n\x0E\x01\x09\x04\x3313\x1913Et je ne donne pas de spectacle!\nVa donc voir ailleurs! Va! Va!")
/*<118>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 13), ('param3', 42)])
/*< 13>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][100 /* 0xD 10 */] = true;
          	}
          }

          void entrypoint_304_19() {
/*< 70>*/ 	start()
/*< 71>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x06\x02\xFDCDC'est RIDICULE! Je suis Ghirahim,\nmonarque démoniaque...")
          }

          void entrypoint_304_02() {
/*< 30>*/ 	start()
/*< 31>*/ 	switch (scene_flags[101 /* 0xD 20 */]) {
          	  case 0:
/*< 32>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x331B\xA05Tiens, c'est pour toi!\n\n\n\nIls étaient enterrés bien au chaud dans\nun coffre, alors ils sont pas sales du\ntout!\n\nT'en trouves pas des comme ça\nn'importe où, alors fais\x2010y attention!")
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x331B\x502Parfait. Dans ce cas-là, je me pousse.\nAdios!")
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x330B\x208Ouiiii! Enfin, sauvé!\n\n\n\n\x0E\x01\x09\x04\x08\xAFFJ'sais pas qui t'es, mais merci!\nJe te revaudrai ça!\n\n\nToi aussi t'es venu chercher\ndes trésors?\n[1]Oui![2]Des trésors?")
/*< 16>*/ 		switch (choice(2)) {
          		  case 0:
/*<119>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x509Haha! Toi aussi c'est ça qui t'a attiré!")
          			flw_17:
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Ça paraît. T'es là à cause de la fameuse\nlégende de la <r<statue qui dort>>, hein?\n\n\nEn passant, tes <y<gants >>sentent un peu\nle vieux... Tu les as trouvés au dépotoir\nou quoi?\n\n\x0E\x01\x09\x04\x3308\x90BTiens! En guise de remerciement, je\nvais te donner mes gants « collection\nspéciale ». Juste un instant...")
/*< 29>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][101 /* 0xD 20 */] = true;
          		  case 1:
/*<120>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x509Finalement, on sait très bien tous les\ndeux pourquoi t'es venu jusqu'ici!")
          			goto flw_17
          		}
          	}
          }

          void entrypoint_304_20() {
/*< 72>*/ 	start()
/*< 73>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Peu importe l'épée que tu brandis, tu\nn'en demeures pas moins un\nvulgaire humain...\x0E\x01\x04\x02\x14\nUn moins que rien!")
          }

          void entrypoint_304_03() {
/*<153>*/ 	start()
/*<157>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 51), ('next', 158), ('param3', 32)])
/*<158>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 51), ('param2', 100), ('next', 156), ('param3', 16)])
/*<156>*/ 	set_camera(4, 0)
/*<154>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x3311\x1208Hé oh!\n\n\n\nMais t'es un champion, bonhomme!\nJe t'ai vu battre ces monstres à plate\ncouture! Impressionnant!\n\n\x0E\x01\x09\x04\x3311\x1213En passant, pourrais-tu me\ndécrocher de là?")
/*<155>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][108 /* 0xC 10 */] = true;
/*<175>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_304_21() {
/*< 74>*/ 	start()
/*< 75>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Ma haine envers toi ne s'éteindra\njamais... Je t'ouvrirai les portes de\nl'enfer, misérable insecte!")
/*< 97>*/ 	story_flags[84 /* us: 805A9AE8 0x01, jp: 805ACD68 0x01 */] = true;
/*<166>*/ 	story_flags[172 /* us: 805A9AE2 0x08, jp: 805ACD62 0x08 */] = false;
/*<169>*/ 	story_flags[820 /* us: 805A9B30 0x10, jp: 805ACDB0 0x10 */] = true;
/*<167>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][22 /* 0x3 40 */] = true;
/*<168>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][20 /* 0x3 10 */] = true;
          }

          void entrypoint_304_05() {
/*<  2>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
          }

          void entrypoint_304_22() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Hé oh, bonhomme!\n\n\n\nT'es content des gants que je t'ai\ndonnés?\n\n\nSi tu veux voir à la <r<surface>>, appuie\nsur (Z)!\x0E\x01\x11\x02\x7CD\n\n\nT'as compris? (Z) pour voir la surface!\nOublie pas, hein!\x0E\x01\x11\x02\x7CD")
/*<124>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_304_06() {
/*<  7>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
          }

          void entrypoint_304_23() {
/*<127>*/ 	start()
/*<141>*/ 	switch (scene_flags[97 /* 0xD 02 */]) {
          	  case 0:
/*<140>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\xA01Je vais aller fouiller un peu cette salle.\n\n\n\nFaut aussi que je fasse le rapport au\nchef à la place de celui qui s'est enfui.")
          	  case 1:
/*<132>*/ 		switch (scene_flags[119 /* 0xF 80 */]) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\x1A15Wow! Tu ne l'as pas manqué,\nle mur, bonhomme!")
          		  case 1:
/*<128>*/ 			switch (scene_flags[77 /* 0x8 20 */]) {
          			  case 0:
/*<130>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\xA02On appelle cet endroit la <r<salle du mur\nsecret>>.\n\n\nIl paraît qu'y a une autre salle derrière\nun de ces murs.\n\n\n\x0E\x01\x09\x04\x1B\x1E0AOn n'ose pas trop s'approcher des\nsouterrains par ici, c'est tout plein de\nmonstres...\n\n<pling>Mais il existe peut\x2010être un <r<passage\nsecret>>...")
          			  case 1:
/*<134>*/ 				switch (scene_flags[78 /* 0x8 40 */]) {
          				  case 0:
/*<136>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\xA09C'est un de mes amis qui t'a donné ça?\nT'inquiète pas, je vais pas te les piquer!\n\n\n\x0E\x01\x09\x04\x1B\xA02Les informations qu'il y a dans ce\ncoffre te seraient sûrement utiles...")
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 1, unk: 0 */ "...")
/*<129>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\xA09Salut, bonhomme!\nContent de te revoir!\n\n\nHéhéhé... Excuse\x2010moi, mais j'ai\nentendu ta conversation.\n\n\nDésolé si ce voyou t'a importuné.\n\n\n\n\x0E\x01\x09\x04\x1B\xC02Mais ce qu'il t'a dit, c'était tout vrai!\n\n\n\nJe sens comme un courant d'air dans\ncette salle... Je me demande d'où ça\npeut bien venir.\n\n\n\x0E\x01\x09\x04\x331B\xA0BJe suis sûr que les informations\ncontenues dans le coffre te seront\nutiles!")
/*<135>*/ 					scene_flags[15 'Eldin: Fire Sanctuary'][78 /* 0x8 40 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_304_07() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
/*< 94>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][121 /* 0xE 02 */] = true;
/*<  6>*/ 	changeScene(1, 0) // 
          }

          void entrypoint_304_24() {
/*<106>*/ 	start()
/*<107>*/ 	printf(/* textboxtype: 7, unk: 0 */ "Le pont de la détermination\nChoisis ton chemin en montrant\nton courage.")
          }

          void entrypoint_304_08() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 20, unk: 0 */ "Grand sanctuaire\nancien")
          }

          void entrypoint_304_25() {
/*<160>*/ 	start()
/*<159>*/ 	printf(/* textboxtype: 2, unk: 0 */ "La probabilité que l'information\ndétenue par cette créature vous soit\nutile est de 80 %.\n\nJe vous recommande fortement de\nl'aider.")
/*<164>*/ 	set_camera(7, 0)
/*<163>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 161), ('param3', 42)])
/*<161>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][98 /* 0xD 04 */] = false;
          }

          void entrypoint_304_09() {
/*< 37>*/ 	start()
/*< 39>*/ 	switch (scene_flags[105 /* 0xC 02 */]) {
          	  case 0:
/*<151>*/ 		set_camera(2, 0)
/*<149>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x1213Hé! Hé! Mon bonhomme. Je te le\ndemande poliment. S'il te plaît.\nLa chaîne!\n\n\x0E\x01\x09\x04\x16\x1614J'te donnerai une info tellement\nincroyable que tu le regretteras pas!")
/*<152>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', -1), ('param3', 42)])
          	  case 1:
/*<110>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 1536), ('next', 108), ('param3', 13)])
/*<108>*/ 		set_camera(1, 0)
/*<109>*/ 		set_camera(2, 0)
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x1213Oh! T'arrives pile au bon moment,\nbonhomme!\n\n\n\x0E\x01\x09\x04\x16\x1614J'sais pas qui t'es ni d'où tu viens,\nmais enlève\x2010moi cette chaîne,\ns'il te plaît!\n[1]Je suis pressé[2]...")
/*< 42>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_43:
/*< 43>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x130FJe te récompenserai, même!\nSi tu me libères, je te dirai un\n<r<super secret >>sur cette salle!\n\nUne vraie info qui vaut de l'or!\nHein? Dis oui!")
/*< 38>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][105 /* 0xC 02 */] = true;
          		  case 1:
          			goto flw_43
          		}
          	}
          }

          void entrypoint_304_10() {
/*< 50>*/ 	start()
/*< 49>*/ 	switch (scene_flags[106 /* 0xC 04 */]) {
          	  case 0:
/*< 53>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x331B\x2203Tiens! Prends ça!\n\n\n\nCette pièce a un secret super secret,\nque j'ai découvert grâce à mes fouilles\nspéciales... Et cette fois, j'en suis sûr...\n\nT'es prêt? Il y a dans cette salle...\n\n\n\n\x0E\x01\x09\x04\x331A\x2008\x0E\x01\x08\x02\x2CDUn <r<compartiment secret>>!\n\n\n\n...\n\n\n\n\x0E\x01\x09\x04\x331B\x50ABon, euh, tu diras à personne que je\nm'étais fait attraper, compris?\n[1]D'accord[2]...")
/*<142>*/ 		switch (scene_flags[119 /* 0xF 80 */]) {
          		  case 0:
/*<144>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][37 /* 0x5 20 */] = true;
/*<145>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][79 /* 0x8 80 */] = true;
/*<174>*/ 			story_flags[822 /* us: 805A9B30 0x40, jp: 805ACDB0 0x40 */] = true;
/*<143>*/ 			switch (choice(2)) {
          			  case 0:
/*<147>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x331B\x2200Super! Tu te souviendras de ta\npromesse, j'espère!")
          				flw_123:
/*<123>*/ 				story_flags[820 /* us: 805A9B30 0x10, jp: 805ACDB0 0x10 */] = true;
/*<165>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][98 /* 0xD 04 */] = true;
/*<173>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][99 /* 0xD 08 */] = true;
          			  case 1:
/*<148>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x3300\x100DPas de classe!")
          				goto flw_123
          			}
          		  case 1:
/*<146>*/ 			story_flags[819 /* us: 805A9B30 0x08, jp: 805ACDB0 0x08 */] = true;
/*< 54>*/ 			switch (choice(2)) {
          			  case 0:
/*< 55>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x331B\x2200Super! Tu te souviendras de ta\npromesse, j'espère!\n\n\nBon, bien. À plus! Euh, salut là!")
          				flw_131:
/*<131>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x08\x02\x2CDOh\x2010ho!")
          				goto flw_123
          			  case 1:
/*< 56>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x3300\x100DAh t'as pas de classe! Et moi qui \nvoulais te rendre service...")
          				goto flw_131
          			}
          		}
          	  case 1:
/*< 47>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x330B\xA08Ouiiii! Enfin! Douce liberté!\n\n\n\n\x0E\x01\x09\x04\x3308\xA09Héhé... Euh. Oh, oui... J'oubliais...\nMerci du coup de main, bonhomme!\nTu t'es fait avoir, par contre... Ha!\n\nTu croyais vraiment que j'allais te\ndonner ma super info alors que j'en\nai tellement arraché pour...\n\n\x0E\x01\x09\x04\x3325\x1A06\x0E\x01\x08\x02\x2CDHein?\n\n\n\n\x0E\x01\x09\x04\x08\xA00Mais c'est les gants « collection\nspéciale » de mon frérot que t'as là!\nT'es un de ses amis?\n\n[1]Bien sûr![2]Je l'ai sauvé!")
/*< 48>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_51:
/*< 51>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x3325\x1A00Attends! J'voudrais te donner\nquelque chose...\n\n\n\x0E\x01\x09\x04\x00\x500J'vais le chercher, bouge pas!")
/*< 52>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][106 /* 0xC 04 */] = true;
          		  case 1:
          			goto flw_51
          		}
          	}
          }

          void entrypoint_304_11() {
/*<150>*/ 	start()
/*< 45>*/ 	switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 46>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x1312Hé oh! Attends une minute, toi!\n\n\n\nJ'te donnerai une super info en\néchange. Libère\x2010moi de cette\nchaîne! S'IL TE PLAÎT!")
          		flw_44:
/*< 44>*/ 		loadzone_temp_flags[0 /* 0x1 01 */] = true;
/*<162>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', -1), ('param3', 42)])
          	  case 1:
/*< 40>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x1312Hé! Attends un peu, toi!\n\n\n\nJ'trouve ça pas très gentil que tu\nm'ignores comme ça! Hein?\n\n\nTiens. J'te donnerai un bon tuyau si tu\nm'enlèves cette chaîne!")
          		goto flw_44
          	}
          }

          void entrypoint_304_12() {
/*<  9>*/ 	start()
/*< 18>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 1), ('param3', 31)])
/*<  1>*/ 	switch (scene_flags[103 /* 0xD 80 */]) {
          	  case 0:
/*< 23>*/ 		switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 21>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x3308\x802Aaah! T'es encore là, toi?\n\n\n\n\x0E\x01\x09\x04\x330B\x901Reviens tant que tu veux,\nça ne changera rien!")
          		  case 1:
/*< 20>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Aaaahh! Un monstre vert!\n\n\n\n\x0E\x01\x09\x04\x332A\x9FFJe pensais pas qu'ils viendraient\nme trouver jusqu'ici...\n\n\nIl ne me reste plus qu'à essayer de\nles semer.\n\n\n\x0E\x01\x09\x04\x330B\x901Héhéhé! Il peut rien faire contre un\nMogma dans son habitat naturel!\n\n\nÀ moins de me <r<bloquer>> complètement,\nil m'attrapera jamais!")
/*< 24>*/ 			loadzone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x331A\x1A0BY a plein de trésors à chercher, par ici!\nOn est parti pour une nuit blanche!")
          		scene_flags[15 'Eldin: Fire Sanctuary'][103 /* 0xD 80 */] = true;
          	}
          }

          void entrypoint_304_13() {
/*< 33>*/ 	start()
/*< 26>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 36>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Tiens, bonhomme!\n\n\n\n\x0E\x01\x09\x04\x330E\xEFFAu fait, j'y pense, les monstres avaient\nl'air de chercher quelque chose au bord\ndu gouffre, plus loin...\n\nTu t'en vas là? Fais attention à toi!\n\n\n\n\x0E\x01\x09\x04\x330F\xF0BMoi, je retourne chez le chef.\nJe t'ouvrirai la porte au passage.\nÀ plus!")
/*<121>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][33 /* 0x5 02 */] = true;
/*<122>*/ 		story_flags[821 /* us: 805A9B30 0x20, jp: 805ACDB0 0x20 */] = true;
/*<172>*/ 		story_flags[822 /* us: 805A9B30 0x40, jp: 805ACDB0 0x40 */] = true;
/*<125>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][82 /* 0xB 04 */] = true;
          	  case 1:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x3321\x1601Ah nooon! Tu m'as eu! Fais-moi griller\nou bouillir, ça m'est bien égal!\n\n\n...\n\n\n\n\x0E\x01\x09\x04\x331C\x1D05Une petite minute. Ces gants...\nÇa me dit quelque chose...\n\n\nCe sont ceux de la collection spéciale de\nmon frère, non?\n[1]Il me les\na donnés[2]Oui")
/*< 25>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_34:
/*< 34>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x331D\x0BFallait le dire que tu connaissais mon\nfrère!\n\n\nT'es tout vert, alors j'ai cru que t'étais\nun monstre!\n\n\n...\n\n\n\n\x0E\x01\x09\x04\x3324\x2109Prends pas ça personnellement!\nJe me suis trompé, c'est tout.\nExcuse\x2010moi.\n\nTiens, j'vais te donner quelque chose\npour me faire pardonner.\nAttends\x2010moi ici!")
/*< 35>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][104 /* 0xC 01 */] = true;
          		  case 1:
          			goto flw_34
          		}
          	}
          }

