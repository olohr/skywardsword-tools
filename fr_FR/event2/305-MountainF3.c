          void entrypoint_305_01() {
          	start()
/*< 40>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 46>*/ 		switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 49>*/ 			printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x700Y a\x2010t\x2010il autre chose dont tu veux que\nje te parle ?\n[1]Le <b<dragon\nd'eau>>[2]Le <b<dragon\nde foudre>>[3]Le volcan[4-]Non")
          			flw_42:
/*< 42>*/ 			switch (choice(4)) {
          			  case 0:
/*< 45>*/ 				printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x07\x702Hmm, le <b<dragon d'eau>>... Elle a été\nchargée par la Déesse de protéger la\nforêt.\n\n\x0E\x01\x09\x04\x00\x700Elle est très puissante, mais elle a aussi\nun fort caractère... Prends garde à ce\nqu'elle ne te dévore pas.\n\n\x0E\x01\x09\x04\x00\x703Hahahaha !")
          				flw_48:
/*< 48>*/ 				loadzone_temp_flags[0 /* 0x1 01 */] = true;
          			  case 1:
/*< 44>*/ 				printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x07\x702Le <b<dragon de foudre>> ? Il a été chargé\npar la Déesse de protéger le désert.\n\n\nIl garde précieusement un <r<bouclier\nlégendaire>>.\n\n\n\x0E\x01\x09\x04\x00\x700Il aurait mis au point une épreuve pour\njuger qui sera digne de se voir offrir ce\nbouclier.\n\nLe connaissant, j'imagine que cette\népreuve doit être assez brutale.\n\n\n\x0E\x01\x09\x04\x00\x03Hahahaha !")
          				goto flw_48
          			  case 2:
/*< 43>*/ 				printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x07\x702Hmm... Ces montagnes n'ont pas\ntoujours été aussi dangereuses.\n\n\n\x0E\x01\x09\x04\x00\x700Jadis, les habitants de la surface et\nceux des souterrains y vivaient en\nharmonie en jouissant des bienfaits de\nla montagne.\n\x0E\x01\x09\x04\x00\x700Mais de cette époque, il ne reste\naujourd'hui plus que des ruines...")
          				goto flw_48
          			  case 3:
/*< 47>*/ 				printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x702Vraiment ? Ta route est toute tracée...\nVa, à présent !")
          			}
          		  case 1:
/*< 41>*/ 			printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x701Tiens... Qui voilà !\n\n\n\n\x0E\x01\x09\x04\x00\x700Sur quoi puis\x2010je te renseigner, jeune\nhéros ?\n[1]Le <b<dragon\nd'eau>>[2]Le <b<dragon\nde foudre>>[3]Le volcan[4-]Rien de\nspécial")
          			goto flw_42
          		}
          	  case 1:
/*< 30>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 31>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 56>*/ 				set_camera(5, 0)
/*< 32>*/ 				printf(/* textboxtype: 1, unk: 0 */ "L'éruption du volcan a été causée par\nl'explosion de ma force. Je suis désolé\nque tu te sois retrouvé impliqué\nlà\x2010dedans.\nBientôt, le ciel devrait se découvrir\nà nouveau...\n\n\nÀ présent, va !")
/*< 34>*/ 				story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */] = true;
/*< 35>*/ 				story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
/*< 33>*/ 				changeScene(4, 0) // 
          			  case 1:
          				flw_57:
/*< 57>*/ 				set_camera(5, 0)
/*< 27>*/ 				printf(/* textboxtype: 1, unk: 0 */ "L'éruption du volcan a été causée par\nl'explosion de ma force. Je suis désolé\nque tu te sois retrouvé impliqué\nlà\x2010dedans.\nBientôt, le ciel devrait se découvrir\nà nouveau...\n\n\nÀ présent, va !")
/*< 28>*/ 				story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */] = true;
/*< 29>*/ 				changeScene(4, 0) // 
          			}
          		  case 1:
          			goto flw_57
          		}
          	}
          }

          void entrypoint_305_02() {
/*<  1>*/ 	start()
/*< 50>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 2), ('param3', 16)])
/*<  2>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x10TADAM !\nVoilà ton sauveur !")
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\xF08Salut ! Ça faisait un bail, frangin !\n\n\n\n\x0E\x01\x09\x04\x00\xE00Quoi ? Tu te souviens plus de moi ?\n\n\n\n\x0E\x01\x09\x04\x0E\xE00Je suis <b<Tino>>, le Mogma qui t'a aidé\ndans le temple au nord !\n\n\n\x0E\x01\x09\x04\x0E\xE00Je les ai vus t'emmener alors que t'étais\ndans les vapes et je les ai suivis !")
/*<  4>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\xE0AT'es un sacré casse\x2010cou, frangin...\nQu'est\x2010ce que t'es venu faire par ici,\ncette fois ?\n[1]Eh bien...[2]Je cherche\ndes trésors")
/*<  6>*/ 	switch (choice(2)) {
          	  case 0:
/*<  5>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE05Tu cherches un dra... un dragon ?\nTu veux dire, une sorte de dieu ?\n\n\nHmm... On raconte qu'il y a un dieu qui\nvit quelque part dans ces montagnes...\n\n\n\x0E\x01\x09\x04\x0F\x210AT'aimes bien ce genre de contes de fées,\non dirait...\n\n\n\x0E\x01\x09\x04\x0D\x00Quoi ? Tu veux savoir ce que je fais\nici ?\n\n\n\x0E\x01\x09\x04\x0E\xE0BEh ben, j'ai entendu dire que des\nméchants s'étaient regroupés dans ces\nmontagnes...\n\nHéhéhé... Et tout le monde sait que là\noù y a des méchants, y a aussi des\ntrésors !")
          		flw_17:
/*< 17>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE09Enfin... Je crois que t'as autre chose à\nfaire en priorité, non ?\n\n\nT'as pas remarqué ?\nT'as plus d'armes !\n\n\n\x0E\x01\x09\x04\x0F\xF0APendant que t'étais évanoui, ils t'ont\ncomplètement dépouillé... Va falloir\nque tu récupères tes affaires, tu crois\npas ?\n\x0E\x01\x09\x04\x0E\xE00J'ai réussi à leur piquer ça...")
/*< 23>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 27), ('param2', 7167), ('next', 11), ('param3', 13)])
/*< 11>*/ 		give_item(99 0x63);
/*< 39>*/ 		story_flags[177 /* us: 805A9AE5 0x01, jp: 805ACD65 0x01 */] = true;
/*<  8>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x110BBon, c'est pas tout ça, mais j'ai d'autres\nchats à fouetter ! Je te laisse !\n\n\n\x0E\x01\x09\x04\x0F\xE00À la prochaine !")
/*< 16>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', -1), ('next', -1), ('param3', 13)])
          	  case 1:
/*<  7>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\xF0BHaha, je vois ! Toi aussi t'as entendu\nla rumeur, hein !\n\n\n\x0E\x01\x09\x04\x0E\xE00Héhéhé... La rumeur qui dit que des\nméchants se sont regroupés dans ces\nmontagnes !\n\n\x0E\x01\x09\x04\x0F\xE00Et tout le monde sait que là ou y a des\nméchants, y a aussi des trésors rares !")
          		goto flw_17
          	}
          }

          void entrypoint_305_03() {
/*<  9>*/ 	start()
/*< 53>*/ 	switch (scene_flags[20 /* 0x3 10 */]) {
          	  case 0:
/*< 54>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 21), ('param3', 46)])
/*< 21>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nSurtout, il faut pas qu'ils te trouvent,\nhein !\n\n\n\x0E\x01\x09\x04\x0F\xE00Sinon, tu vas passer un sale quart\nd'heure ! Alors sois discret !\n\n\nTu m'as bien compris ?\n[1]Oui, oui[2]...")
/*< 51>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_52:
/*< 52>*/ 			printf(/* textboxtype: 1, unk: 0 */ "......\n\n\n\n\x0E\x01\x09\x04\x0F\xE06Haa...\nTu sais, je me fais du souci pour toi,\nfrangin...\n\n\x0E\x01\x09\x04\x0E\xE00OK ! Je vais te montrer quelque chose !\nSors ta carte !")
/*< 12>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 19), ('param3', 30)])
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x110BBon, aujourd'hui, c'est mon jour de\nbonté, je vais te dire ce qu'il y a dans\nles coffres !\n\n... Et voilà !")
/*< 13>*/ 			story_flags[168 /* us: 805A9AE3 0x80, jp: 805ACD63 0x80 */] = true;
/*< 14>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 20), ('param3', 34)])
/*< 20>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE09Enfin, rien de tout ça m'intéresse...\n\n\n\n\x0E\x01\x09\x04\x0F\xE00S'il y a des trucs qu'étaient à toi\nlà\x2010dedans, tu devrais aller les\nrécupérer.")
/*< 22>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0BBien ! Moi, je retourne à la chasse\naux trésors !\n\n\nÀ plus !")
/*< 15>*/ 			scene_flags[4 'Eldin Volcano'][68 /* 0x9 10 */] = true;
/*< 24>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', -1), ('next', -1), ('param3', 13)])
          		  case 1:
          			goto flw_52
          		}
          	  case 1:
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Frangin !")
/*< 18>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\xE00Ça va pas bien dans ta tête ?\nTe balader comme ça alors que t'es\npas armé...\n\nJe t'ai pourtant dit qu'il y avait plein\nde méchants dans le coin !\n\n\n\x0E\x01\x09\x04\x0E\xE03Regarde bien autour de toi !")
          	}
          }

          void entrypoint_305_04() {
/*< 25>*/ 	start()
/*< 37>*/ 	switch (scene_flags[120 /* 0xE 01 */]) {
          	  case 0:
/*< 63>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 62), ('param3', 33)])
/*< 62>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 36), ('param3', 16)])
/*< 36>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Fiou...\n\n\n\nDepuis tout à l'heure, je vois\nles méchants entrer là\x2010dedans...\nIl doit y avoir quelque chose,\nc'est obligé...")
          	  case 1:
/*< 55>*/ 		set_camera(4, 0)
/*< 26>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Fiou...\nFait chaud, ici...\n\n\nEnfin, à moi les trésors du monde\nentier...")
/*< 38>*/ 		scene_flags[5 'Eldin Volcano Summit'][120 /* 0xE 01 */] = true;
/*< 61>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', -1), ('next', -1), ('param3', 42)])
          	}
          }

          void entrypoint_305_05() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Merci, \x0E\x01\x12\x04\x00\x04Maître Link.\n\n\n\nPardonnez\x2010moi, je n'aurais pas dû vous\nquitter un seul instant. \x0E\x01\x12\x04\x00\x02L'éruption du\nvolcan n'est pas une excuse.\n\nPendant que j'étais ici, j'ai détecté une\ngrande puissance au fond à droite.\n\n\nLa probabilité qu'il s'agisse du dragon\nqui connaît une mélodie du <b<Chant du\nhéros>> est de 60 %.\n\nRetrouvez le reste de votre équipement\npuis partez à la recherche du dragon.")
/*< 60>*/ 	scene_flags[5 'Eldin Volcano Summit'][45 /* 0x4 20 */] = true;
          }

          void entrypoint_305_06() {
/*< 64>*/ 	start()
/*< 69>*/ 	switch (scene_flags[121 /* 0xE 02 */]) {
          	  case 0:
/*< 71>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Hé ! J'ai de nouvelles visions !\nÇa t'intéresse ?[1]Oui[2-]Non merci")
          		flw_66:
/*< 66>*/ 		switch (choice(2)) {
          		  case 0:
/*< 68>*/ 			changeScene(2, 0) // 
          		  case 1:
/*< 67>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Je vois... Dans ce cas, bon courage !")
          		}
          	  case 1:
/*< 65>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Hé ! Je suis ici tout spécialement pour\nte montrer des visions ! Ça te dit ?\n[1]Oui[2-]Non merci")
/*< 70>*/ 		scene_flags[5 'Eldin Volcano Summit'][121 /* 0xE 02 */] = true;
          		goto flw_66
          	}
          }

          void entrypoint_305_07() {
/*< 72>*/ 	start()
/*< 77>*/ 	switch (scene_flags[121 /* 0xE 02 */]) {
          	  case 0:
/*< 79>*/ 		switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          		  case 0:
/*< 81>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Hé ! Je suis ici tout spécialement pour\nte montrer des visions ! Ça te dit ?\n[1]Oui[2-]Non merci")
          			flw_74:
/*< 74>*/ 			switch (choice(2)) {
          			  case 0:
/*< 76>*/ 				changeScene(2, 0) // 
          			  case 1:
/*< 75>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Je vois... Dans ce cas, bon courage !")
          			}
          		  case 1:
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Salut !\x0E\x01\x04\x02\n J'ai rien de neuf en réserve\nmais je peux te montrer les anciennes\nvisions. Ça te dit ?\n[1]Oui[2-]Non merci")
          			goto flw_74
          		}
          	  case 1:
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Hé ! Je suis ici tout spécialement pour\nte montrer des visions ! Ça te dit ?\n[1]Oui[2-]Non merci")
/*< 78>*/ 		scene_flags[5 'Eldin Volcano Summit'][121 /* 0xE 02 */] = true;
          		goto flw_74
          	}
          }

