          void entrypoint_103_01() {
          	start()
/*< 77>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*< 78>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Non riesci ancora a sentire\nil tuo solcanubi?\nTranquillizzati e concentrati...\nVedrai che capirai come fare...")
          	  case 1:
/*<  1>*/ 		switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          		  case 0:
/*<  3>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Ehi, Link!\nHai trovato il solcanubi?\n\n\n\x0E\x01\x04\x02(Che? <b<Bado>> cosa?\nQuel ragazzaccio!\nNe facesse una giusta!")
/*< 79>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 71), ('param3', 32)])
/*< 71>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', -1), ('next', 72), ('param3', 16)])
/*< 72>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 73), ('param3', 17)])
/*< 73>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Direttore...\nSe fosse vero, allora\nforse potrebbe fare in tempo!\n\nPossiamo rimandare la cerimonia\ne comunque lui non potrebbe\nlamentarsene... In fondo è colpa sua!")
/*< 74>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 75), ('param3', 16)])
/*< 75>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Certamente... hai proprio ragione.\n\n\n\nLink, hai sentito?\nVai pure a cercare il tuo\nsolcanubi senza problemi!")
/*< 76>*/ 			scene_flags[0 'Skyloft'][92 /* 0xA 10 */] = true;
          		  case 1:
/*<  2>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Questo dovrà essere spiegato al\nmaestro <b<Cornelio>>~~~, Link!\nPotresti dirgli di raggiungermi\nnella mia stanza?\nPerché non dici anche agli altri\nstudenti del solcanubi?\nSaranno già tutti in piazza.")
          		}
          	}
          }

          void entrypoint_103_02() {
/*< 13>*/ 	start()
/*< 14>*/ 	scene_flags[0 'Skyloft'][5 /* 0x1 20 */] = true;
/*< 15>*/ 	scene_flags[0 'Skyloft'][6 /* 0x1 40 */] = true;
/*< 16>*/ 	scene_flags[0 'Skyloft'][1 /* 0x1 02 */] = true;
/*< 42>*/ 	scene_flags[0 'Skyloft'][67 /* 0x9 08 */] = true;
          }

          void entrypoint_103_03() {
/*< 67>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05È difficile credere a quello che mi\ncapita davanti agli occhi...\n\n\nMi chiedo cosa potrà mai accadere se\nfai quello che ti ha detto lei!?")
          }

          void entrypoint_103_06() {
/*< 17>*/ 	start()
/*< 63>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*< 82>*/ 		switch (loadzone_temp_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			flw_84:
/*< 84>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Io credo che tu incontrerai di\nnuovo Zelda!\n\n\nConto su di te, Link!")
/*< 83>*/ 			loadzone_temp_flags[19 /* 0x3 08 */] = true;
          		  case 1:
/*< 64>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Ehi, Link!\n\n\n\nMa che succede?!\x0E\x01\x04\x02\x1E\nLa Dea... L'Isola della Dea...\nÈ... scomparsa?!\n[1]Veramente...[2]Ehm...")
/*< 66>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_65:
/*< 65>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Non dire nulla, Link!\n\n\n<y+<\nAllorché la sciagura sarà evitata,\nsulla Terra la Dea sarà ritornata...\n\n>>\nQueste sono le ultime parole di ciò\nche viene tramandato per <r<tradizione\norale>>...\x0E\x01\x04\x02\x14 Adesso ne colgo il senso,\nera questo dunque...\nCiò significa anche che tutto è\ncompiuto?\x0E\x01\x04\x02\x14 Che mia figlia...\x0E\x01\x04\x02\n Zelda è\nsana e salva?!\n[1]Mi dispiace[2]No")
/*< 98>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_99:
/*< 99>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Ah... capisco...\nTranquillo, non c'è niente di cui\ntu debba dispiacerti, ragazzo...\nNon tormentarti...\nMi basta sapere che ce la stai mettendo\ndavvero tutta.")
          					goto flw_84
          				  case 1:
          					goto flw_99
          				}
          			  case 1:
          				goto flw_65
          			}
          		}
          	  case 1:
/*< 96>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*< 97>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Mi è proprio sembrato di sentire un\ngran baccano provenire da fuori...\n\n\nMah, comunque sia, mi raccomando...\nconcentrati su Zelda!")
          		  case 1:
/*< 87>*/ 			switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          			  case 0:
/*< 88>*/ 				switch (loadzone_temp_flags[19 /* 0x3 08 */]) {
          				  case 0:
/*< 91>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Devo aver già visto un\nemblema simile da qualche parte,\nma non ricordo dove. Perché non\nvai a chiedere all'indovino?")
          				  case 1:
/*< 89>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Ciao, Link!\nCome vanno le cose?\n\n\nDevi incastonare quest'<r<emblema della\nprova>> da qualche parte, dici?\n\n\nSono sicuro di aver visto il\nposto, ma non riesco proprio\na ricordare dove...")
/*< 90>*/ 					loadzone_temp_flags[19 /* 0x3 08 */] = true;
          				}
          			  case 1:
/*< 80>*/ 				switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          				  case 0:
/*< 81>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Sei riuscito a far calmare Narisha\ne a scoprire qualcosa sulla Triforza?!\nSei insuperabile!\n\nUltimamente stai\ndavvero progredendo!\n\n\nHai ancora molte difficoltà innanzi a\nte, ma sono sicuro che non ti lascerai\nscoraggiare!\nForza!")
          				  case 1:
/*< 60>*/ 					switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          					  case 0:
/*< 62>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 2), ('next', 61), ('param3', 13)])
/*< 61>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Davvero? Povero Narisha...\nL'attacco avvitato è una tecnica\npericolosa, va usata con cautela!")
          					  case 1:
/*< 34>*/ 						switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          						  case 0:
/*< 59>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 4), ('next', 31), ('param3', 13)])
/*< 31>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Se vuoi informazioni su Narisha,\nvai a parlare col maestro <b<Asio Otus>>.\nLa sua stanza è proprio qui accanto.")
          						  case 1:
/*< 85>*/ 							switch (story_flags[327 /* us: 805A9AFF 0x20, jp: 805ACD7F 0x20 */]) {
          							  case 0:
/*< 86>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Mi chiedo se esista qualcuno capace di\ndirci qualcosa di più sulla Triforza...\n\n\nBeh, in ogni caso, non credo\nche si trovi a Oltrenuvola...\nUhm...")
          							  case 1:
/*< 20>*/ 								switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          								  case 0:
/*< 35>*/ 									OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 58), ('param3', 31)])
/*< 58>*/ 									OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 2), ('next', 21), ('param3', 13)])
/*< 21>*/ 									printf(/* textboxtype: 1, unk: 0 */ "Ehi, Link!\nCome va? Hai trovato qualche\nindizio su Zelda?\nMah\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í\nSe hai novità\ninformami subito!")
/*< 69>*/ 									OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 40), ('next', 22), ('param3', 6)])
/*< 22>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í Ora non puoi parlare?\nCapisco... Vorresti dirmi\nqualcosa, ma non puoi...\nNon ti preoccupare, capisco\x0E\x01\x06\x02\xFECD...")
/*< 70>*/ 									OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 37), ('param3', 6)])
/*< 37>*/ 									printf(/* textboxtype: 1, unk: 0 */ "Link!\nStavo pensando...\n\n\nPur di salvare Zelda, stai\naffrontando il tuo destino senza\nalcun aiuto... se c'è qualcosa che\nposso fare...\nSono solo un povero vecchio\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í ma\nci sono delle cose che ai vecchi\nriescono benissimo!\n\nPer esempio posso trasmetterti le\nmie conoscenze! Se hai dubbi\nriguardo a Oltrenuvola, vieni\npure a chiedere quando vuoi!\n[1]Veramente...[2]No, grazie")
/*< 23>*/ 									switch (choice(2)) {
          									  case 0:
          										flw_25:
/*< 25>*/ 										printf(/* textboxtype: 1, unk: 0 */ "Vorresti sapere cosa so a proposito\ndella <y+<Triforza>>\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í?\n\n\nTu dove ne hai sentito parlare...?!\n\n\n\nNei testi antichi di sicuro sono\nriportate alcune informazioni\nsulla Triforza...\n\nMa per scoprire dove si \ntrova, devi risolvere una\nserie di enigmi...")
/*< 26>*/ 										printf(/* textboxtype: 1, unk: 0 */ "Mi dispiace...\nMa anche la mia\nconoscenza ha dei limiti...")
/*< 32>*/ 										story_flags[327 /* us: 805A9AFF 0x20, jp: 805ACD7F 0x20 */] = true;
          									  case 1:
/*< 24>*/ 										printf(/* textboxtype: 1, unk: 0 */ "Dici che quando si invecchia\nnon occorre la conoscenza...?\n\n\nAl contrario! Direi che\nsono gli anni a portare saggezza!\nComunque, prova ad ascoltarmi!")
          										goto flw_25
          									}
          								  case 1:
/*< 19>*/ 									switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          									  case 0:
/*< 57>*/ 										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 5), ('next', 18), ('param3', 13)])
/*< 18>*/ 										printf(/* textboxtype: 1, unk: 0 */ "Link!\nOrmai mi puoi aiutare solo tu!\n\n\nTe ne prego, vai subito a\nsoccorrere Zelda!")
          									  case 1:
/*< 11>*/ 										switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          										  case 0:
/*< 56>*/ 											OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 1), ('next', 12), ('param3', 13)])
/*< 12>*/ 											printf(/* textboxtype: 1, unk: 0 */ "Due torri del vento guidano il\ngiovane verso la Torre della luce\ne il cammino si palesa...\n\nLink! Se questa melodia\nsi tramanda dalla notte dei tempi a\nOltrenuvola, allora le <r<due torri\ndel vento >>devono trovarsi qui!\nQuesta mia riflessione, ti è d'aiuto?")
          										  case 1:
/*< 50>*/ 											switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          											  case 0:
/*< 36>*/ 												OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 55), ('param3', 31)])
/*< 55>*/ 												OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 3), ('next', 92), ('param3', 13)])
/*< 92>*/ 												printf(/* textboxtype: 1, unk: 0 */ "Oooh! Sei tornato, Link!\nVedo che sei ancora tutto intero!\nMolto bene...\n\nAllora, come vanno le ricerche?\nHai trovato qualche indizio su Zelda?")
/*< 94>*/ 												set_camera(10, 0)
/*< 93>*/ 												printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Mmh, capisco...\x0E\x01\x06\x02\xFBCD... \x0E\x01\x06\x02Í\nZelda... Incredibile...\n\n\nCerto, anche tu hai dovuto affrontare\ndure prove...")
/*< 95>*/ 												set_camera(-1, 0)
/*<  4>*/ 												printf(/* textboxtype: 1, unk: 0 */ "Cosa?\x0E\x01\x04\x02(\nVuoi sapere il testo della melodia\nintonata da Zelda il giorno del\nbattesimo del volo? Mah...\nLe canzoni non sono il mio forte...\n[1]Basta\nil testo[2]Canta")
/*<  5>*/ 												switch (choice(2)) {
          												  case 0:
/*<  7>*/ 													printf(/* textboxtype: 1, unk: 0 */ "Oh, beh... che sollievo! Se è\nil testo che ti interessa,\neccolo qui.\nMi sembra che dicesse...")
          													flw_8:
/*<  8>*/ 													printf(/* textboxtype: 1, unk: 0 */ "<y+<\x0E\x01\x06\x02\xFCCDImpavido fanciullo che\nla serva della Dea conduce,\nper riunir Cielo e Terra\ntu porti con te la luce...>>\x0E\x01\x06\x02Í\nQuesta è la prima strofa.\nPoi continua così...\n\n\n<y+<\x0E\x01\x06\x02\xFCCDSe alla Torre di luce le\ntorri del vento rivolgerai,\ncon l'eco della melodia\nil cammino ammirerai.\x0E\x01\x06\x02Í>>")
/*<  9>*/ 													printf(/* textboxtype: 1, unk: 0 */ "Questo è il testo della canzone...\n\n\n\nLa <r<Torre di luce >>è la torre che si\ntrova nella piazza... ma non saprei\ndire quali siano quelle del vento\x0E\x01\x06\x02\xFECD...\n\nSe riuscissimo a puntarle verso\nla torre che è in piazza, forse\naccadrebbe qualcosa\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í?\n\n<r<Due torri del vento>>...\nUhmm\x0E\x01\x06\x02\xFECD...")
/*< 10>*/ 													story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */] = true;
/*<100>*/ 													story_flags[142 /* us: 805A9AEE 0x01, jp: 805ACD6E 0x01 */] = true;
          												  case 1:
/*<  6>*/ 													printf(/* textboxtype: 1, unk: 0 */ "Comunque... a parte gli scherzi...\nConosco la canzone.\n\n\nMi sembra che dicesse...")
          													goto flw_8
          												}
          											  case 1:
/*< 52>*/ 												switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          												  case 0:
/*< 51>*/ 													printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Ehi, Link!\nHai trovato Zelda?\n\n\nMi dispiace doverti affidare un\nincarico così impegnativo... ma\npreferirei che nessuno venisse a\nsapere cosa è successo quella notte.\nSai, per evitare confusione...\nPerciò sei il solo su cui posso\ncontare. Mi raccomando!")
          												  case 1:
/*< 53>*/ 													printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Anche il <r<primo cavaliere>>, colui\nche ti ha insegnato a usare la spada,\nè preoccupato per la tua partenza.\n\nPerché non passi alla palestra\ne senti cosa ha da dirti, prima\ndi partire?\n\nLink,\nmi raccomando... pensa a Zelda!")
          												}
          											}
          										}
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_103_07() {
/*< 27>*/ 	start()
/*< 54>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 2), ('next', 28), ('param3', 13)])
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Aspetta un attimo, Link!")
/*< 43>*/ 	set_camera(1, 0)
/*< 44>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 100), ('next', 29), ('param3', 15)])
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Ho un indizio...\n\n\n\nCome sai, qui a Oltrenuvola,\nsin dall'antichità risiede <b<Narisha>>,\nil <r<grande spirito celeste>>.\n\n\x0E\x01\n\x04\x02ÍNarisha protegge il cielo\nsin dalla notte dei tempi e sa\nqualunque cosa.\n\nPotresti chiedere a lui\ninformazioni sulla <y+<Triforza>>...\n\n[1]Dov'è?[2]Sa tutto?")
/*< 38>*/ 	switch (choice(2)) {
          	  case 0:
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Uhm... bella domanda...")
          		flw_45:
/*< 45>*/ 		set_camera(3, 0)
/*< 30>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Avrai notato che di recente\nsi è formata quella nuvola\nenorme... il <r<Cumulonembo>>.\n\nBeh, si dice che Narisha\nsia rimasto intrappolato\ndentro quella nuvola...")
/*< 46>*/ 		set_camera(4, 0)
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Per verificare la veridicità delle voci,\nho chiesto al maestro <b<Asio Otus>> di\ncondurre delle ricerche riguardo a\nCumulonembo.\nPoi però è scomparsa Zelda e sono stato\ncosì preso dalla vicenda che non ho più\navuto il tempo di informarmi sui suoi\nprogressi in merito...\nMeglio che tu vada subito dal\nmaestro <b<Asio Otus >>a chiedergli\ndi Narisha.")
/*< 33>*/ 		story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */] = true;
/*< 47>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          	  case 1:
/*< 40>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Effettivamente è una vera e\npropria enciclopedia vivente. Ma...")
          		goto flw_45
          	}
          }

          void entrypoint_103_08() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x17Ma che fai?\nPresto, lanciati da qui e\nchiama il tuo solcanubi!\n\nSono già partiti tutti!")
          }

