          void entrypoint_113_33() {
/*<174>*/ 	start()
/*<177>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CEhi, giovanotto! Ma mancano\nle preziose <y<code di lucertola>>!\n\n\nSecondo gli antichi libri del nonno, \nle <y<code di lucertola>> si possono ottenere\nda mostri simili alle lucertole.")
/*<178>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<176>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 175), ('param3', 12)])
/*<175>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_34() {
/*<179>*/ 	start()
/*<182>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CEhi, giovanotto!\nMa manca il prezioso <y<metallo di Oldin>>!\n\n\nSecondo gli antichi libri del nonno, \nil <y<metallo di Oldin >>si può estrarre dalle\nprofondità della montagna di fuoco.")
/*<187>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<181>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 180), ('param3', 12)])
/*<180>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_35() {
/*<183>*/ 	start()
/*<241>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*<242>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CEhi, giovanotto!\nMa mancano i preziosi <y<fiori antichi>>!\n\n\nSecondo i testi antichi, i <y<fiori antichi\n>>fioriscono in territori sabbiosi, dai\ntempi più remoti. Li abbiamo usati per\nriparare Salbot.")
          		flw_188:
/*<188>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<185>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 184), ('param3', 12)])
/*<184>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          	  case 1:
/*<186>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CEhi, giovanotto!\nMa mancano i preziosi <y<fiori antichi>>!\n\n\nSecondo i testi antichi, i <y<fiori antichi>>,\ndai tempi più remoti, fioriscono in\nterritori sabbiosi. Mi chiedo se esistano\ndavvero!")
          		goto flw_188
          	}
          }

          void entrypoint_113_01() {
          	start()
/*< 92>*/ 	switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          	  case 0:
/*< 93>*/ 		printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x03Ehi! Giovane!\nCome sta Salbot? \nHai qualcosa da potenziare?\n[1]Potenzia[2]Ripara[3-]Niente")
          		flw_4:
/*<  4>*/ 		switch (choice(3)) {
          		  case 0:
/*< 31>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<  2>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Benissimo!\nMa al momento posso potenziare\nsolo questi strumenti!")
/*<  5>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          			  case 1:
/*< 32>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CEhi! Giovanotto! Ma non hai nessuno\nstrumento da potenziare...\nperché non vai alla bottega degli arnesi\na comprarne qualcuno?")
          			}
          		  case 1:
/*< 69>*/ 			switch (context_related2(2)) {
          			  case 0:
/*< 68>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Vuoi che ripari questo scudo?")
/*< 71>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', -1), ('param3', 33)])
          			  case 1:
/*< 70>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CMa come?\nNon hai nessuno scudo da riparare?\n\n\nUn po' di rispetto per le\npersone più grandi, giovanotto!")
          			}
          		  case 2:
/*<  3>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CE allora perché sei qui?")
          		}
          	  case 1:
/*< 54>*/ 		switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          		  case 0:
/*< 51>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1104Allora, ti affido il mio <b<Salbot>>!\nSai, è in grado di rilevare le onde\ncerebrali emesse dagli umani...\n\n\x0E\x01\x09\x04\x08\x700Questo significa che sa \nraggiungerti ovunque tu sia!\nL'unico problema è che a volte\nè un po' maleducato...\nMa tu porta pazienza e vedrai che\nfarà quello che gli chiedi!\n\x0E\x01\x04\x02\x1EMa ho parlato troppo!")
/*< 55>*/ 			printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x07\x700Allora, vuoi che ti\npotenzi qualcosa?\nO ti riparo lo scudo?\n[1]Potenzia[2]Ripara[3-]Niente")
          			goto flw_4
          		  case 1:
/*< 33>*/ 			switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          			  case 0:
/*< 39>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 40), ('param3', 31)])
/*< 40>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Ehi! Giovane!\nChe succede? Hai l'aria\nda cane bastonato...\n\nAh? Volevi chiedermi\nqualcosa?\n[1]Sì[2-]No, niente")
/*< 41>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          					  case 0:
/*< 38>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Per far funzionare\n<b<Salbot>> serve il <y<fiore antico>>!\nMa non ho idea di dove trovarlo...\n[1]Eccolo![2-]Neanch'io")
          						flw_84:
/*< 84>*/ 						switch (choice(2)) {
          						  case 0:
/*< 85>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x717Cosa?\nTu ce l'hai?! È fantastico!!!")
/*< 34>*/ 							switch (context_related2(1)) {
          							  case 0:
/*< 35>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CTu\x0E\x01\x06\x02\xFDCD...\x0E\x01\x06\x02Í\nFai finta di averlo e poi non ce l'hai!")
/*< 37>*/ 								story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
          							  case 1:
/*< 98>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 101), ('param3', 47)])
/*<101>*/ 								set_camera(4, 0)
/*<100>*/ 								OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 3), ('param2', 356), ('next', 99), ('param3', 15)])
/*< 99>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 42), ('param3', 48)])
/*< 42>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x18Ah... questo sarebbe il <y<fiore antico>>?!\nMa è vero! Dalle radici esce una\nspecie di olio!\n\nAdesso possiamo riparare <b<Salbot>>!\n\n\n\n\x0E\x01\x09\x04\x07\x700Aspetta un attimo... mi metto\nsubito all'opera!")
/*<112>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', 61), ('param3', 42)])
/*< 61>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', -1), ('param3', 33)])
          							}
          						  case 1:
/*< 86>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\x916Uhm... Neanche tu ne sai qualcosa...?\nChe sarà mai questo <y<fiore antico>>...?")
/*< 91>*/ 							story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
/*<158>*/ 							loadzone_temp_flags[3 /* 0x1 08 */] = false;
          						}
          					  case 1:
/*< 52>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x1008Eh? \x0E\x01\x04\x02(Il robot del nonno?\n\n\n\n\x0E\x01\x09\x04\x00\xE00Questa dev'essere un'altra delle\ntue battute... sei venuto qui\nper scherzare?\n\nFai sul serio?\x0E\x01\x04\x02(\nTi serve per ripescare una cosa che\nti è caduta al di sotto delle nuvole?\n\n\x0E\x01\x09\x04\x07\x700Allora anche tu credi alle storie\ndel nonno?!")
/*< 53>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x900Mi fa piacere che qualcun altro\nci creda, però non posso aiutarti.\nSai, è il robot di mio nonno...")
/*< 94>*/ 						set_camera(3, 0)
/*< 95>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Eccolo!\n\n\n\nSi chiama <b<Salbot>>. È un po'\nrudimentale, ma...\n\n\nÈ un robot fantastico! Quando lo\nchiami ti raggiunge ovunque e\ntrasporta per te qualsiasi cosa.\n\nPerò\x0E\x01\x06\x02\xFFCD...\x0E\x01\x06\x02Í come vedi non è proprio\nin forma.")
/*< 96>*/ 						set_camera(-1, 0)
/*< 97>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\xE00Secondo il nonno andrebbe lubrificato\ncon l'estratto di un fiore,\nil <y<fiore antico>>.\n\n\x0E\x01\x09\x04\x0F\xE00Ma io qui non ho mai\nsentito parlare di una cosa simile...\n[1]Tieni[2-]Neanche io")
          						goto flw_84
          					}
          				  case 1:
          					flw_25:
/*< 25>*/ 					loadzone_temp_flags[4 /* 0x1 10 */] = false;
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x01Ehi! Questa è l'officina! Posso\npotenziare i tuoi strumenti!!!\nIl tuo scudo non ha un bell'aspetto?\nCi sono io qui a ripararlo!\nAllora, procedo?\n[1]Potenzia[2]Ripara[3-]Niente")
          					goto flw_4
          				}
          			  case 1:
          				goto flw_25
          			}
          		}
          	}
          }

          void entrypoint_113_36() {
/*<189>*/ 	start()
/*<192>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CEhi, giovanotto! Ma mancano\nle preziose <y<magatama ambrate>>!\n\n\nSecondo gli antichi libri del nonno, \nle <y<magatama ambrate>> sono importanti\ntesori che si possono trovare per terra,\nnei posti più disparati.")
/*<193>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<191>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 190), ('param3', 12)])
/*<190>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_02() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x806Benissimo! Allora vuoi procedere\nal potenziamento? Ma ti avverto che\nle modifiche sono permanenti!\n[1]Potenzia[2-]No grazie")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
/*<128>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 10), ('param3', 33)])
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x70EOttimo!\nAbbi solo un po' di pazienza!")
/*<102>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 12), ('param3', 12)])
/*< 12>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 14), ('param3', 33)])
/*< 14>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x809Ecco fatto! Tieni!")
/*< 26>*/ 		loadzone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 11>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE05Ma stai scherzando?\nÈ in condizioni pessime!\n\n\nScegli qualcos'altro.")
/*<103>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 18), ('param3', 12)])
/*< 18>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          	}
          }

          void entrypoint_113_37() {
/*<194>*/ 	start()
/*<197>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CEhi, giovanotto! Ma mancano\nle preziose <y<magatama scure>>!\n\n\nSecondo gli antichi libri del nonno, \nle <y<magatama scure >>si trovano forse\nnei mondi spirituali... Ma non sono\nsicuro di cosa questo significhi.")
/*<198>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<196>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 195), ('param3', 12)])
/*<195>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_03() {
/*<  9>*/ 	start()
/*<104>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 27), ('param3', 12)])
/*< 27>*/ 	switch (loadzone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 28>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x800Oh... Grazie!\nTorna di nuovo!\x0E\x01\x09\x04\x00\x02")
/*<123>*/ 		story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
          		flw_143:
/*<143>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
/*<149>*/ 			switch (story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */]) {
          			  case 0:
          			  case 1:
/*<145>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 144), ('param3', 51)])
/*<144>*/ 				printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BMio signore, Faih a rapporto.\nLa potenza della vostra spada è \naumentata. È ora possibile\n<r<rilevare >><r<tesori>>.\nImpostazioni del <r<rilevatore>>\nper la ricerca di <r<tesori>>\neffettuate. Potete servirvene\na vostro piacimento.")
/*<146>*/ 				story_flags[102 /* us: 805A9ADE 0x08, jp: 805ACD5E 0x08 */] = true;
/*<157>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 18), ('next', 147), ('param3', 56)])
/*<147>*/ 				story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */] = true;
/*<148>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 36)])
          			}
          		  case 1:
          		}
          	  case 1:
/*< 13>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x90DCosa? Già te ne vai?\nAvevo appena cominciato!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Pazienza...\nTorna quando vuoi, giovanotto!\x0E\x01\x09\x04\x00\x02")
          		goto flw_143
          	}
          }

          void entrypoint_113_20() {
/*< 58>*/ 	start()
/*< 60>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x12\x04\x00e\x0E\x01\x09\x04\x00\x0FUff!\n\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\nEcco fatto!\x0E\x01\x05\x04\x1E\x00")
          }

          void entrypoint_113_38() {
/*<199>*/ 	start()
/*<202>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CEhi, giovanotto! Ma mancano\nle preziose <y<gelatine spettrali>>!\n\n\nSecondo gli antichi libri del nonno, \nle <y<gelatine spettrali >>si possono ottenere\ndai mostri soffici...")
/*<207>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<201>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 200), ('param3', 12)])
/*<200>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_04() {
/*< 15>*/ 	start()
/*<152>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Se vuoi potenziare qualche\naltra cosa, basta che me lo dici!")
/*< 17>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          	  case 1:
/*<151>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Ma non hai nulla da potenziare!\nPazienza, torna un'altra volta!")
          	}
          }

          void entrypoint_113_21() {
/*< 59>*/ 	start()
/*<111>*/ 	set_camera(5, 0)
/*< 62>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 22), ('next', 63), ('param3', 32)])
/*< 63>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 0), ('next', 43), ('param3', 16)])
/*< 43>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x161A\x200Grazie!\nMi sento proprio in forma!\nPosso trasportare qualsiasi cosa!")
/*<118>*/ 	set_camera(8, 0)
/*<119>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 100), ('next', 113), ('param3', 16)])
/*<113>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x04\x02\x1E\x0E\x01\x09\x04\x160C\x900Cosa?!\x0E\x01\x04\x02\x1E\nMa chi è questo tizio tutto verde? Bzzz!")
/*<120>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 22), ('next', 44), ('param3', 50)])
/*< 44>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x110AHai sentito? Ha parlato!\nAllora funziona!\n\n\nQuesto ragazzo mi ha trovato quello\nche serviva per la riparazione!\nRingrazialo!")
/*< 64>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 100), ('next', 45), ('param3', 16)])
/*< 45>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x160B\x900Mah... questo qui?\nBzzz...\n\n\n\x0E\x01\x09\x04\x160C\x900Beh, allora mi sa che devo proprio\nringraziarlo. Grazie tizio verdino!")
/*< 65>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 22), ('next', 46), ('param3', 50)])
/*< 46>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x952Ehi! Modera i termini quando ti\nrivolgi a chi ti ha salvato la vita!\n\n\n\x0E\x01\x09\x04\x07\x700Comunque... questo ragazzo ha\nbisogno di aiuto per trasportare\ndelle cose... perché non ci\npensi tu?")
/*< 66>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 100), ('next', 47), ('param3', 16)])
/*< 47>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x160B\x900Mah... Sarà pure il mio salvatore,\nma oggi non sono in vena di\nringraziamenti!\n\n\x0E\x01\x09\x04\x160C\x900E ho troppo da fare per prendere\nordini da un bambino! Bzzz!")
/*< 56>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 45), ('param2', 0), ('next', 114), ('param3', 51)])
/*<114>*/ 	set_camera(6, 0)
/*< 67>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 100), ('next', 48), ('param3', 16)])
/*< 48>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x01Mio signore, Faih a rapporto.\n\n\n\nÈ possibile utilizzare il <pling><r<rilevatore\n>>per individuare l'<r<elica del mulino>>.")
/*<136>*/ 	story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<137>*/ 	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<138>*/ 	story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<139>*/ 	story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<140>*/ 	story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<141>*/ 	story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<155>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 12), ('next', 154), ('param3', 56)])
/*<154>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<156>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Confermo l'impossibilità di metterla\nnella borsa e riportarla a Oltrenuvola.")
/*<125>*/ 	set_camera(11, 0)
/*<130>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 22), ('next', 115), ('param3', 17)])
/*<115>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 3), ('next', 49), ('param3', 50)])
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x161A\x200Eh?!\n\x0E\x01\x09\x04\x160E\x200... Oh?!")
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x160E\x200Ma tu... Bzzz...\nTu sei... Faih?! La mia adorata Faih?\nHai bisogno di qualcosa?")
/*<116>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x160C\x200Ho...\x0E\x01\x04\x02\x14 ho capito!\n\n\n\n\x0E\x01\x09\x04\x160E\x200Per te potrei muovere le montagne!\nPosso trasportare qualsiasi peso!\nBzzz!")
/*< 87>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x06\x02\xFCCD\x0E\x01\x12\x04\x00\x14... ...\x0E\x01\x06\x02Í")
/*<131>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 100), ('next', 88), ('param3', 16)])
/*< 88>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x01Mio signore.\n\n\n\nÈ stato trovato un espediente per\nriportare l'elica dalla Terra\na Oltrenuvola.\n\nÈ ora possibile iniziare la ricerca\ndell'<b<elica del mulino>>.")
/*< 57>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 90), ('param3', 36)])
/*< 90>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 100), ('next', 127), ('param3', 16)])
/*<127>*/ 	set_camera(11, 0)
/*< 89>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x160C\x200Signore verde!\nAspetta! Ti aiuto!  \nHo rilevato le onde di Faih! Bzzz! Bzzz!\n\n\x0E\x01\x09\x04\x160E\x200Se hai bisogno di qualcosa, dì a Faih di\nchiamarmi. Arriverò subito!")
/*< 50>*/ 	story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */] = true;
/*<135>*/ 	set_camera(8, 0)
/*<150>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 134), ('param3', 50)])
/*<134>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Uhm... \nVuoi recuperare una cosa caduta al di\nsotto delle nuvole, ma come pensi di\ntrovarla? \nMi sa che ti conviene fare un salto\ndall'<r<indovino>>...\n\n\nHa una faccia poco raccomandabile,\nma ha fiuto nel ritrovare gli\noggetti smarriti!")
/*<117>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 142), ('param3', 42)])
/*<142>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<153>*/ 	loadzone_temp_flags[3 /* 0x1 08 */] = false;
          }

          void entrypoint_113_39() {
/*<203>*/ 	start()
/*<206>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CEhi, giovanotto! Ma mancano\ni preziosi <y<artigli di mostro>>!\n\n\nSecondo gli antichi libri del nonno, \ngli <y<artigli di mostro >>si possono ottenere\ndai mostri volanti... Qui la sera ne\nvolano parecchi.")
/*<239>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<240>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\xE11Uhmmm... Per la verità, ultimamente\ndi notte si sta abbastanza tranquilli.")
          		flw_208:
/*<208>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<205>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 204), ('param3', 12)])
/*<204>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          	  case 1:
          		goto flw_208
          	}
          }

          void entrypoint_113_05() {
/*< 19>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CEhi! Giovanotto! Ma i tesori?\nNon posso mica apportare delle\nmodifiche con... niente! \n\n\x0E\x01\x09\x04\x07\x700Non hai un altro strumento\nda potenziare?")
/*<105>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 24), ('param3', 12)])
/*< 24>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_06() {
/*< 20>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CEhi! Giovanotto! Le tue rupie non sono\nsufficienti... niente\npotenziamento!\n\n\x0E\x01\x09\x04\x07\x700Se vuoi potenziare qualcos'altro\nfammelo sapere!")
/*<106>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 23), ('param3', 12)])
/*< 23>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_40() {
/*<209>*/ 	start()
/*<212>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CEhi, giovanotto! Ma mancano\ni preziosi <y<corni di mostro>>!\n\n\nSecondo gli antichi libri del nonno, \ni <y<corni di mostro >>si possono ottenere\nin qualche modo dai mostri che\nsuonano il corno...")
/*<213>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<211>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 210), ('param3', 12)])
/*<210>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_07() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CEhi! Giovanotto! Ma non hai nessuno\nstrumento da potenziare...\nperché non vai alla bottega degli arnesi\na comprarne qualcuno?")
          }

          void entrypoint_113_41() {
/*<214>*/ 	start()
/*<217>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CEhi, giovanotto! Ma mancano\ni preziosi <y<teschi ornamentali>>!\n\n\nSecondo gli antichi libri del nonno, \ni <y<teschi ornamentali >>si possono\nottenere da mostri dotati di lance o\narmi simili...")
/*<218>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<216>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 215), ('param3', 12)])
/*<215>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_08() {
/*< 72>*/ 	start()
/*< 77>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 73), ('param3', 12)])
/*< 73>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x800Benissimo!\nVuoi riparare questo scudo?\nTi costerà <r<10 rupie>>!\n[1]Va bene[2-]No, grazie")
/*< 74>*/ 	switch (choice(2)) {
          	  case 0:
/*< 81>*/ 		switch (has_rupees(10)) {
          		  case 0:
/*< 83>*/ 			rupees += -10;
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x70EOttimo!\nAbbi solo un po' di pazienza!")
/*<132>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 121), ('param3', 12)])
/*<121>*/ 			story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = true;
/*< 79>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 80), ('param3', 33)])
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x809Ecco fatto! Tieni!")
          		  case 1:
/*< 82>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CEhi! Giovanotto! Non hai rupie a\nsufficienza! Incredibile!\nPrima di tornare, datti al risparmio!")
          		}
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Ah... hai cambiato idea?\nQualche altro scudo da riparare?")
/*<133>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 76), ('param3', 12)])
/*< 76>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', -1), ('param3', 33)])
          	}
          }

          void entrypoint_113_42() {
/*<219>*/ 	start()
/*<222>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CEhi, giovanotto! Ma mancano\ni preziosi <y<cristalli demoniaci>>!\n\n\nSecondo gli antichi libri del nonno, \ni <y<<y<cristalli demoniaci<y< >>si possono\nottenere sconfiggendo mostri delle\ntenebre...")
/*<227>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<221>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 220), ('param3', 12)])
/*<220>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_09() {
/*<124>*/ 	start()
/*<122>*/ 	story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
/*<107>*/ 	switch (context_related2(2)) {
          	  case 0:
/*<108>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x800Ehi!\nVuoi che ti ripari\nun altro scudo?")
/*<110>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', -1), ('param3', 33)])
          	  case 1:
/*<109>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x800Ehi! \nMa non hai scudi da riparare!\nAlla prossima!")
          	}
          }

          void entrypoint_113_43() {
/*<223>*/ 	start()
/*<226>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CEhi, giovanotto! Ma mancano\nle preziose <y<piume azzurre>>!\n\n\nSecondo gli antichi libri del nonno, \nle <y<piume <y<azzurre <y<>>si possono ottenere\ncatturando con il retino rari uccellini \nblu, in territori dove c'è molto verde.")
/*<228>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<225>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 224), ('param3', 12)])
/*<224>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_44() {
/*<229>*/ 	start()
/*<232>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CEhi, giovanotto! Ma mancano\ni preziosi <y<teschi dorati>>!\n\n\nSecondo gli antichi libri del nonno, \ni <y<<y<teschi dorati<y< >>sono teschi ornamentali\nche rilucono come oro e sono assai\ndifficili da trovare...")
/*<233>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<231>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 230), ('param3', 12)])
/*<230>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_45() {
/*<234>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CEhi, giovanotto! Ma mancano\nle preziose <y<ciglia della Dea>>!\n\n\nSecondo gli antichi libri del nonno, \nle <y<<y<ciglia della Dea<y< >>sono oggetti assai\npreziosi e difficilissimi da trovare...")
/*<238>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<236>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 235), ('param3', 12)])
/*<235>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_30() {
/*<159>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CEhi, giovanotto!\nMa mancano le preziose <y<larve d'ape>>!\n\n\nSecondo gli antichi libri del nonno, \nle <y<larve d'ape>> possono essere catturate\nnegli alveari delle api, in territori\ndove c'è molto verde.")
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<161>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 160), ('param3', 12)])
/*<160>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_31() {
/*<163>*/ 	start()
/*<166>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CEhi, giovanotto! Ma mancano\nle preziose <y<piume d'uccello>>!\n\n\nSecondo gli antichi libri del nonno, \nle <y<piume d'uccello>> si possono ottenere\ncatturando con il retino piccoli uccelli,\nin territori dove c'è molto verde.")
/*<168>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<165>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 164), ('param3', 12)])
/*<164>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_32() {
/*<169>*/ 	start()
/*<172>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CEhi, giovanotto!\nMa mancano i preziosi <y<rotolacampo>>!\n\n\nSecondo gli antichi libri del nonno, \ni <y<rotolacampo>> sono grumi di erbe che\nrotolano in territori sabbiosi e possono\nessere catturati con il retino.")
/*<173>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<171>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 170), ('param3', 12)])
/*<170>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

