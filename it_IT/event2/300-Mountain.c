          void entrypoint_300_24() {
/*<220>*/ 	start()
/*<221>*/ 	switch (scene_flags[73 /* 0x8 02 */]) {
          	  case 0:
/*<223>*/ 		printf(/* textboxtype: 1, unk: 0 */ "La tua amica ti sta aspettando\ndi certo, quindi non mollare!")
          	  case 1:
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][73 /* 0x8 02 */] = true;
/*<222>*/ 		printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x01Ehi! Guarda chi si vede!\nGrazie ancora per l'altra volta!\n\n\nHai poi trovato la tua amica?\n[1]Sì[2]No")
/*<225>*/ 		switch (choice(2)) {
          		  case 0:
/*<227>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x808Bene! Sono contento\nper te!\x0E\x01\x04\x02\x14 Non sei ancora\nriuscito ad aiutarla?\n\n\x0E\x01\x09\x04\x09\x8FFNon ti abbattere così! Stai\ntranquillo, vedrai che ce\nla farai! Non mollare!")
          		  case 1:
/*<226>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x13\x100DCapisco...\nNon è che i tipi rossi l'hanno...\x0E\x01\x04\x02\x14\n\n\n\x0E\x01\x09\x04\x11\x80ECome? Sai che è viva?\nE allora! Non fare quella\nfaccia, si risolve tutto!\n\n\x0E\x01\x09\x04\x09\x800Se molli tu è la fine! Quindi\nnon mollare assolutamente!")
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
/*<329>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x800EHI! Non fuggire!\nFalli fuori!")
          		flw_334:
/*<334>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 42)])
          	  case 1:
/*<333>*/ 		switch (loadzone_temp_flags[18 /* 0x3 04 */]) {
          		  case 0:
          			goto flw_329
          		  case 1:
/*<328>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x812Ehi, ehi! \nOramai si sono accorti di te\ne non ti lasciano certo andare!\n\n\x0E\x01\x09\x04\x15\xD00Prenditi le tue responsabilità\ne falli fuori!")
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
/*<340>*/ 		printf(/* textboxtype: 1, unk: 0 */ "ARGH! Eccone un altro!\nNooo! Sono riusciti ad\nattraversare la lava...\nHo parlato troppo presto!")
          	  case 1:
/*<166>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4114), ('param2', 3590), ('next', 58), ('param3', 13)])
/*< 58>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Ah! Aiuto!!!\n\n\n\nEh?! Non sei uno dei tipi rossi!?\n~~~\x0E\x01\x09\x04\x1009\x807Mi hai fatto prendere un colpo!\n\n\n\x0E\x01\x09\x04\x100A\xFF00Scusami... è che ultimamente\nnon fanno altro che venire dei tipi\nrossi a invadere il nostro territorio.")
/*< 61>*/ 		set_camera(3, 0)
/*< 60>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Visto che sono arrivati da una buca\ndietro di me, per non farli avanzare\nabbiamo riempito il varco con la lava!")
/*< 63>*/ 		set_camera(4, 0)
/*< 62>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Tanto noi possiamo passare\nattraverso la terra... eh eh eh!\n\x0E\x01\x09\x04\x1011\x80BSiamo furbi, eh?!")
/*<167>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4351), ('param2', -1), ('next', 65), ('param3', 13)])
/*< 65>*/ 		set_camera(5, 0)
/*< 64>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Perciò non toccare quel tappo! È\npericoloso! Ci vediamo, ciao!")
          	}
          }

          void entrypoint_300_25() {
/*<228>*/ 	start()
/*<229>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\xD0CMi chiedevo...\x0E\x01\x04\x02\x14\nChissà che cosa mangiano\nquei tipi rossi...")
          }

          void entrypoint_300_09() {
/*< 21>*/ 	start()
/*< 74>*/ 	switch (temp_flags[53 /* 0x7 20 */]) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Ogni tanto vengono fuori dei <r<cosi rossi\ngelatinosi>>. Stai attento a non farti\nprendere!\n")
          	  case 1:
/*<303>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 2559), ('next', 350), ('param3', 13)])
/*<350>*/ 		switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          		  case 0:
/*<351>*/ 			printf(/* textboxtype: 1, unk: 0 */ "AH! Mi hai messo paura!\x0E\x01\x04\x02\x14\n\x0E\x01\x09\x04\x11\xD00Non è educato scavare\nproprio sulla testa della gente!\n\n\x0E\x01\x09\x04\x15\x809Però posso capirti... non\npuoi mai sapere cosa c'è se\nnon provi a scavare!\n\nCerto, puoi trovare le <r<\x0E\x01\x09\x04ÿ\xFFFFrupie>>,\nma anche dei<r< minerali>>!\n\n\n<r<\x0E\x01\x09\x04\x15\xD11>>Ultimamente di <r<cuori>> non se ne trovano\npiù... Alle volte si verificano cose molto\nstrane...\n\n\x0E\x01\x09\x04ÿ\xFFFFNon smettere mai di\nscavare qua e là, quando\ntrovi un buco!")
          			flw_75:
/*< 75>*/ 			temp_flags[53 /* 0x7 20 */] = true;
          		  case 1:
/*< 22>*/ 			printf(/* textboxtype: 1, unk: 0 */ "AH! Mi hai messo paura!\x0E\x01\x04\x02\x14\n\x0E\x01\x09\x04\x11\xD00Non è educato scavare\nproprio sulla testa della gente!\n\n\x0E\x01\x09\x04\x15\x809Però posso capirti... non\npuoi mai sapere cosa c'è se\nnon provi a scavare!\n\nCerto, puoi trovare le <r<\x0E\x01\x09\x04ÿ\xFFFFrupie>>,\nma anche dei<r< minerali >>o\nanche un <r<cuore>>!\n\nNon smettere mai di\nscavare qua e là, quando\ntrovi un buco!")
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
/*<236>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x8FFPuoi trovare muri che si possono\ndistruggere non solo sotto terra, \nma anche in superficie.\nSono sicuro che li troverai!")
          			  case 1:
/*<235>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\xD10Oh! Era lì?\nTe la sai cavare, mi pare!")
/*<237>*/ 				scene_flags[4 'Eldin Volcano'][75 /* 0x8 08 */] = true;
          				goto flw_236
          			}
          		  case 1:
/*<243>*/ 			switch (scene_flags[76 /* 0x8 10 */]) {
          			  case 0:
/*<242>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Da queste parti, spesso ci sono\ndei muri sottili dietro ai quali\nsi nascondono delle cose...")
          			  case 1:
/*<244>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Ehi, mi sembri in forma!\nSei venuto in cerca di tesori?\n\n\n\x0E\x01\x09\x04\x11\x800Forse lo saprai già, ma senti questa:\npresso il <b<vulcano di Oldin>> ci sono punti\nin cui i muri sono sottili.\n\n\x0E\x01\x09\x04\x09\x8FFDietro si sono create delle grotte che\nnascondono parecchie cose...\nSi trova di tutto, soprattutto <y<rupie>>!\n\x0E\x01\x09\x04\x11\x8FFPerché non provi a cercarne?")
/*<241>*/ 				scene_flags[4 'Eldin Volcano'][76 /* 0x8 10 */] = true;
/*<272>*/ 				scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          			}
          		}
          	  case 1:
/*<240>*/ 		switch (scene_flags[74 /* 0x8 04 */]) {
          		  case 0:
/*<239>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\x80CQualcosa mi dice che ce\nne sia uno qui vicino!")
          		  case 1:
/*<232>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Ciao! Sembri in forma!\n\n\n\n\x0E\x01\x09\x04\x11\x8FFQuesta volta sei qui in cerca\ndi qualche tesoro?\nTi dico un paio di cosette...\n\n<b<\x0E\x01\x09\x04\x09\x80B>>Qui e lì presso il <b<vulcano di Oldin>>,\nci sono delle grotte nascoste dietro\nad alcuni muri sottili.\n\nSpesso si trovano robe\nnascoste, il più delle\nvolte si tratta di <y<rupie>>!\n\n\x0E\x01\x09\x04\x15\x80CQualcosa mi dice che\nce n'è una anche qui vicino!")
/*<233>*/ 			scene_flags[4 'Eldin Volcano'][74 /* 0x8 04 */] = true;
/*<273>*/ 			scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          		}
          	}
          }

          void entrypoint_300_27() {
/*<245>*/ 	start()
/*<249>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<248>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\x80BDelle rovine di cui nessuno\nsa niente in fondo al vulcano...\ntutto ciò solletica il mio spirito di\n<b<ricercatore di tesori>>!")
          	  case 1:
/*<246>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x801Ah, sei tu!\nStai trattando bene il\nmio <y<portabombe>>?\n\n\x0E\x01\x09\x04\x09\x9FFTi sei mai inoltrato fino al cuore del \n<b<vulcano di Oldin>>?\n\n\n\x0E\x01\x09\x04\x15\x816In fondo al vulcano c'è una zona\nin cui la temperatura è elevatissima,\nfa bruciare i vestiti e si rischia la vita!\n\n\x0E\x01\x09\x04\x09\x9FFPerò si dice che lì in fondo\nci siano delle rovine incredibili\ncon indicibili tesori!\n\n\x0E\x01\x09\x04\x11\x80BPer noi il calore è del tutto\nsopportabile, quindi credo proprio che\nandrò a darci un'occhiata!")
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
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Mmh, mi pare che quei tipi \nstessero seppellendo qualcosa qui...\nMa non trovo niente...")
/*< 83>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 16), ('next', 25), ('param3', 16)])
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Ehi, <b<Ferrinio>>! Sei sicuro che fosse\nproprio qui? Ma che cos'è che hanno\nseppellito poi?")
/*< 84>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 170), ('param3', 16)])
/*<170>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4351), ('param2', -245), ('next', 26), ('param3', 13)])
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0 */ "La <r<chiave>>! La <r<chiave>>!")
/*<148>*/ 	set_camera(24, 0)
/*<259>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 149), ('param3', 6)])
/*<149>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Quei tipi hanno rotto la <r<chiave della\nporta >>qua davanti e ne hanno\nsparpagliato i pezzi qui in giro!\n\nErano <r<cinque >>pezzi e uno dev'essere\nseppellito proprio da queste parti!")
/*<260>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 251), ('param3', 6)])
/*<251>*/ 	set_camera(21, 0)
/*< 85>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 16), ('next', 169), ('param3', 16)])
/*<169>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4373), ('param2', 3330), ('next', 27), ('param3', 13)])
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Mmh, ma hai visto prima quella\n<r<tipa bionda vestita strana>>...\n<pling>l'hanno portata via!")
/*<252>*/ 	set_camera(22, 0)
/*< 86>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 28), ('param3', 16)])
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1011\xD0BGià!!! Scommetto che lì dentro\nhanno nascosto qualcosa di\nimportantissimo!\n\n\x0E\x01\x09\x04\x1009\x800E probabilmente la tipa che hanno\nrapito sarà la loro cena, eh eh!\nFidati, sento odore di tesoro fin\nda qui fuori!")
/*<253>*/ 	set_camera(23, 0)
/*< 87>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 16), ('next', 171), ('param3', 16)])
/*<171>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4607), ('param2', -254), ('next', 29), ('param3', 13)])
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 0 */ "E cosa vuoi fare una volta\nche abbiamo raccolto tutti\ni pezzi della chiave?!")
/*< 88>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 30), ('param3', 16)])
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1011\xD09Mi pare chiaro, no?!\nCi sgraffignamo il tesoro che\nc'è lì dentro!")
/*<151>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4097), ('param2', -1), ('next', 89), ('param3', 13)])
/*< 89>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 16), ('next', 172), ('param3', 16)])
/*<172>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4371), ('param2', 4103), ('next', 31), ('param3', 13)])
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Ma, allora...~~~ A che ci serve la chiave?!\nPossiamo scavare fin dentro, no?!")
/*<262>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 254), ('param3', 6)])
/*<254>*/ 	set_camera(22, 0)
/*< 90>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 173), ('param3', 16)])
/*<173>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4097), ('param2', 511), ('next', 174), ('param3', 13)])
/*<174>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4353), ('param2', 511), ('next', 32), ('param3', 13)])
/*< 32>*/ 	printf(/* textboxtype: 1, unk: 0 */ "... ... ...\x0E\x01\x04\x02\x1E")
/*<255>*/ 	set_camera(21, 0)
/*< 33>*/ 	printf(/* textboxtype: 1, unk: 0 */ "... ... ...\x0E\x01\x04\x02\x1E")
/*<256>*/ 	set_camera(23, 0)
/*< 91>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 175), ('param3', 16)])
/*<175>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4117), ('param2', -1), ('next', 261), ('param3', 13)])
/*<261>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 34), ('param3', 6)])
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Sei proprio furbo!")
/*<257>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 145), ('param3', 6)])
/*<145>*/ 	scene_flags[4 'Eldin Volcano'][72 /* 0x8 01 */] = true;
/*<146>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 345), ('param3', 6)])
/*<345>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_300_28() {
/*<265>*/ 	start()
/*<282>*/ 	temp_flags[30 /* 0x2 40 */] = true;
/*<264>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04K\x00\x0E\x01\x12\x04\x00\x0BSignore, Faih a rapporto.\nCi troviamo presso il <b<vulcano di Oldin>>,\nun luogo ricco di energia terrestre.")
          }

          void entrypoint_300_11() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 2, unk: 1 */ "\x0E\x01\x12\x04\x00\x0BSignore Link, Faih a\nrapporto. Il discorso dei <b<Mogma >>ci ha\nrivelato delle informazioni\ninteressanti.\nLa \x201C<r<tipa vestita strana>>\" a cui hanno\nfatto riferimento è...\n[1]Zelda![2]Quella\nin nero?")
/*< 37>*/ 	switch (choice(2)) {
          	  case 0:
/*< 38>*/ 		printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Esatto, mio signore.\nProbabilità che si tratti di Zelda: 90%.")
          		flw_92:
/*< 92>*/ 		set_camera(7, 0)
/*< 66>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Inoltre, probabilità che la chiave che\napre questo ingresso sia fatta dello\nstesso materiale della serratura: 95%.")
/*< 93>*/ 		set_camera(-1, 0)
/*< 94>*/ 		printf(/* textboxtype: 2, unk: 1 */ "Rilevo nei dintorni la presenza di\noggetti dello stesso materiale.\n\n\nTrovandoli tutti potremmo riuscire\nad arrivare a <r<Zelda>>, quindi li ho\nregistrati nel <r<rilevatore>>.<pling>")
/*<310>*/ 		story_flags[106 /* us: 805A9ADE 0x80, jp: 805ACD5E 0x80 */] = true;
/*<347>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 2), ('next', 344), ('param3', 56)])
/*<344>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*< 39>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Probabilità che si tratti della\nragazza vestita di nero:\x0E\x01\x08\x02\x1CD 10%.\n\n\nQuella che è stata rapita\nritengo sia <r<Zelda>>.")
          		goto flw_92
          	}
          }

          void entrypoint_300_29() {
/*<267>*/ 	start()
/*<266>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00La regione è composta per il 65% di\nlava ed è abitata da creature capaci\ndi usare il fuoco.")
          }

          void entrypoint_300_12() {
/*< 40>*/ 	start()
/*< 46>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 47>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Tienilo bene in mente!\nLe \x0E\x00\x03\x02\x07rupie verdi >>attorno\n<r<non hanno insidie>>.\n\nQuelle \x0E\x00\x03\x02\x08blu>>, <r<una o due>>.<r+<\n>>Quelle <r+<rosse>>, <r<tre o quattro>>...\nQuelle \x0E\x00\x03\x02\nargento>>, <r<cinque o sei>>.\nQuelle \x0E\x00\x03\x02\x0Boro>>, <r<sette o otto>>...\nQuesta è la regola generale,\nma in fin dei conti è un gioco\nbasato sul caso!\n\x0E\x01\x09\x04\x15\x509Buona fortuna! Eh eh eh!")
          	  case 1:
/*< 42>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*<176>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 2059), ('next', 53), ('param3', 13)])
/*< 53>*/ 			printf(/* textboxtype: 1, unk: 1 */ "Allora? Non vedi l'ora di conoscere \nle mie informazioni segrete, vero?")
/*<308>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 309), ('param3', 12)])
/*<309>*/ 			printf(/* textboxtype: 1, unk: 1 */ "<r<\x0E\x01\x09\x04ÿ\xFF00>>Per sole <r<20 rupie>>, ti svelerò\ninformazioni segrete su come\n<r<stanare le rupie>>!\n[1]Dimmi tutto![2-]No, grazie.")
          			flw_44:
/*< 44>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				switch (has_rupees(20)) {
          				  case 0:
/*< 51>*/ 					rupees += -20;
/*<179>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 2057), ('next', 45), ('param3', 13)])
/*< 45>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Bene, bene! Grazie!\nAllora, è una cosa che\nsaprai soltanto tu...")
/*<305>*/ 					OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 306), ('param3', 12)])
/*<306>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\xFF00Devi sapere che ogni tipo di rupia\nha attorno un numero fisso\ndi insidie.\n\n\x0E\x01\x09\x04ÿ\xFF0BPer esempio, se è una \x0E\x00\x03\x02\x07rupia verde>>\ndi sicuro attorno <r<non avrà insidie>>!\n\n\nNel caso di una \x0E\x00\x03\x02\x08blu>>, ne avrà <r<1 o 2>>.<r<\n>>Una <r+<rossa >>ne avrà <r<3 o 4>>.<r<\n>>Una \x0E\x00\x03\x02\nargento >><r<5 o 6>>...\n\nInoltre, non le troverai spesso, ma\nsappi che le \x0E\x00\x03\x02\x0Brupie oro>> ne avranno\n<r<7 o 8>>... in pratica, attorno hanno\nsolo insidie.")
/*<178>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', -245), ('next', 54), ('param3', 13)])
/*< 54>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Che te ne pare?\nCosì dovrebbe essere più facile scovare\nle rupie!\n\n\x0E\x01\x09\x04ÿ\xFF09Però ricordati che è comunque\nun gioco basato sul rischio!\nBuona fortuna!")
/*< 48>*/ 					scene_flags[4 'Eldin Volcano'][55 /* 0x7 80 */] = true;
          				  case 1:
/*< 52>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Ehi! Non hai abbastanza rupie!\n\n\n\n\x0E\x01\x09\x04\x14\x1209Se non mi dai <r<20 rupie>>,\nnon ti dico un bel niente.")
          				}
          			  case 1:
/*<177>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 4103), ('next', 49), ('param3', 13)])
/*< 49>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Sei proprio tirchietto tu, eh!\nE dire che potresti\narricchirti sul serio!\n\n\x0E\x01\x09\x04ÿ\xFF00Vabbè, comunque se cambi idea,\nalla modica cifra di <r<20 rupie>>,\nti dirò tutto!")
          			}
          		  case 1:
/*< 43>*/ 			scene_flags[4 'Eldin Volcano'][54 /* 0x7 40 */] = true;
/*< 41>*/ 			printf(/* textboxtype: 1, unk: 1 */ "Ehilà! Stai per andare a <r<stanare\nrupie >>da <b<Raduncolo>>?\n\n\n\x0E\x01\x09\x04\x15\x80BTi do <r<un'informazione segreta>>!\nCosì farai un sacco di soldi!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Ov\x2010\x0E\x01\x04\x02\nvia\x2010\x0E\x01\x04\x02\nmen\x2010\x0E\x01\x04\x02\nte\x0E\x01\x04\x02\n, visto che ti\npuoi arricchire, non è certo\ngratis!")
/*<304>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 307), ('param3', 12)])
/*<307>*/ 			printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x11\x8FFVisto che sei tu,\nti farò un prezzo stracciato! \nChe ne dici di <r<20 rupie>>?\n[1]Dimmi tutto![2-]No, grazie")
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
/*<207>*/ 		printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BSignore, Faih a rapporto.\nDa questo punto in poi la\ntemperatura è \n<r<estremamente elevata>>.\n\x0E\x01\x12\x04\x00\x02Signore, il vostro numero attuale\ndi cuori non basta. Suggerisco di\ntornare indietro.")
          		flw_296:
/*<296>*/ 		loadzone_temp_flags[1 /* 0x1 02 */] = false;
          	  case 1:
/*<206>*/ 		switch (loadzone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
          			goto flw_207
          		  case 1:
/*<203>*/ 			printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BSignore, Faih a rapporto.\n\n\n\nDa questo punto in poi la temperatura\nè <r<estremamente elevata>>. \x0E\x01\x12\x04\x00\x02Signore,\nil vostro numero di cuori non basta.\n\nInoltre, la reazione del <r<rilevatore>>\nin quella direzione è pari a zero.")
/*<208>*/ 			loadzone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_296
          		}
          	}
          }

          void entrypoint_300_30() {
/*<269>*/ 	start()
/*<268>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00Il <r<legno >>e i <r<vestiti>> prendono fuoco\nfacilmente, fate attenzione.")
          }

          void entrypoint_300_14() {
/*< 69>*/ 	start()
/*< 72>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 71>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Mi pare proprio che fosse\nvestita di nero, ma non \nricordo altro...")
          	  case 1:
/*<153>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 2065), ('next', 70), ('param3', 13)])
/*< 70>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Eh? Eccone un altro! Oggi\nè già il secondo tipo\nnon rosso che passa...")
/*< 77>*/ 		set_camera(6, 0)
/*< 78>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Prima ho visto entrare\nin quel buco <r<una tipa vestita\nin modo strano>>.<pling>")
/*< 79>*/ 		set_camera(-1, 0)
/*<154>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 3342), ('next', 80), ('param3', 13)])
/*< 80>*/ 		printf(/* textboxtype: 1, unk: 2 */ "Cosa?! Potrebbe essere l'amica\nche stai cercando?!\nVuoi sapere com'era vestita...?")
/*<349>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\x120CDuuunque...\x0E\x01\x04\x02\x1E\nMi pare proprio che fosse <r<vestita di\nnero>>. Purtroppo non ricordo altro!")
/*< 73>*/ 		scene_flags[4 'Eldin Volcano'][22 /* 0x3 40 */] = true;
          	}
          }

          void entrypoint_300_31() {
/*<271>*/ 	start()
/*<270>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04K\x00In caso di combustione, impegnatevi\nimmediatamente in qualche movimento\nrapido. L'<g<attacco rotante >>o quello <g<con\ncapriola>> spengono le fiamme.")
          }

          void entrypoint_300_15() {
/*< 95>*/ 	start()
/*< 18>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Quella tipa che è passata\ncorrendo ti somigliava\nparecchio!\n\nPerò non mi pare fosse\nvestita di verde, eh...")
          	  case 1:
/*< 97>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\xD11Come? Non cerchi tesori,\nma un'amica?!\n\n\n\x0E\x01\x09\x04ÿ\xFF0EAllora forse era quella che è\npassata prima! <r<È corsa via >>senza\ndegnarci di uno sguardo!<pling>\n\nÈ successo tutto così\nvelocemente che non ho\nvisto bene che tipo fosse...\n\nDi certo non era uno di quelli\nrossi! È andata da questa\nparte, prova a seguirla!")
/*< 17>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_32() {
/*<274>*/ 	start()
/*<275>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BSignore, Faih a rapporto.\nGrazie al miglioramento della\nvostra spada, posso impostare\nil <r<rilevatore >>sulle <y<rupie>>.\nHo aggiunto le <y<rupie >>agli obiettivi\nreperibili dal <r<rilevatore>>.<pling>\nPotrà tornarvi utile.")
/*<276>*/ 	story_flags[105 /* us: 805A9ADE 0x40, jp: 805ACD5E 0x40 */] = true;
/*<348>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 20), ('next', -1), ('param3', 56)])
          }

          void entrypoint_300_16() {
/*< 96>*/ 	start()
/*< 98>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<102>*/ 		switch (scene_flags[61 /* 0x6 20 */]) {
          		  case 0:
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0 */ "In questa zona si trovano\nfacilmente <y<rupie >>rosse, blu e verdi!\nOgni tanto anche quelle <r<argento >>e <r<oro>>!\n\nE poi, anche se non è proprio\nun tesoro, si trova spesso un \n<r<minerale>> che potrebbe essere\nutile come <r<materia prima>>!")
          		  case 1:
/*<101>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Noi siamo i <b<Mogma >>e\nquesto è il nostro territorio.\nSiamo dei <b<cercatori di tesori>>!\n\nIn questa zona si trovano facilmente\n<y<rupie >>rosse, blu e verdi!\nOgni tanto anche quelle\n<r<argento >>e <r<oro>>!\nE poi, anche se non è proprio\nun tesoro, si trova spesso un \n<r<minerale>> che potrebbe essere\nutile come <r<materia prima>>!\nDato che ti trovi qui, perché\nnon ne approfitti per cercare\nqualche tesoro?!")
/*<103>*/ 			scene_flags[4 'Eldin Volcano'][61 /* 0x6 20 */] = true;
          		}
          	  case 1:
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\xD11Come? Non cerchi tesori,\nma un'amica?!\n\n\n\x0E\x01\x09\x04ÿ\xFF0EAllora forse era quella che è\npassata prima! <r<È corsa via >>senza\ndegnarci di uno sguardo!<pling>\n\nÈ successo tutto così\nvelocemente che non ho\nvisto bene che tipo fosse...\n\nDi certo non era uno di quelli\nrossi! È andata da questa\nparte, prova a seguirla!")
/*<100>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_33() {
/*<286>*/ 	start()
/*<291>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<290>*/ 		switch (loadzone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<289>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Dove posso andare a cercare\ntesori, ora? Ovunque sia,\nquesta volta scavo di certo!")
          		  case 1:
/*<287>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Ciao! Sei entrato\nnelle rovine di cui parlavamo?\n\n\n\x0E\x01\x09\x04\x13\x100DIo poi ho lasciato perdere, ma il\nmio compare s'è arrabbiato\ntantissimo!\n\n\x0E\x01\x09\x04\x09\x8FFUrlava che noi possiamo\nandare ovunque scavando...~~~\ne il resto l'ho scordato!")
/*<288>*/ 			loadzone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	  case 1:
/*<295>*/ 		switch (loadzone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<294>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Dove posso andare in cerca di\ntesori? Noi <b<cercatori di tesori >>non\nsmettiamo mai di viaggiare!")
          		  case 1:
/*<292>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x801Ehi, tu! Stai\ntrattando bene il mio\n<y<portabombe>>, vero?\n\n\x0E\x01\x09\x04\x09\x8FFNon vorrei averlo\nsprecato, quindi usalo\nsaggiamente!")
/*<293>*/ 			loadzone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	}
          }

          void entrypoint_300_17() {
/*<121>*/ 	start()
/*<180>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 3589), ('next', 123), ('param3', 13)])
/*<123>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Ooh! Questa volta è uno verde!")
/*<182>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -256), ('next', 181), ('param3', 13)])
/*<181>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Proprio poco fa ho visto correre\n<r<una tipa vestita di nero >>e aveva\ntutta l'aria di essere della tua specie!\nSiete amici?<pling>")
/*<125>*/ 	set_camera(13, 0)
/*<152>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 126), ('param3', 13)])
/*<126>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Di là non si può passare normalmente,\ninvece lei ha fatto un balzo e... oplà!\nÈ passata come se niente fosse.")
/*<127>*/ 	set_camera(-1, 0)
/*<128>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Credimi, saltare fin lassù...~~~ non\nè cosa da poco!")
          }

          void entrypoint_300_18() {
/*<122>*/ 	start()
/*<124>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Più avanti, vicino alla montagna,\nla zona brulica di tipi rossi...\n\n\nQuella tipa, invece, è stata furba.\nNon avrà avuto problemi a\nsalire su.\n\nCerto che per lei, la ricerca di\ntesori deve essere uno scherzo!\n\x0E\x01\x09\x04\x15\x2FFChe amici ganzi che hai!")
          }

          void entrypoint_300_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BSignore, Faih a rapporto.\nPerdonate l'interruzione nella ricerca\ndi <r<Zelda>>, ma...\n\nVi ricordate ancora come impostare\nil <r<rilevatore >>sulle tracce di Zelda?\n[1]Certo![2]No...")
/*<279>*/ 	switch (choice(2)) {
          	  case 0:
/*<280>*/ 		printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Sì, mio signore. Perdonatemi.\nPossiamo riprendere la nostra\nricerca di Zelda.")
          		flw_311:
/*<311>*/ 		scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          	  case 1:
/*<281>*/ 		printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Mio signore, per attivare il <r<rilevatore>>,\nper prima cosa tenete premuto\na lungo (C).\x0E\x01\x11\x02\x6CD\n\n\x0E\x01\x12\x04\x00\x01Scegliete il soggetto della vostra\nricerca puntandolo con il telecomando\ne lo cercherò attraverso la punta della\nvostra spada.\nPiù vi avvicinerete all'oggetto, più il\n<r<segnale sarà forte >>e verrà trasmesso\ntramite un suono e delle vibrazioni.\n\nInoltre, un <r<cursore >>vi indicherà\nprecisamente la direzione nella quale\ndirigervi.\n\nOra potrete scegliere come\nsoggetto Zelda e proseguire\nle ricerche.")
/*<343>*/ 		story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<342>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		goto flw_311
          	}
          }

          void entrypoint_300_19() {
/*<129>*/ 	start()
/*<130>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Zelda si trova più avanti...\x0E\x01\x04\x02\x14\nAffrettati!")
/*<131>*/ 	story_flags[184 /* us: 805A9AE6 0x80, jp: 805ACD66 0x80 */] = true;
          }

          void entrypoint_300_02() {
/*<  2>*/ 	start()
/*<107>*/ 	set_camera(10, 0)
/*<156>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 4103), ('next', 108), ('param3', 13)])
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Uff... quelli spadroneggiano\nsul nostro territorio, fanno\nquello che vogliono.")
/*<319>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 106), ('param3', 33)])
/*<106>*/ 	set_camera(-1, 0)
/*<115>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 157), ('param3', 17)])
/*<157>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 3590), ('next', 3), ('param3', 13)])
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0 */ "ARGH! Cosa... che vuoi?!\nM'hai spaventato!\n\n\nCome? Cerchi un'amica?\n\x0E\x01\x09\x04\x14\x12FFNon ne ho la più pallida idea.\n\n\n\x0E\x01\x09\x04ÿ\xFFFFNon ho visto passare nessuno...\x0E\x01\n\x04\x09Í\nMagari è passata da lassù?")
/*<105>*/ 	set_camera(-1, 0)
/*<158>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 4103), ('next', 55), ('param3', 13)])
/*< 55>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Uff... ... ...\x0E\x01\x04\x02\x14\nSe solo qualcuno\nli mandasse via!")
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
/*<  5>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Grazie! Grazie mille!\nSei proprio forte!\n\n\n\x0E\x01\x09\x04ÿ\xFF0BNoi <b<Mogma>>, nonostante le apparenze,\nabbiamo uno spiccato senso dell'onore\ne conosciamo la gratitudine...\n\nCome posso ricompensarti?\n[1]Proseguo[2]Rupie!")
/*<132>*/ 		switch (choice(2)) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Certo, certo... stai cercando\nla tua amica...\n\n\n\x0E\x01\x09\x04\x09\x809Allora ecco, ti do questi.\nSono utilissimi!")
/*<316>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 6), ('param3', 42)])
/*<  6>*/ 			give_item(56 0x38);
/*<  7>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Con questi puoi anche arrivare\nlassù!\x0E\x01\n\x04\x0BÍ\nProva a scavare lì!")
/*<109>*/ 			set_camera(-1, 0)
          			flw_137:
/*<137>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Spero proprio che la tua amica\nnon sia stata catturata da quei\ntipi rossi!")
/*<318>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          		  case 1:
/*<159>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 3599), ('next', 134), ('param3', 13)])
/*<134>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Cosa?!?!?! Vuoi delle\nrupie?! Ma sei sicuro?\n\n\n\x0E\x01\x09\x04\x15\x1204\x0E\x01\x08\x02\xFFCDCerto, mi è stato d'aiuto, ma delle rupie\nmi pare troppo...\x0E\x01\x04\x02\x14 mmh... gli darò\nqualcos'altro!\n\n\x0E\x01\x09\x04\x14\x12FFEcco... dunque...~~~\nSono un po' al verde per ora...\n\n\n\x0E\x01\x09\x04\x11\x809Ma tu... non avevi detto che\nstavi cercando un'amica?\nAllora, ti darò questi!")
/*<317>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 135), ('param3', 42)])
/*<135>*/ 			give_item(56 0x38);
/*<136>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Con questi puoi anche arrivare\nlassù!\x0E\x01\n\x04\x0BÍ\nProva a scavare lì!")
/*<138>*/ 			set_camera(-1, 0)
/*<160>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 2048), ('next', 139), ('param3', 13)])
/*<139>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x08\x02\xFFCDIo non me ne faccio più niente...\nme ne separo più volentieri che\ndalle rupie!")
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
/*<141>*/ 	printf(/* textboxtype: 1, unk: 1 */ "Pazzesco!!! ~~~\nLi hai fatti fuori tutti!~~~")
/*<335>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 42)])
          }

          void entrypoint_300_04() {
/*<  8>*/ 	start()
/*<321>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 323), ('param3', 33)])
/*<323>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 14), ('param3', 17)])
/*< 14>*/ 	switch (scene_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<  9>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Ti auguro di trovare presto\nla tua amica, sana e salva!")
          	  case 1:
/*<110>*/ 		switch (loadzone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
/*<111>*/ 			switch (loadzone_temp_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*<113>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Se <r<quello con il cappello blu>>\nsuona il corno, arrivano i rinforzi\na frotte! Che si può fare?!")
          			  case 1:
/*<331>*/ 				switch (loadzone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<332>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x809Credo proprio che tu li abbia\nfatti arrabbiare... e non poco!\n\n\n\x0E\x01\x09\x04ÿ\xFFFFOcchio! Il loro capo,\nquello col <r<cappello blu>><pling>, <r<chiama\ni rinforzi col suo corno>>! E quelli\narrivano subito e non finiscono mai!")
          					flw_114:
/*<114>*/ 					loadzone_temp_flags[18 /* 0x3 04 */] = true;
          				  case 1:
/*<112>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x80ECosa? Vuoi davvero\nscacciarli?\n\n\n\x0E\x01\x09\x04\x15\x1200Mmh, tanto se ne sono già\naccorti che sei nei paraggi, quindi\ntanto vale affrontarli.\n\n\x0E\x01\x09\x04ÿ\xFF00Però occhio! Il loro capo,\nquello col <r<cappello blu>><pling>, <r<chiama\ni rinforzi col suo corno>>! Quelli\narrivano subito e non finiscono mai!")
          					goto flw_114
          				}
          			}
          		  case 1:
/*< 15>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Senti, se non hai\nniente di meglio da fare\nperché non li scacci tu?\n\x0E\x01\x09\x04\x14\x1209No, lascia perdere...")
          		}
          	}
          }

          void entrypoint_300_21() {
/*<184>*/ 	start()
/*<193>*/ 	switch (scene_flags[65 /* 0x9 02 */]) {
          	  case 0:
/*<194>*/ 		switch (scene_flags[97 /* 0xD 02 */]) {
          		  case 0:
/*<196>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Come ti dicevo, i <y<fiori bomba\n>>funzionano proprio come le giare:\ncon (A) puoi <g<raccoglierli o lasciarli>>.\n\nUna volta raccolto, <g<inclina >>il\ntelecomando <g<verso l'alto >>e <g<dai un colpo\nsecco >>per <g<lanciarlo>>...\n\nPuoi anche <g<inclinare >>il telecomando\n<g<verso il basso >>e <g<dare un colpo secco \n>>per <g<farlo rotolare>>...\nProva con i <y<fiori bomba >>laggiù!")
          		  case 1:
/*<195>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\xD11Ma...? Non hai un\n<y<portabombe>>?\n\n\n<y<\x0E\x01\x09\x04\x11\xDFF>>Senza <y<portabombe >>non puoi\nraccogliere i <y<fiori bomba >>e\nportarli con te. Tutti i <b<Mogma\n>>ne hanno uno!\n\x0E\x01\x09\x04ÿ\xFFFF...\x0E\x01\x04\x02\x14 Perché mi\nfissi in quel modo?!\n\n\n\x0E\x01\x09\x04\x14\x1209Non ci pensare nemmeno!\nNon te lo do il mio! Accontentati\ndi far scoppiare le rocce vicine!")
/*<197>*/ 			scene_flags[4 'Eldin Volcano'][97 /* 0xD 02 */] = true;
          		}
          	  case 1:
/*<185>*/ 		printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x15\xD11Mmh?! Credo di non averti\nmai visto...\n\n\nAH! \x0E\x01\x09\x04\x11\xD12Non sarai mica un amico\ndi quei tipi rossi?!\n[1]No![2]Tipi rossi?")
/*<186>*/ 		switch (choice(2)) {
          		  case 0:
/*<187>*/ 			printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04ÿ\xFF07Ah... meglio così...~~~\nIn effetti, non vi somigliate molto...\n\n\n\x0E\x01\x09\x04\x15\xFF00Sei venuto a prendere\nquei <y<fiori bomba>>?\n[1]Che sono?![2]Esatto!")
          			flw_189:
/*<189>*/ 			switch (choice(2)) {
          			  case 0:
/*<190>*/ 				printf(/* textboxtype: 1, unk: 0 */ "<y<\x0E\x01\x09\x04ÿ\xFF00>>Non sai cosa sono i <y<fiori bomba>>?!\n\x0E\x01\n\x04\x11ÍGuarda! Sbocciano anche lì!")
/*<201>*/ 				set_camera(-1, -1)
/*<198>*/ 				printf(/* textboxtype: 1, unk: 1 */ "Sono dei fiori pericolosi che,\nquando li raccogli con (A),\nsi innescano e poi scoppiano!\n\n\x0E\x01\x09\x04\x11\x80BSe impari a usarli a dovere,\npossono essere un'arma formidabile!\nNon a caso li usiamo anche noi <b<Mogma>>!\n\n\x0E\x01\x09\x04ÿ\xFFFFProprio come le giare, li puoi\n<g<lanciare >>o <g<far rotolare>>...\nProva con i <y<fiori bomba\n>>lì vicino!\n\x0E\x01\x06\x02\xFFCD... ... ...~~~\x0E\x01\x06\x02Í\n\x0E\x01\x09\x04\x11\xD11Che? Non sai nemmeno\n<g<come far rotolare >>qualcosa?\n[1]Lo so[2]Non lo so")
          				flw_283:
/*<283>*/ 				switch (choice(2)) {
          				  case 0:
/*<284>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x809Immaginavo... per <g<lanciare>> devi\n<g<inclinare verso l'alto >>il telecomando\ne poi<g< dare un colpo secco>>.\n\nPer <g<far rotolare>>, devi <g<inclinarlo verso\nil basso e dare un colpo secco>>.\nNaturale, no?\n")
          					flw_192:
/*<192>*/ 					scene_flags[4 'Eldin Volcano'][65 /* 0x9 02 */] = true;
          				  case 1:
/*<285>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\x1215Certo che non sai proprio niente...~~~\nE va bene, significa che\nti dirò tutto io...\n\n\x0E\x01\x09\x04\x09\x8FF<g<Inclina verso l'alto >>il telecomando\ndopo aver preso un <y<fiore bomba>>! \n\n\nComparirà la traiettoria, quindi\npotrai lanciarlo <g<dando un colpo \nsecco verso il basso>>!\n\nAl contrario, se <g<inclini verso il basso\n>>il telecomando e, una volta comparsa\nla traiettoria, <g<dai un colpo secco \nverso l'alto>>, lo farai rotolare!\n<r<\x0E\x01\x09\x04\x11\x8FF>>Puoi lanciarlo su <r<un posto alto\n>>o farlo rotolare in <r<posti lontani\no stretti>>! Utile, no?")
          					goto flw_192
          				}
          			  case 1:
/*<191>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x20BBene, allora!\nQuelli che trovi qui sono\nparticolarmente potenti!\n\n\x0E\x01\x09\x04ÿ\xFFFF\x0E\x01\n\x04\x11ÍGuarda! Ne crescono anche lì!\nPrendine pure quanti ne vuoi!")
/*<200>*/ 				set_camera(-1, -1)
/*<199>*/ 				printf(/* textboxtype: 1, unk: 1 */ "Penso tu sappia che con (A) li\npuoi raccogliere, si innescano\ne dopo poco esplodono!\n\nProprio come le giare, li puoi\n<g<lanciare >>o <g<far rotolare>>!\nProva, su!\n\n\x0E\x01\x06\x02\xFFCD... ... ...~~~\x0E\x01\x06\x02Í\n\x0E\x01\x09\x04\x11\xD11Che? Non sai nemmeno\n<g<come far rotolare >>qualcosa?\n[1]Lo so[2]Non lo so...")
          				goto flw_283
          			}
          		  case 1:
/*<188>*/ 			printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04ÿ\xFF00Hai visto quei mostri armati\nfino ai denti?!\nUltimamente ne girano parecchi.\n\n\x0E\x01\x09\x04\x15\xFF07Beh, se non ne sai nulla, significa\nche non sono amici tuoi.\nMeglio così!\n\nSei venuto a prendere\nquei <y<fiori bomba>>?\n[1]Che sono?![2]Esatto!")
          			goto flw_189
          		}
          	}
          }

          void entrypoint_300_05() {
/*< 10>*/ 	start()
/*<116>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 17), ('next', 210), ('param3', 32)])
/*<210>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 162), ('param3', 33)])
/*<162>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 3075), ('next', 11), ('param3', 13)])
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Ehi, ehi, ehi, fermo là tu!\nSe ti vedo ancora da queste parti\nte la faccio pagare, capito?!")
/*<211>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 17), ('next', 302), ('param3', 33)])
/*<302>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4361), ('param2', 2062), ('next', 117), ('param3', 13)])
/*<117>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Ah, ma questo è diverso...~~~\n<b<Ferrinio>>, questo qui ti pare uno\ndei tipi rossi? No, vero?")
/*<212>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 118), ('param3', 33)])
/*<118>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x800Mah... a guardarlo bene...\nNo, non direi... però ci ha fatto\nprendere un colpo!\n\n\x0E\x01\x09\x04\x11\xD01Scusaci... è che di questi tempi\nabbiamo un po' di problemi con\ndei mostri che vogliono invadere\nil nostro territorio!\n\x0E\x01\x09\x04\x15\x800Perciò ho pensato di restare\nqui io,<b< Ferrinio>>, ad aspettarli\nper dar loro una lezione!")
/*<213>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 17), ('next', 164), ('param3', 33)])
/*<164>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4372), ('param2', 4629), ('next', 119), ('param3', 13)])
/*<119>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x08\x02\xFFCDSei bravo a parlare...\nma se stai ancora tremando!")
/*<165>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4353), ('param2', -1), ('next', 214), ('param3', 13)])
/*<214>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 163), ('param3', 33)])
/*<163>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 120), ('param3', 13)])
/*<120>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Comunque sia, se sei venuto\nin cerca di tesori, stai molto\nattento a quei tipi rossi!")
/*<312>*/ 	scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          }

          void entrypoint_300_22() {
/*<202>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BSignore, Faih a rapporto.\nDa questo punto in avanti la\ntemperatura è <r<estremamente\nelevata>>.\nProbabilità che i vostri vestiti\nprendano fuoco: 95%.\nVi raccomando prudenza.\n\nC'è la possibilità di sopravvivere\n<g<correndo>>, ma in tal caso suggerirei\ndi controllare prima la direzione con\nil <r<rilevatore>>.")
/*<209>*/ 	scene_flags[4 'Eldin Volcano'][101 /* 0xD 20 */] = true;
          }

          void entrypoint_300_06() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Oh, tu, prescelto dalla Dea...")
          }

          void entrypoint_300_23() {
/*<215>*/ 	start()
/*<216>*/ 	switch (temp_flags[33 /* 0x5 02 */]) {
          	  case 0:
/*<299>*/ 		switch (loadzone_temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<301>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Capito? Non andare in giro\na <g<fare capriole>>! Sollevi\nun sacco di polvere!")
          		  case 1:
/*<218>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Oh, eccoti di nuovo!\nNon fare caso a me,\nfai pure con comodo!\n\n\x0E\x01\x09\x04\x1011\xD0ECome? Non ti piace\nche sbuchi così all'improvviso?\nNon dire così...\n\n\x0E\x01\x09\x04\x1015\x809Anch'io ho bisogno\ndi prendere una boccata\nd'aria ogni tanto!\n\n\x0E\x01\x09\x04\x1009\x9FFFammi un favore, anche\nse sei pieno d'energia, non\nandare in giro a <g<fare capriole>>!")
/*<300>*/ 			loadzone_temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*<217>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Benvenuto nella mia dimora!\n\n\n\n\x0E\x01\x09\x04\x1011\x80ECosa c'è che non va nella mia casa?\n\n\n\n\x0E\x01\x09\x04\x1015\x80APer un po' l'hanno usata quei\ntipi rossi...\x0E\x01\x04\x02\x14 ma sono andati via,\nora ci sto io!\n\n\x0E\x01\x09\x04\x1009\x8FFNoi <b<Mogma >>viviamo sottoterra,\nnon abbiamo una vera e propria casa.\n\n\n\x0E\x01\x09\x04\x1015\x80DPer questo ho voluto provare\nl'ebbrezza di usare un saluto\nsimile!")
/*<219>*/ 		temp_flags[33 /* 0x5 02 */] = true;
          	}
          }

