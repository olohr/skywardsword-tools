          void entrypoint_400_13() {
/*< 33>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_65() {
/*<161>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Nous sommes arrivés aux\n<b<mines de Lanelle>>.\n\n\nJe peux utiliser la détection\npour trouver l'entrée de l'épreuve\nqui vous guidera vers la flamme\nsacrée.")
/*<163>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_30() {
/*<234>*/ 	start()
/*<235>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Quoi? Tu veux travailler ici? Zrrrp?\nEnlève ton drôle de chapeau et va\nte chercher un casque! Vrrm.")
/*<244>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_14() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Tu bloques le passage du wagonnet qui\nest devant la porte! Tasse\x2010toi. Vrrm!")
/*< 71>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_66() {
/*<164>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Nous sommes arrivés au\n<b<désert de Lanelle>>.\n\n\nJe peux utiliser la détection\npour trouver l'entrée de l'épreuve\nqui vous guidera vers la flamme\nsacrée.")
/*<166>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_31() {
/*<236>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_15() {
/*< 37>*/ 	start()
/*<304>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<305>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_38:
/*< 38>*/ 			printf(/* textboxtype: 1, unk: 0 */ "...")
          		  case 1:
/*<342>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				flw_307:
/*<307>*/ 				printf(/* textboxtype: 1, unk: 0 */ "...")
          			  case 1:
/*<306>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 307), ('param3', 31)])
          				goto flw_307
          			}
          		}
          	  case 1:
          		goto flw_38
          	}
          }

          void entrypoint_400_67() {
/*<167>*/ 	start()
/*<168>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Nous sommes arrivés au\n<b<temple du temps>>.\n\n\nJe peux utiliser la détection\npour trouver l'entrée de l'épreuve\nqui vous guidera vers la flamme\nsacrée.")
/*<169>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_32() {
/*<238>*/ 	start()
/*<239>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Ces derniers temps, des individus\nétranges nous attaquent. Vrrrm.\nNous ne sommes pas armés. S'ils\ns'en prennent à nous, on est finis!")
/*<245>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_16() {
/*< 39>*/ 	start()
/*<  9>*/ 	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          	  case 0:
/*<308>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<309>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_12:
/*< 12>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Tu es encore là? Vrrm? Sois prudent!")
          			  case 1:
/*<310>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Tu cherches un dragon? Vrrrm?\n\n\n\n\x0E\x01\x09\x04\x1303\x00Le <b<dragon de foudre>> se trouve au sud\nde la <b<grotte de Lanelle>>! Brrrzt! C'est\nle seul dragon que je connaisse.")
/*<341>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_12
          		}
          	  case 1:
/*<  5>*/ 		switch (story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */]) {
          		  case 0:
          			flw_10:
/*< 10>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Maintenant, il peut <r<transporter des\nobjets dans ses mandibules>>.\n\n\nSois prudent! Zrrrt!")
/*< 77>*/ 			scene_flags[7 'Lanayru Desert'][5 /* 0x1 20 */] = true;
/*<280>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          		  case 1:
/*<  6>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<274>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1303\x00Merci de m'avoir aidé! Dzzt!")
/*<275>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 276), ('param3', 47)])
/*<276>*/ 				set_camera(6, 0)
/*<278>*/ 				OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 27), ('param2', 356), ('next', 277), ('param3', 15)])
/*<277>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 279), ('param3', 17)])
/*<279>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 7), ('param3', 48)])
/*<  7>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1303\x00Un peu plus et ils me déconnectaient!\nUne chance que t'es arrivé! Zrrrpt!\n\n\nTiens...\x0E\x01\x04\x02\x1E Je vois que tu as un <y<scarabée>>.\nOn les fabrique ici, à Lanelle. Mais le\ntien est un vieux modèle. Vrrt.\n\nPour te remercier, je vais <r<l'améliorer>>.\n\x0E\x01\x09\x04\x1303\x00Passe\x2010le\x2010moi un instant! Vrrrm!")
/*< 91>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 281), ('param3', 33)])
/*<281>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', 8), ('param3', 42)])
/*<  8>*/ 				give_item(75 0x4B);
/*< 11>*/ 				story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */] = true;
          				goto flw_10
          			  case 1:
/*<  4>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Au secours! Zrrriit!")
/*< 76>*/ 				scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
/*<228>*/ 				scene_flags[7 'Lanayru Desert'][28 /* 0x2 10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_400_50() {
/*< 58>*/ 	start()
/*<142>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*< 59>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00\x0E\x01\x12\x04\x00\x0BMaître Link, veuillez\nprendre connaissance de ces\ninformations pertinentes :\n\nNous sommes arrivés aux\n<b<mines de Lanelle>>.")
          }

          void entrypoint_400_68() {
/*<170>*/ 	start()
/*<172>*/ 	set_camera(-1, 0)
/*<171>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Félicitations, \x0E\x01\x12\x04\x00\x04Maître\nLink.")
/*<173>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x01Maître, par cette épreuve, vous avez\nobtenu la force d'âme et l'artefact qui\nvous permettront d'aller recueillir la\nflamme sacrée dans votre épée.")
/*<175>*/ 	set_camera(3, 0)
/*<174>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Ce <y<grappin>> est l'une des reliques\nlaissées par la Déesse.\n\n\nEn déployant ses chaînes munies\nde griffes, vous pouvez vous tracter\nvers des <r<cibles>> ou du <r<lierre>>.")
/*<177>*/ 	set_camera(-1, 0)
/*<176>*/ 	printf(/* textboxtype: 2, unk: 0 */ "La flamme se trouve quelque part\ndans ce désert... Elle devrait se\ntrouver dans un endroit que vous\nn'avez pas encore exploré, \x0E\x01\x12\x04\x00\x01Maître.")
          }

          void entrypoint_400_33() {
/*<240>*/ 	start()
/*<241>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_17() {
/*< 40>*/ 	start()
/*<125>*/ 	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          	  case 0:
/*<216>*/ 		switch (scene_flags[89 /* 0xA 02 */]) {
          		  case 0:
/*<218>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x16\x2007Je vais pouvoir inspecter ce qu'il y\na à l'intérieur! \x0E\x01\x09\x04\x00\x2000Et après il faudra\nque je retourne au site du sceau.\nJe suis débordé!")
          		  case 1:
/*<126>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\x1B09Quoi? T'es allé à l'intérieur?\n\n\n\n\x0E\x01\x09\x04\x15\x1B00Il y avait un passage secret pour\ns'y rendre? T'aurais pu me le dire!\n\n\n\x0E\x01\x09\x04\x08\x2100J'étais sur le point de laisser tomber et\nde rentrer, mais j'ai entendu un gros\nbruit. Alors je suis revenu et le passage\nétait libéré.\n\x0E\x01\x09\x04\x16\x2007Je vais pouvoir inspecter ce qu'il y\na à l'intérieur! \x0E\x01\x09\x04\x00\x2000Et après, il faudra\nque je retourne au site du sceau.\nJe suis débordé!")
/*<217>*/ 			scene_flags[7 'Lanayru Desert'][89 /* 0xA 02 */] = true;
          		}
          	  case 1:
/*<150>*/ 		switch (scene_flags[73 /* 0x8 02 */]) {
          		  case 0:
/*<152>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x16\x2007Je me demande ce qu'il y a de l'autre\ncôté. Il y aurait pas un autre chemin\nqui mène au temple?")
          		  case 1:
/*< 41>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Tiens, on se retrouve encore une fois!\nJe sais que je suis mal placé pour dire\nça, mais... t'es vraiment partout, toi!\n\n\x0E\x01\x09\x04\x17\x2008Bon. Écoute bien ça. J'ai fait la\ndécouverte du siècle!\n\n\n\x0E\x01\x09\x04\x00\x2000Ici, c'est le <b<temple du temps>>, un endroit\ndes plus sacré.\n\n\n\x0E\x01\x09\x04\x00\x190AEt là, j'ai vu des <r<habitantes de la\nlégendaire île de la Déesse>>!\nJe les ai vues de mes yeux!\n\n\x0E\x01\x09\x04\x00\x1900Elles avaient des vêtements identiques\nà ceux décrits dans les écrits anciens\net elles te ressemblaient beaucoup!\n\n\x0E\x01\x09\x04\x08\x2105Elles étaient deux. Quand elles ont\nfranchi ce portail, j'ai voulu les\nsuivre...\n\n\x0E\x01\x09\x04\x15\x1B00Mais il y a eu une grosse explosion et\nle portail s'est retrouvé dans cet état.\n\x0E\x01\x09\x04\x16\x2007On peut plus passer par là.\n\nJe me demande bien ce qu'il y a de\nl'autre côté.")
/*<151>*/ 			scene_flags[7 'Lanayru Desert'][73 /* 0x8 02 */] = true;
          		}
          	}
          }

          void entrypoint_400_51() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Je détecte un glissement temporel\ndans cette zone.\n\n\nLe choc infligé à la pierre bleue a fait\nremonter le temps. Cet endroit est\nmaintenant <r<<pling>tel qu'il était dans le passé>>.")
          }

          void entrypoint_400_69() {
/*<207>*/ 	start()
/*<208>*/ 	printf(/* textboxtype: 8, unk: 0 */ "Afin de prévenir les accidents\ndu travail, respectons les\nconsignes de sécurité! Zrrt!\n                              Le chef d'usine")
          }

          void entrypoint_400_34() {
/*<242>*/ 	start()
/*<243>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Tu t'intéresses aux chronolithes?\nAlors tu devrais aller visiter la\n<b<raffinerie de Lanelle>>. Vrrrm!")
/*<246>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_52() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 2, unk: 0 */ "J'ai détecté dans les environs des\nmatériaux identiques à ceux qui\ncomposent ce <b<générateur>>. Vous pouvez\nles localiser à l'aide de la <r<<pling>détection>>.")
/*<220>*/ 	story_flags[107 /* us: 805A9AE1 0x01, jp: 805ACD61 0x01 */] = true;
/*<291>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 3), ('next', 268), ('param3', 56)])
/*<268>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_400_35() {
/*<247>*/ 	start()
/*<248>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_19() {
/*< 42>*/ 	start()
/*<311>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<312>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_43:
/*< 43>*/ 			printf(/* textboxtype: 1, unk: 0 */ "...")
          		  case 1:
/*<344>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_43
          			  case 1:
/*<313>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 43), ('param3', 31)])
          				goto flw_43
          			}
          		}
          	  case 1:
          		goto flw_43
          	}
          }

          void entrypoint_400_53() {
/*< 92>*/ 	start()
/*<113>*/ 	story_flags[109 /* us: 805A9AE1 0x04, jp: 805ACD61 0x04 */] = true;
/*<114>*/ 	printf(/* textboxtype: 2, unk: 0 */ "")
/*<159>*/ 	set_camera(1, 0)
/*<160>*/ 	printf(/* textboxtype: 2, unk: 0 */ "")
/*<178>*/ 	set_camera(-1, 0)
/*<179>*/ 	printf(/* textboxtype: 2, unk: 0 */ "")
          }

          void entrypoint_400_70() {
/*<209>*/ 	start()
/*<210>*/ 	printf(/* textboxtype: 8, unk: 0 */ "Prévision d'expédition pour ce\nmois\x2010ci : 150 unités\n\n                              Le chef d'usine")
          }

          void entrypoint_400_36() {
/*<249>*/ 	start()
/*<250>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Les chronolithes sont la source\nd'énergie qui permet à nous\net aux machines de fonctionner.\nPas le temps de discuter! ZZrrp!")
/*<259>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
/*< 72>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_54() {
/*<100>*/ 	start()
/*<205>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<206>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2F08\x709Tu es entré dans le domaine\ndu dragon, Link?\x0E\x01\x04\x02T\n\n\n\x0E\x01\x09\x04\x2F01\x805\x0E\x01\x08\x02\x2CDAh! Je suis jaloux!\x0E\x01\x04\x02Z\n\n\n\n\x0E\x01\x09\x04\x2F0F\x706\x0E\x01\x08\x02\x2CDJe voulais être le premier!")
          		flw_149:
/*<149>*/ 		scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
          	  case 1:
/*<109>*/ 		switch (scene_flags[75 /* 0x8 08 */]) {
          		  case 0:
/*<111>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2F08\xD0AJ'ai trouvé le passage qui mène\nau domaine du <r<dragon de foudre>>...\x0E\x01\x04\x02-\n\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F0D\x800Mais il est trop étroit, je peux\npas passer.\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F08\x700 Comment faire...?")
          			goto flw_149
          		  case 1:
/*<112>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 105), ('param3', 31)])
/*<105>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<272>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2F08\xD02Salut, Link!")
/*<273>*/ 				set_camera(5, 0)
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Alors, cette <b<flamme sacrée >>dont\ntu parlais, tu l'as trouvée?\n\n\nJ'arrête pas d'y penser. Raconte\x2010moi\ntout!\n\n\n\x0E\x01\x09\x04\x2F08\x407.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14 Il a fallu que tu fasses tout ça pour\nla trouver?!\n\n\nT'es vraiment impressionnant,\nLink.")
/*<355>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2F08\xD0ABon, je vais te dire ce que j'ai\ndécouvert à propos de la légende\ndes trois dragons.~~~\n\nPlus loin dans le désert, il y a bien\nun domaine caché!\n\n\nJ'ai trouvé un <r<passage étroit<pling> >>dans\nlequel je peux pas passer!\n\n\n\x0E\x01\x09\x04\x2F00\xD00Si mon intuition me fait pas défaut,\nça doit être le domaine d'un des trois\ndragons, le <r<dragon de foudre>>!\n\n\x0E\x01\x09\x04\x2F00\x800Je suis sûr que ça a un rapport avec\nles robots qui vivent ici.~~~\n\n\n\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDLe <r<dragon de foudre>>, les robots,\nles chronolithes\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CD\x0E\x01\x08\x02\x2CDQuelle aventure!")
/*<107>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xD00Je voulais te dire, Link...\nL'investissement que tu as fait dans\nmes fouilles a enfin porté ses fruits!\x0E\x01\x04\x02\x14\n\nJ'ai trouvé tout un tas de chronolithes\nlà\x2010bas! \x0E\x01\x09\x04\x2F00\xD01Je peux te rendre dix fois ce\nque tu m'as prêté!")
/*<106>*/ 				rupees += 100;
          				flw_282:
/*<282>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 110), ('param3', 42)])
/*<110>*/ 				scene_flags[7 'Lanayru Desert'][75 /* 0x8 08 */] = true;
/*<269>*/ 				story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
/*<357>*/ 				story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<358>*/ 				story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<359>*/ 				story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          				goto flw_149
          			  case 1:
/*<270>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2F08\xD02Salut, Link!")
/*<271>*/ 				set_camera(5, 0)
/*<211>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Alors, cette <b<flamme sacrée >>dont\ntu parlais, tu l'as trouvée?\n\n\nJ'arrête pas d'y penser. Raconte\x2010moi\ntout!\n\n\n\x0E\x01\x09\x04\x2F08\x407.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14 Il a fallu que tu fasses tout ça pour\nla trouver?!\n\n\nT'es vraiment impressionnant,\nLink.")
/*<356>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2F08\xD0ABon, je vais te dire ce que j'ai\ndécouvert à propos de la légende\ndes trois dragons.~~~\n\nPlus loin dans le désert, il y a bien\nun domaine caché!\n\n\nJ'ai trouvé un <r<passage étroit<pling> >>dans\nlequel je peux pas passer!\n\n\n\x0E\x01\x09\x04\x2F00\xD00Si mon intuition me fait pas défaut,\nça doit être le domaine d'un des trois\ndragons, le <r<dragon de foudre>>!\n\n\x0E\x01\x09\x04\x2F00\x800Je suis sûr que ça a un rapport avec\nles robots qui vivent ici.~~~\n\n\n\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDLe <r<dragon de foudre>>, les robots,\nles chronolithes\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CD\x0E\x01\x08\x02\x2CDQuelle aventure!")
          				goto flw_282
          			}
          		}
          	}
          }

          void entrypoint_400_71() {
/*<213>*/ 	start()
/*<214>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BMaître Link, veuillez\nprendre connaissance de ces\ninformations pertinentes :")
/*<295>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 296), ('param3', 30)])
/*<296>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Les symboles figurant sur ce\ngénérateur correspondent à ceux\ndes générateurs que vous avez\nactivés.\nIl est probable qu'il y ait un lien.")
/*<297>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 34)])
          }

          void entrypoint_400_37() {
/*<251>*/ 	start()
/*<252>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_03() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_20() {
/*< 44>*/ 	start()
/*< 63>*/ 	switch (scene_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<314>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<315>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_66:
/*< 66>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Mes circuits font bzzt-bzzt chaque fois\nque je vois le temple du temps! C'est\ntellement beau! Bzzt!")
          			  case 1:
/*<316>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Tu cherches un dragon? Vrrrm?\n\n\n\n\x0E\x01\x09\x04\x1303\x00Le <b<dragon de foudre>> se trouve au sud\nde la <b<grotte de Lanelle>>! Brrrzt! C'est\nle seul dragon que je connaisse.")
/*<343>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_66
          		}
          	  case 1:
/*< 94>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*< 96>*/ 			printf(/* textboxtype: 1, unk: 0 */ "J'ai eu chaud. Brrrrt.\nMerci de m'avoir aidé.")
/*< 93>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 45), ('param3', 33)])
/*< 45>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x900Là\x2010bas, c'est le <b<temple du temps>>. Bzzt.\nIl renferme la sainte <b<porte du temps\n>>érigée par la Déesse.\n\n\x0E\x01\x09\x04\x03\x900Je suis chargé du ménage autour du\ntemple! Si tu veux te rendre à la porte\ndu temps, il faut passer par ce portail.\nBzzzt.\n\x0E\x01\x09\x04\x03\x900Pardon? Est-ce qu'il y a un autre\nmoyen d'y entrer? Brrrt?\n\n\n\x0E\x01\x09\x04\x03\x900La <b<raffinerie de Lanelle >>est reliée\nau <b<temple du temps >>par un <r<passage\nsouterrain>>. Dzzzt. Je vais t'indiquer\noù elle se trouve... ")
/*<202>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 98), ('param3', 33)])
/*< 98>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 215), ('param3', 30)])
/*<215>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 90), ('param3', 6)])
/*< 90>*/ 			scene_flags[7 'Lanayru Desert'][3 /* 0x1 08 */] = true;
/*< 99>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 97), ('param3', 6)])
/*< 97>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Tiens? Bzt. Ta carte... Elle est bizarre.\nAttends, je vais corriger ça. Vrrm.")
/*< 64>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 3), ('next', 197), ('param3', 30)])
/*<197>*/ 			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 9), ('param2', 356), ('next', 67), ('param3', 15)])
/*< 67>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 200), ('param3', 34)])
/*<200>*/ 			set_camera(4, 0)
/*<199>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 65), ('param3', 17)])
/*< 65>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x900La raffinerie de Lanelle est un peu\nplus loin. Vrrrt. Sois prudent!")
/*<203>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 68), ('param3', 33)])
/*< 68>*/ 			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 6), ('param2', 0), ('next', 89), ('param3', 14)])
/*< 89>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 101), ('param3', 17)])
/*<101>*/ 			story_flags[129 /* us: 805A9AED 0x40, jp: 805ACD6D 0x40 */] = true;
/*<196>*/ 			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
/*<198>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 201), ('param3', 17)])
/*<201>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 204), ('param3', 42)])
/*<204>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', -1), ('param3', 33)])
          		  case 1:
/*< 95>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Au secours! Zrrriit!")
/*<127>*/ 			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
          		}
          	}
          }

          void entrypoint_400_55() {
/*<102>*/ 	start()
/*<283>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x01Maître, Fay au rapport.\nJe ne ressens plus l'aura de\ndame <b<Zelda>>.")
/*<284>*/ 	set_camera(7, 0)
/*<285>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Lorsque cette porte a été détruite,\nla présence de dame Zelda a\ncomplètement disparu.<pling> <r<Il n'est\nplus possible de la détecter>>.")
/*<286>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf(/* textboxtype: 2, unk: 0 */ "La femme qui accompagnait\ndame Zelda vous a dit d'aller voir\nl'Ancienne au site du sceau...\n\nIl y a dans ma mémoire une personne\ncorrespondant à cette description.\nJe vous recommande de vous rendre\nau <b<temple du sceau>>.")
/*<104>*/ 	scene_flags[7 'Lanayru Desert'][57 /* 0x6 02 */] = true;
/*<219>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = false;
/*<287>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_400_72() {
/*<221>*/ 	start()
/*<222>*/ 	printf(/* textboxtype: 8, unk: 0 */ "Voici le tableau mensuel\ndes responsables du ménage\nau temple du temps.\n                              Le chef d'usine")
          }

          void entrypoint_400_38() {
/*<253>*/ 	start()
/*<254>*/ 	printf(/* textboxtype: 1, unk: 0 */ "On ne voit pas des humains très\nsouvent, par ici. Vrrt! Est-ce que\ntu t'intéresses aux chronolithes?")
/*<260>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_04() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
/*< 73>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_21() {
/*< 46>*/ 	start()
/*<317>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<318>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_47:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0 */ "...")
          		  case 1:
/*<346>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_47
          			  case 1:
/*<319>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 47), ('param3', 31)])
          				goto flw_47
          			}
          		}
          	  case 1:
          		goto flw_47
          	}
          }

          void entrypoint_400_56() {
/*<128>*/ 	start()
/*<129>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
          }

          void entrypoint_400_73() {
/*<223>*/ 	start()
/*<224>*/ 	printf(/* textboxtype: 8, unk: 0 */ "Les arbres et les plantes\ncommencent à mourir! Vrrt!\nIl faut reboiser Lanelle! Zzt!\n                              Le chef d'usine")
          }

          void entrypoint_400_39() {
/*<255>*/ 	start()
/*<256>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_05() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
          }

          void entrypoint_400_22() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[103 /* 0xD 80 */]) {
          	  case 0:
/*< 79>*/ 		switch (scene_flags[30 /* 0x2 40 */]) {
          		  case 0:
/*<320>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<321>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_81:
/*< 81>*/ 					switch (scene_flags[8 /* 0x0 01 */]) {
          					  case 0:
/*< 83>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1303\x00Voici la <b<raffinerie de Lanelle>>!\nVrrrt! C'est ici qu'on travaille\nles chronolithes.\n\n\x0E\x01\x09\x04\x1303\x00Elle est toujours aussi fantastique!\nQuand je la vois, mes engrenages\ntournent plus rond. Vrrrmm!")
          					  case 1:
/*< 82>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Brrrt! Tu as réussi à déchiffrer la\ncombinaison? Pour un humain, tu\nm'impressionnes. Vrrm.\n\n\x0E\x01\x09\x04\x1303\x00Voici la <b<raffinerie de Lanelle>>!\nVrrrt! C'est ici qu'on travaille\nles chronolithes.\n\n\x0E\x01\x09\x04\x1303\x00Elle est toujours aussi fantastique!\nQuand je la vois, mes engrenages\ntournent plus rond. Vrrrmm!")
/*< 84>*/ 						scene_flags[7 'Lanayru Desert'][8 /* 0x0 01 */] = true;
          						flw_85:
/*< 85>*/ 						scene_flags[7 'Lanayru Desert'][35 /* 0x5 08 */] = true;
          					}
          				  case 1:
/*<322>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Tu cherches un dragon? Vrrrm?\n\n\n\n\x0E\x01\x09\x04\x1303\x00Le <b<dragon de foudre>> se trouve au sud\nde la <b<grotte de Lanelle>>! Brrrzt! C'est\nle seul dragon que je connaisse.")
/*<345>*/ 					story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          				}
          			  case 1:
          				goto flw_81
          			}
          		  case 1:
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Tu as trouvé les trois symboles de la\ncombinaison? Brrt? Mais il ne faut pas\njuste les avoir trouvés pour ouvrir la\nraffinerie. Vrrrm!")
          			goto flw_85
          		}
          	  case 1:
/*< 49>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Qui es\x2010tu? Je ne te retrouve pas dans\nma banque de mémoire. Brrrt.\n\n\n\x0E\x01\x09\x04\x1303\x00Ceci est le générateur qui contrôle\nl'entrée de la raffinerie de Lanelle!\n\n\n\x0E\x01\x09\x04\x1303\x00Il est impossible d'ouvrir la raffinerie\nsans la <r<combinaison composée de trois\nsymboles>>. Zrrpt.")
/*< 86>*/ 		scene_flags[7 'Lanayru Desert'][34 /* 0x5 04 */] = true;
          	}
          }

          void entrypoint_400_57() {
/*<130>*/ 	start()
/*<131>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00C'est une terre aride qui s'est\nchangée en désert en seulement\nquelques siècles. ")
          }

          void entrypoint_400_74() {
/*<229>*/ 	start()
/*<230>*/ 	switch (scene_flags[11 /* 0x0 08 */]) {
          	  case 0:
          	  case 1:
/*< 62>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Cet élément semble hors service\ndepuis de nombreuses années.\nIl m'est impossible de déchiffrer\nses paroles.")
/*<231>*/ 		scene_flags[7 'Lanayru Desert'][11 /* 0x0 08 */] = true;
          	}
          }

          void entrypoint_400_06() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
