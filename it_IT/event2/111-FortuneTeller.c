          void entrypoint_111_01() {
          	start()
/*< 12>*/ 	switch (story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */]) {
          	  case 0:
/*< 18>*/ 		switch (loadzone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_19:
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Cosa? Ti ho appena predetto la sorte,\ne ora mi dici che non ci hai capito\nniente? Te lo ripeterò solo una volta,\nquindi apri bene le orecchie!")
/*<162>*/ 			loadzone_temp_flags[3 /* 0x1 08 */] = false;
          			flw_74:
/*< 74>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*< 76>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Giovane uomo, ma che stai\ncombinando?\n\n\nLa scomparsa dell'Isola della Dea è\ncolpa tua, lo vedo!\nMa io so che quello che stavi facendo\nnon era solo una birichinata!\nRagazzo, devi scegliere la via che\nsecondo te è la migliore!")
          				flw_127:
/*<127>*/ 				entrypoint_111_05();
          			  case 1:
/*<137>*/ 				switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          				  case 0:
/*<138>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Vedo che troverai quello che stai\ncercando sull'Isola della Dea.\n\n\nTuttavia, non ti attende un'impresa\nfacile... preparati molto bene.")
          					goto flw_127
          				  case 1:
/*< 73>*/ 					switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          					  case 0:
/*<136>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Ah, finalmente hai superato con\nsuccesso la tua ultima prova...\n\n\nNon so perché ho detto \x201Cultima\"...\nM'è venuto naturale.\n\n\nOra vuoi sapere cosa devi fare con\nl'oggetto ottenuto con la prova...\n\n\nDa qualche parte qui, su Oltrenuvola,\nc'è la <r<statua di un uccello>> i cui <r<occhi>>\nerano due gemme... delle quali\nne resta incastonata solo una...\nSono sicuro che sai di cosa sto\nparlando.\n\n\nBene, rimetti al suo posto la gemma\nmancante e il cammino da seguire\nti sarà rivelato!")
          						goto flw_127
          					  case 1:
/*< 72>*/ 						switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          						  case 0:
/*<129>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Troverai la prossima <r<prova >>grazie alla\nmelodia che hai imparato dalla grande\ncreatura.\n\nVedo che la prossima prova si svolgerà\n<r<da qualche parte su Oltrenuvola>>...\nUuu... non ho la più pallida\nidea di cosa possa voler dire.")
          							goto flw_127
          						  case 1:
/*<199>*/ 							switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          							  case 0:
/*<198>*/ 								switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          								  case 0:
/*<200>*/ 									switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          									  case 0:
/*<201>*/ 										printf(/* textboxtype: 1, unk: 0 */ "Ooooh... hai raccolto tre parti della\nmelodia, vedo... Un'enorme creatura\npossiede l'ultima parte! Presto! Recati\nda una creatura gigantesca!")
          										goto flw_127
          									  case 1:
          										flw_71:
/*< 71>*/ 										switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          										  case 0:
/*< 77>*/ 											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 497), ('param2', 1), ('next', 78), ('param3', 23)])
/*< 78>*/ 											switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 52)])) {
          											  case 0:
/*< 79>*/ 												printf(/* textboxtype: 1, unk: 0 */ "Ragazzo, prevedo i compiti che ti\nattendono...\n\n\nStai cercando un posto dove piantare\nun bulbo, nevvero?! E non un bulbo\nnormale! Per farlo crescere ti serve un\nposto adatto.\n\x0E\x01\x06\x02\xFCCDMmmh... una vegliarda...\x0E\x01\x06\x02Í\nC'è un posto buono al santuario dove\nrisiede la vegliarda!")
          												flw_88:
/*< 88>*/ 												entrypoint_111_05();
          											  case 1:
/*< 75>*/ 												printf(/* textboxtype: 1, unk: 0 */ "Giovane uomo, stai cercando le\nquattro parti di una melodia, vero?\n\n\nVedo che ora devi recarti nelle tre...? \x0E\x01\x04\x02\n\nSì, le tre terre! Visitale nell'ordine che\npreferisci!\n\nIn altre parole, ovunque tu voglia\nandare troverai qualcuno ad\nattenderti.")
          												goto flw_88
          											}
          										  case 1:
