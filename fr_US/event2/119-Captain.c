          void entrypoint_119_10() {
/*<113>*/ 	start()
/*<120>*/ 	switch (loadzone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<112>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x17\x209\x0E\x01\x08\x02\x2CDSuperbe!")
/*<124>*/ 		set_camera(3, 0)
/*<125>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x17\x1A08Wow, je suis époustouflé! Tu sais\nmanier l'épée, c'est le moins qu'on\npuisse dire!\n\n\x0E\x01\x09\x04\x09\x200Tu veux essayer le <g<coup de grâce\n>>maintenant?\n[1]Oui![2-]Plus tard")
          	  case 1:
/*<121>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x1D04Ça ne va pas, Link?\nTu n'as pas l'air dans ton assiette.")
/*<122>*/ 		set_camera(3, 0)
/*<123>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x1D01Place\x2010toi bien au centre et agite\nde façon<r< latérale et simultanée>>\nla manette Wii Remote et le Nunchuk,\ncompris?\n\x0E\x01\x09\x04\x09\x200Tu veux réessayer?\n[1]Oui![2-]Non...")
          	}
          }

          void entrypoint_119_11() {
/*<115>*/ 	start()
/*<111>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x200Bon, tu dois maintenant couper tous les\ntroncs qui t'entourent sans bouger de là\noù tu es.\n\nAgite le Nunchuk et la manette\nWii Remote <r<simultanément >>et dans\nla <g<même direction horizontale>>.\n\x0E\x01\x09\x04\x09\x200Vas\x2010y, essaie!")
          }

          void entrypoint_119_12() {
/*<126>*/ 	start()
/*<127>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x1D03Alors, quand ton ennemi est à terre,\n<r<cible\x2010le>> avec (Z) puis <r<agite\nle Nunchuk et la manette Wii\nRemote >>pour asséner le <g<coup de grâce>>.\x0E\x01\x11\x02\x7CD\n\x0E\x01\x09\x04\x09\x1D00Vas\x2010y, tranche ce tronc, puis lorsqu'il\nest à terre, assène\x2010lui le coup de grâce!")
          }

          void entrypoint_119_13() {
/*<128>*/ 	start()
/*<129>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x17\x1A09\x0E\x01\x08\x02\x1CDExtraordinaire!")
/*<130>*/ 	set_camera(3, 0)
/*<131>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x19\x200Tu peux utiliser le <g<coup de grâce >>après\navoir mis un ennemi à terre avec ton\n<r<bouclier>> ou une <r<attaque circulaire>>.\n\n\x0E\x01\x09\x04\x1C\x200Mais en combat réel, tes adversaires\nne restent au sol qu'un court instant,\nalors il faut vite agiter la manette Wii\nRemote et le Nunchuk simultanément!")
          }

          void entrypoint_119_01() {
          	start()
/*< 68>*/ 	switch (loadzone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 70>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x1901Salue le patron de la Citrouille\nperchée de ma part!")
          	  case 1:
/*< 53>*/ 		switch (story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */]) {
          		  case 0:
/*< 54>*/ 			switch (adventure_pouch_has(2 0x0002)) {
          			  case 0:
/*< 67>*/ 				switch (loadzone_temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
          					flw_57:
/*< 57>*/ 					entrypoint_119_03();
          				  case 1:
/*< 58>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Oh!\nÇa me chatouille les narines...\n\n\nCe serait pas de la soupe de citrouille\nbien chaude que tu as là?\n[1]Oui, tiens...[2]Euh...")
/*< 59>*/ 					switch (choice(2)) {
          					  case 0:
/*< 61>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x17\x1909C'est pour moi? Vraiment?\nJ'ai l'impression de t'avoir un\npeu forcé la main, désolé...\n\nMais vraiment, ça m'a donné\nl'eau à la bouche... Santé!")
/*<138>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 20), ('next', 108), ('param3', 47)])
/*<108>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 62), ('param3', 33)])
/*< 62>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 119), ('param3', 33)])
/*<119>*/ 						OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 100), ('next', 99), ('param3', 15)])
/*< 99>*/ 						set_camera(10, 0)
/*<100>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 4629), ('next', 139), ('param3', 13)])
/*<139>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 20), ('next', 102), ('param3', 48)])
/*<102>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 96), ('next', 101), ('param3', 6)])
/*<101>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 5651), ('next', 103), ('param3', 13)])
/*<103>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Miam!\x0E\x01\x05\x04\x1E\x00")
/*<104>*/ 						set_camera(11, 0)
/*< 63>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Oh que c'est bon!\n\n\n\n\x0E\x01\x09\x04\x17\x1900Vraiment, il n'y a pas meilleure soupe\nde citrouille que celle de la Citrouille\nperchée!")
/*<154>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 144), ('param3', 47)])
/*<144>*/ 						set_camera(12, 0)
/*<143>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 155), ('param3', 33)])
/*<155>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 142), ('param3', 48)])
/*<142>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x200Merci, Link!\nVoilà pour toi.")
/*<105>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 64), ('param3', 42)])
/*< 64>*/ 						give_item(4 0x04);
/*< 71>*/ 						loadzone_temp_flags[1 /* 0x1 02 */] = true;
          					  case 1:
/*< 60>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x06\x02\xFCCD...\n...\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\x08\x1900Hahaha!\nC'était une blague!")
/*< 65>*/ 						loadzone_temp_flags[2 /* 0x1 04 */] = true;
          					}
          				}
          			  case 1:
          				goto flw_57
          			}
          		  case 1:
/*< 33>*/ 			switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          			  case 0:
/*< 34>*/ 				switch (adventure_pouch_has(2 0x0002)) {
          				  case 0:
/*< 37>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x1901Salut, Link!\nAlors, comment se passe ton\nentraînement?\n\n\x0E\x01\x09\x04\x00\x200Oh!\n\n\n\n\x0E\x01\x09\x04\x00\x1909Mais c'est de la <r<soupe de citrouille>>!\nMa préférée!\n\n\n\x0E\x01\x09\x04\x00\x200J'avais demandé au patron de\nla Citrouille perchée de m'en\nfaire apporter...\n\nTu viens donc de sa part?\n[1]Eh oui![2-]Euh, non...")
/*< 41>*/ 					switch (choice(2)) {
          					  case 0:
/*< 42>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x17\x1909Ooooh! Alors, donne!\nAllez, vite! DONNE!\n[1]Tiens![2-]Non!")
/*< 44>*/ 						switch (choice(2)) {
          						  case 0:
/*<135>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 20), ('next', 107), ('param3', 47)])
/*<107>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 48), ('param3', 33)])
/*< 48>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 118), ('param3', 33)])
/*<118>*/ 							OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 100), ('next', 95), ('param3', 15)])
/*< 95>*/ 							set_camera(10, 0)
/*< 91>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 4629), ('next', 136), ('param3', 13)])
/*<136>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 20), ('next', 93), ('param3', 48)])
/*< 93>*/ 							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 96), ('next', 92), ('param3', 6)])
/*< 92>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 5655), ('next', 94), ('param3', 13)])
/*< 94>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Miam!\x0E\x01\x05\x04\x1E\x00")
/*< 96>*/ 							set_camera(11, 0)
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x13Miam! C'est un délice!\n\n\n\n\x0E\x01\x09\x04\x17\x1900Il n'y a pas mieux qu'une\nsoupe de citrouille bien chaude\npour vous remonter!")
/*<151>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 141), ('param3', 47)])
/*<141>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 145), ('param3', 33)])
/*<145>*/ 							set_camera(12, 0)
/*<152>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 140), ('param3', 48)])
/*<140>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x1900Merci bien! Et remercie aussi le\npatron de ma part!")
/*< 51>*/ 							story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */] = true;
/*< 66>*/ 							loadzone_temp_flags[1 /* 0x1 02 */] = true;
/*<153>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          						  case 1:
/*< 47>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1D00Quoi?! Mais c'est quoi, cette histoire?\nElle est pour moi ou pas, cette soupe?\n\n\n\x0E\x01\x09\x04\x08\x1D00Si elle est froide, tu peux la garder!\nTu seras bon pour aller m'en chercher\nune autre...\n\nBien chaude, évidemment!")
          						}
          					  case 1:
/*< 40>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\x1D00Ah bon?\nMais il se prend pour qui, celui\x2010là?\nJe lui avais demandé de m'en livrer\nsur\x2010le\x2010champ! Non mais!\n\x0E\x01\x09\x04\x08\x1D00Je deviens grognon si je ne bois pas\nma soupe de citrouille quotidienne!")
          					}
          				  case 1:
/*< 35>*/ 					switch (adventure_pouch_has(3 0x0003)) {
          					  case 0:
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x1901Salut, Link!\nAlors, comment se passe ton\nentraînement?\n\n\x0E\x01\x09\x04\x00\x200Oh!\n\n\n\n\x0E\x01\x09\x04\x00\x1909Mais c'est de la <r<soupe de citrouille>>!\nMa préférée!\n\n\n\x0E\x01\x09\x04\x00\x200J'avais demandé au patron de\nla Citrouille perchée de m'en\nfaire apporter...\n\nTu viens donc de sa part?\n[1]Eh oui![2-]Euh, non...")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
/*< 43>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x17\x1909Ooooh! Alors, donne!\nAllez, vite! DONNE!\n[1]Tiens![2-]Non!")
/*< 45>*/ 							switch (choice(2)) {
          							  case 0:
/*<132>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 20), ('next', 106), ('param3', 47)])
/*<106>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 49), ('param3', 33)])
/*< 49>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 117), ('param3', 33)])
/*<117>*/ 								OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 100), ('next', 97), ('param3', 15)])
/*< 97>*/ 								set_camera(10, 0)
/*< 88>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 4629), ('next', 133), ('param3', 13)])
/*<133>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 20), ('next', 90), ('param3', 48)])
/*< 90>*/ 								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 96), ('next', 89), ('param3', 6)])
/*< 89>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4118), ('next', 147), ('param3', 13)])
/*<147>*/ 								set_camera(11, 0)
/*<146>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Pouah! C'est dégoûtant!\x0E\x01\x04\x02\x14\nLa soupe est glaciale...")
/*<148>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 149), ('param3', 47)])
/*<149>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 7424), ('next', 134), ('param3', 13)])
/*<134>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 98), ('param3', 33)])
/*< 98>*/ 								set_camera(12, 0)
/*<150>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 50), ('param3', 48)])
/*< 50>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Il y a deux choses que je DÉ\x2010TES-TE,\nc'est la soupe froide et les flancs\nmous... Retourne m'en chercher,\net je la veux chaude, cette fois!")
/*<137>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          							  case 1:
/*< 46>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1D00Quoi?! Mais c'est quoi, cette histoire?\nElle est pour moi ou pas, cette soupe?\n\n\n\x0E\x01\x09\x04\x08\x1D00Si elle est froide, tu peux la garder!\nTu seras bon pour aller m'en chercher\nune autre...\n\nBien chaude, évidemment!")
          							}
          						  case 1:
/*< 38>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\x1D00Ah bon?\nMais il se prend pour qui, celui\x2010là?\nJe lui avais demandé de m'en livrer\nsur\x2010le\x2010champ! Non mais!\n\x0E\x01\x09\x04\x08\x1D00Je deviens grognon si je ne bois pas\nma soupe de citrouille quotidienne!")
          						}
          					  case 1:
/*< 56>*/ 						entrypoint_119_03();
          					}
          				}
          			  case 1:
/*< 69>*/ 				entrypoint_119_03();
          			}
          		}
          	}
          }

          void entrypoint_119_02() {
/*< 24>*/ 	start()
/*< 30>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 11), ('next', 25), ('param3', 32)])
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xB0D\x02Hé!\x0E\x01\x0D\x02\x1900 \x0E\x03\x01\x00Link!")
/*< 31>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 72), ('param3', 16)])
/*< 72>*/ 	set_camera(1, 0)
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x1D00Il est interdit d'emmener les armes à\nl'extérieur de la salle!\n\n\nTu croyais que je ne m'en apercevrais\npas, ou quoi?")
/*< 73>*/ 	set_camera(2, 0)
/*< 29>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 11), ('next', 32), ('param3', 33)])
/*< 32>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 11), ('next', 26), ('param3', 17)])
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Pardon? \x0E\x01\x04\x02(Ton célestrier est\nintrouvable? \x0E\x01\x04\x02(Tu veux partir à\nsa recherche? Bien entendu...\n\n\x0E\x01\x09\x04\x09\xE00Cependant, Célesbourg est un village\npacifiste et seuls les chevaliers sont\nautorisés à y porter l'épée. C'est la\nrègle.\nAlors n'utilise pas cette épée à tort et à\ntravers. Tu ne dois t'en servir qu'en cas\nd'extrême nécessité. Et entraîne\x2010toi\nbien sur les troncs ici.\nCompris?")
/*< 74>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 27), ('param3', 42)])
/*< 27>*/ 	story_flags[199 /* us: 805A9AEF 0x02, jp: 805ACD6F 0x02 */] = true;
/*< 75>*/ 	scene_flags[0 'Skyloft'][56 /* 0x6 01 */] = true;
          }

          void entrypoint_119_03() {
/*< 55>*/ 	start()
/*< 13>*/ 	switch (adventure_pouch_has(9 0x0009)) {
          	  case 0:
/*<156>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x05Oui? Tu veux que je te réexplique les\ntechniques de<r< défense>>?\n[1]Pratique[2]Théorie[3-]Pas besoin")
/*< 19>*/ 			switch (choice(3)) {
          			  case 0:
/*< 20>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Tu choisis la <r<pratique>>? OK!\n\n\n\n\x0E\x01\x09\x04\x19\x1D00Si tu brandis ton bouclier au\nmoment où un ennemi t'attaque,\nson attaque sera <g<contrée>>.\n\n\x0E\x01\x09\x04\x1C\x1D00Cette technique s'appelle la <r<charge\nbouclier>>, elle fera perdre l'équilibre\nà ton ennemi pour te permettre de\nle frapper.\n\x0E\x01\x09\x04\x0D\x200Elle est très utile contre les\nennemis qui lancent des projectiles\nou qui ne te laissent que peu de\nchances d'attaquer.")
          				flw_21:
/*< 21>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\x200Pendant un combat, il est primordial\nd'utiliser le bouclier au bon moment!\n\n\n\x0E\x01\x09\x04\x08\x200Et si tu essayais de t'entraîner\nsur le <r<tronc d'arbre>>, là\x2010bas?")
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1C\x200<g<Secoue le Nunchuk\n>>pour brandir ton <r<bouclier>>.\nC'est aussi simple que ça!\n\n\x0E\x01\x09\x04\x0E\x200Pour baisser ton bouclier, <g<brandis\nton épée en agitant la manette\nWii Remote>>. Appuie sur (A) pour\ntout ranger.\n\x0E\x01\x09\x04\x08\x200Mais reste prudent car <g<sortir ton épée\n>>te fait <r<baisser ta garde>>!")
          				goto flw_21
          			  case 2:
/*<160>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x200Je vois...\nTu as raison, il ne faut pas avoir\npeur d'essayer. Et si tu t'entraînais\nsur le tronc d'arbre, là\x2010bas?")
          			}
          		  case 1:
/*< 22>*/ 			switch (scene_flags[59 /* 0x6 08 */]) {
          			  case 0:
/*< 14>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Wow! \x0E\x03\x01\x00Link!\nQuel beau bouclier tu as là!\n\n\n\x0E\x01\x09\x04\x19\x200Bon. Le moment est venu de t'enseigner\nl'<r<art de la défense>>. Commençons par\nles <r<mouvements de base>>.")
          				flw_15:
/*< 15>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1C\x200<g<Secoue le Nunchuk\n>>pour brandir ton <r<bouclier>>.\nC'est aussi simple que ça!\n\n\x0E\x01\x09\x04\x0E\x200Pour baisser ton bouclier, <g<brandis\nton épée en agitant la manette\nWii Remote>>. Appuie sur (A) pour\ntout ranger.\n\x0E\x01\x09\x04\x08\x200Mais reste prudent car <g<sortir ton épée\n>>te fait <r<baisser ta garde>>!")
/*< 16>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x1D00Essaie ça! On va voir comment tu\nte débrouilles.")
/*< 23>*/ 				scene_flags[0 'Skyloft'][60 /* 0x6 10 */] = true;
          			  case 1:
/*<157>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x1D04\x0E\x03\x01\x00Link... Le directeur m'a\nraconté ce qui s'est passé. Je suis très\ninquiet au sujet de Zelda...\n\nMais personne n'en sait plus...\n\n\n\nL'épée que tu portes ne vient pas de\nCélesbourg. C'est une <r<relique antique\n>>que seul celui qui en sera jugé digne\npourra brandir.\nSi tu l'as en ta possession, alors ça veut\ndire que...")
/*<159>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1D04\x0E\x03\x01\x00Link, je ne peux pas\nfaire grand\x2010chose pour toi...\n\n\nMais je peux au moins \x0E\x01\x09\x04\x19\x1D00t'enseigner\nl'<r<art de la défense>>!\n\n\n\x0E\x01\x09\x04\x00\x200Commençons par les\n<r<mouvements de base>>!")
          				goto flw_15
          			}
          		}
          	  case 1:
/*< 11>*/ 		switch (scene_flags[59 /* 0x6 08 */]) {
          		  case 0:
/*< 12>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x19\x1D01Bien manier son bouclier fait\npartie des techniques de défense.\nLa défense et l'attaque sont la\nclé d'un combat réussi!\n\x0E\x01\x09\x04\x08\xE00Tu peux acheter un <r<bouclier>>\nau <r<bazar>>. Reviens t'entraîner\nquand tu en auras un.\n\n\x0E\x01\x09\x04\x09\x1D00Et j'espère que je ne parle pas\ndans le vide!")
          		  case 1:
/*<  8>*/ 			switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          			  case 0:
/*<  9>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x1D04\x0E\x03\x01\x00Link... Le directeur m'a\nraconté ce qui s'est passé. Je suis très\ninquiet au sujet de Zelda...\n\nMais personne n'en sait plus...\n\n\n\nL'épée que tu portes ne vient pas de\nCélesbourg. C'est une <r<relique antique\n>>que seul celui qui en sera jugé digne\npourra brandir.\nSi tu l'as en ta possession, alors ça veut\ndire que...")
/*<158>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1D00\x0E\x03\x01\x00Link, je ne peux rien faire\npour toi tant que tu n'as pas de\n<r<bouclier>>...\n\n\x0E\x01\x09\x04\x19\x1D00Quand tu en auras un, je pourrai\nt'enseigner l'<r<art de la défense>>. Ça\nfait partie de mon rôle de professeur!")
/*< 10>*/ 				scene_flags[0 'Skyloft'][59 /* 0x6 08 */] = true;
          			  case 1:
/*<  5>*/ 				switch (scene_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Oui? Oh, tu veux savoir comment\nutiliser ton épée?\n[1]Oui[2-]Non merci")
/*<  4>*/ 					switch (choice(2)) {
          					  case 0:
/*<  3>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x203C'est très facile! Il te suffit\nd'agiter la manette Wii Remote pour\n<r<donner des coups d'épée>>!\n\nAgite-la vers le haut ou\nle bas pour <g<trancher verticalement>>\net agite-la de côté pour <g<trancher\nhorizontalement>>.\nEnfonce la manette Wii Remote\nvers l'avant pour faire un <g<coup\nde pointe>>.\n\n\x0E\x01\x09\x04\x17\x200La technique d'attaque la plus efficace\nest l'<g<attaque circulaire>>! Il faut agiter\nsimultanément la manette\nWii Remote et le Nunchuk.\n\x0E\x01\x09\x04\x18\x1D00Ces trois techniques sont\nindispensables au combat,\nmais n'oublie pas non plus\nles mouvements de base!\n\x0E\x01\x09\x04\x00\x1D04Par exemple, <r<cibler >>les ennemis\navec (Z). Appuie sur (Z)\ndès que tu aperçois un ennemi!\x0E\x01\x11\x02\x7CD")
          						flw_7:
/*<  7>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1C\x1D03Tu devrais t'entraîner sur ces <r<troncs\nd'arbres>>.\n\n\n\x0E\x01\x09\x04\x09\x200Si tu as des difficultés à diriger ton\népée, commence par donner quelques\n<g<coups d'épée>> <r<à la verticale>>, tout droit\ndevant toi.\n\x0E\x01\x09\x04\x08\x200Si tu parviens à couper tous les troncs,\nje te ferai essayer une <r<technique\navancée>>.")
          					  case 1:
/*<  2>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\x1A08Évidemment... Tu as toujours su\nmanier l'épée!\n\n\n\x0E\x01\x09\x04\x08\x200Mais il ne faut pas s'asseoir sur ses\nlauriers! Même si on est doué, il faut\ns'entraîner régulièrement!\n\n\x0E\x01\x09\x04\x19\x1D00<r<Cibler les ennemis>> avec (Z), par\nexemple, est un élément de base\nqu'il faut maîtriser à fond.")
          						goto flw_7
          					}
          				  case 1:
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Salut, Link!\n\n\n\n\x0E\x01\x09\x04\x09\x200C'est aujourd'hui le grand jour de la\nchevauchée céleste, et tu veux\nt'entraîner à l'épée? Très bien,\ntrès bien!\nVa te chercher une épée dans la pièce\ndu fond.\n\n\nN'hésite pas à revenir me poser des\nquestions, je reste ici.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_119_04() {
/*< 76>*/ 	start()
/*< 84>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x201Ce tronc sert à s'entraîner aux <r<coups\nverticaux>>. Agite la manette\nWii Remote du haut vers le bas pour\ncouper le tronc d'arbre.")
          }

          void entrypoint_119_05() {
/*< 80>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x19\x203Ce tronc sert à s'entraîner aux <r<coups\nhorizontaux>>. Agite la\nmanette Wii Remote latéralement\npour couper le tronc d'arbre.")
          }

          void entrypoint_119_06() {
/*< 81>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1D\x202Ce tronc sert à s'entraîner aux <r<coups\ndiagonaux>>. Agite la manette\nWii Remote en diagonale pour couper\nle tronc d'arbre.")
          }

          void entrypoint_119_07() {
/*< 82>*/ 	start()
/*< 87>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x203Ce tronc sert à s'entraîner aux <r<coups\nde pointe>>. Pointe la manette Wii\nRemote vers l'écran et agite-la\nvers l'avant.")
          }

          void entrypoint_119_08() {
/*< 83>*/ 	start()
/*<161>*/ 	switch (adventure_pouch_has(0 0x0000)) {
          	  case 0:
/*< 79>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x19\x202Ce tronc sert à s'entraîner aux\ntechniques de <r<défense>>.\n\n\n\x0E\x01\x09\x04\x1C\x1D00Donne un coup d'épée dans le tronc,\npuis fais une <r<charge bouclier >>en\n<g<agitant le Nunchuk en avant >>quand\nle tronc revient vers toi.")
          	  case 1:
/*< 77>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<162>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x19\x1D02Ça, c'est le tronc réservé à\nl'entraînement à la <r<défense>>.\nÉquipe un <r<bouclier >>et sois vigilant,\nou il te fera tomber à la renverse!")
          		  case 1:
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x19\x1D02Ce tronc sert à s'entraîner aux\ntechniques de <r<défense>>. Comme tu\nn'es pas équipé d'un <r<bouclier>>, sois\nprudent si tu t'en approches.")
          		}
          	}
          }

          void entrypoint_119_09() {
/*<109>*/ 	start()
/*<114>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\x213Félicitations, Link!")
/*<116>*/ 	set_camera(3, 0)
/*<110>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x1908Quel talent! Je suis très fier de toi!\n\n\n\n\x0E\x01\x09\x04\x09\x200Tu veux essayer l'<g<attaque circulaire\n>>maintenant?\n[1]Oui![2-]Plus tard")
          }

