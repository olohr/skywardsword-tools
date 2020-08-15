          void entrypoint_106_34() {
/*< 22>*/ 	start()
/*< 51>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 21), ('param3', 12)])
/*< 21>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 153), ('param2', 1), ('next', 20), ('param3', 23)])
/*< 20>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 12)])) {
          	  case 0:
/*< 26>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Cette marmite contient de la\n<y<polypotion>>.\n\n\nSi tu l'appliques sur un bouclier\nendommagé, celui\x2010ci sera à nouveau\ncomme neuf! Et en plus, ça te rend\n<r<quatre>> c\x153urs! Magique, hein?\nÇa t'intéresse? Ça ne coûte\nque <r<30 rubis>>!\n[1]Oui![2-]Non merci")
          		flw_11:
/*< 11>*/ 		switch (choice(2)) {
          		  case 0:
/*< 13>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 26)])
          		  case 1:
/*< 12>*/ 			entrypoint_106_08();
          		}
          	  case 1:
/*< 29>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x702Salut, mon bonhomme!\n\n\n\n\x0E\x01\x09\x04\x0C\xB00Oh, désolée mais je ne\npeux rien te vendre si tu ne\npossèdes pas de flacon vide...\n\n\x0E\x01\x09\x04\x0D\x700Si tu veux que je t'explique\nle fonctionnement de la boutique,\ntu n'as qu'à me le demander!")
          	}
          }

          void entrypoint_106_51() {
/*< 65>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x704Oh. D'accord. Tu es sûr de vouloir\naméliorer cette potion?\n[1]Oui![2-]Non...")
/*< 70>*/ 	switch (choice(2)) {
          	  case 0:
/*<110>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 68), ('param3', 33)])
/*< 68>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Très bien. Un petit instant...")
/*< 99>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 71), ('param3', 12)])
/*< 71>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 72), ('param3', 33)])
/*< 72>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x708Et voilà! Euh. C'est prêt!")
/*< 89>*/ 		loadzone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\xA06Ah, d'accord... Est-ce que je peux faire\nautre chose pour toi? Peut-être?")
/*<100>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 78), ('param3', 12)])
/*< 78>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          	}
          }

          void entrypoint_106_35() {
/*< 55>*/ 	start()
/*< 56>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 54), ('param3', 12)])
/*< 54>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 153), ('param2', 1), ('next', 53), ('param3', 23)])
/*< 53>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 18)])) {
          	  case 0:
/*< 57>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BCette marmite contient de la <y<potion\nd'invincibilité>>. Cette potion limite\nles dommages physiques pendant\nun certain temps.\nSi tu penses ne pas être à la\nhauteur pour un combat, c'est\nexactement ce qu'il te faut!\n\nPar contre, c'est pas donné.\n<r<200 rubis>>. Ça t'intéresse?\n[1]Oui![2-]Non merci ")
          		goto flw_11
          	  case 1:
/*< 58>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x702Salut, mon bonhomme!\n\n\n\n\x0E\x01\x09\x04\x0C\xB00Oh, désolée mais je ne\npeux rien te vendre si tu ne\npossèdes pas de flacon vide...\n\n\x0E\x01\x09\x04\x0D\x700Si tu veux que je t'explique\nle fonctionnement de la boutique,\ntu n'as qu'à me le demander!")
          	}
          }

          void entrypoint_106_52() {
/*< 74>*/ 	start()
/*< 90>*/ 	switch (loadzone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 91>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x908Oh! Merci beaucoup!\nMerci, merci! Reviens vite!\nEuh, si tu veux. Bien entendu.")
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\xA06Pas de problème, c'est toi qui décides.\nBien, c'est sûr que c'est toi qui décides.\nN'hésite pas à revenir. Juste si tu veux.")
          	}
          }

          void entrypoint_106_01() {
          	start()
/*< 40>*/ 	switch (story_flags[35 /* us: 805A9ADD 0x08, jp: 805ACD5D 0x08 */]) {
          	  case 0:
/*<126>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
/*<127>*/ 			switch (story_flags[1075 /* us: 805A9B50 0x02, jp: 805ACDD0 0x02 */]) {
          			  case 0:
          				flw_105:
/*<105>*/ 				switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          				  case 0:
/*<109>*/ 					switch (scene_flags[85 /* 0xB 20 */]) {
          					  case 0:
          						flw_6:
/*<  6>*/ 						switch (loadzone_temp_flags[2 /* 0x1 04 */]) {
          						  case 0:
/*<  5>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BOui? Je peux t'aider?\n[1]Explique\x2010moi[2-]Rien ")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*<  4>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Très bien, mon bonhomme!\nMets\x2010toi devant la marmite qui\nt'intéresse et appuie sur (A).\n\nJe t'expliquerai les propriétés\nde la potion. Par contre, je n'ai\nici que des potions de base.\n\nSi tu veux quelque chose de\nplus performant...\n\n\n\x0E\x01\x09\x04\x0D\x700... achète une de mes potions et\napporte\x2010la à mon mari, à côté.\nIl pourra sûrement en faire\nquelque chose.\n\x0E\x01\x09\x04\x0C\x00À le regarder, on dirait pas, mais\nil a beaucoup de talent et il s'entend\nbien avec les jeunes comme toi.")
          								flw_7:
/*<  7>*/ 								loadzone_temp_flags[2 /* 0x1 04 */] = true;
          							  case 1:
/*<  3>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\xB0EOh, ça va, j'ai compris.\nMoi aussi j'ai autre chose à faire.\nJe te pardonne pour cette fois.\n\n\x0E\x01\x09\x04\x0D\x00Si tu veux des potions plus\nperformantes, demande à mon mari\nlà\x2010bas. Il pourra améliorer celles\nque tu m'as achetées!")
          								goto flw_7
          							}
          						  case 1:
/*<  1>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hé, salut, mon bonhomme!\n\n\n\nBienvenue à la boutique de potions!\nIci, tu peux acheter des potions qui\ns'avéreront très utiles dans\nles situations délicates.\nTu veux que je t'explique?\n[1]Oui![2-]Non merci")
          							goto flw_2
          						}
          					  case 1:
/*<107>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 106), ('param3', 31)])
/*<106>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hé, bonne nouvelle! La potion\nque je préparais est enfin finie.\n\n\nC'est une <y<potion d'endurance>>!\n\n\n\nSi tu bois cette potion, ta <b<jauge\nd'endurance>> se videra moins\nvite pendant un certain temps.\n\nOK, c'est pas donné, mais\nça en vaut la peine!\n\n\nPour en acheter, mets\x2010toi devant\nla marmite et examine\x2010la.")
/*<108>*/ 						scene_flags[0 'Skyloft'][85 /* 0xB 20 */] = true;
/*<131>*/ 						loadzone_temp_flags[2 /* 0x1 04 */] = true;
          					}
          				  case 1:
          					goto flw_6
          				}
          			  case 1:
/*<128>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 129), ('param3', 31)])
/*<129>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Salut! On a une nouvelle potion!\nJettes\x2010y donc un coup d'\x153il!\n\n\nC'est de la <y<potion d'oxygène>>!\n\n\n\nQuand tu bois cette potion\nextraordinaire, ta <b<jauge d'oxygène\n>>baisse moins vite!\n\nOn la vend à un prix très abordable,\ntu devrais en acheter un flacon!\n\n\nComme d'habitude, place\x2010toi devant\nla marmite et parle\x2010moi!")
/*<130>*/ 				story_flags[1075 /* us: 805A9B50 0x02, jp: 805ACDD0 0x02 */] = true;
/*<132>*/ 				loadzone_temp_flags[2 /* 0x1 04 */] = true;
          			}
          		  case 1:
          			goto flw_105
          		}
          	  case 1:
/*< 52>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 39), ('param3', 31)])
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Hé, salut mon bonhomme!\n\n\n\nBienvenue à la boutique de potions!\nMes breuvages sont très utiles quand\nle nombre de c\x153urs diminue au combat.\n\n\x0E\x01\x09\x04\x0D\x700Tu es un de ces chevaliers, non?\nAh, tu es encore à l'école!\n\n\nCrois\x2010moi, tu auras grand besoin\nde mes potions, alors ne repars\npas les mains vides!")
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\xB06Oh\x0E\x01\x06\x02\xFCCD...?\x0E\x01\x06\x02Í\n\n\n\nDis\x2010moi, est\x2010ce que tu as un flacon\nvide?\n\n\nTu peux seulement acheter mes potions\nsi tu possèdes des flacons vides.\n\n\n\x0E\x01\x09\x04\x09\x90BTiens, comme je t'aime bien,\nje t'en offre un en cadeau!\n\n\n\x0E\x01\x09\x04\x07\x700Tu peux mettre des tas de choses\ndifférentes dans un flacon vide,\nc'est très pratique. Tu verras,\ntu ne pourras plus t'en passer!")
/*< 45>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 112), ('param2', 1), ('next', 46), ('param3', 23)])
/*< 46>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 16)])) {
          		  case 0:
/*< 59>*/ 			switch (is_adventure_pouch_full()) {
          			  case 0:
/*< 60>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\xB08Dis donc, ta sacoche est pleine\nà craquer! Tu aimes ça, le\nmagasinage, on dirait...\n\n\x0E\x01\x09\x04\n\xA00Tu devrais aller ranger quelques objets\nà la consigne, ce sera moins lourd!")
          			  case 1:
/*< 44>*/ 				give_item(153 0x99);
/*< 41>*/ 				story_flags[35 /* us: 805A9ADD 0x08, jp: 805ACD5D 0x08 */] = true;
/*< 96>*/ 				switch (scene_flags[89 /* 0xA 02 */]) {
          				  case 0:
/*< 43>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x70BLes flacons vides se rangent bien\ndans ta sacoche d'aventurier.\nAppuie sur \x0E\x02\x04\x02\x2CD pour en choisir un.\x0E\x01\x11\x02\x2CD")
/*<114>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Si ta sacoche d'aventurier est pleine,\ntu peux aller ranger des objets à\nla consigne.\n\n\x0E\x01\x09\x04\x0C\x70BQue veux\x2010tu acheter, mon bonhomme?")
          					goto flw_7
          				  case 1:
/*< 97>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x70BLes flacons vides se rangent\nbien dans ta sacoche d'aventurier.\nAppuie sur <g<\x0E\x02\x04\x02\x2CD >>pour en choisir un.\x0E\x01\x11\x02\x2CD\n\nMaintiens \x0E\x02\x04\x02\x2CD enfoncé et\n<g<incline>> la manette Wii Remote\npour choisir le flacon à utiliser.\x0E\x01\x11\x02\x2CD\n\n<g<Relâche>> \x0E\x02\x04\x02\x2CD pour\nsélectionner un flacon.\x0E\x01\x11\x02\x2CD")
/*<115>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Si ta sacoche d'aventurier est pleine,\ntu peux aller ranger des objets à\nla consigne.\n\n\x0E\x01\x09\x04\x0C\x70BQue veux\x2010tu acheter, mon bonhomme?")
/*< 98>*/ 					story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<111>*/ 					scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
          				}
          			}
          		  case 1:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0 */ "")
          		}
          	}
          }

          void entrypoint_106_53() {
/*< 79>*/ 	start()
/*<112>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Si tu as d'autres potions à améliorer,\nn'hésite pas à me les apporter!")
/*< 80>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          	  case 1:
/*<113>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Oh, tu n'as plus de potion qui puisse\nêtre améliorée. Va voir ma femme,\njuste à côté, si tu veux en acheter.\nOu pas, si tu ne veux pas...")
          	}
          }

          void entrypoint_106_70() {
/*<133>*/ 	start()
/*<136>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 134), ('param3', 12)])
/*<134>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nPour réaliser ce mélange, il te manque\njuste des <y<criquets de Firone>>...\n\n\nD'après les écrits secrets, les <y<criquets\nde Firone >>vivraient dans un endroit\noù la végétation est luxuriante. Euh,\nje pense bien en tous cas...")
          	flw_137:
/*<137>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x00Je suis vraiment désolé...\nTu veux peut\x2010être améliorer\nune autre potion?")
/*<135>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_106_54() {
/*< 82>*/ 	start()
/*<101>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 84), ('param3', 12)])
/*< 84>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nTu n'as pas les ingrédients nécessaires\npour améliorer cette potion...\n\n\nDésolé... Choisis\x2010en une autre.")
/*< 87>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_106_71() {
/*<138>*/ 	start()
/*<140>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 139), ('param3', 12)])
/*<139>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nPour réaliser ce mélange, il te manque\njuste des <y<dynastes de Firone>>...\n\n\nD'après les écrits secrets, les <y<dynastes\nde Firone >>vivent entre autres sur les\narbres d'une contrée à la végétation\nluxuriante. En tous cas, je le pense...")
          	goto flw_137
          }

          void entrypoint_106_55() {
/*< 83>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nOh, mon enfant... Je suis désolé mais\ntu n'as pas assez d'argent...")
/*<102>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 86), ('param3', 12)])
/*< 86>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_106_72() {
/*<141>*/ 	start()
/*<143>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 142), ('param3', 12)])
/*<142>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nPour réaliser ce mélange, il te manque\njuste des <y<guêpes Mojo>>...\n\n\nD'après les écrits secrets, les\n<y<guêpes Mojo>> font leur nid dans les\narbres d'une contrée à la végétation\nluxuriante. Euh, je le pense...")
          	goto flw_137
          }

          void entrypoint_106_56() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nOh. Tu ne possèdes aucune potion à\naméliorer. Du moins, je crois...\n\n\n\x0E\x01\x09\x04\x09\x900Ma femme, là\x2010bas, en vend, si ça\nt'intéresse, peut\x2010être. Sans vouloir\nte déranger...")
          }

          void entrypoint_106_73() {
/*<144>*/ 	start()
/*<146>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 145), ('param3', 12)])
/*<145>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nPour réaliser ce mélange, il te manque\njuste des <y<mantes célestes>>...\n\n\nLes <y<mantes célestes>> sont assez\nnombreuses ici, à Célesbourg.\nJe le pense bien en tous cas...")
          	goto flw_137
          }

          void entrypoint_106_05() {
/*< 30>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\xA08Tu n'as pas de <r<flacon vide>>...\nReviens me voir quand tu\nen auras un.")
          }

          void entrypoint_106_74() {
/*<147>*/ 	start()
/*<150>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 148), ('param3', 12)])
/*<148>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nPour réaliser ce mélange, il te manque\njuste des <y<pyroccinelles>>...\n\n\nD'après les écrits secrets, les\n<y<pyroccinelles >>vivent sur une\nmontagne de feu. Euh, je le\npense bien, en tous cas...")
          	flw_151:
/*<151>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x00Je suis vraiment désolé...\nTu veux peut\x2010être améliorer\nune autre potion?")
/*<149>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_106_06() {
/*< 31>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\xB08Mon cher! Tu n'as pas assez\nd'argent. Tu es bien gentil mon\nbonhomme, mais je ne suis pas\nta mère!\n\x0E\x01\x09\x04\n\xA00Reviens me voir quand\ntu auras de quoi payer.")
          }

          void entrypoint_106_75() {
/*<152>*/ 	start()
/*<154>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 153), ('param3', 12)])
/*<153>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nPour réaliser ce mélange, il te manque\njuste des <y<papillons azur>>...\n\n\nSi je me souviens bien, même ici,\nà Célesbourg, on trouve beaucoup\nde <y<papillons azur>>.")
          	goto flw_151
          }

          void entrypoint_106_07() {
/*< 32>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x90AMerci beaucoup. Si tu veux une potion\nplus performante, va voir mon mari,\nà côté. Il pourra sûrement faire\nquelque chose pour toi.")
          }

          void entrypoint_106_76() {
/*<155>*/ 	start()
/*<157>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 156), ('param3', 12)])
/*<156>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nPour réaliser ce mélange, il te manque\njuste des <y<fourmis de Lanelle>>...\n\n\nD'après les écrits secrets, les <y<fourmis\nde Lanelle >>vivent en colonies dans une\ncontrée sablonneuse. Du moins, je le\npense, oui.")
          	goto flw_151
          }

          void entrypoint_106_08() {
/*< 33>*/ 	start()
/*< 77>*/ 	switch (random(2)) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\xA0EHé! Pas de lèche\x2010vitrine chez moi,\ncompris?")
          	  case 1:
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\xB10Tu n'en veux pas? Je sais que mes\npotions ont parfois un goût bizarre,\nmais au moins, elles sont efficaces!")
          	}
          }

          void entrypoint_106_77() {
/*<158>*/ 	start()
/*<160>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 159), ('param3', 12)])
/*<159>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nPour réaliser ce mélange, il te manque\njuste des <y<cigales des sables>>...\n\n\nD'après les écrits secrets, les <y<cigales\ndes sables>> vivent dans une contrée,\neuh, sablonneuse. Du moins, je le\npense, oui.")
          	goto flw_151
          }

          void entrypoint_106_78() {
/*<161>*/ 	start()
/*<164>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 162), ('param3', 12)])
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nPour réaliser ce mélange, il te manque\njuste des <y<libellules Gerudo>>...\n\n\nD'après les écrits secrets, les <y<libellules\nGerudo >>vivent dans les touffes d'herbe\nd'une contrée sablonneuse. Euh, je le\npense bien, en tous cas...")
          	flw_165:
/*<165>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x00Je suis vraiment désolé...\nTu veux peut\x2010être améliorer\nune autre potion?")
/*<163>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_106_79() {
/*<166>*/ 	start()
/*<168>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 167), ('param3', 12)])
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nPour réaliser ce mélange, il te manque\njuste des <y<bousiers d'Ordinn>>...\n\n\nD'après les écrits secrets, les <y<bousiers\nd'Ordinn >>vivent sur une montagne de\nfeu. Euh, du moins, je le pense...")
          	goto flw_165
          }

          void entrypoint_106_80() {
/*<169>*/ 	start()
/*<171>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 170), ('param3', 12)])
/*<170>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nPour réaliser ce mélange, il te manque\njuste des <y<lucanes célestes>>...\n\n\nLes <y<lucanes célestes >>sont les insectes\nles plus célèbres de Célesbourg...")
          	goto flw_165
          }

          void entrypoint_106_81() {
/*<172>*/ 	start()
/*<174>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 173), ('param3', 12)])
/*<173>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nPour réaliser ce mélange, il te manque\njuste des <y<lucielles>>...\n\n\nLes <y<lucielles>> sont des insectes rares\nqu'on peut apercevoir la nuit ici,\nà Célesbourg, et dans d'autres endroits\ndu ciel.")
          	goto flw_165
          }

          void entrypoint_106_31() {
/*< 10>*/ 	start()
/*< 48>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 9), ('param3', 12)])
/*<  9>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 153), ('param2', 1), ('next', 8), ('param3', 23)])
/*<  8>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 4)])) {
          	  case 0:
/*< 38>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Cette marmite contient de\nla <y<potion de santé>>. Elle permet\nde remplir ta jauge de vie.\n\nTu veux en acheter? C'est <r<20 rubis>>\nle flacon. Qu'est-ce que t'en dis?\n[1]Oui![2-]Non merci")
          		goto flw_11
          	  case 1:
/*< 23>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x702Salut, mon bonhomme!\n\n\n\n\x0E\x01\x09\x04\x0C\xB00Oh, désolée mais je ne\npeux rien te vendre si tu ne\npossèdes pas de flacon vide...\n\n\x0E\x01\x09\x04\x0D\x700Si tu veux que je t'explique\nle fonctionnement de la boutique,\ntu n'as qu'à me le demander!")
          	}
          }

          void entrypoint_106_32() {
/*< 16>*/ 	start()
/*< 15>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 153), ('param2', 1), ('next', 14), ('param3', 23)])
/*< 14>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 8)])) {
          	  case 0:
/*<124>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
/*< 49>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 24), ('param3', 12)])
/*< 24>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Cette marmite contient de la <y<potion\nd'oxygène>>. Si tu bois cette potion,\nta <b<jauge d'oxygène >>se videra moins\nvite pendant un certain temps.\nTu veux en acheter?\nC'est <r<20 rubis >>le flacon.\n[1]Oui![2-]Non merci")
          			goto flw_11
          		  case 1:
/*<125>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\xB04Cette potion n'est pas encore prête à \nêtre consommée. Ça ne devrait pas\nêtre bien long... Un peu de patience!\n\n\x0E\x01\x09\x04\x09\x700En attendant, on a plein d'autres\npotions en rayon, jette\x2010leur un coup\nd'\x153il!")
          		}
          	  case 1:
/*< 27>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x702Salut, mon bonhomme!\n\n\n\n\x0E\x01\x09\x04\x0C\xB00Oh, désolée mais je ne\npeux rien te vendre si tu ne\npossèdes pas de flacon vide...\n\n\x0E\x01\x09\x04\x0D\x700Si tu veux que je t'explique\nle fonctionnement de la boutique,\ntu n'as qu'à me le demander!")
          	}
          }

          void entrypoint_106_33() {
/*< 19>*/ 	start()
/*< 18>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 153), ('param2', 1), ('next', 17), ('param3', 23)])
/*< 17>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 10)])) {
          	  case 0:
/*<103>*/ 		switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          		  case 0:
/*< 50>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 25), ('param3', 12)])
/*< 25>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BCette marmite contient de la\n<y<potion d'endurance>>.\n\n\nSi tu bois cette potion, ta <b<jauge\nd'endurance >>se videra moins vite\npendant un certain temps.\n\nOK, c'est pas donné, mais ça en\nvaut la peine. Tu veux en acheter?\nC'est <r<50 rubis >>le flacon.\n[1]Oui![2-]Non merci")
          			goto flw_11
          		  case 1:
/*<104>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\xB04Cette potion exceptionnelle\nempêchera ta <b<jauge d'endurance>>\nde se vider trop vite.\n\nMais elle n'est pas encore tout à fait\nau point, alors il va falloir être patient.\n\n\n\x0E\x01\x09\x04\x09\x700Par contre, n'hésite pas à jeter un\n coup d'\x153il à mes autres potions.")
          		}
          	  case 1:
/*< 28>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x702Salut, mon bonhomme!\n\n\n\n\x0E\x01\x09\x04\x0C\xB00Oh, désolée mais je ne\npeux rien te vendre si tu ne\npossèdes pas de flacon vide...\n\n\x0E\x01\x09\x04\x0D\x700Si tu veux que je t'explique\nle fonctionnement de la boutique,\ntu n'as qu'à me le demander!")
          	}
          }

          void entrypoint_106_50() {
/*< 61>*/ 	start()
/*< 88>*/ 	loadzone_temp_flags[4 /* 0x1 10 */] = false;
/*<181>*/ 	switch (loadzone_temp_flags[7 /* 0x1 80 */]) {
          	  case 0:
          		flw_116:
/*<116>*/ 		switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          		  case 0:
/*<118>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 71), ('param2', 1), ('next', 119), ('param3', 23)])
/*<119>*/ 			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 44)])) {
          			  case 0:
          				flw_62:
/*< 62>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Euh, bien le bonjour, mon jeune!\nBienvenue à la boutique de potions.\nNous vendons les meilleures du\nbazar! Du moins, je le pense...\nDans cette marmite, je peux améliorer\nles potions que tu as achetées à ma\nfemme. Bien, si tu veux...\n\n\x0E\x01\x09\x04\x07\x700Très bien... Veux-tu que j'améliore...\neuh... oui, une potion?\n[1]Oui[2-]Non")
/*< 63>*/ 				switch (choice(2)) {
          				  case 0:
/*< 94>*/ 					switch (context_related2(0)) {
          					  case 0:
/*< 66>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Bon...Très bien... Voyons ce que je\npeux faire pour toi...")
/*< 64>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          					  case 1:
/*< 95>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nOh. Tu ne possèdes aucune potion à\naméliorer. Du moins, je crois...\n\n\n\x0E\x01\x09\x04\x09\x900Ma femme, là\x2010bas, en vend, si ça\nt'intéresse, peut\x2010être. Sans vouloir\nte déranger...")
          					}
          				  case 1:
/*< 67>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\xA06Je comprends... Non, non, ce n'est rien.\nÇa ne me dérange pas du tout. N'hésite\npas à revenir! Quand tu veux...")
          				}
          			  case 1:
/*<121>*/ 				switch (loadzone_temp_flags[6 /* 0x1 40 */]) {
          				  case 0:
/*<123>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Si tu n'as pas encore de <y<filet>>,\ntu peux en acheter un\nà la <r<boutique de Beedle>>.\n\nLa boutique de Beedle plane\nau\x2010dessus du bazar.\n\n\nSi tu veux la trouver, regarde dans\nle ciel à l'aide de la <g<vue subjective>>.\nEnfin, si ça ne te dérange pas trop...")
          				  case 1:
/*<117>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 120), ('param3', 31)])
/*<120>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Oh. Bienvenue à la boutique de potions.\n\n\n\nDans cette marmite, je peux améliorer\nles potions que tu as achetées à ma\nfemme. Du moins, je le pense.\n\n\x0E\x01\x09\x04\x00\x07Mais pour concocter mes mixtures,\nil me faut des... ah oui, des insectes.\n\n\nSi tu n'as pas encore de filet, tu\npeux en acheter un à la <r<boutique\nde Beedle>>.\n\n\x0E\x01\x09\x04\x07\x708La boutique de Beedle plane\nau\x2010dessus du bazar.\n\n\nSi tu veux la trouver, regarde dans\nle ciel à l'aide de la <g<vue subjective>>.\nBien, je voudrais surtout pas te\nfaire sentir obligé...")
/*<122>*/ 					loadzone_temp_flags[6 /* 0x1 40 */] = true;
          				}
          			}
          		  case 1:
          			goto flw_62
          		}
          	  case 1:
/*<176>*/ 		switch (story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */]) {
          		  case 0:
/*<175>*/ 			switch (story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */]) {
          			  case 0:
          				goto flw_116
          			  case 1:
/*<177>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 160), ('param2', 1), ('next', 178), ('param3', 23)])
/*<178>*/ 				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 58)])) {
          				  case 0:
/*<182>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 179), ('param3', 31)])
/*<179>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01B\x2010bienvenue... Heu? Pardon?\nTu as quelque chose à me montrer?\n\n\nAh, je suis vraiment désolé, mais j'ai\nbeaucoup de travail, là. Tu ne voudrais\npas revenir me voir la <r<nuit>> chez moi, si\nça ne te dérange pas?\nMerci bien.")
/*<180>*/ 					loadzone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
          					goto flw_116
          				}
          			}
          		  case 1:
/*<183>*/ 			switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          			  case 0:
/*<186>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 184), ('param3', 31)])
/*<184>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01B\x2010bienvenue...\n\x0E\x01\x06\x02\xFBCD...... \x0E\x01\x06\x02Í\x0E\x01\x09\x04\n\xA06Pfff...\n\n\n\x0E\x01\x09\x04ÿ\xFF00Ah, désolé, ça ne se fait pas de soupirer\ncomme ça devant les clients... En fait, \nces derniers temps, je ne dors pas\nbeaucoup la <r<nuit>>...\nAh, mais je t'ennuie avec mes\nhistoires...\n\n\nFais comme si je n'avais rien dit... ")
/*<185>*/ 				loadzone_temp_flags[7 /* 0x1 80 */] = true;
          				goto flw_116
          			  case 1:
          				goto flw_116
          			}
          		}
          	}
          }