/*< 74>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_23() {
/*< 50>*/ 	start()
/*<323>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<324>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_51:
/*< 51>*/ 			printf(/* textboxtype: 1, unk: 0 */ "...")
          		  case 1:
/*<348>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_51
          			  case 1:
/*<325>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 51), ('param3', 31)])
          				goto flw_51
          			}
          		}
          	  case 1:
          		goto flw_51
          	}
          }

          void entrypoint_400_58() {
/*<132>*/ 	start()
/*<133>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00Il est probable que dame <b<Zelda>>\nsoit arrivée dans cette zone.")
/*<267>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<266>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_400_40() {
/*<257>*/ 	start()
/*<258>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Un de nos compagnons s'est fait\nenlever! Zrrrit! On raconte qu'il\nrisque de se faire déconnecter.")
/*<261>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_75() {
/*<288>*/ 	start()
/*<289>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 2), ('next', 290), ('param3', 40)])
/*<290>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', -1), ('param3', 6)])
          }

          void entrypoint_400_07() {
/*< 21>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_24() {
/*< 52>*/ 	start()
/*<186>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<326>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<327>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_187:
/*<187>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Vrrt? Tu as réussi à déchiffrer la\ncombinaison? Impressionnant...\npour un humain. Brrrt! On s'entend.")
          			  case 1:
/*<328>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Tu cherches un dragon? Vrrrm?\n\n\n\n\x0E\x01\x09\x04\x1303\x00Le <b<dragon de foudre>> se trouve au sud\nde la <b<grotte de Lanelle>>! Brrrzt! C'est\nle seul dragon que je connaisse.")
/*<347>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_187
          		}
          	  case 1:
/*<115>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*<116>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Aaaah! Bzzrt! Qu'est\x2010ce que tu fais?\n\n\n\n\x0E\x01\x09\x04\x1303\x00Même si tu as trouvé les symboles,\nce n'est pas assez pour ouvrir la\nraffinerie. Bzzt.")
          			flw_155:
/*<155>*/ 			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
/*<157>*/ 			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
          		  case 1:
/*<180>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*< 53>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Tu cherches la combinaison\npour entrer dans la raffinerie\nde Lanelle? Vrrrt?\n\n\x0E\x01\x09\x04\x1303\x00Tu as l'air un peu bizarre.\nJe ne donnerai jamais la\ncombinaison à un individu\naussi suspect! Zrrpt.\n\x0E\x01\x09\x04\x1303\x00Et, vrrrt! Que je ne te voie pas toucher\nau générateur ou t'amuser à y planter\ncette épée! Bzzt.")
          				goto flw_155
          			  case 1:
/*<181>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Vrrt! Ton accoutrement est un peu\nétrange. Tu es très suspect!\n\n\n\x0E\x01\x09\x04\x1303\x00Et, vrrrt! Que je ne te voie pas toucher\nau générateur ou t'amuser à y planter\ncette épée! Bzzt.")
          				goto flw_155
          			}
          		}
          	}
          }

          void entrypoint_400_59() {
/*<134>*/ 	start()
/*<143>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<135>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00Nous sommes arrivés au\n<b<désert de Lanelle>>. Une brusque\ndésertification a grandement\nmodifié la nature de ces terres.")
          }

          void entrypoint_400_76() {
/*<292>*/ 	start()
/*<293>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Nous sommes arrivés au\n<b<temple du temps>>.\n\n\nJe peux utiliser la détection\npour trouver l'entrée de l'épreuve\nqui vous guidera vers la flamme\nsacrée.")
/*<294>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_08() {
/*< 23>*/ 	start()
/*<225>*/ 	switch (scene_flags[29 /* 0x2 20 */]) {
          	  case 0:
/*<226>*/ 		printf(/* textboxtype: 1, unk: 0 */ "C'est dangereux pour les humains. Zrp!\nIl ne faut pas toucher cette pierre\nbleue! Et puis, ôte-toi de dans nos\npattes! Vrrrrm!")
          	  case 1:
/*< 24>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Par où es\x2010tu arrivé? Dzzzt? Ici, nous\nextrayons des chronolithes pour les\ntransporter jusqu'à la <b<raffinerie de\nLanelle>>.\n\x0E\x01\x09\x04\x1303\x00C'est dangereux pour les humains.\nÉvite de toucher cette pierre bleue!")
/*<227>*/ 		scene_flags[7 'Lanayru Desert'][29 /* 0x2 20 */] = true;
/*< 75>*/ 		scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          	}
          }

          void entrypoint_400_25() {
/*< 54>*/ 	start()
/*<329>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<330>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_55:
/*< 55>*/ 			printf(/* textboxtype: 1, unk: 0 */ "...")
          		  case 1:
/*<350>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_55
          			  case 1:
/*<331>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 55), ('param3', 31)])
          				goto flw_55
          			}
          		}
          	  case 1:
          		goto flw_55
          	}
          }

          void entrypoint_400_77() {
/*<298>*/ 	start()
/*<299>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BMaître Link, veuillez\nprendre connaissance de ces\ninformations pertinentes :\n\nVous avez découvert les trois symboles.\nRetournez au <r<générateur>> qui se trouve\ndevant la <b<raffinerie de Lanelle>>.\n\n")
          }

          void entrypoint_400_09() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_26() {
/*< 56>*/ 	start()
/*<188>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<332>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<333>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_189:
/*<189>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Vrrt? Tu as réussi à déchiffrer la\ncombinaison? Impressionnant...\npour un humain. Brrrt! On s'entend.")
          			  case 1:
/*<334>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Tu cherches un dragon? Vrrrm?\n\n\n\n\x0E\x01\x09\x04\x1303\x00Le <b<dragon de foudre>> se trouve au sud\nde la <b<grotte de Lanelle>>! Brrrzt! C'est\nle seul dragon que je connaisse.")
/*<349>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_189
          		}
          	  case 1:
/*<117>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
          		  case 0:
/*<118>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Aaaah! Bzzrt! Qu'est\x2010ce que tu fais?\n\n\n\n\x0E\x01\x09\x04\x1303\x00Même si tu as trouvé les symboles,\nce n'est pas assez pour ouvrir la\nraffinerie. Bzzt.")
          			flw_153:
/*<153>*/ 			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
/*<158>*/ 			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
          		  case 1:
/*<182>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*< 57>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Tu cherches la combinaison\npour entrer dans la raffinerie\nde Lanelle? Vrrrt?\n\n\x0E\x01\x09\x04\x1303\x00Tu as l'air un peu bizarre.\nJe ne donnerais jamais la\ncombinaison à un individu\naussi suspect! Zrrpt.\n\x0E\x01\x09\x04\x1303\x00Et, vrrrt! Que je ne te voie pas toucher\nau générateur ou t'amuser à y planter\ncette épée! Bzzt.")
          				goto flw_153
          			  case 1:
/*<183>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Vrrt! Ton accoutrement est un peu\nétrange. Tu es très suspect!\n\n\n\x0E\x01\x09\x04\x1303\x00Et, vrrrt! Que je ne te voie pas toucher\nau générateur ou t'amuser à y planter\ncette épée! Bzzt.")
          				goto flw_153
          			}
          		}
          	}
          }

          void entrypoint_400_60() {
/*<136>*/ 	start()
/*<137>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00Je détecte en de nombreux endroits\ndes <r<sables mouvants>> susceptibles\nde vous engloutir. Le niveau de\ndanger a augmenté de 30 %.")
          }

          void entrypoint_400_78() {
/*<300>*/ 	start()
/*<301>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BMaître Link, veuillez\nprendre connaissance de ces\ninformations pertinentes :\n\nMon analyse indique qu'il est\npossible d'actionner ce <r<générateur >>en\nlui fournissant une source d'électricité.")
          }

          void entrypoint_400_27() {
/*<119>*/ 	start()
/*<335>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<336>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_120:
/*<120>*/ 			printf(/* textboxtype: 1, unk: 0 */ "...")
          		  case 1:
/*<352>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_120
          			  case 1:
/*<337>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 120), ('param3', 31)])
          				goto flw_120
          			}
          		}
          	  case 1:
          		goto flw_120
          	}
          }

          void entrypoint_400_61() {
/*<138>*/ 	start()
/*<139>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00Pour éviter le danger, je vous\nconseille de regarder votre carte\navec \x0E\x02\x04\x02\x3CD pour <r<<r<<pling><r<étudier le terrain>>.\x0E\x01\x11\x02\x3CD")
          }

          void entrypoint_400_79() {
/*<302>*/ 	start()
/*<303>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BMaître Link, veuillez\nprendre connaissance de ces\ninformations pertinentes :\n\nVotre carte correspond à 35 % à la zone\noù nous nous trouvons. La topographie\nactuelle de cette zone est très\ndifférente.\nLe robot a modifié votre carte pour\nqu'elle représente la zone <r<dans le\npassé>><pling>, avant qu'elle ne soit recouverte\npar les sables.")
          }

          void entrypoint_400_10() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0 */ "On utilise ce wagonnet pour\ntransporter les chronolithes.\nLes humains ne peuvent pas\nmonter dedans. Va\x2010t'en. Zrpt!")