/*< 70>*/ 											switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          											  case 0:
/*<128>*/ 												printf(/* textboxtype: 1, unk: 0 */ "A quanto pare hai finalmente trovato\nla persona che stavi cercando!\nMi fa piacere saperlo!\n\nMa le tue prove non sono ancora\nfinite! Devi incontrare la grande\ncreatura che fluttua attraverso\ni cieli.\nSe ne vuoi sapere di più, devi parlare\ncol <r<direttore della scuola d'armi>>.")
          												flw_126:
/*<126>*/ 												entrypoint_111_05();
          											  case 1:
/*< 66>*/ 												switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          												  case 0:
/*< 69>*/ 													printf(/* textboxtype: 1, unk: 0 */ "Ancora una volta, vedo l'ombra di\nun mostro gigante...\n\n\nDevo ammettere che il tuo futuro\nmi sorprende ogni volta di più...\nOh caro ragazzo... portati dietro \nuna bella scorta di <r<pozioni>>!")
          													goto flw_126
          												  case 1:
/*<183>*/ 													switch (story_flags[73 /* us: 805A9AE9 0x40, jp: 805ACD69 0x40 */]) {
          													  case 0:
/*< 90>*/ 														switch (story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */]) {
          														  case 0:
/*< 92>*/ 															switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          															  case 0:
/*<179>*/ 																switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          																  case 0:
/*<180>*/ 																	printf(/* textboxtype: 1, unk: 0 */ "Uuu! Ti attende un compito preciso\nragazzo!\n\n\nDentro la montagna di fuoco ci sarà\nmoltissimo caldo.\nDovresti proprio portarti dietro \nuno <r<scudo di ferro>>!")
          																	flw_186:
/*<186>*/ 																	entrypoint_111_05();
          																  case 1:
/*<188>*/ 																	switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
          																	  case 0:
/*<187>*/ 																		printf(/* textboxtype: 1, unk: 0 */ "Ti vedo sulla montagna di fuoco mentre\ntrasporti il contenitore d'acqua.\n\n\nSe non lo porterai forse ci saranno\nguai per una certa persona?")
          																		goto flw_186
          																	  case 1:
/*< 93>*/ 																		printf(/* textboxtype: 1, unk: 0 */ "Guai con l'acqua! La mancanza d'acqua\nti crea difficoltà.\nTi serve moltissima acqua...\n\nMa ragazzo, ti sei imbattuto nel\ncontenitore che ti serve per\ntrasportare l'acqua.\n\nSì, vai nella foresta! È lì che troverai\nquello che stai cercando.")
/*< 94>*/ 																		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          																		  case 0:
          																			goto flw_186
          																		  case 1:
/*<123>*/ 																			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 90), ('param2', 0), ('next', 178), ('param3', 51)])
/*<178>*/ 																			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 100), ('next', 95), ('param3', 16)])
/*< 95>*/ 																			printf(/* textboxtype: 2, unk: 0 */ "Probabilità che l'oggetto che voi\ncercate si trovi nella foresta: 60%.\nVi consiglio di perlustrare la foresta.\n\n<pling>Volete che imposti l'<r<orcio d'acqua>> come\nobiettivo del vostro <r<rilevatore>>?\n[1]Sì[2-]Non ora")
/*< 97>*/ 																			switch (choice(2)) {
          																			  case 0:
/*< 99>*/ 																				story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<100>*/ 																				story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<101>*/ 																				story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<102>*/ 																				story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<103>*/ 																				story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<104>*/ 																				story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<189>*/ 																				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 13), ('next', 96), ('param3', 56)])
/*< 96>*/ 																				printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Sì, mio signore.\nHo impostato l'<r<orcio d'acqua>> come\nobiettivo del <r<rilevatore>>.\n\nVi prego di iniziare l'esplorazione\nimmantinente.")
/*<190>*/ 																				story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																				flw_105:
/*<105>*/ 																				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 125), ('param3', 36)])
/*<125>*/ 																				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 124), ('param3', 16)])
/*<124>*/ 																				entrypoint_111_05();
          																			  case 1:
/*< 98>*/ 																				printf(/* textboxtype: 2, unk: 0 */ "Sì, \x0E\x01\x12\x04\x00\x05mio signore.\nAnnullo l'impostazione del rilevatore.\n\n\nVi prego di riprendere la\nconversazione con l'attuale\ninterlocutore per reimpostare\nl'obiettivo.")
          																				goto flw_105
          																			}
          																		}
          																	}
          																}
          															  case 1:
/*< 91>*/ 																printf(/* textboxtype: 1, unk: 0 */ "Oho! Hai superato brillantemente la\nprova del fuoco.\nOra vedo innanzi a te dei problemi con\nl'acqua.\nLa mancanza di acqua ti creerà delle\ndifficoltà. Quando ti troverai in una\nsituazione del genere, torna da me\nancora una volta.")
          																flw_89:
/*< 89>*/ 																entrypoint_111_05();
          															}
          														  case 1:
/*< 68>*/ 															printf(/* textboxtype: 1, unk: 0 */ "Uuuh... ragazzo! Ma quante di queste\nprove hai intenzione di affrontare?!\n\n\nOra vedo del fuoco... Un <r<portale della\nprova >>giace nascosto su una montagna\ndi fuoco! Ovvio che laggiù uno <r<scudo di\nlegno >>ti sarà completamente inutile!")
          															goto flw_89
          														}
          													  case 1:
/*< 65>*/ 														switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          														  case 0:
/*<184>*/ 															printf(/* textboxtype: 1, unk: 0 */ "Ragazzo, io vedo il cammino che ti\nattende. Devi imparare una <r<melodia>>\nin una specie di luogo sacro!\n\nEd è pure un posto in cui sei\ngià stato! Questo è quello che vedo...\nun luogo sacro perso tra le nuvole.")
          															flw_185:
/*<185>*/ 															entrypoint_111_05();
          														  case 1:
/*<181>*/ 															switch (story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */]) {
          															  case 0:
/*<205>*/ 																switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          																  case 0:
/*<206>*/ 																	printf(/* textboxtype: 1, unk: 0 */ "Oohoo... molto bene, hai superato la\nprova tra le sabbie!\n\n\nOra vedo ancora più sabbia... vedo un\n<r<mare>>...\x0E\x01\x04\x02\x14<r< >>una <r<nave>>...\x0E\x01\x04\x02\x14 non capisco!\nEbbene, dovrai dirigerti nelle terre\ndi sabbia!")
          																	goto flw_185
          																  case 1:
/*< 67>*/ 																	printf(/* textboxtype: 1, unk: 0 */ "Vedo, un <r<portale della prova >>che giace\nrecondito in un luogo pieno di sabbia!\n\n\nQuesto è quello che vedo... la tua\nprossima destinazione è un posto\npieno di sabbia.")
          																	goto flw_185
          																}
          															  case 1:
/*< 64>*/ 																switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          																  case 0:
/*<182>*/ 																	printf(/* textboxtype: 1, unk: 0 */ "Ragazzo, io vedo il cammino che ti\nattende. Devi imparare una <r<melodia>>\nin una specie di luogo sacro!\n\nEd è pure un posto in cui sei\ngià stato! Questo è quello che vedo...\nun luogo sacro perso tra le nuvole.")
          																	flw_87:
/*< 87>*/ 																	entrypoint_111_05();
          																  case 1:
/*< 62>*/ 																	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          																	  case 0:
/*<203>*/ 																		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          																		  case 0:
/*<204>*/ 																			printf(/* textboxtype: 1, unk: 0 */ "Ooohoo... sei riuscito a superare la\nprova nella foresta...\n\n\nAdesso vedo quel <r<grande albero>>\nall'interno della foresta... sì... lì si\ncela qualcuno di importante...\n\nSì, vedo anche una statua di pietra\ngigantesca...\x0E\x01\x04\x02\x14 nelle profondità della\nterra...\x0E\x01\x04\x02\x14 e va su e giù, senza sosta!\n\nEbbene, dovrai dirigerti verso la\nforesta!")
          																			goto flw_87
          																		  case 1:
/*< 63>*/ 																			printf(/* textboxtype: 1, unk: 0 */ "Ragazzo, vedo il cammino che ti\nattende. A quanto pare devi affrontare\nuna prova in un luogo oscuro e\nminaccioso. Fa paura, no?!\nVai nella foresta!\nColà troverai la prova che ti attende!")
          																			goto flw_87
          																		}
          																	  case 1:
/*< 60>*/ 																		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          																		  case 0:
/*< 61>*/ 																			printf(/* textboxtype: 1, unk: 0 */ "Punta due torri del vento in direzione\ndella torre. Poi suona una melodia sulla\ncima di quest'ultima per vedere la\nluce...\nLa luce ti indicherà un luogo e quella\nsarà la tua prossima destinazione!")
/*<202>*/ 																			entrypoint_111_05();
          																		  case 1:
/*<175>*/ 																			switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          																			  case 0:
/*< 57>*/ 																				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          																				  case 0:
/*< 58>*/ 																					printf(/* textboxtype: 1, unk: 0 */ "Oho! Giovane uomo! Vedo che sei\nalla ricerca di qualcosa...\n\n\nDalle nuvole è caduta un'elica\nche ora giace da qualche parte...\n\n\nMmm... <r<la montagna di fuoco>>... \npoco più in basso del <r<santuario della\nmontagna di fuoco >>troverai quello che\nstai cercando!\nUna montagna di fuoco? Potrà mai\nesistere una cosa del genere?")
/*<120>*/ 																					switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          																					  case 0:
/*<121>*/ 																						entrypoint_111_05();
          																					  case 1:
/*<111>*/ 																						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 90), ('param2', 0), ('next', 177), ('param3', 51)])
/*<177>*/ 																						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 100), ('next', 108), ('param3', 16)])
/*<108>*/ 																						printf(/* textboxtype: 2, unk: 0 */ "")
/*<109>*/ 																						switch (choice(2)) {
          																						  case 0:
/*<112>*/ 																							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<113>*/ 																							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<114>*/ 																							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<115>*/ 																							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<116>*/ 																							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<117>*/ 																							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<191>*/ 																							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 13), ('next', 193), ('param3', 56)])
/*<193>*/ 																							printf(/* textboxtype: 2, unk: 0 */ "")
/*<192>*/ 																							story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																							flw_118:
/*<118>*/ 																							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 122), ('param3', 36)])
/*<122>*/ 																							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 119), ('param3', 16)])
/*<119>*/ 																							entrypoint_111_05();
          																						  case 1:
/*<110>*/ 																							printf(/* textboxtype: 2, unk: 0 */ "")
          																							goto flw_118
          																						}
          																					}
          																				  case 1:
/*<194>*/ 																					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          																					  case 0:
/*<195>*/ 																						printf(/* textboxtype: 1, unk: 0 */ "Mmmh... ragazzo, ora come ora\nti serve qualcosa per riparare\nqualcos'altro...\n\nMmmh... io vedo\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í un <y<fiore antico>>!\n\n\n\nIl fiore antico sbocciava tanto tanto\ntempo fa nella <r<terra della sabbia>>...\x0E\x01\x04\x02\x14\nperlustra la terra della sabbia e\ntroverai il fiore!")
          																						flw_86:
/*< 86>*/ 																						entrypoint_111_05();
          																					  case 1:
/*< 59>*/ 																						printf(/* textboxtype: 1, unk: 0 */ "Mmmh... riesco a vedere un edificio\nche somiglia a una torre...\nTu fai soffiare il vento e la\ntorre gira?!\nCi sono due edifici così! Devi rivolgerli\nverso la torre.")
          																						goto flw_86
          																					}
          																				}
          																			  case 1:
/*< 56>*/ 																				switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          																				  case 0:
/*<176>*/ 																					printf(/* textboxtype: 1, unk: 0 */ "Oh! Hai superato un grande ostacolo\ne sembri davvero di ottimo umore.\n\n\nIl tuo prossimo passo è...\x0E\x01\x04\x02\x1E\nO\x2010ho! La <r<Melodia della Dea>>...\x0E\x01\x04\x02\x1E\nVuoi sapere della Melodia della Dea!\n\nChi è che sa tutto di quella canzone...?\nLa sfera di cristallo mi dice che bisogna\nrivolgersi al <r<direttore della scuola\nd'armi>>.")
          																					flw_85:
/*< 85>*/ 																					entrypoint_111_05();
          																				  case 1:
/*< 36>*/ 																					switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          																					  case 0:
/*< 37>*/ 																						printf(/* textboxtype: 1, unk: 0 */ "Ragazzo, vedo e prevedo dove stai per\nandare...\n\n\nQualcosa di grosso sta per risvegliarsi?\nMmm? \x0E\x01\x04\x02\x1EQualcosa di grosso...\x0E\x01\x04\x02\x14\nQualunque cosa sia, è grande!\n\x0E\x01\x04\x02(Cioè proprio gigante!!!\nLa sfera di cristallo mi dice che se ti\nporti dietro parecchie pozioni\n<r<scaldacuore >>allora potrai farcela.")
          																						goto flw_85
          																					  case 1:
/*< 35>*/ 																						switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          																						  case 0:
/*< 34>*/ 																							printf(/* textboxtype: 1, unk: 0 */ "Ragazzo, riesco a vedere dove stai\nandando! Un posto... sabbioso?!\nUna sabbiera? Un'enorme spiaggia?\n\nBeh, qualunque cosa sia, si tratta di un\nposto desolato che ti darà del filo da\ntorcere con l'elettricità...\n\nIn un luogo del genere il metallo ti\nporterà solo guai, perciò forse uno\nscudo di ferro non è proprio l'ideale.\n\nTi serve uno <r<scudo di legno >>o qualcosa\ndi più tosto... Inoltre, potresti aver\nbisogno di parecchie bombe. Meglio se\nti porti un bel <r<portabombe >>capiente.")
          																							goto flw_85
          																						  case 1:
/*< 22>*/ 																							switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          																							  case 0:
/*< 23>*/ 																								printf(/* textboxtype: 1, unk: 0 */ "Giovane uomo, stai per affrontare...\nLo vedo! Le fiamme roventi?!\nUn posto davvero molto caldo!\n\nSarebbe ridicolo portare uno scudo di\nlegno in un luogo così...\nFerro! Potrai proteggerti con uno\n<r<scudo di ferro>>!\nMmmh... e potrebbe anche esserti\nd'aiuto portarti dietro una <r<pozione\ncapace di farti recuperare cuori>>.")
/*< 84>*/ 																								entrypoint_111_05();
          																							  case 1:
/*< 16>*/ 																								printf(/* textboxtype: 1, unk: 0 */ "Ragazzo, stai per avventurarti in\nuna foresta impenetrabile? Una\nselva? Posso vedere una cosa del\ngenere!\nAlberi! Molti alberi!\x0E\x01\x04\x02\x14 Sì... \x0E\x01\x04\x02\nci sono\nmolti alberi, perciò faresti bene\na portare con te, per esempio, uno\n<r<scudo di legno>>.\nE poi, siccome puzzi ancora un po'\ndi latte, avrai sicuramente bisogno\ndi una <r<pozione rossa >>o una cosa \ndel genere.")
/*< 83>*/ 																								entrypoint_111_05();
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
          										}
          									}
          								  case 1:
          									goto flw_71
          								}
          							  case 1:
          								goto flw_71
          							}
          						}
          					}
          				}
          			}
          		  case 1:
/*< 31>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 13), ('param3', 12)])
/*< 13>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Orbene, lasciami predire la tua sorte,\ngiovane uomo. Ti costerà soltanto\n<r<10 rupie>>. \n\nUna luce brillante viene a guidare i\ntuoi passi lungo il periglioso cammino.\n\n\nOr dunque, diamo inizio alla\ndivinazione? Fanno <r<10 rupie>>.\nChe ne dici?\n[1]Continua[2-]Lascia\nperdere")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 29>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*< 30>*/ 					rupees += -10;
          					flw_160:
/*<160>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<141>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Allora ragazzo, quale aspetto del tuo\nfuturo vuoi che io ti legga?\n[1]Il mio\ncammino[2]Tesori")
/*<174>*/ 						scene_flags[0 'Skyloft'][86 /* 0xB 40 */] = true;
/*< 27>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 142), ('param3', 12)])
/*<142>*/ 						switch (choice(2)) {
          						  case 0:
/*< 20>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Ottimo!\nDunque, adesso predirò il tuo futuro!")
          							flw_38:
/*< 38>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2560), ('next', 164), ('param3', 13)])
/*<164>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 50), ('next', 39), ('param3', 54)])
/*< 39>*/ 							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 160), ('next', 40), ('param3', 6)])
/*< 40>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -238), ('next', 165), ('param3', 13)])
/*<165>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 50), ('next', 17), ('param3', 54)])
/*< 17>*/ 							loadzone_temp_flags[3 /* 0x1 08 */] = true;
/*< 21>*/ 							printf(/* textboxtype: 1, unk: 0 */ "O\x2010ho!\nTutto è rivelato! Tutto è rivelato!")
          							goto flw_74
          						  case 1:
/*<145>*/ 							entrypoint_111_06();
          						}
          					  case 1:
/*<161>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Benissimo.\nDiamo inizio alla divinazione!")
/*<163>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 38), ('param3', 12)])
          						goto flw_38
          					}
          				  case 1:
/*< 32>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x909Che succede, ragazzo?!\nMa sei proprio al verde!\n\n\nNon ti aspetterai mica che una persona\ngentile, con dei begli occhioni tondi\ncome me, ti predica il futuro gratis?")
          				}
          			  case 1:
/*< 15>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x900Ah, la mettiamo così, eh?\nBene, ma verrà un giorno in cui\navrai bisogno dei miei poteri!\nNon tornare qui a frignare però!")
          			}
          		}
          	  case 1:
/*<173>*/ 		scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
/*< 24>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 1), ('param3', 12)])
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Oh bene! Lascia che io predica la tua\nsorte, oh giovane uomo!\n\n\nDi solito chiedo una parcella di 10\nrupie. Tuttavia, solo per questa\nvolta, ti farò il prezzo speciale di\n<r<1 rupia>>.\nOrbene, vuoi farti predire il futuro\nper <r<1 rupia>>?\n[1]Sì[2-]No")
/*<  4>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_25:
/*< 25>*/ 			switch (has_rupees(1)) {
          			  case 0:
/*< 26>*/ 				rupees += -1;
/*<  8>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nOh! Sapevo di aver innanzi un vero\nuomo! A dirla tutta, sei il primo\ncliente da un bel po' di tempo...\n\nOh\x0E\x01\x06\x02\xFDCD...\x0E\x01\x06\x02Í Non è per dire che io non sia\nbravo. Puoi far affidamento su\nquesti begli occhioni tondi...")
          				goto flw_160
          			  case 1:
/*< 28>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x909Cosa succede, ragazzo?! A quanto pare\nnon hai nemmeno una misera rupia.\nLasciami stare allora... non posso fare\naccordi con un poveraccio!")
          			}
          		  case 1:
/*<  5>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Cosa?! E si risponde così alla mia\ngentilezza? Forse non ti fidi di me e dei\nmiei begli occhioni tondi?\n\nLa prossima volta potrei non essere\ncosì gentile sai... Davvero non vuoi\nfarti predire il futuro?\n[1]Va bene[2-]No")
/*<  6>*/ 			switch (choice(2)) {
          			  case 0:
          				goto flw_25
          			  case 1:
/*<  7>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Sei proprio un giovane testardo...\nQuello sguardo mi dice che non credi\nnella divinazione...\n\nFarti predire il futuro ti sarà di \ngrande aiuto!\nDavvero sei convinto di non \nvolere i miei servigi?\n[1]Va bene[2-]Non ora")
/*<  9>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_25
          				  case 1:
/*< 10>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x909Uhmm... Uno scettico, eh?\nMa se ti cacci nei guai, poi non venire\nqui a piagnucolare per avere il mio\naiuto... \x0E\x01\x08\x02\xFECDUmpf!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_111_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Che cosa...?\nAspetta un attimo!!!\nRagazzo, una visione disastrosa ha\nfatto capolino...\nUn sentiero periglioso si apre \ninnanzi a te, oh giovane uomo...\nMa io posso prevedere quanto ti\naccadrà, perch'io sono un indovino! \nFidati dei miei \x0E\x01\x06\x02\xFCCD<r<begli occhioni tondi>>...\x0E\x01\x06\x02Í\ne della mia dolce voce.\nNon ti farò del male.\nAppropinquati or dunque!")
          }

          void entrypoint_111_03() {
/*< 48>*/ 	start()
          	goto flw_160
          }

          void entrypoint_111_04() {
/*< 53>*/ 	start()
          	goto flw_19
          }

          void entrypoint_111_05() {
/*< 82>*/ 	start()
/*<130>*/ 	switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          	  case 0:
/*<131>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Inoltre, se stai cercando una specie\ndi <r<pianta>>, allora vedo una verde\n<r<foresta>>... \x0E\x01\x06\x02\xFBCDmmm... che cosa sarà\nmai...\x0E\x01\x06\x02Í una fo\x2010re\x2010sta?")
          		flw_132:
/*<132>*/ 		switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Ragazzo, stai cercando qualcuno\nin grado di arare un campo per te.\n\n\nNon troverai nessuno del genere qui\na Oltrenuvola! Vedo che devi andare\nnelle <r<grotte >>dove dimorano <r<quelli che\nsono bravi a scavare>>!\nColà troverai la persona giusta\nper il lavoro che devi svolgere.")
          			flw_134:
/*<134>*/ 			switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          			  case 0:
/*<135>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Ah! Sì, sì!\nStai cercando un oggetto perduto...\nUna cosa brillante e rotante.\n\nVedo <r<un luogo arido pieno di sabbia>>!\nDovresti poter trovare lì quello che\ncerchi. In un angolo recondito,\nfuori mano.")
          				flw_170:
/*<170>*/ 				switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          				  case 0:
/*<171>*/ 					switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          					  case 0:
          						flw_33:
/*< 33>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x12E questo è tutto quello che posso dirti\nin questo momento.\nPuoi però tornare a trovarmi, se non\nsai più che cammino intraprendere!")
/*< 41>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x05\x04\x1E\x00\x0E\x01\x09\x04\x0B\xB0DPuoi farcela!")
/*< 11>*/ 						story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          					  case 1:
/*<172>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Oh! Vedo anche una persona che ha\nperso un insetto raro...\n\n\nLa sfera di cristallo mi dice che questo\ninsetto si nasconde sull'isola dove si\ntrova <r<una persona che ama gli insetti>>!")
          						goto flw_33
          					}
          				  case 1:
          					goto flw_33
          				}
          			  case 1:
          				goto flw_170
          			}
          		  case 1:
          			goto flw_134
          		}
          	  case 1:
          		goto flw_132
          	}
          }

          void entrypoint_111_06() {
/*<143>*/ 	start()
/*<144>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Mmmh... tesori, eh?\nNon ne so granché di tesori.\n\n\nMa, comunque sia...\nCi proverò!")
/*<147>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2560), ('next', 166), ('param3', 13)])
/*<166>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 50), ('next', 148), ('param3', 54)])
/*<148>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 160), ('next', 149), ('param3', 6)])
/*<149>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -238), ('next', 167), ('param3', 13)])
/*<167>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 50), ('next', 146), ('param3', 54)])
/*<146>*/ 	printf(/* textboxtype: 1, unk: 0 */ "O\x2010ho!\nTutto è rivelato! Tutto è rivelato!")
/*<156>*/ 	printf(/* textboxtype: 1, unk: 1 */ "Mmmh...\nCe ne sono nella foresta... nella terra\ndi sabbia... nella montagna di fuoco...\ne ne hanno i mostri...\nDi quali tesori vorresti saperne di più?\n[1]Foresta[2]Deserto[3]Vulcano[4]Mostri")
/*<150>*/ 	switch (choice(4)) {
          	  case 0:
/*<151>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Ohibò... La foresta!\nI tesori che si possono trovare nella\nforesta sono la <y<piuma d'uccello >>e la\n<y<larva d'ape>>...\nPuoi trovare una <y<piuma d'uccello\n>>quando catturi un uccellino col retino!\n\n\nE a quanto pare è possibile trovare una \n<r<<y<larva d'ape<r< >>quando fai cascare un\nalveare!\n\nTra le varie piume degli uccellini c'è\nla <r<piuma azzurra>>, che a quanto pare\nè fonte di felicità.\n\nSe ne trovi una, ragazzo, vuol dire\nche sei molto fortunato.")
          		flw_155:
/*<155>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Poi ci sono la <y<magatama ambrata >>e la\n<y<magatama scura>>. Si possono trovare\nentrambe in qualsiasi zona di ogni\nprovincia.\nPer una ragione ancora ignota tuttavia,\nla <y<magatama scura >>si trova solo\ndurante le prove.\n\nTra i vari tesori, le <y<ciglia della dea>>\nsono particolarmente rare!\nSolo un ragazzo fortunatissimo\npotrebbe trovarne.")
/*<157>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x12E questo è tutto quello che posso dirti\nin questo momento.\nPuoi però tornare a trovarmi, se non\nsai più che cammino intraprendere!")
/*<158>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x05\x04\x1E\x00\x0E\x01\x09\x04\x0B\xB0DPuoi farcela!")
/*<159>*/ 		story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          	  case 1:
/*<152>*/ 		printf(/* textboxtype: 1, unk: 0 */ "La terra di sabbia, eh? In quel posto\npuoi trovare il <y<rotolacampo >>e il\n<y<fiore antico>>.\n\nSe sei bravo, puoi cercare di acciuffare\nun <y<rotolacampo>> mentre ti passa\naccanto con un colpo secco di retino!\n\nPer trovare invece un <y<fiore antico>> \nbasta tornare ai tempi antichi; il nome\ndice tutto!")
          		goto flw_155
          	  case 2:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0 */ "La montagna di fuoco, eh?\nVuoi sapere che cosa puoi\ntrovare laggiù?\n\nPrincipalmente il <y<metallo Oldin>> e la\n<y<coda di lucertola>>.\nA volte il <y<metallo Oldin>> salta fuori\nscavando una buca.\nE se riesci a sconfiggere un qualsiasi\nmostro lucertoloso, forse riesci a\ntrovare una <y<coda di lucertola>>.")
          		goto flw_155
          	  case 3:
/*<154>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Mostri, eh?\nBene, ragazzo, quando sconfiggi dei\nmostri, spesso puoi trovare quanto\nsegue...\n<y<Artigli di mostro>>, <y<teschi ornamentali>>,\n<y<gelatine spettrali>>, <y<corni di mostri>> e \naltro ancora!\n\nGli <y<artigli di mostro >>vengono lasciati\nper lo più dai mostri volanti.\n\n\nI <y<teschi ornamentali>> spesso vengono\nlasciati dai mostri antropomorfi.\n\n\nLe <y<gelatine spettrali >>si trovano invece\nsconfiggendo mostri... soffici.")
/*<207>*/ 		printf(/* textboxtype: 1, unk: 0 */ "E i <y<corni di mostri>>... beh, per prenderli\nai mostri dovrai far ricorso al tuo\nequipaggiamento. \n\nI <y<cristalli demoniaci >>vengono lasciati\ndai mostri che usano maledizioni.\n\n\nA volte i teschi ornamentali si trovano\nanche nella rarissima varietà di\n<y<teschi dorati>>!")
          		goto flw_155
          	}
          }

          void entrypoint_111_07() {
/*<168>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Oho... aspetta un attimo!\nTi vedo bene, ragazzo.\n\n\nSi direbbe che tu abbia trovato il\ntempo per andare a racimolare\nogni tipo di tesoro, vero?\n\nAvvicinati, ragazzo, chiederò alla mia\nsfera di cristallo una previsione sui\ntesori.")
          }

          void entrypoint_111_11() {
/*< 42>*/ 	start()
/*< 52>*/ 	switch (loadzone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*< 54>*/ 		entrypoint_111_04();
          	  case 1:
/*< 43>*/ 		switch (story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nO\x2010ho! Il giovanotto!\nSei tornato! Ti stavo aspettando!\nQuello sguardo mi dice che vuoi\nconoscere qualcosa del tuo futuro...")
          			flw_140:
/*<140>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 47), ('param3', 12)])
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Benissimo, allora ti leggerò il futuro.\nE a metà prezzo, ma solo perché sei tu,\nragazzo!\n\nSiamo pronti per iniziare la\ndivinazione?\nTi costa solo <r<5 rupie>>.\n[1]Procedi[2-]Lascia\nperdere")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<197>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 5), ('next', 196), ('param3', 23)])
/*<196>*/ 				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 100)])) {
          				  case 0:
/*<139>*/ 					rupees += -5;
/*< 49>*/ 					entrypoint_111_03();
          				  case 1:
/*< 55>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x909Che succede, ragazzo?!\nMa sei proprio al verde!\n\n\nPuoi pregare quanto vuoi guarda, ma\nnon posso farti altri prezzi di favore...\nMi spiace, ma dovrai tornare\nun'altra volta!")
          				}
          			  case 1:
/*< 51>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x900Ah, la mettiamo così, eh?\nBene, ma verrà un giorno in cui\navrai bisogno dei miei poteri!\nNon tornare qui a frignare però!")
          			}
          		  case 1:
/*< 44>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nOh!\nMa tu sei il ragazzo di prima!\nGrazie a te, giovanotto, ho potuto\nriprendere le mie divinazioni!\nOhibò, vuoi che preveda il tuo futuro?\nDa oggi in poi, ti farò sempre\nmetà prezzo!")
/*< 45>*/ 			story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */] = true;
          			goto flw_140
          		}
          	}
          }

          void entrypoint_111_30() {
/*< 80>*/ 	start()
/*<106>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<107>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x703Grazie a te, giovane uomo, la mia vita\nsi riempie di gioia!\n\n\nSe vuoi sapere qualcosa sulla tua di\nvita, ragazzo, allora faresti bene a\nvenire da me al bazar durante\nil giorno!")
          	  case 1:
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x701Come ti salta in mente di venire\na un'ora così tarda?!\n\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í Io mica lavoro di notte!\nTorna di giorno!")
          	}
          }

