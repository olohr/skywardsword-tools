          void entrypoint_302_01() {
          	start()
/*< 19>*/ 	switch (context_related3(0)) {
          	  case 0:
/*< 82>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 3585), ('next', 16), ('param3', 13)])
/*< 16>*/ 		switch (story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */]) {
          		  case 0:
/*< 14>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Benvenuto!")
/*<156>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 53), ('param3', 13)])
          			flw_53:
/*< 53>*/ 			switch (context_related2(1)) {
          			  case 0:
/*< 84>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5640), ('next', 54), ('param3', 13)])
/*< 54>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Mentre stani le rupie puoi incappare\nanche in delle bombe! Allora, ci stai?\n\n\n\x0E\x01\x09\x04\x14\x1614Sembri un po' stanco. Torna appena\navrai recuperato qualche cuore.")
/*<118>*/ 				set_camera(5, 0)
/*<119>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Se ti va, puoi usare quel sedile.")
          			  case 1:
/*< 83>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 6), ('next', 1), ('param3', 13)])
/*<  1>*/ 				printf(/* textboxtype: 1, unk: 1 */ "Puoi continuare a stanare rupie finché\nnon trovi delle bombe! Vuoi giocare a\n<b<Stana la rupia>>? Se sì, a che livello?\n[1]Facile[2]Normale[3]Difficile[4-]Nessuno")
          				flw_85:
/*< 85>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 3), ('param3', 13)])
/*<  3>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					switch (temp_flags[14 /* 0x0 40 */]) {
          					  case 0:
          						flw_74:
/*< 74>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 87), ('param3', 12)])
/*< 87>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5638), ('next', 59), ('param3', 13)])
/*< 59>*/ 						printf(/* textboxtype: 1, unk: 1 */ "Costa <r<30 rupie>> per turno.\nVuoi provare?\n[1]Sì[2-]No")
/*< 88>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 37), ('param3', 13)])
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*<110>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 30), ('next', 109), ('param3', 23)])
/*<109>*/ 							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 37)])) {
          							  case 0:
/*< 36>*/ 								rupees += -30;
/*< 90>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5400), ('next', 34), ('param3', 13)])
/*< 34>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Ti auguro di trovare un sacco di rupie!\nBuona fortuna.")
/*< 57>*/ 								temp_flags[14 /* 0x0 40 */] = true;
/*< 33>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 47), ('param3', 33)])
/*< 47>*/ 								changeScene(1, 0) // 
          							  case 1:
/*< 89>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4633), ('next', 35), ('param3', 13)])
/*< 35>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Non hai abbastanza rupie. Torna pure\nquando ne avrai a sufficienza.")
          							}
          						  case 1:
/*< 75>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 38), ('param3', 12)])
/*< 38>*/ 							printf(/* textboxtype: 1, unk: 1 */ "Che livello vuoi provare?\n[1]Facile[2]Normale[3]Difficile[4-]Nessuno")
          							goto flw_85
          						}
          					  case 1:
/*< 21>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Nel livello facile ci sono meno punti\nin cui scavare. Ottimo per chi è alla\nprima esperienza.")
          						goto flw_74
          					}
          				  case 1:
/*< 62>*/ 					switch (temp_flags[15 /* 0x0 80 */]) {
          					  case 0:
          						flw_76:
/*< 76>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 91), ('param3', 12)])
/*< 91>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5638), ('next', 22), ('param3', 13)])
/*< 22>*/ 						printf(/* textboxtype: 1, unk: 1 */ "Costa <r<50 rupie >>per turno.\nVuoi provare?\n[1]Sì[2-]No")
/*< 92>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 31), ('param3', 13)])
/*< 31>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							switch (has_rupees(50)) {
          							  case 0:
/*< 30>*/ 								rupees += -50;
/*< 96>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5400), ('next', 27), ('param3', 13)])
/*< 27>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Ti auguro di trovare un sacco di rupie!\nBuona fortuna.")
/*< 60>*/ 								temp_flags[15 /* 0x0 80 */] = true;
/*< 26>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 45), ('param3', 33)])
/*< 45>*/ 								changeScene(2, 0) // 
          							  case 1:
/*< 95>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4633), ('next', 29), ('param3', 13)])
/*< 29>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Non hai abbastanza rupie. Torna pure\nquando ne avrai a sufficienza.")
          							}
          						  case 1:
/*< 77>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 32), ('param3', 12)])
/*< 32>*/ 							printf(/* textboxtype: 1, unk: 1 */ "Che livello vuoi provare?\n[1]Facile[2]Normale[3]Difficile[4-]Nessuno")
          							goto flw_85
          						}
          					  case 1:
/*< 63>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Nel livello normale ci sono più punti in\ncui scavare, ma occhio alle <y<baba rupie>>!")
          						goto flw_76
          					}
          				  case 2:
/*< 64>*/ 					switch (temp_flags[16 /* 0x3 01 */]) {
          					  case 0:
          						flw_78:
/*< 78>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 93), ('param3', 12)])
/*< 93>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5638), ('next', 23), ('param3', 13)])
/*< 23>*/ 						printf(/* textboxtype: 1, unk: 1 */ "Costa <r<7>><r<0 rupie >>per turno.\nVuoi provare?\n[1]Sì[2-]No")
/*< 94>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 24), ('param3', 13)])
/*< 24>*/ 						switch (choice(2)) {
          						  case 0:
/*<113>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 70), ('next', 112), ('param3', 23)])
/*<112>*/ 							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 39)])) {
          							  case 0:
/*< 15>*/ 								rupees += -70;
/*< 98>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5400), ('next', 6), ('param3', 13)])
/*<  6>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Ti auguro di trovare un sacco di rupie!\nBuona fortuna.")
/*< 61>*/ 								temp_flags[16 /* 0x3 01 */] = true;
/*<  4>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 46), ('param3', 33)])
/*< 46>*/ 								changeScene(3, 0) // 
          							  case 1:
/*< 97>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4633), ('next', 13), ('param3', 13)])
/*< 13>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Non hai abbastanza rupie. Torna pure\nquando ne avrai a sufficienza.")
          							}
          						  case 1:
/*< 79>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 25), ('param3', 12)])
/*< 25>*/ 							printf(/* textboxtype: 1, unk: 1 */ "Che livello vuoi provare?\n[1]Facile[2]Normale[3]Difficile[4-]Nessuno")
          							goto flw_85
          						}
          					  case 1:
/*< 65>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Nel livello difficile ci sono più bombe,\nma anche rupie più preziose.\nDa diventare ricchi!")
          						goto flw_78
          					}
          				  case 3:
/*< 86>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5379), ('next', 5), ('param3', 13)])
/*<  5>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Torna presto!")
          				}
          			}
          		  case 1:
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 2 */ "Salve, che piacere vederti!\nÈ la prima volta che vieni qui, vero?\nSono onorato!")
/*<155>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 154), ('param3', 13)])
/*<154>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Piacere, mi chiamo Raduncolo e sono\nresponsabile del meraviglioso\n<r<Stana la rupia>>.")
/*< 18>*/ 			story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */] = true;
          			goto flw_53
          		}
          	  case 1:
/*< 69>*/ 		story_flags[185 /* us: 805A9AE9 0x01, jp: 805ACD69 0x01 */] = true;
/*<106>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 72), ('param3', 44)])
/*< 72>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 20), ('param3', 12)])
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Il numero di <r<rupie>> che hai\nstanato è <r<\x0E\x02\x03\x06\x00\x00Í>>.")
/*< 71>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 39), ('param3', 33)])
/*< 39>*/ 		switch (context_related3(2)) {
          		  case 0:
/*<104>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4628), ('next', 7), ('param3', 13)])
/*<  7>*/ 			switch (context_related3(3)) {
          			  case 0:
/*< 11>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Non hai stanato nemmeno una rupia?\nOh poverino...")
          				flw_103:
/*<103>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 81), ('param3', 13)])
/*< 81>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 108), ('param3', 12)])
/*<108>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 50), ('param3', 45)])
/*< 50>*/ 				switch (story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */]) {
          				  case 0:
          					flw_55:
/*< 55>*/ 					switch (context_related2(1)) {
          					  case 0:
/*<105>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5640), ('next', 56), ('param3', 13)])
/*< 56>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Mi sembri piuttosto stanco. Recupera\ni cuori e riprova.")
/*<116>*/ 						set_camera(5, 0)
/*<117>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Se ti va, puoi riposarti su quel sedile.")
          					  case 1:
/*<  2>*/ 						printf(/* textboxtype: 1, unk: 1 */ "Dovresti riprovare.\nAllora, che ne dici?\n[1]Facile[2]Normale[3]Difficile[4-]No")
          						goto flw_85
          					}
          				  case 1:
/*< 51>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Ti do un consiglio. Le <r<rupie meno\npreziose >>sono in mezzo a <r<poche\ninsidie>>, perciò nessun problema.\n\nPerò le <r<rupie più preziose>> sono\ncircondate da <r<più insidie>>. Quindi fai\nattenzione.\n\nSe appena inizi scovi una bomba...\x0E\x01\x04\x02\x14\nhai perso e dovrai ricominciare da\ncapo. Non te la prendere!")
/*< 52>*/ 					story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */] = true;
          					goto flw_55
          				}
          			  case 1:
/*<  8>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Che peccato, mi dispiace davvero per\nte.")
          				goto flw_103
          			  case 2:
/*< 43>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Hai perso poco. Poteva andare peggio!")
          				flw_102:
/*<102>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 80), ('param3', 13)])
/*< 80>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 107), ('param3', 12)])
/*<107>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 55), ('param3', 45)])
          				goto flw_55
          			}
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Pareggio. Nessuna perdita, nessun\nguadagno.")
          			goto flw_102
          		  case 2:
/*< 44>*/ 			switch (context_related2(4)) {
          			  case 0:
/*<100>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 4363), ('next', 10), ('param3', 13)])
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Hai vinto qualcosina. Ben fatto.")
          				goto flw_102
          			  case 1:
/*<101>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 4364), ('next', 40), ('param3', 13)])
/*< 40>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Hai vinto una fortuna! Complimenti!")
          				goto flw_102
          			}
          		}
          	  case 2:
/*<111>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 73), ('param3', 44)])
/*< 73>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 159), ('param3', 12)])
/*<159>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Hai stanato...")
/*< 70>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 99), ('param3', 33)])
/*< 99>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 6415), ('next', 41), ('param3', 13)])
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Ma è straordinario! Hai stanato tutte\nle rupie! Eccoti il meritato premio.")
/*< 42>*/ 		give_item(64 0x40);
          		goto flw_102
          	}
          }

          void entrypoint_302_02() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 7, unk: 0 */ "Grazie mille per aver\npartecipato a <r<Stana la rupia>>.\nTi do un consiglio utile.\n\nLe <r<rupie meno preziose >>sono in\nmezzo a <r<poche insidie>>, perciò\nnessun problema.\n\nPerò le <r<rupie più preziose >>sono\ncircondate da<r< più insidie>>. Quindi\nfai attenzione. Alla prossima!")
          }

          void entrypoint_302_03() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf(/* textboxtype: 1, unk: 1 */ "Cerca di finire al più presto, il tempo\nsta per scadere.")
          }

          void entrypoint_302_04() {
/*< 68>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 1 */ "Non puoi prendertela comoda.\nIl tempo è scaduto.")
          }

          void entrypoint_302_05() {
/*<114>*/ 	start()
/*<115>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x08\xA04Oh, vuoi fare una pausa?\n\n\n\nAllora che ne dici di tenermi\ncompagnia?[1]OK[2-]No")
/*<120>*/ 	switch (choice(2)) {
          	  case 0:
/*<122>*/ 		printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x0F\x110CSuper! Hai qualcosa da chiedermi?\n\x0E\x01\x09\x04\x08\xAFF[1]Chi sei?[2]Leviti?[3]Troppa\nluce?[4-]Niente\x0E\x01\x09\x04\x13\x16FF")
          		flw_123:
/*<123>*/ 		switch (choice(4)) {
          		  case 0:
/*<125>*/ 			switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA04Mi chiamo <b<Raduncolo>>. Dirigo <r<Stana\nla rupia>>! Sono molto importante qui,\nsai? \x0E\x01\x09\x04\x09\xB09Puoi anche chiamarmi\n<b<signor <b<Raduncolo<b<>>.\nPiacere di conoscerti!")
          				flw_128:
/*<128>*/ 				printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x13\x1806Hai altro da chiedermi?\n[1]Chi sei?[2]Leviti?[3]Troppa\nluce?[4-]No")
          				goto flw_123
          			  case 1:
/*<158>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA04Mi chiamo <b<Raduncolo>>. Dirigo <r<Stana\nla rupia>>! Sono molto importante qui,\nsai? Puoi anche chiamarmi <b<signor\n<b<Raduncolo<b<>>.\n\x0E\x01\x09\x04\x0D\xF01Piacere di conoscerti!\n\n\n\n\x0E\x01\x09\x04\x08\xA09Volevo che chiunque potesse\nottenere un sacco di rupie,\nperciò ho inventato <b<Stana\nla rupia>>.\n\x0E\x01\x09\x04\x10\x1319Per tutti gli altri <b<Mogma >>è facile\ntrovare le rupie, quindi non\npartecipano mai...\n\n\x0E\x01\x09\x04\x08\xAFFSe tu diventassi un cliente fisso qui,\nsignificherebbe molto per me.")
          					flw_124:
/*<124>*/ 					loadzone_temp_flags[0 /* 0x1 01 */] = true;
          					goto flw_128
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA04Mi chiamo <b<Raduncolo>>. Dirigo <r<Stana\nla rupia>>! Sono molto importante qui,\nsai? Puoi anche chiamarmi <b<signor\n<b<Raduncolo<b<>>.\n\x0E\x01\x09\x04\x0D\xF01Piacere di conoscerti!\n\n\n\n\x0E\x01\x09\x04\x08\xA09Volevo che chiunque potesse ottenere\nun sacco di rupie, perciò ho inventato\n<b<Stana la rupia>>.\n\n\x0E\x01\x09\x04\x10\x1319Per tutti gli altri <b<Mogma >>è facile\ntrovare le rupie, quindi non\npartecipano mai...\n\n\x0E\x01\x09\x04\x08\xAFFMi piacerebbe che qualcuno mi\nfacesse il favore di spazzare via\nquelle <r<torrette>>. <pling>BUUM!")
          					goto flw_124
          				}
          			}
          		  case 1:
/*<130>*/ 			switch (loadzone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*<131>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA05No, non sto levitando. Mi reggo sulla\ncoda in modo che i clienti possano\nammirare le mie <r<zampe>>.")
          				goto flw_128
          			  case 1:
/*<151>*/ 				set_camera(1, 0)
/*<148>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\x1605No, non sto levitando. Mi reggo\nsulla coda.")
/*<152>*/ 				set_camera(2, 0)
/*<149>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nNon c'è bisogno che ti dica che la mia\nparte migliore sono le <r<zampe>>.")
/*<153>*/ 				set_camera(-1, 0)
/*<150>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xAFFNon posso fare a meno di metterle\nin mostra. Per questo mi reggo sulla\ncoda, così che i clienti possano\nammirarle.")
/*<129>*/ 				loadzone_temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_128
          			}
          		  case 2:
/*<133>*/ 			switch (loadzone_temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<135>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA09No, indosso gli occhiali per avere un\nlook più ricercato.")
          				goto flw_128
          			  case 1:
/*<145>*/ 				set_camera(3, 0)
/*<134>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\x160AAlludi ai miei occhiali? Li indosso solo\nper avere un look diverso. La forma\ncircolare mi dona molto, non credi?")
/*<146>*/ 				set_camera(4, 0)
/*<143>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\xE0BE che ne dici dei miei <r<baffi? >>Non sono\nfantastici? Li curo ogni giorno!")
/*<147>*/ 				set_camera(-1, 0)
/*<144>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xAFFNaturalmente, devo avere un look\nappropriato per attirare più clienti!")
/*<132>*/ 				loadzone_temp_flags[2 /* 0x1 04 */] = true;
          				goto flw_128
          			}
          		  case 3:
/*<137>*/ 			switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<138>*/ 				switch (loadzone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<136>*/ 					switch (loadzone_temp_flags[2 /* 0x1 04 */]) {
          					  case 0:
/*<140>*/ 						switch (scene_flags[39 /* 0x5 80 */]) {
          						  case 0:
          							flw_139:
/*<139>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x1319No? Bene... Fai con comodo, puoi\npartecipare a <b<Stana la rupia\n>>quando vuoi.")
          						  case 1:
/*<141>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x1319No? Va bene. \x0E\x01\x09\x04\x0D\x100CComunque grazie per\naver parlato un po' con me.\nCome segno di gratitudine ti darò\ndelle informazioni.\n\x0E\x01\x09\x04\x08\xA04Vedi quel materiale scintillante che\nfuoriesce dai muri? Sono <r<rupie grezze>>.\nPer questo ci sono così tante rupie qui\nintorno.\nCon un bel <r<colpo >>potresti <r<prenderne\nun po'>>.<pling> Provaci.")
/*<142>*/ 							scene_flags[4 'Eldin Volcano'][39 /* 0x5 80 */] = true;
          						}
          					  case 1:
          						goto flw_139
          					}
          				  case 1:
          					goto flw_139
          				}
          			  case 1:
          				goto flw_139
          			}
          		}
          	  case 1:
/*<121>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x1319Oh... che peccato. Comunque, se ti\nsenti riposato prova a giocare a\n<b<Stana la rupia>>.")
          	}
          }

