          void entrypoint_201_51() {
/*<  2>*/ 	start()
/*< 12>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 10>*/ 		printf(/* textboxtype: 3, unk: 0 */ "")
          	  case 1:
/*< 11>*/ 		printf(/* textboxtype: 3, unk: 0 */ "")
          	}
          }

          void entrypoint_201_17() {
/*< 49>*/ 	start()
/*< 50>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Le mie analisi indicano che il nuovo\nstrumento a forma di insetto alato di\ncui siete in possesso <pling><r<è in grado di\nvolare>>.\nPuò essere <r<controllato a distanza\n>>tramite il telecomando e può tagliare\noggetti sottili grazie alle sue pinze\nanteriori o colpire piccoli oggetti.\nPremete (B) per prepararvi,\nquindi (2) per le istruzioni sul\nsuo utilizzo.\x0E\x01\x11\x02\x1CD\x0E\x01\x11\x02\x5CD")
          }

          void entrypoint_201_52() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 3, unk: 0 */ "")
          }

          void entrypoint_201_18() {
/*< 72>*/ 	start()
/*<228>*/ 	scene_flags[11 'Faron: Skyview Temple'][21 /* 0x3 20 */] = true;
/*< 75>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*< 77>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Nonostante sia stata in grado di\nrintracciare l'<y<acqua sacra>> all'interno di\nquesto santuario, <pling><r<non è possibile usare\nil rilevatore>>.\nRitengo che si trovi da qualche\nparte, nei recessi più remoti.")
/*<209>*/ 		scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = true;
/*<204>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 205), ('param3', 30)])
/*<205>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 206), ('param3', 6)])
/*<206>*/ 		scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = true;
/*<208>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Suggerisco di dirigervi verso il\nluogo indicato da \x0E\x02\x04\x02\x19CD sulla mappa.")
/*<207>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 78), ('param3', 34)])
/*< 78>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Rispetto all'ultima volta, avverto\nuna presenza molto più forte di esseri\nmalvagi. Prestate attenzione.")
          	  case 1:
/*< 76>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Rispetto all'ultima volta, avverto\nuna presenza molto più forte di esseri\nmalvagi. Prestate attenzione.")
          	}
          }

          void entrypoint_201_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 7, unk: 0 */ "La via si aprirà colpendo le\ngemme segnate con \x0E\x02\x04\x02\x19CD sulla\nmappa. La quale è custodita\nnella sala di mezzo.")
          }

          void entrypoint_201_53() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x04Mio signore Link, secondo\nquanto vi ho tradotto, <b<Zelda>> dovrebbe\nessere venuta qui per purificarsi.\n\nProbabilità che si sia diretta\nalla fonte successiva, nelle\n<b<Terre di Oldin>>: 97%.\n\nNon ho alcuna informazione\nriguardo al modo in cui Zelda\nha lasciato questo luogo.")
/*< 87>*/ 	set_camera(1, 0)
/*< 86>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Secondo le mie analisi, se disporrete\nsulla colonna a <b<Oltrenuvola >>la stele che\navete ottenuto...\n\n... <pling>dovrebbe sollevarsi dalla Terra una \n<r<nuova colonna di luce>> per procedere\nnella ricerca di Zelda.")
/*< 88>*/ 	set_camera(-1, 0)
/*<  9>*/ 	switch (story_flags[86 /* us: 805A9AE8 0x04, jp: 805ACD68 0x04 */]) {
          	  case 0:
/*<  7>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Possiamo tornare in Cielo dal <b<totem>>\nche si trova all'esterno!")
          		flw_79:
/*< 79>*/ 		loadzone_temp_flags[3 /* 0x1 08 */] = true;
/*< 80>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 81), ('param3', 36)])
/*< 81>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', -1), ('param3', 6)])
          	  case 1:
/*<  8>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Ritengo che nella foresta\nsi trovi un dispositivo\nper tornare nel cielo.")
          		goto flw_79
          	}
          }

          void entrypoint_201_19() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Nelle vicinanze avverto l'<y<acqua sacra>>.\n<r<È ora possibile usare il rilevatore >>in\nquanto non avverto alcuna presenza di\nesseri malvagi.")
          }

          void entrypoint_201_02() {
/*< 21>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 7, unk: 0 */ "Tu che provieni dal cielo,\npresta ascolto alla voce che\nti guida sulla Terra.")
          }

          void entrypoint_201_54() {
/*< 23>*/ 	start()
/*<171>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 47), ('param2', 0), ('next', 167), ('param3', 40)])
/*<167>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 330), ('param2', 0), ('next', 168), ('param3', 51)])
/*<168>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 3), ('next', 169), ('param3', 17)])
/*<169>*/ 	set_camera(9, 0)
/*< 26>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*< 24>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Probabilità che questa sia\nla stessa acqua dell'orcio del\ndrago d'acqua: 95%.\nTorniamo da lei.")
/*< 82>*/ 		loadzone_temp_flags[3 /* 0x1 08 */] = true;
/*<264>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*< 83>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 84), ('param3', 36)])
/*< 84>*/ 		set_camera(10, 0)
/*<170>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', -1), ('param3', 6)])
          	  case 1:
/*< 25>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Non si tratta certo di un'acqua\nqualunque. Emana una forte energia.\n\n\nSe entra in contatto con un\ncorpo delle stesse qualità,\nl'energia potrebbe rinforzarsi.")
/*<166>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 36)])
          	}
          }

          void entrypoint_201_03() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 7, unk: 0 */ "Le porte delle stanze laterali si\napriranno quando le gemme\nsaranno colpite.\nUna è in alto, l'altra in basso.")
          }

          void entrypoint_201_55() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Beh...~~~ non te la cavi male!\n\n\n\nPerò non vale...~~~\nVolevo vedere come avresti\nfatto senza quella spada!")
          }

          void entrypoint_201_20() {
/*< 91>*/ 	start()
/*< 92>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x04Mio signore Link.\nÈ probabile che il servo a cui questa\niscrizione fa riferimento sia io, <b<Faih>>.\n\nPer potervi essere d'aiuto, \x0E\x01\x12\x04\x00\x02signore,\nsono stata istruita riguardo alla Terra.\nSe sentite il bisogno di chiedermi\nqualcosa, chiamatemi premendo (v).\n\x0E\x01\x11\x02\x9CDInoltre, se <g<inquadrate >>qualcosa\npremendo (Z) e mi chiamate premendo\n(v), potrò fornirvi delle informazioni\nriguardanti quel soggetto.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
/*< 93>*/ 	scene_flags[11 'Faron: Skyview Temple'][68 /* 0x9 10 */] = true;
          }

          void entrypoint_201_04() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 7, unk: 0 */ "")
          }

          void entrypoint_201_56() {
/*< 36>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Mi sono stancato di giocare.\nLa presenza della fanciulla\nsta scomparendo...~~~\nÈ inutile stare ancora qui.\nArrivederci ragazzino che vieni dal\ncielo! Per questa volta ti perdono per\navermi intralciato, ma non sfidare la\nmia magnanimità! Te ne pentiresti!")
/*< 85>*/ 	story_flags[83 /* us: 805A9AE9 0x80, jp: 805ACD69 0x80 */] = true;
          }

          void entrypoint_201_21() {
/*<214>*/ 	start()
/*<215>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Guardiano di origine maligna.\nTende a seguire con lo sguardo\ngli oggetti appuntiti.")
/*<216>*/ 	set_camera(13, 0)
/*<217>*/ 	printf(/* textboxtype: 2, unk: 0 */ "I due occhi sono collegati all'interno.\nRitengo impossibile disattivarli\nuno per volta.")
/*<218>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 219), ('param3', 6)])
/*<219>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_201_91() {
/*< 42>*/ 	start()
/*<195>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 196), ('param3', 32)])
/*<196>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 16), ('next', 197), ('param3', 33)])
/*<197>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 99), ('next', 198), ('param3', 16)])
/*<198>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 194), ('param3', 6)])
/*<194>*/ 	set_camera(12, 0)
/*<212>*/ 	scene_flags[11 'Faron: Skyview Temple'][31 /* 0x2 80 */] = true;
/*<265>*/ 	story_flags[1112 /* us: 805A9B54 0x40, jp: 805ACDD4 0x40 */] = true;
/*<193>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 16), ('next', 255), ('param3', 33)])
/*<255>*/ 	switch (story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */]) {
          	  case 0:
/*<257>*/ 		entrypoint_201_96();
          	  case 1:
/*< 48>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4115), ('param2', 4100), ('next', 46), ('param3', 13)])
/*< 46>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Accidenti... con tutta la fatica\nfatta per fregare la chiave a\nquei mostri!")
/*< 47>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4117), ('param2', 4103), ('next', 43), ('param3', 13)])
/*< 43>*/ 		printf(/* textboxtype: 1, unk: 0 */ "In quale buca l'avevo nascosta?!\nE chi se lo ricorda più...")
/*<258>*/ 		switch (scene_flags[15 /* 0x0 80 */]) {
          		  case 0:
/*<259>*/ 			entrypoint_201_96();
          		  case 1:
/*< 44>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4351), ('param2', 2057), ('next', 45), ('param3', 13)])
/*< 45>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Sinceramente... io cerco più\nvolentieri roba di valore, come\ni tesori, altro che chiavi e robe simili!")
/*< 89>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          		}
          	}
          }

          void entrypoint_201_57() {
/*<210>*/ 	start()
/*<211>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x05\x04K\x00Mica male questa spada!~~~\nComunque mi basta osservare come\n<r<la brandisci >>per fermarla\ncon un solo gesto.")
          }

          void entrypoint_201_22() {
/*<220>*/ 	start()
/*<221>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x04Mio signore, Link.\nConfermo nelle vicinanze la presenza\ndi un obiettivo che potete inquadrare.\n\nUna volta <g<inquadrato>> con (Z),\npotrete chiamarmi con (v) e vi\nillustrerò le informazioni utili in mio\npossesso riguardo all'obiettivo.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
/*<222>*/ 	scene_flags[11 'Faron: Skyview Temple'][113 /* 0xF 02 */] = true;
/*<223>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 224), ('param3', 32)])
/*<224>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 225), ('param3', 17)])
/*<225>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 226), ('param3', 6)])
/*<226>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 227), ('param3', 36)])
/*<227>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_201_92() {
/*< 51>*/ 	start()
/*<142>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 154), ('param3', 32)])
/*<154>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 16), ('next', 155), ('param3', 33)])
/*<155>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 100), ('next', 161), ('param3', 17)])
/*<161>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', -1), ('next', 57), ('param3', 16)])
/*< 57>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4113), ('param2', 3342), ('next', 55), ('param3', 13)])
/*< 55>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Ma tu... eri nel\nvulcano prima, no?!")
/*< 56>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4117), ('param2', 2065), ('next', 52), ('param3', 13)])
/*< 52>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Anche tu sei venuto qui\nper la caccia ai tesori?\n[1]Già![2]No")
/*< 58>*/ 	switch (choice(2)) {
          	  case 0:
/*< 59>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4113), ('param2', 3346), ('next', 60), ('param3', 13)])
/*< 60>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Me lo immaginavo!\nHo sentito subito l'odore tipico\ndei cacciatori di tesori! Non \npotevo sbagliarmi!")
          		flw_61:
/*< 61>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4105), ('param2', 2059), ('next', 62), ('param3', 13)])
/*< 62>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Anche tu sei arrivato qui seguendo\nle storie di quel tipo che somiglia a\nun masso?\n[1]Goron?[2]Storie?")
/*< 95>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4117), ('param2', 2050), ('next', 96), ('param3', 13)])
/*< 96>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x201CDove danzano le farfalle\nall'interno del santuario, \n<pling><g<fate risuonare una dolce melodia>>.\"\n")
/*< 97>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4116), ('param2', 2057), ('next', 98), ('param3', 13)])
/*< 98>*/ 		printf(/* textboxtype: 1, unk: 0 */ "M'ha detto questa cosa, io ho\nprovato canticchiando la melodia più\nbella che so, ma non è successo niente.\nE dire che ho una bella voce, eh!")
/*< 99>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4105), ('param2', 2050), ('next', 100), ('param3', 13)])
/*<100>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Comunque, visto che sono\nqui, mi metto a caccia di\ntesori!")
/*<157>*/ 		story_flags[493 /* us: 805A9B13 0x08, jp: 805ACD93 0x08 */] = true;
/*<156>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          	  case 1:
/*< 53>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4116), ('param2', 4617), ('next', 54), ('param3', 13)])
/*< 54>*/ 		printf(/* textboxtype: 1, unk: 0 */ "È inutile che fai finta di niente!\nHo un fiuto sopraffino per i\ncacciatori di tesori, io!")
          		goto flw_61
          	}
          }

          void entrypoint_201_23() {
/*<229>*/ 	start()
/*<230>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x04Mio signore Link, l'acqua\npresente in questo luogo...~~~ è della\n<r<normale acqua>>.\n\nL'<y<acqua sacra>> che desidera il drago\nd'acqua si trova nelle profondità del\nsantuario.")
          }

          void entrypoint_201_93() {
/*< 63>*/ 	start()
/*<199>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 200), ('param3', 32)])
/*<200>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 16), ('next', 201), ('param3', 33)])
/*<201>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 99), ('next', 202), ('param3', 16)])
/*<202>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 160), ('param3', 6)])
/*<160>*/ 	set_camera(11, 0)
/*<213>*/ 	loadzone_temp_flags[56 /* 0x6 01 */] = true;
/*<203>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 16), ('next', 69), ('param3', 33)])
/*< 69>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4115), ('param2', 4364), ('next', 67), ('param3', 13)])
/*< 67>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Accidenti... sono venuto\nfin qua per niente.")
/*< 68>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4116), ('param2', 4112), ('next', 64), ('param3', 13)])
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Penso che qualcuno sia passato\nprima di me... trovo solo <y<acqua>>.")
/*< 65>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4117), ('param2', 4615), ('next', 66), ('param3', 13)])
/*< 66>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Chi può volere una roba\nsimile?!")
/*< 70>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4351), ('param2', 2061), ('next', 71), ('param3', 13)])
/*< 71>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Bah, io me ne vado!\nCi talpiamo in giro!")
/*< 90>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_201_94() {
/*<101>*/ 	start()
/*<140>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 138), ('param3', 46)])
/*<138>*/ 	set_camera(2, 0)
/*<141>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 143), ('param3', 32)])
/*<143>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 139), ('param3', 49)])
/*<139>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 16), ('next', 137), ('param3', 33)])
/*<137>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 100), ('next', 105), ('param3', 49)])
/*<105>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4096), ('param2', 1), ('next', 113), ('param3', 13)])
/*<113>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 25), ('param2', 0), ('next', 136), ('param3', 40)])
/*<136>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 16), ('next', 106), ('param3', 17)])
/*<106>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 107), ('param3', 6)])
/*<107>*/ 	set_camera(3, 0)
/*<108>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 13), ('param2', 356), ('next', 109), ('param3', 15)])
/*<109>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 100), ('next', 111), ('param3', 17)])
/*<111>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 110), ('param3', 6)])
/*<110>*/ 	set_camera(4, 0)
/*<104>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 13), ('param2', 100), ('next', 112), ('param3', 14)])
/*<112>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 16), ('next', 103), ('param3', 17)])
/*<103>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 102), ('param3', 6)])
/*<102>*/ 	entrypoint_201_92();
          }

          void entrypoint_201_95() {
/*<114>*/ 	start()
/*<150>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 148), ('param3', 46)])
/*<148>*/ 	set_camera(5, 0)
/*<151>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 17), ('next', 149), ('param3', 32)])
/*<149>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 17), ('next', 147), ('param3', 33)])
/*<147>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 100), ('next', 145), ('param3', 49)])
/*<145>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 25), ('param2', 0), ('next', 146), ('param3', 40)])
/*<146>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 17), ('next', 144), ('param3', 17)])
/*<144>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 162), ('param3', 6)])
/*<162>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', -1), ('next', 115), ('param3', 16)])
/*<115>*/ 	switch (scene_flags[58 /* 0x6 04 */]) {
          	  case 0:
/*<116>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4369), ('param2', 3346), ('next', 117), ('param3', 13)])
/*<117>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Ehi ehi! Non vorrai mica\nandare da solo?!")
/*<118>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4373), ('param2', 3345), ('next', 119), ('param3', 13)])
/*<119>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Ma...\x0E\x01\x04\x02\x1E È solo apparso uno strano\nsimbolo sul muro, non credo che ciò\nporti a chissà quali cose...")
/*<120>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4372), ('param2', 2057), ('next', 121), ('param3', 13)])
/*<121>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Ti sei fatto fregare da\nquel grosso masso parlante!")
/*<122>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4361), ('param2', 2050), ('next', 123), ('param3', 13)])
/*<123>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Beh! Io vado!")
/*<124>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          	  case 1:
/*<128>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4369), ('param2', 3329), ('next', 126), ('param3', 13)])
/*<126>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Ma tu... eri nel\nvulcano prima, no?!")
/*<127>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4373), ('param2', 3345), ('next', 125), ('param3', 13)])
/*<125>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Anche tu sei venuto qui\nper la caccia ai tesori?\n[1]Già![2]No")
/*<131>*/ 		switch (choice(2)) {
          		  case 0:
/*<132>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4369), ('param2', 3346), ('next', 133), ('param3', 13)])
/*<133>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Me lo immaginavo!\nHo sentito subito l'odore tipico\ndei cacciatori di tesori! Non \npotevo sbagliarmi!")
          			flw_152:
/*<152>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4361), ('param2', 2062), ('next', 153), ('param3', 13)])
/*<153>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Anche tu sei arrivato qui seguendo\nle storie di quel tipo che somiglia a\nun masso?\n[1]Goron?[2]Storie?")
/*<134>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4369), ('param2', 3339), ('next', 135), ('param3', 13)])
/*<135>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Arriverò per primo!")
/*<159>*/ 			story_flags[493 /* us: 805A9B13 0x08, jp: 805ACD93 0x08 */] = true;
/*<158>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          		  case 1:
/*<129>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4372), ('param2', 4617), ('next', 130), ('param3', 13)])
/*<130>*/ 			printf(/* textboxtype: 1, unk: 0 */ "È inutile che fai finta di niente!\nHo un fiuto sopraffino per i\ncacciatori di tesori, io!")
          			goto flw_152
          		}
          	}
          }

          void entrypoint_201_96() {
/*<172>*/ 	start()
/*<260>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 261), ('param3', 32)])
/*<261>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 99), ('next', 173), ('param3', 16)])
/*<173>*/ 	switch (scene_flags[15 /* 0x0 80 */]) {
          	  case 0:
/*<174>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*<181>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4113), ('param2', 3345), ('next', 177), ('param3', 13)])
/*<177>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Cosa?! L'hai usata?!")
          			flw_182:
/*<182>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4116), ('param2', 4617), ('next', 178), ('param3', 13)])
/*<178>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Mah, sai che...? Noi Mogma non\nce ne facciamo niente delle chiavi...")
/*<183>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4105), ('param2', 2050), ('next', 179), ('param3', 13)])
/*<179>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Grazie per l'informazione, comunque!\nContinuo la caccia ai tesori!")
/*<192>*/ 			scene_flags[11 'Faron: Skyview Temple'][55 /* 0x7 80 */] = true;
          			flw_256:
/*<256>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          		  case 1:
/*<180>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4113), ('param2', 3346), ('next', 176), ('param3', 13)])
/*<176>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Ah, ottimo! Hai trovato\nquella chiave, bene, grazie!")
          			goto flw_182
          		}
          	  case 1:
/*<249>*/ 		switch (story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */]) {
          		  case 0:
/*<254>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4115), ('param2', 4100), ('next', 251), ('param3', 13)])
/*<251>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Ma cosa...? Niente da fare,\nnon riesco a trovarla!")
/*<252>*/ 			story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */] = false;
          			flw_189:
/*<189>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4105), ('param2', 2050), ('next', 188), ('param3', 13)])
/*<188>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Ora che ci penso, sono sicuro di avere\nsepolto la chiave... ma dove?")
/*<191>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4117), ('param2', 3345), ('next', 190), ('param3', 13)])
/*<190>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Uff! Ma dov'era? Forse non in\nquesta stanza... Mmh... C'hai\nmica una mappa?!")
          			goto flw_256
          		  case 1:
/*<253>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4113), ('param2', 3329), ('next', 250), ('param3', 13)])
/*<250>*/ 			printf(/* textboxtype: 1, unk: 1 */ "Ti serve qualcosa?!\n\n[1]Chiave[2]Tesori[3-]Niente")
/*<175>*/ 			switch (choice(3)) {
          			  case 0:
          				goto flw_189
          			  case 1:
/*<185>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4105), ('param2', 2050), ('next', 184), ('param3', 13)])
/*<184>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Conosci quel tipo che sembra un masso\ncon le gambe? Ha detto che per aprire\nun portone importante serve una cosa\nche si chiama <y<chiavenigma d'oro>>.")
/*<187>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4117), ('param2', 3332), ('next', 186), ('param3', 13)])
/*<186>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Dì un po'... hai tutta\nl'aria di sapere qualcosa.")
          				goto flw_256
          			  case 2:
          			}
          		}
          	}
          }

          void entrypoint_201_97() {
/*<231>*/ 	start()
/*<241>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 242), ('param3', 32)])
/*<242>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 16), ('next', 243), ('param3', 33)])
/*<243>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 99), ('next', 244), ('param3', 16)])
/*<244>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 240), ('param3', 6)])
/*<240>*/ 	set_camera(12, 0)
/*<245>*/ 	loadzone_temp_flags[55 /* 0x7 80 */] = true;
/*<266>*/ 	story_flags[1112 /* us: 805A9B54 0x40, jp: 805ACDD4 0x40 */] = true;
/*<248>*/ 	story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */] = true;
/*<239>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 16), ('next', 237), ('param3', 33)])
/*<237>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4115), ('param2', 4100), ('next', 235), ('param3', 13)])
/*<235>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Accidenti... con tutta la fatica\nfatta per fregare la chiave a\nquei mostri!")
/*<236>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4117), ('param2', 4103), ('next', 232), ('param3', 13)])
/*<232>*/ 	printf(/* textboxtype: 1, unk: 0 */ "In quale buca l'avevo nascosta?!\nE chi se lo ricorda più...")
/*<246>*/ 	switch (scene_flags[15 /* 0x0 80 */]) {
          	  case 0:
/*<247>*/ 		entrypoint_201_96();
          	  case 1:
/*<233>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4351), ('param2', 2057), ('next', 234), ('param3', 13)])
/*<234>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Speravo proprio di farmi un bel\ngruzzoletto con quella chiave,\naccidenti... ~~~Eppure l'avevo messa\n<r<da queste parti>>!")
/*<238>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          	}
          }

          void entrypoint_201_11() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Percepisco una forte traccia dell'aura\ndi <b<Zelda >>provenire dalla zona al di là\ndella porta. Suggerirei di dirigerci\nda quella parte.")
/*< 31>*/ 	scene_flags[11 'Faron: Skyview Temple'][32 /* 0x5 01 */] = true;
          }

          void entrypoint_201_12() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 2, unk: 0 */ "")
          }

          void entrypoint_201_99() {
/*<163>*/ 	start()
/*<164>*/ 	switch (temp_flags[63 /* 0x6 80 */]) {
          	  case 0:
/*<165>*/ 		scene_flags[11 'Faron: Skyview Temple'][16 /* 0x3 01 */] = true;
          	  case 1:
          	}
          }

          void entrypoint_201_13() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Sembra che il meccanismo che\ncontrolla la porta fuori da questa\nsala sia stato disattivato.")
/*< 32>*/ 	scene_flags[11 'Faron: Skyview Temple'][34 /* 0x5 04 */] = true;
          }

          void entrypoint_201_14() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BSignore, Faih a rapporto.\nA causa della forte presenza di esseri\nostili all'interno del santuario, non\nriesco a isolare l'aura di Zelda\x0E\x01\x06\x02\xFECD... ... ...~~~\n\x0E\x01\x06\x02Í<pling>Mi è impossibile usare il <r<rilevatore>>.\n\x0E\x01\x12\x04\x00\x01Signore, vi suggerirei di analizzare\nla situazione <g<osservando >>con i vostri\nocchi.")
/*< 94>*/ 	temp_flags[50 /* 0x7 04 */] = true;
/*<262>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<263>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_201_15() {
/*< 37>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x04Mio signore Link,\nrapporto sul dispositivo di\napertura della porta.\n\nSuppongo che, dovendo interagire\ncon la porta, debba trovarsi\nnelle sue immediate vicinanze.\n\nProbabilità che lo troverete\n<g<osservando >>con attenzione attorno\nalla porta: 80%.")
          }

          void entrypoint_201_16() {
/*< 39>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Uno dei seguaci di Ghiraim deve avere\nchiuso di nuovo la porta, è necessario\ntrovare un'altra chiave.")
/*< 41>*/ 	scene_flags[11 'Faron: Skyview Temple'][20 /* 0x3 10 */] = true;
          }