/*< 69>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_28() {
/*<121>*/ 	start()
/*<190>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<338>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<339>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_191:
/*<191>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Vrrt? Tu as réussi à déchiffrer la\ncombinaison? Impressionnant...\npour un humain. Brrrt! On s'entend.")
          			  case 1:
/*<340>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Tu cherches un dragon? Vrrrm?\n\n\n\n\x0E\x01\x09\x04\x1303\x00Le <b<dragon de foudre>> se trouve au sud\nde la <b<grotte de Lanelle>>! Brrrzt! C'est\nle seul dragon que je connaisse.")
/*<351>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_191
          		}
          	  case 1:
/*<123>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*<124>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Aaaah! Bzzrt! Qu'est\x2010ce que tu fais?\n\n\n\n\x0E\x01\x09\x04\x1303\x00Même si tu as trouvé les symboles,\nce n'est pas assez pour ouvrir la\nraffinerie. Bzzt.")
          			flw_154:
/*<154>*/ 			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
/*<156>*/ 			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
          		  case 1:
/*<184>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<122>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Tu cherches la combinaison\npour entrer dans la raffinerie\nde Lanelle? Vrrrt?\n\n\x0E\x01\x09\x04\x1303\x00Tu as l'air un peu bizarre.\nJe ne donnerais jamais la\ncombinaison à un individu\naussi suspect! Zrrpt.\n\x0E\x01\x09\x04\x1303\x00Et, vrrrt! Que je ne te voie pas toucher\nau générateur ou t'amuser à y planter\ncette épée! Bzzt.")
          				goto flw_154
          			  case 1:
/*<185>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Vrrt! Ton accoutrement est un peu\nétrange. Tu es très suspect!\n\n\n\x0E\x01\x09\x04\x1303\x00Et, vrrrt! Que je ne te voie pas toucher\nau générateur ou t'amuser à y planter\ncette épée! Bzzt.")
          				goto flw_154
          			}
          		}
          	}
          }

          void entrypoint_400_62() {
/*<140>*/ 	start()
/*<141>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00Il est probable que dame <b<Zelda >>soit\npassée par ici. Comme je vous l'ai dit,\ncette zone est très dangereuse.\n\n\x0E\x01\x05\x04Z\x00Nous devons également découvrir\npourquoi elle a agi ainsi à <b<Ordinn>>.\nJe vous conseille donc de la retrouver\nau plus vite.")
          }

          void entrypoint_400_11() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_63() {
/*<144>*/ 	start()
/*<145>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BMaître Link, veuillez\nprendre connaissance de ces\ninformations pertinentes :\n\nVous vous trouvez sur des sables\nmouvants dans lesquels vous ne\npouvez pas vous enfoncer. Je vous\nconseille de consulter votre carte.")
/*<192>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 261), ('next', 193), ('param3', 30)])
/*<193>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Les voies qui étaient là autrefois sont\nactuellement enfouies sous les sables\nmouvants.\n\nVous pouvez donc marcher dessus sans\nrisquer de vous enfoncer.\n\n\nJe vous conseille de placer des balises\nsur votre carte pour repérer les voies\nd'autrefois et les emprunter.")
/*<212>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Je vous conseille d'utiliser <b<plusieurs>><pling>\nbalises.")
/*<195>*/ 	story_flags[745 /* us: 805A9B29 0x02, jp: 805ACDA9 0x02 */] = true;
/*<194>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 34)])
          }

          void entrypoint_400_29() {
/*<232>*/ 	start()
/*<233>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_80() {
/*<353>*/ 	start()
/*<354>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Les <b<virevoltants >>roulent parfois sur le\nsol du désert de Lanelle.\n\n\nOn les utilise en général comme\nmatériau. Il est possible de les attraper\nà l'aide d'un <r<filet>>.")
          }

          void entrypoint_400_12() {
/*< 31>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Ne me parle pas pendant que\nje travaille, ça me dérange!\nZrrrrpt!")
/*< 70>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_64() {
/*<146>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2F0C\xD01\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x2F00\x01Hé! Mais c'est pas\nLink que je vois,\nlà en bas?\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CDTu tombes bien!~~~\nIl fallait que je te parle!~~~\n\n\n\x0E\x01\x06\x02\x2CD\x0E\x01\x08\x02\x1CDMonte me voir une seconde!")
/*<148>*/ 	scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
/*<262>*/ 	story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
/*<263>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<264>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<265>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }
