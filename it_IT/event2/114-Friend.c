          void entrypoint_114_03() {
          	start()
/*< 48>*/ 	switch (story_flags[202 /* us: 805A9AEF 0x10, jp: 805ACD6F 0x10 */]) {
          	  case 0:
/*< 49>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x02Link!\nHai trovato qualche indizio\nsu Zelda? Pensi di trovarla?\nCi conto, eh! Datti da fare!")
          	  case 1:
/*< 12>*/ 		switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          		  case 0:
/*< 13>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Link!\nTorna, mi raccomando!")
          		  case 1:
/*< 53>*/ 			switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          			  case 0:
/*< 54>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x811Zelda è caduta dal suo solcanubi...\n\n\n\nEppure era così brava...\n\n\n\n\x0E\x01\x09\x04\x00\xE00A uno scarso come me,\nnon resta che pregare...")
          			  case 1:
/*<  7>*/ 				switch (scene_flags[40 /* 0x4 01 */]) {
          				  case 0:
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x811Che sventura, Link!\x0E\x01\x04\x02\x19\nSperiamo che lo ritrovi presto\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í")
          				  case 1:
/*<  4>*/ 					switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          					  case 0:
/*<  5>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x708Come sei agitato, Link,\nche ti succede?\n\n\n\x0E\x01\x09\x04\x07\xC00Eh? No, non so niente del tuo\nsolcanubi...\x0E\x01\x04\x02\x19\nChe cosa?!\n\nNon risponde al richiamo!?\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n\n\n\n\x0E\x01\x09\x04\x01\x800Ah\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í In tal caso...\x0E\x01\x04\x02\x19\n\x0E\x01\x08\x02\xFFCDQuesto significa...\n\n\n\x0E\x01\x09\x04\x08\x807Eh? \x0E\x01\x04\x02\x19Cosa...\x0E\x01\x04\x02\x19 no niente, \x0E\x01\x04\x02\x14niente...")
/*< 29>*/ 						scene_flags[0 'Skyloft'][40 /* 0x4 01 */] = true;
          					  case 1:
/*< 10>*/ 						switch (scene_flags[23 /* 0x3 80 */]) {
          						  case 0:
/*< 11>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Io resto qui a tenere d'occhio la scuola.\nLink, tu fai del tuo\nmeglio al <r<battesimo del volo>>!\nFaccio il tifo per te!")
          						  case 1:
/*<  1>*/ 							switch (scene_flags[39 /* 0x5 80 */]) {
          							  case 0:
/*<  2>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x809Io non sono come te,\nLink...\nSono una frana in tutto quello\nche faccio.\nPerciò mi esercito ancora <g<sollevando\n>>con (A) le botti e gli orci...\n\n\n\x0E\x01\x09\x04\x07\xE00E poi mi pagano anche...")
          							  case 1:
/*<  3>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Buongiorno, Link!\nOggi è il giorno del <r<battesimo del volo>>,\nvero?\n\n\x0E\x01\x09\x04\x01\x800Avrei voluto partecipare anch'io,\nma\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í sono stato eliminato alle\nselezioni. Oggi resto a custodire\nla scuola.\n\x0E\x01\x09\x04\x07\x800Devo anche portare queste <r<botti\n>>alla mensa...\n\n\n\x0E\x01\x09\x04\x01\x800Avrei tanto voluto vedere la tua\nsagoma librarsi in cielo,\nLink...\n\n\x0E\x01\x09\x04\x07\xA00Pazienza, \x0E\x01\x04\x02\x14farò il tifo per te da qui!")
/*< 26>*/ 								scene_flags[0 'Skyloft'][39 /* 0x5 80 */] = true;
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_114_20() {
/*< 55>*/ 	start()
/*< 77>*/ 	switch (context_related2(0)) {
          	  case 0:
/*<107>*/ 		switch (scene_flags[31 /* 0x2 80 */]) {
          		  case 0:
          			flw_72:
/*< 72>*/ 			switch (story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */]) {
          			  case 0:
/*<117>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 84), ('param3', 12)])
/*< 84>*/ 				switch (temp_flags[6 /* 0x1 40 */]) {
          				  case 0:
/*< 85>*/ 					printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x02Vuoi provare di nuovo\nil Tiro alla zucca? Ti costerà <r<20 rupie>>.\n[1]Sì[2]Le regole?[3-]No, grazie")
          					flw_74:
/*< 74>*/ 					switch (choice(3)) {
          					  case 0:
          						flw_67:
/*< 67>*/ 						switch (has_rupees(20)) {
          						  case 0:
/*< 68>*/ 							rupees += -20;
/*< 70>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xA0ABene, allora cominciamo!\nForza, Link!")
/*< 71>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          						  case 1:
          							flw_66:
/*< 66>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x811Ah... forse il problema sono i soldi?\nPovero Link...")
          						}
          					  case 1:
          						flw_63:
/*< 63>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x200Ora lancerò delle zucche in aria per\n<r<90 secondi>>! Ogni volta che ne\ncolpirai una otterrai 10 punti.\n\n\x0E\x01\x09\x04\x00\xA00Però, se riesci a colpirle ripetutamente\ne senza fare cilecca otterrai molti più\npunti. Cerca di colpire le zucche più\nvolte in rapida successione!")
/*< 69>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 64), ('param3', 12)])
/*< 64>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x200Ah... dimenticavo. Devo chiederti\n20 rupie per ogni tentativo!\n\n\n\x0E\x01\x09\x04\x08\xA00Se fosse gratis, non ci sarebbe\ndivertimento... allora, vuoi provare\nil Tiro alla zucca? Costa <r<20 rupie>>.\n[1]Certo![2-]No")
/*< 65>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_67
          						  case 1:
          							goto flw_66
          						}
          					  case 2:
/*< 75>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x811Ah...\nHai da fare...?\nGià, hai l'incarico di salvare\nZelda, vero?\x0E\x01\x04\x02\n Scusa!")
          					}
          				  case 1:
/*< 73>*/ 					printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x02Ehi! Link!\nTi senti in forma?\n\n\nVuoi provare il Tiro alla zucca per\n<r<20 rupie>>?\n[1]Sì[2]Le regole?[3-]No, grazie")
          					goto flw_74
          				}
          			  case 1:
/*<102>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 76), ('param3', 31)])
/*< 76>*/ 				story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */] = true;
/*< 56>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x202Ehi, Link! Se faccio\naltre flessioni finisco con la faccia\na terra... non ci sarà un altro\nesercizio più adatto a me?\n\x0E\x01\x09\x04\x00\x207Ehi!\x0E\x01\x04\x02\x1E Ma tu hai un arco bellissimo!\nScommetto che sei un tiratore\nprovetto, vero, Link?\n[1]Sì[2]Ma va!")
/*< 58>*/ 				switch (choice(2)) {
          				  case 0:
/*< 57>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xAFFSei incredibile, Link!\n\n\n\n\x0E\x01\x09\x04\x01\x200Mi sono allenato e sono riuscito\na fare 3000 flessioni! Ora devo\npensare alle gambe...")
          					flw_59:
/*< 59>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xA00Bene! Allora fammi vedere cosa sei\ncapace di fare con l'arco!\n\n\nLancerò delle zucche in aria...\n\n\n\n\x0E\x01\x09\x04\x00\x200Fammi vedere se riesci a colpirle!\n\n\n\n\x0E\x01\x09\x04\x07\xA00Lanciando le zucche alleno comunque\nle braccia... come dire... due\npiccioni con una fava!\n[1]Ci provo[2-]Lascia stare")
/*< 61>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_63
          					  case 1:
/*< 62>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x811Ah...\nHai da fare...?\nGià, hai l'incarico di salvare\nZelda, vero?\x0E\x01\x04\x02\n Scusa!")
          					}
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xA09Non sentirti in imbarazzo!\nSto solo dicendo la verità!")
          					goto flw_59
          				}
          			}
          		  case 1:
/*<108>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<109>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x501Ehi, Link!\nChe sciagura! È scomparsa\nl'Isola della Dea!\nCosa sarà successo...?\n\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n. \x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n \x0E\x01\x09\x04\x00\x800Ah, \x0E\x01\x06\x02\xFBCDsì...?!\x0E\x01\x06\x02Í Sai tutto, eh?\n\x0E\x01\x09\x04\x00\x200Certo, era una cosa necessaria\nper cercare Zelda.\n\nHo capito. Non mi sorprenderò\npiù, qualunque cosa accada... ma\nmi raccomando, trova Zelda!")
/*<110>*/ 				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          			  case 1:
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 83>*/ 		temp_flags[6 /* 0x1 40 */] = true;
/*< 90>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 78), ('param3', 44)])
/*< 78>*/ 		switch (context_related4(0)) {
          		  case 0:
/*< 92>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 28), ('param2', 9472), ('next', 79), ('param3', 13)])
/*< 79>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x12Hai totalizzato \x0E\x02\x03\x06\x00\x00Í punti...\nLink oggi non sei\nmolto in forma... purtroppo non\nhai diritto ad alcun premio...\n\x0E\x01\x09\x04\x07\x200Il trucco è mirare un po' più avanti\nsulla traiettoria di volo della zucca.\nFacendo così, otterrai facilmente\n<r<150 punti>>...\n\x0E\x01\x09\x04\x01\xA00Oh, scusa... vedo che lo stai già\nfacendo da solo!!!")
          			flw_86:
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xA00Quando vorrai provare\ndi nuovo, torna a trovarmi!")
          			flw_91:
/*< 91>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 103), ('param3', 45)])
/*<103>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          		  case 1:
/*< 93>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 29), ('param2', 9728), ('next', 80), ('param3', 13)])
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0B\x0E\x02\x03\x06\x00\x00Í punti!\nNiente male, Link!\n\n\nNon bene, ma nemmeno male...\nComunque senza troppa fatica\nda parte tua! Ora prova a\nottenere più di <r<400 punti>>!\n\x0E\x01\x09\x04\x07\xA00Bene! Ti do le 50 rupie guadagnate\ncon i lavoretti che ho fatto\nper la nonna.")
/*< 87>*/ 			rupees += 50;
          			goto flw_86
          		  case 2:
/*< 94>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 29), ('param2', 9728), ('next', 81), ('param3', 13)])
/*< 81>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BUn punteggio totale di \x0E\x02\x03\x06\x00\x00Í!\nOttimo, Link!\nProprio come pensavo...\nLink fa le cose fatte bene!\n\x0E\x01\x09\x04\x07\xA00Eccoti il premio!")
/*<106>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 88), ('param3', 42)])
/*< 88>*/ 			give_item(62 0x3E);
/*<115>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xA00Chissà se riesci a ottenere\npiù di <r<600 punti>>! Vediamo\nse ce la fai!")
          			goto flw_91
          		  case 3:
/*< 95>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 30), ('param2', 9984), ('next', 97), ('param3', 13)])
/*< 97>*/ 			switch (story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */]) {
          			  case 0:
/*< 82>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BUn totale di \x0E\x02\x03\x06\x00\x00Í punti!!!\nFantastico!\nFantastico, Link!\n\n\x0E\x01\x09\x04\x07\xA00Sei davvero la speranza della scuola\nd'armi, Link!\nTi regalo questo!!!")
/*<105>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 89), ('param3', 42)])
/*< 89>*/ 				give_item(64 0x40);
          				goto flw_91
          			  case 1:
/*< 96>*/ 				story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */] = true;
/*< 98>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0B\x0E\x02\x03\x06\x00\x00Í punti!!!\nFantastico!\nFantastico, Link!\n\nSei davvero la speranza della scuola\nd'armi, Link!\n\n\n\x0E\x01\x09\x04\x07\xA00Accetta questo in <r<segno della nostra\namicizia>>!")
/*<104>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 99), ('param3', 42)])
/*< 99>*/ 				give_item(94 0x5E);
          				goto flw_86
          			}
          		}
          	}
          }

          void entrypoint_114_04() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01\x0E\x01\x08\x02\x1CDLink!\x0E\x01\x0D\x02\x1906")
/*< 39>*/ 	set_camera(4, 0)
/*< 38>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', -1), ('next', 37), ('param3', 16)])
/*< 37>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x800\x0E\x01\x08\x02\xFFCDSe...\x0E\x01\x04\x02\x14 senti...\n\n\n\n\x0E\x01\x09\x04\x07\x800No, niente...\x0E\x01\x04\x02\x14 scusa...")
          }

          void entrypoint_114_05() {
/*< 32>*/ 	start()
/*< 41>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xA0BGrazie, Link!\nIl tuo aiuto è stato prezioso!\n\n\n\x0E\x01\x09\x04\x00\x209Per ringraziarti, ti cederò la metà del\nmio compenso. Non è molto, ma...")
/*< 43>*/ 		give_item(4 0x04);
/*<116>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 44), ('param3', 12)])
/*< 44>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Io resto qui a tenere d'occhio la scuola.\nLink, tu fai del tuo\nmeglio al <r<battesimo del volo>>!\nFaccio il tifo per te!")
/*< 45>*/ 		scene_flags[0 'Skyloft'][23 /* 0x3 80 */] = true;
          	  case 1:
/*< 40>*/ 		switch (loadzone_temp_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x203Puoi portare una <r<botte >>alla cuoca?\nAfferra la botte con (A) e <g<posala a\nterra>> premendo di nuovo (A).\n\n\x0E\x01\x09\x04\x01\x200Quando la botte è sollevata, se <g<punti\nil telecomando verso l'alto e lo scuoti>>,\nla puoi <g<lanciare>>.\n\nPuoi <g<far rotolare >>oggetti piccoli come\nle giare, <g<puntando il telecomando\nverso il basso e scuotendolo>>.\n\n\x0E\x01\x09\x04\xC07\x200Ma se si rompono è un guaio, quindi fai\nattenzione!")
/*<114>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x200Se ti dovessi dimenticare i comandi,\nprova a <g<premere>> <g<(2)>>.\x0E\x01\x11\x02\x5CD\n\n\nTi verranno mostrati tutti i comandi\nche puoi usare in quel momento.\nÈ comodissimo!")
          		  case 1:
/*< 33>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Ehi, Link!\nMi puoi dare una mano?\n[1]Sì[2-]Ho da fare!")
/*< 34>*/ 			switch (choice(2)) {
          			  case 0:
/*< 35>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xA0BGrazie!\nAllora...")
/*<  9>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x203Puoi portare una <r<botte >>alla cuoca?\nAfferra la botte con (A) e <g<posala a\nterra>> premendo di nuovo (A).\n\n\x0E\x01\x09\x04\x01\x200Quando la botte è sollevata, se <g<punti\nil telecomando verso l'alto e lo scuoti>>,\nla puoi <g<lanciare>>.\n\nPuoi <g<far rotolare >>oggetti piccoli come\nle giare, <g<puntando il telecomando\nverso il basso e scuotendolo>>.\n\n\x0E\x01\x09\x04\xC07\x200Ma se si rompono è un guaio, quindi fai\nattenzione!")
/*<113>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x200Se ti dovessi dimenticare i comandi,\nprova a <g<premere>> <g<(2)>>.\x0E\x01\x11\x02\x5CD\n\n\nTi verranno mostrati tutti i comandi\nche puoi usare in quel momento.\nÈ comodissimo!")
/*<  8>*/ 				loadzone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 36>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x19Ah\x0E\x01\x06\x02\xFBCD... \x0E\x01\x06\x02Ídimenticavo... oggi è il\ngiorno del tuo battesimo del \nvolo, vero?\n\nAllora lascia perdere.")
          			}
          		}
          	}
          }

          void entrypoint_114_01() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x201Link!!!")
/*< 23>*/ 	set_camera(1, 0)
/*< 18>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 2), ('param2', 100), ('next', 25), ('param3', 15)])
/*< 25>*/ 	set_camera(3, 0)
/*< 17>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 0), ('next', 22), ('param3', 14)])
/*< 22>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 20), ('param3', 16)])
/*< 20>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x1800Quell'uniforme verde... ti sta\nbenissimo! Sembri un vero\ncavaliere!")
/*<111>*/ 	set_camera(2, 0)
/*<112>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x200Il direttore mi ha detto che stai per\npartire alla ricerca di Zelda...\n\n\n\x0E\x01\x09\x04\x00\x1700Sei davvero coraggioso...\nIo non ce la farei mai...\n\n\n\x0E\x01\n\x04\x05ÍPerò ti ho fatto questa!\nSe ti piace, te la regalo!")
/*< 51>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 14), ('param2', 4096), ('next', 52), ('param3', 13)])
/*< 52>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 50), ('param3', 6)])
/*< 50>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 16), ('param3', 42)])
/*< 16>*/ 	give_item(112 0x70);
/*< 19>*/ 	printf(/* textboxtype: 1, unk: 0 */ "È la <r<borsa dell'avventuriero >>e può\ncontenere fino a <r<4>> oggetti che ti\npossono tornare utili in viaggio.\n\nAl bazar puoi comprare\nvari oggetti. Perché\nnon ci fai un salto?\n\n\x0E\x01\x09\x04\x07\xA09In particolare ti torneranno\nutili le <y<pozioni >>e gli <y<scudi>>!")
/*< 24>*/ 	set_camera(2, 0)
/*< 21>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Link! \n\x0E\x01\x09\x04\x01\xC00Sono sicuro che\ntroverai Zelda!")
/*<100>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = true;
/*<101>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = true;
/*< 47>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_114_02() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
          }

