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
/*< 28>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02<y<10 frecce>> sono sempre un ottimo\nacquisto, secondo me! E sono anche un\nottimo corredo per la divisa di un\navventuriero.\nTuttavia, stia ben attento a non\nscagliarle per sbaglio contro la gente.\nFanno <r<20 rupie>>.\n[1]Le compro[2-]Non\nle compro")
/*< 21>*/ 		switch (choice(2)) {
          		  case 0:
/*< 23>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 26)])
          		  case 1:
/*< 22>*/ 			entrypoint_101_08();
          		}
          	  case 1:
/*< 27>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Mi scusi, signore. Purtroppo non posso\nvenderle questo articolo dal momento\nche lei non possiede ancora un arco.\nTemo che queste siano le regole.")
          	}
          }

          void entrypoint_101_32() {
/*< 36>*/ 	start()
/*< 65>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 32), ('param3', 12)])
/*< 32>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 92), ('param2', 1), ('next', 31), ('param3', 23)])
/*< 31>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 8)])) {
          	  case 0:
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Aaah! Vedo che ha messo gli occhi su\n<y<10 bombe>>. Con queste armi nel suo\narsenale il signore sarà davvero\ntemibile!\nSono ottime per abbattere intere\npareti con una sola esplosione.\n\n\nCostano <r<20 rupie>>.\nChe cosa ne dice?\n[1]Le compro[2-]Non\nle compro")
          		flw_33:
/*< 33>*/ 		switch (choice(2)) {
          		  case 0:
/*< 35>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 26)])
          		  case 1:
/*< 34>*/ 			entrypoint_101_08();
          		}
          	  case 1:
/*< 38>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Mi scusi, signore. Purtroppo non posso\nvenderle questo articolo perché lei non\npossiede ancora un portabombe.\n\nLa prego di accettare le mie scuse,\nsignore.")
          	}
          }

          void entrypoint_101_33() {
/*< 46>*/ 	start()
/*< 66>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 47), ('param3', 12)])
/*< 47>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Aaah. Quello è uno <y<scudo di legno>>.\nEquipaggiandolo sarà in grado\ndi respingere gli attacchi!\n\nTuttavia, se lo scudo subisce troppi\ndanni, <r<si romperà>>, quindi le consiglio\ndi utilizzarlo con cautela.\n\nUn altro dettaglio è che questo tipo di\nscudo è suscettibile al fuoco e si brucia\nfacilmente.\n\nIl prezzo è di <r<50 rupie>>.\nNe vuole acquistare uno?\n[1]Lo compro[2-]Non\nlo compro")
/*<125>*/ 	loadzone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_34() {
/*< 48>*/ 	start()
/*< 67>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 50), ('param3', 12)])
/*< 50>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Aaah. Quello è uno <y<scudo di ferro>>.\nOffre maggiore protezione rispetto\nalla versione in legno.\n\nInoltre, è refrattario e invulnerabile\nal fuoco. Il suo punto debole d'altra\nparte è l'elettricità: si aspetti di \nprendere delle belle scosse!\nIl prezzo è di <r<100 rupie>>.\nLo vuole acquistare?\n[1]Lo compro[2-]Non\nlo compro")
/*<126>*/ 	loadzone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_35() {
/*< 49>*/ 	start()
/*< 68>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 51), ('param3', 12)])
/*< 51>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Aaah. Quello è uno <y<scudo sacro>>.\nCome ci si può aspettare da ogni\noggetto \x201Csacro\", questo scudo è\ncapace di resistere a ogni attacco.\nSe subisce dei leggeri danni, può\nripararsi da solo e resiste a fuoco ed\nelettricità! Un vero gioiellino!\n\nPurtroppo\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í il suo difetto è la\nfragilità... D'altra parte il signore ha\ndi certo il talento necessario affinché\nquesto non rappresenti un problema!\nCosta <r<500 rupie>>.\nNe vuole acquistare uno?\n[1]Lo compro[2-]Non\nlo compro")
/*<127>*/ 	loadzone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_01() {
          	start()
/*< 40>*/ 	switch (loadzone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
          		flw_41:
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Aaah, un cliente.\nCome posso esserle utile, signore?\n[1]Spiegami [2-]Niente,\nper ora")
          		flw_1:
/*<  1>*/ 		switch (choice(2)) {
          		  case 0:
/*<  4>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Ma signore, per me è un piacere\npoter rispondere a ogni sua\ndomanda.\n\nSi metta di fronte a un prodotto e\ncon la semplice pressione del tasto (A)\npotrà esaminarlo a piacimento!\n\nE non si preoccupi, può prendere\nvisione di tutto senza impegno!")
/*<139>*/ 			switch (story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */]) {
          			  case 0:
/*<138>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Il signore ha anche a disposizione\nil servizio dell'officina nel caso\nvoglia potenziare e modificare\ngli oggetti acquistati qui.\nPer esempio, aumentando\nla resistenza degli scudi se ne\npossono godere i vantaggi più a\nlungo!")
/*<140>*/ 				loadzone_temp_flags[1 /* 0x1 02 */] = true;
          			  case 1:
          			}
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Aaah, ma certo! Ma certo!\nUn cliente esperto e ben informato\ncome lei non ha certo bisogno\ndella mia assistenza!\nBene, che ne dice di curiosare un\npo' tra i miei prodotti di qualità?")
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
/*<110>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Aaah, signore, lei è davvero fortunato\nperché oggi ho un <r<nuovo prodotto>>!\n\n\nIn offerta speciale per lei signore ho\nquesta <y<faretra piccola>>. Per gli amanti\ndel tiro con l'arco si tratta di un\naccessorio imprescindibile!\nLa prego, osservi più da vicino.")
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
/*<107>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Aaah, signore, lei è davvero fortunato\nperché oggi ho un <r<nuovo prodotto>>!\n\n\nQuesto <y<scudo sacro>> dovrebbe essere\nproprio quello che le serve.\nSi tratta di un oggetto tanto\nmeraviglioso quanto misterioso!\nMa la prego, lo esamini pure da vicino.")
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
/*<104>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Aaah, signore, lei è davvero fortunato\nperché oggi ho un <r<nuovo prodotto>> che\nfa al caso suo!\n\nCredo che lei saprà apprezzare questo\n<y<portabombe piccolo>>!\nMa prego, dia pure un'occhiata.")
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
/*< 94>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Aaah, signore, lei è proprio fortunato\nperché posso offrirle un <r<nuovo\nprodotto >>arrivato proprio oggi: lo\n<y<scudo di ferro>>!\nSi tratta di un'occasione eccezionale\nLa prego, dia un'occhiata.")
          								flw_95:
/*< 95>*/ 								loadzone_temp_flags[1 /* 0x1 02 */] = true;
/*<112>*/ 								scene_flags[0 'Skyloft'][120 /* 0xE 01 */] = true;
          							  case 1:
/*<124>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Aaah, signore. Lei è proprio fortunato\nperché oggi posso offrirle ben due\n<r<nuovi prodotti>>!\n\nSono appena arrivati lo <y<scudo di ferro>>\ne il <y<sacco per semi piccolo>>.\nLa prego, osservi pure.")
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
/*<122>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Aaah, signore, lei è davvero fortunato\nperché ho un <r<nuovo prodotto >>arrivato\nproprio oggi!\n\nCredo che le piacerà questo <y<sacco per\nsemi piccolo>>. Si tratta di un accessorio\nimprescindibile per chi usa molto la\nfionda.\nMa la prego, dia un'occhiata.")
/*<120>*/ 								loadzone_temp_flags[1 /* 0x1 02 */] = true;
/*<121>*/ 								scene_flags[0 'Skyloft'][124 /* 0xE 10 */] = true;
          							}
          						  case 1:
/*<  2>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Aaah, un cliente!\nBenvenuto signore! Benvenuto!\n\n\nBenvenuto alla bottega degli arnesi,\nil negozio più utile per l'avventuriero!\n\n\nLa prego, guardi la merce con calma,\nsicuramente troverà qualcosa di\ninteressante.\n\nE c'è anche un fantastico\nsconto per i cavalieri!\n\n\nE se desidera qualche informazione,\nnon esiti a chiedere!\n[1]Ho capito[2-]Va bene\x0E\x01\x07\x04\x00\x00")
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
/*< 55>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Vedo che lei è interessato a questi\n<y<10 semi Deku>>! Sono il proiettile\npreferito da ogni maestro di fionda.\n\nSe posso raccomandarglieli, sono\nprecisi e affidabili. Costano <r<20 rupie>>.\n[1]Li compro[2-]Non\nli compro")
          		goto flw_33
          	  case 1:
/*< 56>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Signore... a quanto pare lei non è in\npossesso di una fionda. Non posso certo\nvenderle questo prodotto se lei non\nha ancora una fionda...\nPerché non dà uno sguardo\nal resto della merce?")
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
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Questo è un <y<sacco per semi piccolo>>!\nLe basta alloggiarlo all'interno della\nsua borsa per poter trasportare 10 semi\nin più.\nÈ un accessorio fondamentale per\ntutti gli amanti della fionda!\nCosta <r<100 rupie>>.\n\nChe ne dice, signore?\n[1]Lo compro[2-]Non\nlo compro")
          		goto flw_33
          	  case 1:
/*< 82>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Signore... a quanto pare lei non è in\npossesso di una fionda. Non posso certo\nvenderle questo prodotto se lei non\nha ancora una fionda...\nPerché non dà uno sguardo\nal resto della merce?")
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
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Questa è una <y<faretra piccola>>!\nLe basta alloggiarla nella sua borsa per\npoter trasportare ben 5 frecce in più.\n\nÈ un acquisto obbligato per\nogni arciere che si rispetti!\n\n\nLe viene a costare <r<150 rupie>>.\nLa vuole acquistare?\n[1]La compro[2-]Non\nla compro")
          		goto flw_33
          	  case 1:
/*< 85>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Mi scusi, signore. Purtroppo non posso\nvenderle questo articolo dal momento\nche lei non possiede ancora un arco.\nTemo che queste siano le regole.")
          	}
          }

          void entrypoint_101_04() {
/*< 13>*/ 	start()
/*< 62>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 112), ('param2', 1), ('next', 63), ('param3', 23)])
/*< 63>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 18)])) {
          	  case 0:
/*< 14>*/ 		printf(/* textboxtype: 1, unk: 0 */ "La prego di perdonarmi, signore.\nPurtroppo lei non ha spazio a\nsufficienza nella sua borsa per questo\noggetto...\nPosso suggerirle di affidare qualcosa al\ndeposito?")
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
/*< 79>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Questo è un <y<portabombe piccolo>>!\nLe basta alloggiarlo nella sua borsa per\npoter trasportare ben 5 bombe in più.\n\nSe si trova spesso a corto di bombe,\ndeve assolutamente prenderlo!\n\n\nLe costa <r<150 rupie>>.\nChe dice, lo compra?\n[1]Lo compro[2-]Non\nlo compro")
          		goto flw_33
          	  case 1:
/*< 88>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Mi scusi, signore. Purtroppo non posso\nvenderle questo articolo perché lei non\npossiede ancora un portabombe.\n\nLa prego di accettare le mie scuse,\nsignore.")
          	}
          }

          void entrypoint_101_05() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 1, unk: 0 */ "La prego di perdonarmi, signore.\nTemo che lei abbia già la massima\nquantità consentita per questo\nprodotto.\nSe vuole però, può sempre valutare\nqualche altra mercanzia.")
/*<129>*/ 	loadzone_temp_flags[5 /* 0x1 20 */] = false;
          }

          void entrypoint_101_06() {
/*< 17>*/ 	start()
/*< 59>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 18), ('param3', 33)])
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x08Ehm...\x0E\x01\x05\x04\n\x00")
/*< 60>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6), ('param2', 512), ('next', 61), ('param3', 22)])
/*< 61>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Signore...\nLei, ehm, non possiede rupie a\nsufficienza per pagare...\n\nForse il signore potrebbe evitare di\nindulgere in giochetti così poco\nraffinati...?")
/*<130>*/ 	loadzone_temp_flags[5 /* 0x1 20 */] = false;
          }

          void entrypoint_101_07() {
/*< 19>*/ 	start()
/*< 57>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 512), ('next', 43), ('param3', 22)])
/*< 43>*/ 	switch (random(2)) {
          	  case 0:
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Aaah, la ringrazio.\nLei qui è sempre il benvenuto!")
          		flw_144:
/*<144>*/ 		switch (loadzone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*< 90>*/ 			switch (scene_flags[89 /* 0xA 02 */]) {
          			  case 0:
/*<132>*/ 				switch (story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */]) {
          				  case 0:
          					flw_70:
/*< 70>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Signore, se non le dispiace mi prendo la\nlibertà di riporre l'acquisto nella sua\nborsa.\n\nGli oggetti, come scudi o altro,\npossono essere <r<equipaggiati >>aprendo\nla borsa con <g<\x0E\x02\x04\x02\x2CD>> e selezionando\nl'oggetto desiderato!\x0E\x01\x11\x02\x2CD")
          					flw_137:
/*<137>*/ 					loadzone_temp_flags[5 /* 0x1 20 */] = false;
          				  case 1:
/*<134>*/ 					switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          					  case 0:
/*<135>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Signore, se nutre dubbi sulla\n<r<durevolezza del suo scudo>>, posso\nsuggerirle di far visita all'<r<officina>>?\n\nSe lei possiede tesori o altro, il\nproprietario sarà lieto di potenziarle\nlo scudo o altri strumenti.")
/*<133>*/ 						story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */] = true;
          						goto flw_137
          					  case 1:
          						goto flw_70
          					}
          				}
          			  case 1:
/*< 89>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Signore, se non le dispiace mi prendo la\nlibertà di riporre l'acquisto nella sua\nborsa. \n\nPer aprire la borsa tenga premuto \x0E\x02\x04\x02\x2CD\x0E\x01\x11\x02\x2CD,\n<g<punti >>il telecomando Wii verso lo\nschermo e muova il cursore <g<compiendo\nun cerchio>>.\nQuando avrà scelto l'oggetto che\nintende utilizzare, <g<rilasci >>\x0E\x02\x04\x02\x2CD per\nequipaggiarlo.\x0E\x01\x11\x02\x2CD\n\nIn questo modo le sarà possibile\nusare oggetti quali gli\nscudi senza difficoltà!")
/*< 91>*/ 				story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<116>*/ 				scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
/*<136>*/ 				loadzone_temp_flags[5 /* 0x1 20 */] = false;
          			}
          		  case 1:
          		}
          	  case 1:
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Aaah. Il cliente ha sempre ragione!")
          		goto flw_144
          	}
          }

          void entrypoint_101_08() {
/*< 29>*/ 	start()
/*< 44>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 58), ('param3', 33)])
/*< 58>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x08...\x0E\x01\x05\x04\x0F\x00")
/*< 45>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6), ('param2', 512), ('next', 30), ('param3', 22)])
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Non si preoccupi! Non c'è problema,\nsignore!\nHo tanti altri articoli per lei...\nGuardi pure con comodo!")
/*<131>*/ 	loadzone_temp_flags[5 /* 0x1 20 */] = false;
          }

