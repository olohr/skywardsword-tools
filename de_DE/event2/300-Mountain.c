          void entrypoint_300_24() {
/*<220>*/ 	start()
/*<221>*/ 	switch (scene_flags[73 /* 0x8 02 */]) {
          	  case 0:
/*<223>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Deine Freundin wartet bestimmt auf\ndich, also darfst du nicht aufgeben!")
          	  case 1:
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][73 /* 0x8 02 */] = true;
/*<222>*/ 		printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x01Hallo! Lange nicht gesehen!\nDu hast mir wirklich sehr geholfen!\n\n\nUnd, hast du deine Freundin gefunden?\n[1]Ja![2]Noch nicht...")
/*<225>*/ 		switch (choice(2)) {
          		  case 0:
/*<227>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x808Du hast sie gefunden?\nIst doch prima...\x0E\x01\x04\x02\x14\nWas? Aber sie ist noch in Gefahr?\n\n\x0E\x01\x09\x04\x09\x8FFJetzt mach dir keine Sorgen. Du darfst\nnur nicht aufgeben! Das wird schon!")
          		  case 1:
/*<226>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x13\x100DOh nein... Diese roten Kerle haben sie\ndoch nicht etwa...\x0E\x01\x04\x02\x14\n\n\n\x0E\x01\x09\x04\x11\x80EOh? Du weißt, dass sie lebt? Schau\nnicht so traurig, das ist doch schon\nmal was!\n\n\x0E\x01\x09\x04\x09\x800Es ist erst vorbei, wenn du aufgibst!")
          		}
          	}
          }

          void entrypoint_300_07() {
/*<324>*/ 	start()
/*<325>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 326), ('param3', 33)])
/*<326>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 327), ('param3', 17)])
/*<327>*/ 	switch (loadzone_temp_flags[16 /* 0x3 01 */]) {
          	  case 0:
          		flw_329:
/*<329>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x800Nicht weglaufen!\nVerjag sie!")
          		flw_334:
/*<334>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 42)])
          	  case 1:
/*<333>*/ 		switch (loadzone_temp_flags[18 /* 0x3 04 */]) {
          		  case 0:
          			goto flw_329
          		  case 1:
/*<328>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x812Sieht aus, als hätten die roten Kerle\ndich gesehen. Die scheinen mir auf\neinen Kampf aus.\n\n\x0E\x01\x09\x04\x15\xD00Sei so gut und vertreib sie von hier, ja?")
/*<330>*/ 			loadzone_temp_flags[16 /* 0x3 01 */] = true;
          			goto flw_334
          		}
          	}
          }

          void entrypoint_300_08() {
/*< 20>*/ 	start()
/*< 56>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 57), ('param3', 32)])
/*< 57>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', -1), ('next', 338), ('param3', 16)])
/*<338>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 16), ('next', 155), ('param3', 33)])
/*<155>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 59), ('param3', 17)])
/*< 59>*/ 	set_camera(2, 0)
/*<339>*/ 	switch (scene_flags[27 /* 0x2 08 */]) {
          	  case 0:
/*<341>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4114), ('param2', 3590), ('next', 340), ('param3', 13)])
/*<340>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Sie sind hier!\nIrgendwie haben sie es durch die Lava\ngeschafft!")
          	  case 1:
/*<166>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4114), ('param2', 3590), ('next', 58), ('param3', 13)])
/*< 58>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Aaaah!\nSie sind hier! Sie sind hier!\n\n\nOh, du bist ja gar kein roter Kerl...\n~~~\x0E\x01\x09\x04\x1009\x807Musst du dich so anschleichen?\n\n\n\x0E\x01\x09\x04\x100A\xFF00Tschuldigung!\nAber in letzter Zeit treiben sich in\nunserem Revier ganz schön viele\nMonster herum.")
/*< 61>*/ 		set_camera(3, 0)
/*< 60>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Ich bin durch das Loch da hinten\nhierher gekommen, aber der Weg dahin\nist jetzt durch die Lava versperrt.")
/*< 63>*/ 		set_camera(4, 0)
/*< 62>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Aber so was ist kein Problem für uns,\nwir graben uns einfach darunter durch.\n\x0E\x01\x09\x04\x1011\x80BClever, was?")
/*<167>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4351), ('param2', -1), ('next', 65), ('param3', 13)])
/*< 65>*/ 		set_camera(5, 0)
/*< 64>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Über das Loch da könnte man die Lava\nauch abfließen lassen, aber das ist mir\nzu gefährlich!")
          	}
          }

          void entrypoint_300_25() {
/*<228>*/ 	start()
/*<229>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\xD0CHm...\x0E\x01\x04\x02\x14\nIch frage mich, was die roten Kerle\neigentlich so essen...")
          }

          void entrypoint_300_09() {
/*< 21>*/ 	start()
/*< 74>*/ 	switch (temp_flags[53 /* 0x7 20 */]) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Manchmal kommen auch diese <r<roten\nGlibber-Biester>> raus, also pass beim\nGraben auf!")
          	  case 1:
/*<303>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 2559), ('next', 350), ('param3', 13)])
/*<350>*/ 		switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          		  case 0:
/*<351>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Hast du mich erschreckt...\x0E\x01\x04\x02\x14\n\x0E\x01\x09\x04\x11\xD00Was gräbst du da direkt über mir?!?\n\n\n\x0E\x01\x09\x04\x15\x809Hehe, schon in Ordnung. Man weiß nie,\nwas man beim Graben findet, das\nmacht es so spannend.\n\n\x0E\x01\x09\x04ÿ\xFFFFNatürlich findet man <r<Rubine>>, aber\nauch <r<hartes Metall>>...\n\n\n\x0E\x01\x09\x04\x15\xD11<r<Herzen>> dagegen sind in letzter Zeit\nziemlich selten... Keine Ahnung,\nwarum das so ist. Versteh einer die\nNatur.\n\x0E\x01\x09\x04ÿ\xFFFFWann immer du ein Loch siehst,\nsolltest du drauflosgraben!")
          			flw_75:
/*< 75>*/ 			temp_flags[53 /* 0x7 20 */] = true;
          		  case 1:
/*< 22>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Hast du mich erschreckt...\x0E\x01\x04\x02\x14\n\x0E\x01\x09\x04\x11\xD00Was gräbst du da direkt über mir?!?\n\n\n\x0E\x01\x09\x04\x15\x809Hehe, schon in Ordnung. Man weiß nie,\nwas man beim Graben findet, das\nmacht es so spannend.\n\n\x0E\x01\x09\x04ÿ\xFFFFNatürlich findet man <r<Rubine>>, aber\nauch <r<hartes Metall>> oder <r<Herzen>>...\n\n\nWann immer du ein Loch siehst,\nsolltest du drauflosgraben!")
          			goto flw_75
          		}
          	}
          }

          void entrypoint_300_26() {
/*<230>*/ 	start()
/*<231>*/ 	switch (scene_flags[44 /* 0x4 10 */]) {
          	  case 0:
/*<234>*/ 		switch (scene_flags[74 /* 0x8 04 */]) {
          		  case 0:
/*<238>*/ 			switch (scene_flags[75 /* 0x8 08 */]) {
          			  case 0:
          				flw_236:
/*<236>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x8FFSolche Wände kannst du nicht nur\nunter der Erde finden. Ich bin sicher,\ndu findest sie.")
          			  case 1:
/*<235>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\xD10Ach, da...\nGute Arbeit!")
/*<237>*/ 				scene_flags[4 'Eldin Volcano'][75 /* 0x8 08 */] = true;
          				goto flw_236
          			}
          		  case 1:
/*<243>*/ 			switch (scene_flags[76 /* 0x8 10 */]) {
          			  case 0:
/*<242>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Es gibt hier dünne Wände, die du\nzerstören kannst. Dahinter verbergen\nsich oft Schätze.")
          			  case 1:
/*<244>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Na, wie geht's?\nBist du hier, um Schätze zu suchen?\n\n\n\x0E\x01\x09\x04\x11\x800Vielleicht weißt du's ja schon, aber am\n<b<Vulkan Eldin>> gibt es dünne Wände...\n\n\n\x0E\x01\x09\x04\x09\x8FFWenn du sie irgendwie zerstörst,\nfindest du Höhlen.\n\n\nSo habe ich schon so manchen Schatz\ngefunden, meistens <y<Rubine>>.\n\x0E\x01\x09\x04\x11\x8FFSieh dich doch mal um!")
/*<241>*/ 				scene_flags[4 'Eldin Volcano'][76 /* 0x8 10 */] = true;
/*<272>*/ 				scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          			}
          		}
          	  case 1:
/*<240>*/ 		switch (scene_flags[74 /* 0x8 04 */]) {
          		  case 0:
/*<239>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\x80CHier in der Nähe muss auch so eine\nStelle sein, das sagt mir mein\nSchatzsucher-Instinkt.")
          		  case 1:
/*<232>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Na, wie geht's dir?\n\n\n\n\x0E\x01\x09\x04\x11\x8FFBist du hier, um Schätze zu suchen?\nDann hätte ich da eine nützliche\nInformation...\n\n\x0E\x01\x09\x04\x09\x80BAm <b<Vulkan Eldin>> gibt es dünne Wände,\nhinter denen sich Höhlen verbergen.\n\n\nWenn du diese Wände zerstörst, findest\ndu alle möglichen Schätze, meistens\n<y<Rubine>>.\n\n\x0E\x01\x09\x04\x15\x80CHier in der Nähe muss auch so eine\nStelle sein, das sagt mir mein\nSchatzsucher-Instinkt.")
/*<233>*/ 			scene_flags[4 'Eldin Volcano'][74 /* 0x8 04 */] = true;
/*<273>*/ 			scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          		}
          	}
          }

          void entrypoint_300_27() {
/*<245>*/ 	start()
/*<249>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<248>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\x80BRuinen in den Tiefen eines Vulkans...\nHehehe, genau das Richtige für\n<b<Schatzsucher>>...")
          	  case 1:
/*<246>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x801Na, nutzt du meine <y<Bombentasche>> auch\nfleißig?\n\n\n\x0E\x01\x09\x04\x09\x9FFWarst du eigentlich mal im Zentrum\ndes <b<Vulkans Eldin>>?\n\n\n\x0E\x01\x09\x04\x15\x816Da ist es so unglaublich heiß, dass\ndeine Klamotten in Flammen aufgehen.\nKeiner kommt da durch!\n\n\x0E\x01\x09\x04\x09\x9FFJedenfalls soll es da tolle Ruinen voller\nSchätze geben.\nHeißt es zumindest.\n\n\x0E\x01\x09\x04\x11\x80BWir graben uns wie immer durch die\nErde, also sollte es für uns kein\nProblem sein.")
/*<247>*/ 		scene_flags[4 'Eldin Volcano'][77 /* 0x8 20 */] = true;
          	}
          }

          void entrypoint_300_10() {
/*< 23>*/ 	start()
/*<278>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1000), ('next', 81), ('param3', 24)])
/*< 81>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 147), ('param3', 32)])
/*<147>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 17), ('next', 277), ('param3', 32)])
/*<277>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 16), ('next', 82), ('param3', 33)])
/*< 82>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 250), ('param3', 16)])
/*<250>*/ 	set_camera(20, 0)
/*<258>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 298), ('param3', 6)])
/*<298>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 16), ('next', 168), ('param3', 33)])
/*<168>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4117), ('param2', 3340), ('next', 24), ('param3', 13)])
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Sie müssen es hier vergraben haben...\nAber ich finde nix.")
/*< 83>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 16), ('next', 25), ('param3', 16)])
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Bist du sicher, dass es hier war, <b<Ferri>>?\nUnd was suchen wir eigentlich?")
/*< 84>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 170), ('param3', 16)])
/*<170>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4351), ('param2', -245), ('next', 26), ('param3', 13)])
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Den <r<Schlüssel>>! Den <r<Schlüssel>>!!!")
/*<148>*/ 	set_camera(24, 0)
/*<259>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 149), ('param3', 6)])
/*<149>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Sie haben den <r<Schlüssel zu diesem Tor\n>>zerbrochen und die Einzelteile\nversteckt.\n\nUnd eines von diesen <r<5 Teilen>> muss hier\nsein.")
/*<260>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 251), ('param3', 6)])
/*<251>*/ 	set_camera(21, 0)
/*< 85>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 16), ('next', 169), ('param3', 16)])
/*<169>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4373), ('param2', 3330), ('next', 27), ('param3', 13)])
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Hm... Hast du diesen seltsam\naussehenden Menschen mit den\n<r<blonden Haaren>><pling> gesehen, der\nhier hineingebracht wurde?")
/*<252>*/ 	set_camera(22, 0)
/*< 86>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 28), ('param3', 16)])
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1011\xD0BJa! Bestimmt haben sie da etwas\nWichtiges versteckt!\n\n\n\x0E\x01\x09\x04\x1009\x800Und der Mensch war bestimmt Teil\neines unglaublichen Plans!\nIch wittere Schätze!")
/*<253>*/ 	set_camera(23, 0)
/*< 87>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 16), ('next', 171), ('param3', 16)])
/*<171>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4607), ('param2', -254), ('next', 29), ('param3', 13)])
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Aber was machen wir mit den ganzen\nEinzelteilen des Schlüssels?")
/*< 88>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 30), ('param3', 16)])
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1011\xD09Wir öffnen damit das Tor und reißen\nuns drinnen sämtliche Schätze unter\nden Nagel!")
/*<151>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4097), ('param2', -1), ('next', 89), ('param3', 13)])
/*< 89>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 16), ('next', 172), ('param3', 16)])
/*<172>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4371), ('param2', 4103), ('next', 31), ('param3', 13)])
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Aber... ~~~Können wir uns nicht einfach\nhineingraben?")
/*<262>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 254), ('param3', 6)])
/*<254>*/ 	set_camera(22, 0)
/*< 90>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 173), ('param3', 16)])
/*<173>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4097), ('param2', 511), ('next', 174), ('param3', 13)])
/*<174>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4353), ('param2', 511), ('next', 32), ('param3', 13)])
/*< 32>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...\x0E\x01\x04\x02\x1E")
/*<255>*/ 	set_camera(21, 0)
/*< 33>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...\x0E\x01\x04\x02\x1E")
/*<256>*/ 	set_camera(23, 0)
/*< 91>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 175), ('param3', 16)])
/*<175>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4117), ('param2', -1), ('next', 261), ('param3', 13)])
/*<261>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 34), ('param3', 6)])
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Du bist ganz schön schlau.")
/*<257>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 145), ('param3', 6)])
/*<145>*/ 	scene_flags[4 'Eldin Volcano'][72 /* 0x8 01 */] = true;
/*<146>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 345), ('param3', 6)])
/*<345>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_300_28() {
/*<265>*/ 	start()
/*<282>*/ 	temp_flags[30 /* 0x2 40 */] = true;
/*<264>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04K\x00\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu\nberichten. Dieser Ort ist der <b<Vulkan\nEldin>>, ein noch sehr aktiver Vulkan.")
          }

          void entrypoint_300_11() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 2, unk: 1 */ "\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu\nberichten. Ich konnte aus dem\nGespräch mit den <b<Mogma>> eine wichtige\nInformation herausfiltern.\nDie eben erwähnte <r<seltsame Gestalt>>,\ndie weggebracht wurde, war...\n[1]Zelda![2]In schwarz?")
/*< 37>*/ 	switch (choice(2)) {
          	  case 0:
/*< 38>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter.\nDie Wahrscheinlichkeit, dass es sich um\nZelda handelt, beträgt 90 %.")
          		flw_92:
/*< 92>*/ 		set_camera(7, 0)
/*< 66>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Die Wahrscheinlichkeit, dass die\nFragmente des Schlüssels zu diesem\nTor aus demselben Material bestehen\nwie das Tor selbst, beträgt 95 %.")
/*< 93>*/ 		set_camera(-1, 0)
/*< 94>*/ 		printf(/* textboxtype: 2, unk: 1 */ "Ich spüre, dass sich hier in der Nähe\nFragmente aus diesem Material\nbefinden.\n\nDiese Fragmente sind für die Suche\nnach <r<Zelda>> unabdingbar, daher habe\nich sie als Ziel für die <r<Aurasuche\n>>festgelegt.<pling>")
/*<310>*/ 		story_flags[106 /* us: 805A9ADE 0x80, jp: 805ACD5E 0x80 */] = true;
/*<347>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 2), ('next', 344), ('param3', 56)])
/*<344>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*< 39>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Die Wahrscheinlichkeit, dass es sich\num die schwarz gekleidete Frau\nhandelt, liegt bei \x0E\x01\x08\x02\x1CD10 %.\n\nMeiner Schätzung zufolge war\nes <r<Zelda>>, die weggebracht wurde.")
          		goto flw_92
          	}
          }

          void entrypoint_300_29() {
/*<267>*/ 	start()
/*<266>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00Dieses Gebiet besteht zu 65 % aus Lava\nund ist voller Kreaturen, die sich an\ndas Feuer gewöhnt haben.")
          }

          void entrypoint_300_12() {
/*< 40>*/ 	start()
/*< 46>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 47>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Also, pass gut auf! Bei \x0E\x00\x03\x02\x07grünen Rubinen\n>>liegen <r<keine Bomben>>.\n\n\nBei \x0E\x00\x03\x02\x08blauen Rubinen>> liegen <r<1-2 Bomben>>,\nbei <r+<roten Rubinen >>sind es <r<3-4 Bomben>>.\n\n\nBei \x0E\x00\x03\x02\nsilbernen Rubinen>> musst du mit\n<r<5-6 Bomben>> rechnen, bei \x0E\x00\x03\x02\x0Bgoldenen\nRubinen>> mit <r<7-8 Bomben>>.\n\nLetzten Endes gehört neben diesem\nWissen auch noch etwas Glück dazu.\n\x0E\x01\x09\x04\x15\x509Alles Gute, hehe!")
          	  case 1:
/*< 42>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*<176>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 2059), ('next', 53), ('param3', 13)])
/*< 53>*/ 			printf(/* textboxtype: 1, unk: 1 */ "Aha, willst du meinen Tipp jetzt doch?")
/*<308>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 309), ('param3', 12)])
/*<309>*/ 			printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04ÿ\xFF00Das Geheimnis der <r<Risiko-Rubinjagd>>!\nFür nur <r<20 Rubine>>!\n[1]Verrat's mir![2-]Lieber nicht.")
          			flw_44:
/*< 44>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				switch (has_rupees(20)) {
          				  case 0:
/*< 51>*/ 					rupees += -20;
/*<179>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 2057), ('next', 45), ('param3', 13)])
/*< 45>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Hehe, da danke ich recht schön!\nAber sag es niemandem weiter!")
/*<305>*/ 					OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 306), ('param3', 12)])
/*<306>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\xFF00Also, je nachdem, wie kostbar ein\nRubin ist, wird er von einer\nunterschiedlichen Anzahl Bomben\ngesichert.\n\x0E\x01\x09\x04ÿ\xFF0BEin \x0E\x00\x03\x02\x07grüner Rubin>> zum Beispiel hat in\nder Nähe <r<keine Bomben>>!\n\n\nEin \x0E\x00\x03\x02\x08blauer Rubin>> hat <r<1-2 Bomben>>,\nein <r+<roter Rubin>> hat <r<3-4 Bomben >>und ein\n\x0E\x00\x03\x02\nsilberner>> Rubin hat <r<5-6 Bomben>> in\nseiner Umgebung.\nEin \x0E\x00\x03\x02\x0Bgoldener Rubin >>ist sehr, sehr selten\nund von <r<7-8 Bomben >>umgeben.")
/*<178>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', -245), ('next', 54), ('param3', 13)])
/*< 54>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Und, was sagst du? Das macht es doch\nerheblich einfacher zu entscheiden, wo\ndu graben solltest, was?\n\n\x0E\x01\x09\x04ÿ\xFF09Aber etwas Glück brauchst du trotzdem\nnoch! Alles Gute!")
/*< 48>*/ 					scene_flags[4 'Eldin Volcano'][55 /* 0x7 80 */] = true;
          				  case 1:
/*< 52>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Du hast nicht genug Rubine.\n\n\n\n\x0E\x01\x09\x04\x14\x1209Komm wieder, wenn du <r<20 Rubine>> hast,\ndann gibt's den Tipp.")
          				}
          			  case 1:
/*<177>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 4103), ('next', 49), ('param3', 13)])
/*< 49>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Was soll der Geiz? Ich meine, das ist\nein Spitzentipp!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Na gut, wenn du's dir anders überlegst,\nich bin hier. Und <r<20 Rubine >>sind nicht\nzu viel für meinen Tipp.")
          			}
          		  case 1:
/*< 43>*/ 			scene_flags[4 'Eldin Volcano'][54 /* 0x7 40 */] = true;
/*< 41>*/ 			printf(/* textboxtype: 1, unk: 1 */ "Du willst <b<Cippolinos >><r<Risiko-Rubinjagd\n>>spielen, oder?\n\n\n\x0E\x01\x09\x04\x15\x80BWillst du einen <r<Tipp>>, mit dem du ganz\neinfach reich wirst?\n\n\n\x0E\x01\x09\x04ÿ\xFF00Allerdings\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n\nAllerdings gibt es den nicht umsonst,\nschließlich wirst du ja reich damit...")
/*<304>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 307), ('param3', 12)])
/*<307>*/ 			printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x11\x8FFIch mache dir einen Preis, der mich\nfast zum Weinen bringt!\nSchlappe <r<20 Rubine>>!\n[1]Verrat's mir![2-]Lieber nicht.")
          			goto flw_44
          		}
          	}
          }

          void entrypoint_300_13() {
/*< 67>*/ 	start()
/*<297>*/ 	loadzone_temp_flags[1 /* 0x1 02 */] = true;
/*<205>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 505), ('param2', 5), ('next', 204), ('param3', 23)])
/*<204>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 36)])) {
          	  case 0:
          		flw_207:
/*<207>*/ 		printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu\nberichten. Die Luft im vor uns\nliegenden Abschnitt ist\n<r<extrem heiß>>.\nIn deinem \x0E\x01\x12\x04\x00\x02momentanen Zustand\nstellt dies eine Gefahr für dich dar.\nIch schlage vor, umzukehren.")
          		flw_296:
/*<296>*/ 		loadzone_temp_flags[1 /* 0x1 02 */] = false;
          	  case 1:
/*<206>*/ 		switch (loadzone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
          			goto flw_207
          		  case 1:
/*<203>*/ 			printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\n\n\nIn deinem \x0E\x01\x12\x04\x00\x02momentanen Zustand stellt\ndiese <r<extreme Hitze>> eine große Gefahr\nfür dich dar.\n\nAußerdem zeigt die <r<Aurasuche>> in\ndieser Richtung nichts an, bitte\nüberprüfe, ob das wirklich die\nrichtige Richtung ist.")
/*<208>*/ 			loadzone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_296
          		}
          	}
          }

          void entrypoint_300_30() {
/*<269>*/ 	start()
/*<268>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00Ich empfehle, auf <r<Gegenstände aus\nHolz>> sowie <r<deine Kleidung>> besonders\nachtzugeben.")
          }

          void entrypoint_300_14() {
/*< 69>*/ 	start()
/*< 72>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 71>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Die Kleidung war schwarz, mehr weiß\nich nicht.")
          	  case 1:
/*<153>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 2065), ('next', 70), ('param3', 13)])
/*< 70>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Oh? Noch ein Fremder, der nicht zu\nden roten Kerlen gehört...")
/*< 77>*/ 		set_camera(6, 0)
/*< 78>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Erst vorhin ist ein <r<seltsam gekleideter\nMensch>> in das Loch da geklettert!<pling>")
/*< 79>*/ 		set_camera(-1, 0)
/*<154>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 3342), ('next', 80), ('param3', 13)])
/*< 80>*/ 		printf(/* textboxtype: 1, unk: 2 */ "Du glaubst, das könnte deine Freundin\ngewesen sein? Lass mich nachdenken...\nWie sah dieser Mensch noch gleich aus?")
/*<349>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\x120CHmmm...\x0E\x01\x04\x02\x1E\nAlso, er war <r<schwarz gekleidet>>, aber\nmehr kann ich dir auch nicht sagen.")
/*< 73>*/ 		scene_flags[4 'Eldin Volcano'][22 /* 0x3 40 */] = true;
          	}
          }

          void entrypoint_300_31() {
/*<271>*/ 	start()
/*<270>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04K\x00Falls du in Brand gerätst, würde <g<eine\nRolle oder eine Wirbelattacke>> das\nFeuer vermutlich löschen.")
          }

          void entrypoint_300_15() {
/*< 95>*/ 	start()
/*< 18>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Die Gestalt, die vorhin hier vorbeikam,\nsah dir ein bisschen ähnlich, so vom\nKörperbau her.\n\nAber die Klamotten waren anders,\nnicht grün wie deine.")
          	  case 1:
/*< 97>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\xD11Du suchst keine Schätze, sondern\ndeine Freundin?\n\n\n\x0E\x01\x09\x04ÿ\xFF0EWie sieht sie denn aus?\n<r<Da ist nämlich vorhin jemand\nvorbeigerannt>>, ohne uns eines Blickes\nzu würdigen.<pling>\nAber ich habe nur gesehen, dass es\nkeiner von den roten Kerlen war.\n\n\nWer immer es war, er ist bestimmt da\nweiter vorn, also versuch doch einfach,\nihn einzuholen.")
/*< 17>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_32() {
/*<274>*/ 	start()
/*<275>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu\nberichten. Durch die Stärkung des\nSchwertes kannst du nun auch <y<Rubine\n>>per <r<Aurasuche>> aufspüren.\nIch habe <y<Rubine>> als mögliches Ziel zur\n<r<Aurasuche>> hinzugefügt.<pling>\nDie Suche ist nun verfügbar.")
/*<276>*/ 	story_flags[105 /* us: 805A9ADE 0x40, jp: 805ACD5E 0x40 */] = true;
/*<348>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 20), ('next', -1), ('param3', 56)])
          }

          void entrypoint_300_16() {
/*< 96>*/ 	start()
/*< 98>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<102>*/ 		switch (scene_flags[61 /* 0x6 20 */]) {
          		  case 0:
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Hier gibt es viele dieser roten, blauen\nund grünen Steine, die man <y<Rubine\n>>nennt. Es gibt sogar <r<silberne>> und\n<r<goldene>>!\nUnd ein hartes <r<Metall für\nAusrüstungsgegenstände>>, aber\ndas ist nicht unbedingt ein Schatz nach\nmeinem Geschmack...")
          		  case 1:
/*<101>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Wir <b<Mogma>> haben diese Gegend zu\nunserem Revier gemacht und suchen\nhier Schätze. Wir sind <b<Schatzsucher>>.\n\nHier gibt es viele dieser roten, blauen\nund grünen Steine, die man <y<Rubine\n>>nennt. Es gibt sogar <r<silberne>> und\n<r<goldene>>!\nUnd ein hartes <r<Metall für\nAusrüstungsgegenstände>>, aber das ist\nnicht unbedingt ein Schatz nach\nmeinem Geschmack...\nDu bist sicher auch wegen der Schätze\nhier, was?")
/*<103>*/ 			scene_flags[4 'Eldin Volcano'][61 /* 0x6 20 */] = true;
          		}
          	  case 1:
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\xD11Du suchst keine Schätze, sondern\ndeine Freundin?\n\n\n\x0E\x01\x09\x04ÿ\xFF0EWie sieht sie denn aus?\n<r<Da ist nämlich vorhin jemand\nvorbeigerannt>>, ohne uns eines Blickes\nzu würdigen.<pling>\nAber ich habe nur gesehen, dass es\nkeiner von den roten Kerlen war.\n\n\nWer immer es war, er ist bestimmt da\nweiter vorn, also versuch doch einfach,\nihn einzuholen.")
/*<100>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_33() {
/*<286>*/ 	start()
/*<291>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<290>*/ 		switch (loadzone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<289>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Wo suche ich als Nächstes nach\nSchätzen? Ich darf nur nicht wieder\nvergessen, dass ich mich überallhin\ndurchgraben kann!")
          		  case 1:
/*<287>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Warst du in den Ruinen?\n\n\n\n\x0E\x01\x09\x04\x13\x100DIch habe gekniffen und bin\nnach Hause... Mein Kumpel war\nvielleicht sauer.\n\n\x0E\x01\x09\x04\x09\x8FF\x201EWir graben uns an jeden Ort!\x201C, hat er\ngeschrien...~~~\nDas hatte ich ganz vergessen.")
/*<288>*/ 			loadzone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	  case 1:
/*<295>*/ 		switch (loadzone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<294>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Wo suche ich als Nächstes nach\nSchätzen? Wir <b<Schatzsucher >>ruhen\nniemals!")
          		  case 1:
/*<292>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x801Na, nutzt du meine <y<Bombentasche >>auch\nfleißig?\n\n\n\x0E\x01\x09\x04\x09\x8FFWenn ich sie dir schon schenke, solltest\ndu sie auch kräftig einsetzen!")
/*<293>*/ 			loadzone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	}
          }

          void entrypoint_300_17() {
/*<121>*/ 	start()
/*<180>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 3589), ('next', 123), ('param3', 13)])
/*<123>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Noch einer! Aber diesmal grün!")
/*<182>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -256), ('next', 181), ('param3', 13)])
/*<181>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Gerade eben war hier jemand, der so\nähnlich aussah wie du, nur mit\n<r<schwarzen Klamotten>>. War das ein\nKumpel von dir?<pling>")
/*<125>*/ 	set_camera(13, 0)
/*<152>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 126), ('param3', 13)])
/*<126>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Hier geht's nicht weiter, aber das hat\nihn nicht mal gebremst... Er ist einfach\nhinübergesprungen!")
/*<127>*/ 	set_camera(-1, 0)
/*<128>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Was für eine Kraft...~~~\nRespekt!")
          }

          void entrypoint_300_18() {
/*<122>*/ 	start()
/*<124>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Es wimmelt hier nur so von diesen\nroten Kerlen...\n\n\nDer Typ von vorhin wäre an denen\nbestimmt locker vorbeigekommen.\n\n\nWenn der uns bei der Schatzsuche\nhelfen würde...\n\x0E\x01\x09\x04\x15\x2FFDu hast da 'nen tollen Kumpel.")
          }

          void entrypoint_300_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BGebieter, du befindest dich derzeit auf\nder Suche nach <r<Zelda>>...\n\n\nErinnerst du dich, wie du mit der\n<r<Aurasuche>> nach Zelda Ausschau\nhalten kannst?\n[1]Natürlich![2]Vergessen...")
/*<279>*/ 	switch (choice(2)) {
          	  case 0:
/*<280>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Dann entschuldige die Störung,\n\x0E\x01\x12\x04\x00\x05Gebieter. Setzen wir die Suche nach\nZelda fort.")
          		flw_311:
/*<311>*/ 		scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          	  case 1:
/*<281>*/ 		printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Gebieter, halte für die <r<Aurasuche\n>>(C) gedrückt.\x0E\x01\x11\x02\x6CD\n\n\n\x0E\x01\x12\x04\x00\x01Wähle aus, was du suchen möchtest,\nindem du mit der Wii-Fernbedienung\ndarauf zeigst. Die Schwertspitze\nreagiert dann auf das gewählte Ziel.\nJe näher sich das Ziel befindet, desto\n<r<stärker die Reaktion>>. Außerdem ändert\nsich der Signalton.\n\nZudem erscheint auf dem Zeiger ein\n<r<Pfeil>>, der die ungefähre Richtung, in\nder sich das Ziel befindet, angibt.\n\nBitte wähle Zelda aus, damit wir unsere\nSuche fortsetzen können.")
/*<343>*/ 		story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<342>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		goto flw_311
          	}
          }

          void entrypoint_300_19() {
/*<129>*/ 	start()
/*<130>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Zelda ist nah...\x0E\x01\x04\x02\x14 Beeil dich!")
/*<131>*/ 	story_flags[184 /* us: 805A9AE6 0x80, jp: 805ACD66 0x80 */] = true;
          }

          void entrypoint_300_02() {
/*<  2>*/ 	start()
/*<107>*/ 	set_camera(10, 0)
/*<156>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 4103), ('next', 108), ('param3', 13)])
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Unglaublich, die machen hier, was sie\nwollen! In unserem Revier!!!")
/*<319>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 106), ('param3', 33)])
/*<106>*/ 	set_camera(-1, 0)
/*<115>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 157), ('param3', 17)])
/*<157>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 3590), ('next', 3), ('param3', 13)])
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Aaaah! Erschreck mich doch nicht so!\n\n\n\nAch, du suchst eine Freundin von dir?\x0E\x01\x09\x04\x14\x12FF\nDa kann ich dir nicht helfen.\n\n\n\x0E\x01\x09\x04ÿ\xFFFFHier ist nämlich niemand\nvorbeigekommen...\x0E\x01\n\x04\x09Í Vielleicht ist deine\nFreundin ja da oben entlang gegangen?")
/*<105>*/ 	set_camera(-1, 0)
/*<158>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 4103), ('next', 55), ('param3', 13)])
/*< 55>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Hmpf...\x0E\x01\x04\x02\x14\nKann nicht irgendwer diese roten\nKerle vertreiben?")
/*<104>*/ 	scene_flags[4 'Eldin Volcano'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_300_03() {
/*<  4>*/ 	start()
/*<336>*/ 	switch (loadzone_temp_flags[19 /* 0x3 08 */]) {
          	  case 0:
/*<337>*/ 		set_camera(26, 0)
          		flw_314:
/*<314>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 346), ('param3', 40)])
/*<346>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 256), ('next', 313), ('param3', 13)])
/*<313>*/ 		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 100), ('next', 320), ('param3', 14)])
/*<320>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 263), ('param3', 33)])
/*<263>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 150), ('param3', 17)])
/*<150>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 2056), ('next', 5), ('param3', 13)])
/*<  5>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Du bist ja ganz schön stark!\nDanke für deine Hilfe!\n\n\n\x0E\x01\x09\x04ÿ\xFF0BWir <b<Mogma >>lassen uns nicht lumpen,\nwenn uns jemand hilft.\n\n\nWie kann ich dir für deine Hilfe\ndanken?\n[1]Hilf mir.[2]Rubine!")
/*<132>*/ 		switch (choice(2)) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Du warst auf der Suche nach deiner\nFreundin, oder?\n\n\n\x0E\x01\x09\x04\x09\x809Dann wirst du das hier sicher\ngebrauchen können!")
/*<316>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 6), ('param3', 42)])
/*<  6>*/ 			give_item(56 0x38);
/*<  7>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Damit kommst du hier nach oben.\x0E\x01\n\x04\x0BÍ\nProbier's mal an dem Loch da aus.")
/*<109>*/ 			set_camera(-1, 0)
          			flw_137:
/*<137>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Ich hoffe, deine Freundin ist nicht\nden roten Kerlen in die Hände\ngefallen...")
/*<318>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          		  case 1:
/*<159>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 3599), ('next', 134), ('param3', 13)])
/*<134>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Rubine? Rubine?!?\nDas ist es, was du willst?\n\n\n\x0E\x01\x09\x04\x15\x1204\x0E\x01\x08\x02\xFFCDDas wird meinem Dank nicht gerecht...\x0E\x01\x04\x02\x14\nIch hab da was Anderes...\n\n\n\x0E\x01\x09\x04\x14\x12FFMoment...~~~\nIch hab's doch hier irgendwo...\n\n\n\x0E\x01\x09\x04\x11\x809Warst du nicht auf der Suche nach\ndeiner Freundin?\nDas hier wird dir sicher mehr nützen\nals Rubine.")
/*<317>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 135), ('param3', 42)])
/*<135>*/ 			give_item(56 0x38);
/*<136>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Damit kommst du hier nach oben.\x0E\x01\n\x04\x0BÍ\nProbier's mal an dem Loch da aus.")
/*<138>*/ 			set_camera(-1, 0)
/*<160>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 2048), ('next', 139), ('param3', 13)])
/*<139>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x08\x02\xFFCDIch brauche sie sowieso nicht...\nHab selbst gute Klauen!\nDir aber werden sie nützlich sein.\nViel nützlicher als Rubine!")
/*<161>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 137), ('param3', 13)])
          			goto flw_137
          		}
          	  case 1:
/*<315>*/ 		set_camera(25, 0)
          		goto flw_314
          	}
          }

          void entrypoint_300_20() {
/*<140>*/ 	start()
/*<144>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 322), ('param3', 32)])
/*<322>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 16), ('next', 352), ('param3', 33)])
/*<352>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 16), ('next', 143), ('param3', 33)])
/*<143>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 272), ('next', 142), ('param3', 15)])
/*<142>*/ 	set_camera(14, 0)
/*<183>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 1799), ('next', 141), ('param3', 13)])
/*<141>*/ 	printf(/* textboxtype: 1, unk: 1 */ "Ich traue meinen Augen nicht... ~~~\nAlle besiegt...~~~")
/*<335>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 42)])
          }

          void entrypoint_300_04() {
/*<  8>*/ 	start()
/*<321>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 323), ('param3', 33)])
/*<323>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 14), ('param3', 17)])
/*< 14>*/ 	switch (scene_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<  9>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Ich drücke die Daumen, dass es deiner\nFreundin gut geht.")
          	  case 1:
/*<110>*/ 		switch (loadzone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
/*<111>*/ 			switch (loadzone_temp_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*<113>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Was machst du, wenn der mit der\n<r<blauen Mütze>> ins Jagdhorn stößt und\nVerstärkung anrückt?")
          			  case 1:
/*<331>*/ 				switch (loadzone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<332>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x809Du hast sie wütend gemacht, also\nkümmerst du dich jetzt gefälligst auch\num sie!\n\n\x0E\x01\x09\x04ÿ\xFFFFDenk dran, wenn du ein paar von\nihnen besiegst, <r<ruft der mit dem Horn\nVerstärkung>>.\n\nEs ist der mit der <r<blauen Mütze>><pling>, er ist\nder Anführer.")
          					flw_114:
/*<114>*/ 					loadzone_temp_flags[18 /* 0x3 04 */] = true;
          				  case 1:
/*<112>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x80EWas? Du willst sie wirklich verjagen?\n\n\n\n\x0E\x01\x09\x04\x15\x1200Sie wissen, dass du hier bist, also wirst\ndu wohl kämpfen müssen.\n\n\n\x0E\x01\x09\x04ÿ\xFF00Aber pass auf, es kommen immer\nwieder neue, solange du nicht etwas\ngegen den Kerl unternimmst, der<r<\nmit seinem Horn Verstärkung ruft>>.\nDer mit der <r<blauen Mütze>><pling> und dem\nJagdhorn scheint der Anführer zu sein.")
          					goto flw_114
          				}
          			}
          		  case 1:
/*< 15>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Wie wär's, verjagst du diese Kerle?\n\n\n\n\x0E\x01\x09\x04\x14\x1209Wenn du stark genug bist, natürlich...\n")
          		}
          	}
          }

          void entrypoint_300_21() {
/*<184>*/ 	start()
/*<193>*/ 	switch (scene_flags[65 /* 0x9 02 */]) {
          	  case 0:
/*<194>*/ 		switch (scene_flags[97 /* 0xD 02 */]) {
          		  case 0:
/*<196>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Du kannst <y<Donnerblumen>> durch\nDrücken von (A) wie Krüge <g<aufheben\nund hinlegen>>.\n\n<g<Zeige mit der Wii-Fernbedienung nach\noben und bewege sie nach vorn>>, um sie\nzu <g<werfen>>.\n\n<g<Zeige mit der Wii-Fernbedienung\nnach unten und bewege sie nach vorn>>,\num sie zu <g<rollen>>. Probier es mit den\n<y<Donnerblumen>> hier mal aus!")
          		  case 1:
/*<195>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\xD11Moment, du hast ja gar keine\nBombentasche!\n\n\n\x0E\x01\x09\x04\x11\xDFFOhne <y<Bombentasche>> kannst du keine\n<y<Donnerblumen>> einstecken.\nVon uns <b<Mogma>> hat jeder eine.\n\n\x0E\x01\x09\x04ÿ\xFFFF...\x0E\x01\x04\x02\x14Was?\nWarum siehst du mich so an?\n\n\n\x0E\x01\x09\x04\x14\x1209Nein, ich kann dir meine nicht geben.\nVöllig unmöglich. Mach hier ein paar\nFelsen kaputt und sei zufrieden damit.")
/*<197>*/ 			scene_flags[4 'Eldin Volcano'][97 /* 0xD 02 */] = true;
          		}
          	  case 1:
/*<185>*/ 		printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x15\xD11Hm, dich hab ich hier noch nie\ngesehen...\n\n\nIiieeek!\x0E\x01\x09\x04\x11\xD12 Gehörst du etwa zu diesen\nroten Kerlen?!?\n[1]Nein![2]Rote Kerle?")
/*<186>*/ 		switch (choice(2)) {
          		  case 0:
/*<187>*/ 			printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04ÿ\xFF07Du siehst auch anders aus...~~~\nJa, du siehst eindeutig anders aus.\n\n\n\x0E\x01\x09\x04\x15\xFF00Was führt dich hierher?\nBist du wegen der <y<Donnerblumen>> hier?\n[1]Was ist das?[2]Genau!")
          			flw_189:
/*<189>*/ 			switch (choice(2)) {
          			  case 0:
/*<190>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04ÿ\xFF00Das da sind <y<Donnerblumen>>.\n\x0E\x01\n\x04\x11ÍDie wachsen hier in der Umgebung.")
/*<201>*/ 				set_camera(-1, -1)
/*<198>*/ 				printf(/* textboxtype: 1, unk: 1 */ "Sie sind ziemlich gefährlich. Hebst\ndu sie durch Drücken von (A) auf,\nexplodieren sie nach kurzer Zeit.\n\n\x0E\x01\x09\x04\x11\x80BAber wenn man weiß, wie man sie\neinsetzen muss, sind sie toll.\nWir <b<Mogma>> nutzen sie auch gern.\n\n\x0E\x01\x09\x04ÿ\xFFFFDu kannst sie wie Krüge <g<werfen oder\nrollen>>. Also, schnapp dir doch mal eine\nder <y<Donnerblumen >>hier und probier's\naus!\n\x0E\x01\x06\x02\xFFCD...~~~\x0E\x01\x06\x02Í\n\x0E\x01\x09\x04\x11\xD11Kann es sein, dass du nicht weißt,\nwie man etwas <g<wirft oder rollt>>?\n[1]Doch![2]Na ja...")
          				flw_283:
/*<283>*/ 				switch (choice(2)) {
          				  case 0:
/*<284>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x809Wirklich?\n<g<Zeige mit der Wii-Fernbedienung nach\noben und bewege sie ruckartig nach\nvorn>>, um etwas zu <g<werfen>>.\nUm etwas zu <g<rollen>>, <g<zeige mit der\nWii-Fernbedienung nach unten und\nbewege sie ruckartig nach vorn>>.\nIst ganz einfach!")
          					flw_192:
/*<192>*/ 					scene_flags[4 'Eldin Volcano'][65 /* 0x9 02 */] = true;
          				  case 1:
/*<285>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\x1215Wie, du weißt das nicht?~~~\nNa, zum Glück bin ich ja da!\n\n\n\x0E\x01\x09\x04\x09\x8FFNimm eine <y<Donnerblume>> und <g<richte\ndie Wii-Fernbedienung nach oben>>.\n\n\nEine Linie zeigt dir genau, wo die\n<y<Donnerblume>> landet, wenn du die\n<g<Wii-Fernbedienung ruckartig nach\nvorn bewegst>>.\nDu kannst aber auch eine <y<Donnerblume>>\nnehmen und die <g<Wii-Fernbedienung\nnach unten richten>>.\n\nDann zeigt dir die Linie, wo die\n<y<Donnerblume>> hinrollt, wenn du die\n<g<Wii-Fernbedienung ruckartig nach\nvorn bewegst>>.\n\x0E\x01\x09\x04\x11\x8FFWirfst du sie, erreichst du auch\n<r<höhere gelegene Stellen>>, rollst du sie,\nerreichst du <r<weit entfernte und enge\nStellen>>. Das ist sehr praktisch!")
          					goto flw_192
          				}
          			  case 1:
/*<191>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x20BHier in der Gegend findest du\nbesonders starke Exemplare.\n\n\n\x0E\x01\x09\x04ÿ\xFFFF\x0E\x01\n\x04\x11ÍHier wachsen so viele, nimm dir\neinfach so viele du brauchst!\n")
/*<200>*/ 				set_camera(-1, -1)
/*<199>*/ 				printf(/* textboxtype: 1, unk: 1 */ "Wahrscheinlich weißt du's schon, aber\nwenn du sie durch Drücken von (A)\naufhebst, explodieren sie nach kurzer\nZeit.\nDu kannst sie wie Krüge <g<werfen oder\nrollen>>, probier's aus.\n\n\n\x0E\x01\x06\x02\xFFCD...~~~\x0E\x01\x06\x02Í\n\x0E\x01\x09\x04\x11\xD11Kann es sein, dass du nicht weißt, wie\nman etwas <g<rollt>>?\n[1]Doch![2]Rollen?")
          				goto flw_283
          			}
          		  case 1:
/*<188>*/ 			printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04ÿ\xFF00Hast du diese Ungeheuer mit den\nriesigen Waffen nicht gesehen?\nDie treiben in letzter Zeit hier ihr\nUnwesen.\n\x0E\x01\x09\x04\x15\xFF07Ich kann dir sagen, die sind nicht\nbesonders freundlich...\n\n\nUnd du, was führt dich hierher?\nBist du wegen der <y<Donnerblumen>> hier?\n[1]Was?[2]Genau!")
          			goto flw_189
          		}
          	}
          }

          void entrypoint_300_05() {
/*< 10>*/ 	start()
/*<116>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 17), ('next', 210), ('param3', 32)])
/*<210>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 162), ('param3', 33)])
/*<162>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 3075), ('next', 11), ('param3', 13)])
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Halt, halt, halt!\nIch lasse nicht zu, dass du unser Revier\nhier verwüstest!")
/*<211>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 17), ('next', 302), ('param3', 33)])
/*<302>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4361), ('param2', 2062), ('next', 117), ('param3', 13)])
/*<117>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Moment...~~~\nHey, <b<Ferri>>, der sieht nicht so aus, als\nwürde er zu den roten Kerlen gehören,\noder?")
/*<212>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 118), ('param3', 33)])
/*<118>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x800Ja ja, kann schon sein...\nAber muss er uns so erschrecken?!?\n\n\n\x0E\x01\x09\x04\x11\xD01Nix für ungut!\nAber in letzter Zeit treiben sich in\nunserem Revier ganz schön viele\nungebetene Gäste herum.\n\x0E\x01\x09\x04\x15\x800Deswegen liegen wir hier auch im\nHinterhalt, um es den Kerlen mal\nordentlich zu zeigen!")
/*<213>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 17), ('next', 164), ('param3', 33)])
/*<164>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4372), ('param2', 4629), ('next', 119), ('param3', 13)])
/*<119>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x08\x02\xFFCDPfff, gerade hast du noch vor Angst gezittert...")
/*<165>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4353), ('param2', -1), ('next', 214), ('param3', 13)])
/*<214>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 163), ('param3', 33)])
/*<163>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 120), ('param3', 13)])
/*<120>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Wenn du hier auch nach Schätzen\nsuchst, nimm dich auf jeden Fall vor\nden roten Kerlen in Acht...")
/*<312>*/ 	scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          }

          void entrypoint_300_22() {
/*<202>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu\nberichten. Die Luft im vor uns\nliegenden Abschnitt ist <r<extrem heiß>>.\n\nDie Wahrscheinlichkeit, dass deine\nKleidung dort in Flammen aufgehen\nwird, beträgt 95 %.\n\nDu kannst dieses Gebiet schnell\ndurchqueren, in dem du <g<sprintest>>.\nIch empfehle die <r<Aurasuche>>, um\ndie richtige Richtung zu finden.")
/*<209>*/ 	scene_flags[4 'Eldin Volcano'][101 /* 0xD 20 */] = true;
          }

          void entrypoint_300_06() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Auserwählter der Göttin...")
          }

          void entrypoint_300_23() {
/*<215>*/ 	start()
/*<216>*/ 	switch (temp_flags[33 /* 0x5 02 */]) {
          	  case 0:
/*<299>*/ 		switch (loadzone_temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<301>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Bitte <g<roll>> hier nicht herum, das wirbelt\nso viel Staub auf.")
          		  case 1:
/*<218>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Ah, da bist du ja wieder.\nBeachte mich gar nicht, fühl dich wie\ndaheim.\n\n\x0E\x01\x09\x04\x1011\xD0EWas? Ich soll hier nicht ständig\naus der Erde kommen?\nSag doch so was nicht!\n\n\x0E\x01\x09\x04\x1015\x809Ich mache mir nur Sorgen um mein\nHaus. Es mag klein und alt sein, aber es\nist meins!\n\n\x0E\x01\x09\x04\x1009\x9FFRuh dich ruhig aus, aber <g<roll >>hier bitte\nnicht herum.")
/*<300>*/ 			loadzone_temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*<217>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Willkommen in meinem Haus!\nFühl dich wie daheim!\n\n\n\x0E\x01\x09\x04\x1011\x80EOb das wirklich mein Haus ist?\n\n\n\n\x0E\x01\x09\x04\x1015\x80ANa ja, eigentlich haben es die roten\nKerle gebaut...\x0E\x01\x04\x02\x14 \nAber die sind ja weg, also kein\nProblem, oder?\n\x0E\x01\x09\x04\x1009\x8FFWir <b<Mogma>> leben unter der Erde,\nHäuser gibt es bei uns keine.\n\n\n\x0E\x01\x09\x04\x1015\x80DAber ich wollte schon immer mal\n\x201EWillkommen in meinem Haus!\x201C\nsagen...")
/*<219>*/ 		temp_flags[33 /* 0x5 02 */] = true;
          	}
          }

