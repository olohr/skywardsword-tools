          void entrypoint_501_07() {
/*<250>*/ 	start()
/*<251>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Ah, Link!\nHai visto il binario là fuori?\n\n\n\x0E\x01\x09\x04\x00\xB00A cosa serve? Eh eh eh...\nAspetta e vedrai!")
          }

          void entrypoint_501_24() {
/*<345>*/ 	start()
/*<382>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<386>*/ 		switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          		  case 0:
/*<389>*/ 			set_camera(64, 0)
/*<391>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x04\x02\x1E\x0E\x01\x06\x02\xFFCD...")
          		  case 1:
          			flw_347:
/*<347>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 453), ('param3', 32)])
/*<453>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<454>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Oh! Che albero meraviglioso!\nOra capisco perché viene\nchiamato albero della vita!")
          			  case 1:
/*<457>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 497), ('param2', 1), ('next', 456), ('param3', 23)])
/*<456>*/ 				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 72)])) {
          				  case 0:
/*<455>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Ma questo posto è deprimente!\nLa nonna è vissuta sempre qui...\n\n\nE non ha mai pensato di piantare\nun albero?")
          				  case 1:
/*<458>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Quando guardo la nonna, mi\nmanca il coraggio di\nlasciarla sola...\n\n\x0E\x01\x09\x04\x00\xA00Ma non dire agli amici che mi\nsto prendendo cura di una\nvegliarda!")
          				}
          			}
          		}
          	  case 1:
/*<383>*/ 		switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          		  case 0:
/*<478>*/ 			switch (story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */]) {
          			  case 0:
          				goto flw_347
          			  case 1:
/*<385>*/ 				switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          				  case 0:
          					flw_384:
/*<384>*/ 					switch (scene_flags[37 /* 0x5 20 */]) {
          					  case 0:
/*<388>*/ 						set_camera(64, 0)
/*<390>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x04\x02\x1E\x0E\x01\x06\x02\xFFCD...")
          					  case 1:
/*<387>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x04\x02\x1E\x0E\x01\x06\x02\xFFCD...")
          					}
          				  case 1:
          					goto flw_347
          				}
          			}
          		  case 1:
          			goto flw_384
          		}
          	}
          }

          void entrypoint_501_08() {
/*<170>*/ 	start()
/*<171>*/ 	switch (scene_flags[81 /* 0xB 02 */]) {
          	  case 0:
/*<175>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 174), ('param3', 32)])
/*<174>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', -1), ('next', 176), ('param3', 16)])
/*<176>*/ 		set_camera(21, 0)
/*<172>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\nUn attimo, Link!\nOra non puoi usare il <r<potere celeste>>!\n\n\nSe lo fai, la creatura oscura si\nrisveglierà subito!\n\n\nPrima<r< imprigiona l'essere oscuro>>!\nCapito?")
/*<173>*/ 		scene_flags[10 'Sealed Grounds'][30 /* 0x2 40 */] = false;
/*<332>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          	  case 1:
/*<154>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 153), ('param3', 32)])
/*<153>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 155), ('param3', 32)])
/*<155>*/ 		scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<459>*/ 		story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<460>*/ 		scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<477>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1010), ('next', 156), ('param3', 24)])
/*<156>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 157), ('param3', 6)])
/*<157>*/ 		set_camera(20, 0)
/*<158>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1034), ('param2', 12800), ('next', 159), ('param3', 13)])
/*<159>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3605), ('param2', -256), ('next', 275), ('param3', 13)])
/*<275>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 99), ('next', 160), ('param3', 50)])
/*<160>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x40A\x321F\x0E\x01\x08\x02\x1CDUahh!!\x0E\x01\x05\x04\x1E\x00")
/*<288>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3585), ('param2', -256), ('next', 287), ('param3', 13)])
/*<287>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 284), ('param3', 50)])
/*<284>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 161), ('param3', 6)])
/*<161>*/ 		set_camera(21, 0)
/*<162>*/ 		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 4), ('param2', 356), ('next', 285), ('param3', 15)])
/*<285>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 286), ('param3', 6)])
/*<286>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 297), ('param3', 17)])
/*<297>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 293), ('param3', 6)])
/*<293>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1085), ('param2', 12800), ('next', 292), ('param3', 13)])
/*<292>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', 163), ('param3', 40)])
/*<163>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\nUhm...\nSembra che <r<il sigillo sia stato di\nnuovo infranto>>...\n\n<r<Quella creatura oscura >>sta per\nrisvegliarsi...\n\n\nProbabilmente ha reagito alla\n<r<forza >>sprigionata dalla tua spada.\n\n\n\x0E\x01\x09\x04\xE01\xB00Ma non abbiamo altra scelta,\nse vogliamo aprire la Porta del Tempo.")
/*<165>*/ 		set_camera(22, 0)
/*<164>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE10\x1600Ehi, Link!\nDevi imprigionare di nuovo la \ncreatura oscura.")
/*<276>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 167), ('param3', 50)])
/*<167>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1035), ('param2', 12544), ('next', 166), ('param3', 13)])
/*<166>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x400\x30DEcco, ci siamo!!!")
/*<290>*/ 		set_camera(50, 0)
/*<289>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x40F\x2F0FFinalmente è arrivato il momento\ndi provare la mia arma segreta!\n\n\nQuella creatura non ha scampo!\nLa ridurrò in pezzettini!\n\n\n\x0E\x01\x09\x04\x40B\x3101Con la mia potente arma,\nliberarcene sarà facile come\nbere un bicchiere d'acqua!")
/*<291>*/ 		set_camera(22, 0)
/*<294>*/ 		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 3), ('param2', 516), ('next', 295), ('param3', 14)])
/*<295>*/ 		set_camera(51, 0)
/*<296>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 179), ('param3', 6)])
/*<179>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 100), ('next', 466), ('param3', 24)])
/*<466>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 177), ('param3', 6)])
/*<177>*/ 		scene_flags[10 'Sealed Grounds'][30 /* 0x2 40 */] = false;
/*<169>*/ 		scene_flags[10 'Sealed Grounds'][81 /* 0xB 02 */] = true;
/*<451>*/ 		story_flags[795 /* us: 805A9B2F 0x08, jp: 805ACDAF 0x08 */] = false;
/*<178>*/ 		story_flags[144 /* us: 805A9AEE 0x04, jp: 805ACD6E 0x04 */] = true;
/*<468>*/ 		scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<168>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          	}
          }

          void entrypoint_501_25() {
/*<346>*/ 	start()
/*<381>*/ 	set_camera(63, 0)
/*<371>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 372), ('param3', 32)])
/*<372>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<380>*/ 		printf(/* textboxtype: 1, unk: 3 */ "\x0E\x01\x06\x02\xFFCDQuello sfacciato...\nPerò se la cava bene!\n\n\nForse posso chiedergli aiuto per \nil restauro del santuario...")
          	  case 1:
/*<375>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<379>*/ 			printf(/* textboxtype: 1, unk: 3 */ "\x0E\x01\x06\x02\xFFCDEra un santuario così tranquillo\ne pian piano è diventato sempre più\nmovimentato...\n\nMah...\nForse non è il caso di parlare così...\n\n\nPerò la situazione che temevo\nsi è verificata...")
          		  case 1:
/*<374>*/ 			switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          			  case 0:
/*<378>*/ 				printf(/* textboxtype: 1, unk: 3 */ "\x0E\x01\x06\x02\xFFCDMi auguro che tu riesca\na trovare Zelda!")
          			  case 1:
/*<373>*/ 				switch (story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */]) {
          				  case 0:
/*<377>*/ 					printf(/* textboxtype: 1, unk: 3 */ "\x0E\x01\x06\x02\xFFCDMi auguro che tu riesca\na trovare Zelda!")
          				  case 1:
/*<376>*/ 					printf(/* textboxtype: 1, unk: 3 */ "\x0E\x01\x06\x02\xFECD.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_501_09() {
/*<  4>*/ 	start()
/*<216>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<474>*/ 		switch (story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */]) {
          		  case 0:
/*<475>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Cerchi i tre draghi?\nIl drago del fulmine dovrebbe\nessere nel deserto...")
          		  case 1:
/*<480>*/ 			switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
          			  case 0:
/*<484>*/ 				switch (scene_flags[95 /* 0xA 80 */]) {
          				  case 0:
/*<483>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nLink!\nFatti aiutare da <b<Bado>> e imprigionate\ndi nuovo la creatura oscura!")
          				  case 1:
/*<481>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nEhi, Link, finalmente!\n<r<Quella creatura oscura >>ha iniziato di\nnuovo ad agitarsi!\n\nIl sigillo creato dal sonno di <b<Zelda>>\nsta per raggiungere il limite!\n\n\nForza <b<Link>>, fatti aiutare\nda <b<Bado>> e cercate assieme di\nimprigionare quel mostro un'altra\nvolta! Capito?!")
/*<482>*/ 					scene_flags[10 'Sealed Grounds'][95 /* 0xA 80 */] = true;
          				}
          			  case 1:
/*<217>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Quindi stai cercando i tre draghi...?\nCompletando la Melodia dell'impavido\nriuscirai a individuare la Triforza.\n\nMi raccomando, presta attenzione\ndurante il viaggio!")
          			}
          		}
          	  case 1:
/*<215>*/ 		printf(/* textboxtype: 1, unk: 0 */ "La chiave per trovare la Triforza\nsi trova di sicuro a <b<Oltrenuvola>>.\n\n\n\x0E\x01\x09\x04\xE00\x07Bene, comincia ad andare!\nE cerca la Triforza!")
          	}
          }

          void entrypoint_501_26() {
/*<349>*/ 	start()
/*<357>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 356), ('param3', 32)])
/*<356>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 353), ('param3', 50)])
/*<353>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\x04Aspetta, Link!\nNon è là che si verificano gli \nstrani fenomeni!")
/*<354>*/ 	set_camera(62, 0)
/*<352>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Non possiamo perdere nemmeno un\nsecondo! Esci da quella porta laggiù\ne vai ad accertarti della situazione!")
/*<355>*/ 	set_camera(-1, 0)
/*<351>*/ 	printf(/* textboxtype: 1, unk: 0 */ "O preferisci prima sistemare\nil tuo equipaggiamento? Se vuoi farlo\nnon te lo impedirò, ma sbrigati!")
/*<350>*/ 	scene_flags[10 'Sealed Grounds'][107 /* 0xC 08 */] = true;
          }

          void entrypoint_501_27() {
/*<440>*/ 	start()
/*<444>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 476), ('param3', 32)])
/*<476>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 445), ('param3', 32)])
/*<445>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 446), ('param3', 17)])
/*<446>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 447), ('param3', 6)])
/*<447>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 25), ('param2', 0), ('next', 441), ('param3', 40)])
/*<441>*/ 	set_camera(3, 0)
/*<442>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 443), ('param3', 6)])
/*<443>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 9), ('next', 448), ('param3', 24)])
/*<448>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', -1), ('param3', 6)])
          }

          void entrypoint_501_10() {
/*< 59>*/ 	start()
/*< 61>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 60), ('param3', 32)])
/*< 60>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 405), ('param3', 32)])
/*<405>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 99), ('next', 404), ('param3', 50)])
          	flw_404:
/*<404>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\x03La creatura è stata di nuovo\nimprigionata...")
/*<399>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 400), ('param3', 47)])
/*<400>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 5), ('param2', 356), ('next', 402), ('param3', 15)])
/*<402>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 401), ('param3', 6)])
/*<401>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 406), ('param3', 17)])
/*<406>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 408), ('param3', 50)])
/*<408>*/ 	set_camera(26, 0)
/*<409>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 403), ('param3', 6)])
/*<403>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 407), ('param3', 48)])
/*<407>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 63), ('param3', 6)])
/*< 63>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Link, grazie.")
/*< 65>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 4), ('next', 62), ('param3', 17)])
/*< 62>*/ 	printf(/* textboxtype: 1, unk: 0 */ "E... <b<Bado>>...")
/*<411>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 4), ('next', 299), ('param3', 33)])
/*<299>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 14), ('next', 64), ('param3', 17)])
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Anche tu hai fatto la tua parte...")
/*< 69>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 14), ('next', 70), ('param3', 50)])
/*< 70>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x400\x0DSmettila, nonnina...\n\n\n\nSe non ci fossi stata tu a\nsuggerirmi cosa fare, sarei\nrimasto un buono a nulla.")
/*<303>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1028), ('param2', 256), ('next', 72), ('param3', 13)])
/*< 72>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 99), ('next', 71), ('param3', 50)])
/*< 71>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE08\xB0BMa è solo farina del tuo sacco.")
/*<410>*/ 	set_camera(27, 0)
/*<300>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 73), ('param3', 17)])
/*< 73>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 301), ('param3', 17)])
/*<301>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 74), ('param3', 6)])
/*< 74>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\x07Dunque, Link...\nLa creatura oscura....\n\n\nCapirai la vera natura di\nogni male una volta che avrai\nattraversato la Porta del Tempo...\n\n\x0E\x01\x09\x04\xE01\xB00In questo momento, puoi\nimprigionare la creatura tutte le volte\nche vuoi, ma si risveglierà sempre...\n\nÈ una creatura orribile.\nEliminandola alla radice,\nriuscirai a risolvere la situazione.\n\n\x0E\x01\x09\x04\xE10\xB00Presto, Link!\nIl potere celeste...")
/*<302>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 76), ('param3', 50)])
/*< 76>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x40D\x206Impregna la tua spada di potere celeste\ne <g<colpisci >>la Porta del Tempo!")
/*< 75>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 14), ('next', 77), ('param3', 17)])
/*< 77>*/ 	printf(/* textboxtype: 1, unk: 0 */ "... Così, nonna?")
/*<304>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1037), ('param2', 256), ('next', 277), ('param3', 13)])
/*<277>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 99), ('next', 78), ('param3', 50)])
/*< 78>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE01\x07... Bene!\nVai, Link!")
/*<306>*/ 	set_camera(53, 0)
/*<307>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 305), ('param3', 6)])
/*<305>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_501_28() {
/*<449>*/ 	start()
/*<450>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Questo è il posto ideale per la vita\nvegetale, ma stimo che, piantando il\nseme in <r<questa epoca>>, ci vorrà troppo\ntempo prima che diventi un albero.")
          }

          void entrypoint_501_11() {
/*<218>*/ 	start()
/*<219>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Ci pensa <b<Bado >>a mettere a punto un \nmodo per raggiungere la foresta!\n\n\nLink, forse è successo\nqualcosa al <r<drago d'acqua che\ndimora nella foresta>>!\nPresto vai da lei!")
          }

          void entrypoint_501_12() {
/*<220>*/ 	start()
/*<225>*/ 	switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          	  case 0:
/*<226>*/ 		switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          		  case 0:
/*<239>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nIl tempo stringe!\n\n\n\nCoraggio, Link!\nTorna a Oltrenuvola e cerca la\nTriforza!")
          		  case 1:
/*<232>*/ 			switch (scene_flags[96 /* 0xD 01 */]) {
          			  case 0:
/*<227>*/ 				switch (scene_flags[97 /* 0xD 02 */]) {
          				  case 0:
          					flw_487:
/*<487>*/ 					switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          					  case 0:
/*<238>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nTerminata l'ultima prova \nsarai degno di ricevere la Triforza.\nPresto, torna a Oltrenuvola e \naffronta la prova!")
          					  case 1:
/*<488>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x14Bene, bene, Link!\nSembra proprio che tu abbia appreso\ntutte le parti delle melodie dei\ndraghi!\nNon rimane molto tempo, però!\nAffrettati! Torna subito in Cielo e \ncompleta la Melodia dell'impavido!")
          					}
          				  case 1:
/*<228>*/ 					switch (scene_flags[98 /* 0xD 04 */]) {
          					  case 0:
/*<231>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03<b<Bado >>ti sta aspettando.\nVai alla <r<catapulta>>!\nDovresti trovarlo là.")
          					  case 1:
/*<229>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Arrivi proprio al momento\ngiusto, Link!\n\n\nCredo che <b<Bado >>ti stia aspettando!\n\n\n\nVai alla <r<catapulta>>!\nDovresti trovarlo là.")
/*<230>*/ 						scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
          					}
          				}
          			  case 1:
/*<233>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Se penso a quello che è accaduto\nalla foresta...\nPer fortuna tutto è tornato alla\nnormalità!")
/*<234>*/ 				scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
/*<236>*/ 				switch (scene_flags[97 /* 0xD 02 */]) {
          				  case 0:
          					goto flw_487
          				  case 1:
/*<235>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03A proposito, Link.\n<b<Bado>> ti sta aspettando!\n\n\nVai alla <r<catapulta>>!\nDovresti trovarlo là.")
/*<237>*/ 					scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<222>*/ 		switch (scene_flags[96 /* 0xD 01 */]) {
          		  case 0:
          			flw_224:
/*<224>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nTu continua pure a cercare di\nricomporre la <r<Melodia dell'impavido>>.\nNon ci resta molto tempo!")
          		  case 1:
/*<221>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Se penso a quello che è accaduto\nalla foresta...\nPer fortuna tutto è tornato alla\nnormalità!")
/*<223>*/ 			scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
          			goto flw_224
          		}
          	}
          }

          void entrypoint_501_13() {
/*<269>*/ 	start()
/*<270>*/ 	printf(/* textboxtype: 1, unk: 2 */ "\x0E\x01\x0B\x04\x00\x06Bene! Esecuzione quasi perfetta!\n\n\n\nE ora...")
/*<271>*/ 	printf(/* textboxtype: 1, unk: 2 */ "Ora segui il ritmo del <r<cerchio luminoso\n>>e suona!\n\n\nIo ti accompagnerò con la\nvoce, adattandomi al ritmo.\n\n\nÈ una melodia che ti servirà durante\nil tuo viaggio.")
          }

          void entrypoint_501_14() {
/*<253>*/ 	start()
/*<464>*/ 	switch (story_flags[341 /* us: 805A9AFE 0x08, jp: 805ACD7E 0x08 */]) {
          	  case 0:
/*<254>*/ 		switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          		  case 0:
/*<256>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<259>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\xF0AAh! Più lo guardo,\npiù quest'albero mi sembra bello!\nÈ proprio il giusto simbolo per un\nsantuario!\n\x0E\x01\x09\x04\x03\x200Ogni volta che ci poso gli occhi sopra\nmi sento ringiovanire!")
          			  case 1:
/*<257>*/ 				switch (scene_flags[38 /* 0x5 40 */]) {
          				  case 0:
/*<258>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x22EBene, hai piantato il seme...\x0E\x01\x04\x02\x14\nMa sai bene che, perché cresca\n<r<in questa epoca>> ci vorrà un\nsacco di tempo!")
          				  case 1:
/*<452>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 497), ('param2', 1), ('next', 260), ('param3', 23)])
/*<260>*/ 					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 50)])) {
          					  case 0:
/*<261>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x204Ehi, Link!\nCome hai fatto a mettere le mani su\nquel bulbo?\n\n\x0E\x01\x09\x04\x00\xE0EUn bulbo di quelle dimensioni, è\nperfetto per trasformarsi in un albero\nenorme!\n\n\x0E\x01\x09\x04\x03\x200Solo che...\x0E\x01\x04\x02\n\nChissà quanto tempo ci vorrà per\nfarlo diventare un albero!")
          					  case 1:
/*<255>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Link! Ti affido <b<Zelda>>!\n\n\n\nA proposito, visto che ho deciso di\n<r<far nascere>> qui un grande albero,\nnon è che per caso hai un seme da\ndarmi?")
          					}
          				}
          			}
          		  case 1:
/*<252>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\x206Al di là della porta\nti starà aspettando <b<Zelda>>!\nPresto, vai Link!")
          		}
          	  case 1:
/*<465>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\x20DHai <g<impregnato >>la tua spada di potere \nceleste e colpito la Porta del Tempo?\n\n\nAl di là della porta ti starà\naspettando <b<Zelda>>!\nPresto, vai Link!")
          	}
          }

          void entrypoint_501_15() {
/*< 51>*/ 	start()
/*< 54>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 52), ('param3', 32)])
/*< 52>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 55), ('param3', 32)])
/*< 55>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 14), ('next', 53), ('param3', 17)])
/*< 53>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 4), ('next', 274), ('param3', 17)])
/*<274>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 99), ('next', 57), ('param3', 50)])
/*< 57>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1035), ('param2', 2560), ('next', 321), ('param3', 13)])
/*<321>*/ 	set_camera(54, 0)
/*<322>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 361), ('param3', 6)])
/*<361>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1009), ('next', 56), ('param3', 24)])
/*< 56>*/ 	printf(/* textboxtype: 1, unk: 2 */ "\x0E\x01\x09\x04\x400=Ehhh?! Ma che dici, vegliarda?!")
/*< 58>*/ 	set_camera(18, 0)
          	flw_27:
/*< 27>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 12), ('param3', 6)])
/*< 12>*/ 	set_camera(10, 0)
/*< 13>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x400\x02Mi prendi in giro!\nProva a dirlo di nuovo!")
/*< 15>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 4), ('next', 16), ('param3', 50)])
/*< 16>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3598), ('param2', -256), ('next', 14), ('param3', 13)])
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\nMi dispiace ma non sei tu.\nIl compito di salvare la voce\ndella Dea... ehm... <b<Zelda>>...\n\nÈ stato assegnato sin dalla notte\ndei tempi... a colui che salverà\nil mondo...")
/*< 18>*/ 	set_camera(65, 0)
/*< 32>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 14), ('next', 33), ('param3', 50)])
/*< 33>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1035), ('param2', 12544), ('next', 17), ('param3', 13)])
/*< 17>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x400>\x0E\x01\x08\x02\x1CDTaci!\n\n\n\nIo... il mitico <b<Bado>>! \nSarò io a salvare <b<Zelda>>!\n\n\nSe non posso farlo, allora\nperché mi trovo qui?\n\n\nE poi chi altro, a parte me,\npotrebbe salvarla?")
/*< 23>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 356), ('next', 28), ('param3', 15)])
/*< 28>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 24), ('param3', 6)])
/*< 24>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1025), ('param2', 17920), ('next', 35), ('param3', 13)])
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x400\x1E...!")
/*< 36>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 80), ('param3', 17)])
/*< 80>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1025), ('param2', 1792), ('next', 37), ('param3', 13)])
/*< 37>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 79), ('param3', 6)])
/*< 79>*/ 	set_camera(13, 0)
/*< 19>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 100), ('next', 20), ('param3', 14)])
/*< 20>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 4), ('next', 280), ('param3', 17)])
/*<280>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 21), ('param3', 6)])
/*< 21>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x400\x3218... Capisco.\n\n\n\n\x0E\x01\x09\x04\x40D\xA00Intendi dire che sarai tu\na salvare <b<Zelda>>?\n\n\nLink...")
/*< 22>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1035), ('param2', 12544), ('next', 26), ('param3', 13)])
/*< 26>*/ 	set_camera(12, 0)
/*<394>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 395), ('param3', 32)])
/*<395>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 393), ('param3', 6)])
/*<393>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 25), ('param3', 17)])
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x400<Falla finita!\nDestino o non destino, non accetto\nuna cosa del genere!\n\n\x0E\x01\x09\x04\x40B\xA00Non la accetto!")
/*< 38>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 4), ('next', 30), ('param3', 17)])
/*< 30>*/ 	set_camera(14, 0)
/*< 29>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 2), ('param2', 516), ('next', 31), ('param3', 14)])
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x4008\x0E\x01\x08\x02\x1CDAaaahhhh!!!\x0E\x01\x05\x04-\x00")
/*< 39>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 35), ('next', 462), ('param3', 6)])
/*<462>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 100), ('next', 463), ('param3', 24)])
/*<463>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 281), ('param3', 6)])
/*<281>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 282), ('param3', 17)])
/*<282>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 40), ('param3', 6)])
/*< 40>*/ 	set_camera(49, 0)
/*<283>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 41), ('param3', 16)])
/*< 41>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\x08... Link.\nHai incontrato <b<Zelda>>?")
/*< 42>*/ 	set_camera(16, 0)
/*< 43>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE0E\xFF05Uhm... dunque hai incontrato\nanche l'altra...\n\n\nL'altra persona che hai visto\ninsieme a Zelda è <b<Impa>>...\n\n\nÈ un essere che la <b<Dea>> ha posto\nal servizio di Zelda.")
/*< 50>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Zelda e Impa sono partite per una\ncerta destinazione, intenzionate a\nportare a termine il loro incarico...\n\nMa Impa ha distrutto la porta usata\nper passare e ora non resta che un\nmodo per seguirle.")
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE0E\xFF00Devi usare il potere della <b<lira>> che ti\nè stata affidata da Zelda...")
/*< 47>*/ 	set_camera(15, 0)
/*< 44>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\x08Allora, Link!\nSei riuscito a suonare la <b<lira>>?\n\n\nLa tua espressione mi dice di no...\n\n\n\nLascia che ti insegni come fare.\nFai tutto quello che ti dico.\n\n\nPer prima cosa estrai lo strumento\ncon (^), poi premi (A) per\nprepararti a suonare.\x0E\x01\x11\x02\x8CD")
/*< 48>*/ 	story_flags[135 /* us: 805A9AE4 0x20, jp: 805ACD64 0x20 */] = true;
/*< 46>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 45), ('param3', 42)])
/*< 45>*/ 	scene_flags[10 'Sealed Grounds'][28 /* 0x2 10 */] = true;
          }

          void entrypoint_501_16() {
/*< 66>*/ 	start()
/*< 67>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 68), ('param3', 32)])
/*< 68>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 298), ('param3', 32)])
/*<298>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 404), ('param3', 50)])
          	goto flw_404
          }

          void entrypoint_501_17() {
/*<144>*/ 	start()
          	flw_134:
/*<134>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x160FOh! La tua spada...!\n\n\n\n\x0E\x01\x09\x04\x00\xB00La sua lama è stata purificata dalle\ntre fiamme sacre. Ottimo lavoro,\nLink! Ora la spada\nè colma di potere...")
/*<135>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\xFF07Quel potere... è... la <r<forza>>...\n\n\n\n\x0E\x01\x09\x04\x00\xB00Il potere sacro donato al mondo dagli \nantichi Dei... il grande potere della\nMelodia della Dea... \n\nLo stesso potere del quale, adesso,\ntu e la tua spada siete impregnati.")
/*<138>*/ 	set_camera(19, 0)
/*<427>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1603Bene, Link.\nÈ giunto il momento di aprire la\nPorta del Tempo!")
/*<396>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 397), ('param3', 32)])
/*<397>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 398), ('param3', 6)])
/*<398>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 136), ('param3', 17)])
/*<136>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Se sei in possesso della <r<forza>>...\nScatena il <r<potere celeste>> sulla\nPorta del Tempo, ed essa si\nattiverà.")
/*<140>*/ 	set_camera(24, 0)
/*<137>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Sali su quella pedana e <g<usa il potere\ndella tua spada >>sulla Porta\ndel Tempo!")
/*<142>*/ 	scene_flags[10 'Sealed Grounds'][80 /* 0xB 01 */] = true;
/*<370>*/ 	scene_flags[10 'Sealed Grounds'][57 /* 0x6 02 */] = false;
/*<469>*/ 	scene_flags[10 'Sealed Grounds'][30 /* 0x2 40 */] = false;
/*<139>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 30), ('next', -1), ('param3', 42)])
          }

          void entrypoint_501_18() {
/*< 81>*/ 	start()
/*< 82>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 310), ('param3', 32)])
/*<310>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 437), ('param3', 50)])
/*<437>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 428), ('param3', 6)])
/*<428>*/ 	set_camera(2, 0)
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE01\x103Di nuovo qui, Link...?")
/*<311>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 14), ('next', 429), ('param3', 17)])
/*<429>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 430), ('param3', 47)])
/*<430>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 7), ('param2', 356), ('next', 431), ('param3', 15)])
/*<431>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 432), ('param3', 6)])
/*<432>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 14), ('next', 433), ('param3', 17)])
/*<433>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 435), ('param3', 17)])
/*<435>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 434), ('param3', 6)])
/*<434>*/ 	set_camera(32, 0)
/*<436>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 86), ('param3', 48)])
/*< 86>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 461), ('param3', 6)])
/*<461>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1015), ('next', 87), ('param3', 24)])
/*< 87>*/ 	printf(/* textboxtype: 1, unk: 0 */ "... Capisco, allora sai già tutto.")
/*< 83>*/ 	set_camera(30, 0)
/*< 84>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Uhm, esattamente.\nAl di là della porta, <b<Zelda >>è\ncaduta in un sonno profondo.\n\nNon preoccuparti comunque,\nè viva.")
/*<439>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 313), ('param3', 6)])
/*<313>*/ 	set_camera(33, 0)
/*<312>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Secondo la leggenda, la Dea ha\nnascosto a Oltrenuvola la <y+<Triforza>>,\nil potere in grado di sconfiggere\nMortipher.\n\x0E\x01\x09\x04\xE01\xB00Ma nessuno sa dove di preciso sia\nstata nascosta. ~~~Non è stato rivelato...")
/*<438>*/ 	set_camera(32, 0)
/*<314>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE14\xB00Link!\nNon è necessario che lo ripeta...\n\n\nLa chiave per trovare la Triforza\nè di certo a <b<Oltrenuvola>>.")
/*<315>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE08\xB07Bene, comincia ad andare!\nE cerca la Triforza!")
/*<316>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 319), ('param3', 32)])
/*<319>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 317), ('param3', 50)])
/*<317>*/ 	printf(/* textboxtype: 1, unk: 2 */ "\x0E\x01\x09\x04\x401\xFF04\x0E\x01\x08\x02\x1CDEhi!\nAspetta un attimo!")
/*<318>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 131), ('param3', 16)])
/*<131>*/ 	set_camera(48, 0)
/*< 91>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x403\xFF00Link!\nDevo dirti ancora qualcosa!")
/*<308>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1028), ('param2', 256), ('next', 309), ('param3', 13)])
/*<309>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 89), ('param3', 6)])
/*< 89>*/ 	set_camera(34, 0)
/*< 90>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 75), ('next', 88), ('param3', 6)])
/*< 88>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 8), ('param2', 100), ('next', 92), ('param3', 14)])
/*< 92>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x403\xFF02Ehm...\n<b<Zelda>>... stava bene?\n\n[1]Sì[2]Ehm...")
/*< 95>*/ 	switch (choice(2)) {
          	  case 0:
/*< 93>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Davvero?\nMeno male!\n\n\n\x0E\x01\x09\x04\x403\x200... Però non è ancora finita!")
          		flw_97:
/*< 97>*/ 		set_camera(35, 0)
/*< 96>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x40E\xD09Sai, Link,\nho deciso di non ritornare a\nOltrenuvola...\n\n\x0E\x01\x09\x04\x400\x200Voglio continuare a vivere qui,\ninsieme alla nonna.")
/*< 98>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x400\xFF0DEh eh eh...\nSu non fare quella faccia!\nL'ho deciso di mia volontà.\n\n\x0E\x01\x09\x04\x400\x200Insomma ho tante cosette da fare qui!\nDevo sorvegliare quel mostro...\n\n\n\x0E\x01\x09\x04\x400\x211Prendermi cura della nonna...\nNon saranno pari ai tuoi, ma anche\nquesti sono incarichi importanti!")
/*<100>*/ 		set_camera(36, 0)
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x403\xD08E poi mi sono innamorato\ndi questa Terra...\n\n\nNon mi dispiaceva nemmeno vivere\nin Cielo, ma non è meravigliosa anche\nla Terra con tutte le sue creature?")
/*<101>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 104), ('param3', 32)])
/*<104>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1025), ('param2', -256), ('next', 103), ('param3', 13)])
/*<103>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 101), ('next', 102), ('param3', 17)])
/*<102>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x40D\x209Guarda!")
/*<108>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 109), ('param3', 17)])
/*<109>*/ 		set_camera(37, 0)
/*<107>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x404\x208Zelda e la nonna hanno dotato la\nTerra della forza della vita.\n\n\nQui, in men che non si dica,\nun <r<seme si trasforma in \nuno splendido albero>>!\n\nE poi sono sicuro che presto\ndiventerà un luogo più animato.\n\n\n\x0E\x01\x09\x04\x40D\x211Beh, perché l'albero cresca\nforse occorreranno degli anni...\nMa per chi ha pazienza non è un\nproblema!\n\x0E\x01\x09\x04\x400\x12Ecco, in questo momento la\nvedo così...")
/*<110>*/ 		set_camera(36, 0)
/*<320>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 106), ('param3', 17)])
/*<106>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x40D\x22EBeh... insomma...\nChe altro dire...\n\n\nQuando rientri a Oltrenuvola,\nsalutami tutti.\n\n\n\x0E\x01\x09\x04\x400\xE00Gli amici ci rimarranno male, forse...\nDi' loro che io sono felice qui.\n\n\n\x0E\x01\x09\x04\x400\x209Non te ne dimenticare,\nLink!")
/*<105>*/ 		story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */] = true;
/*<111>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          	  case 1:
/*< 94>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x400\x1400Vedo che non stai facendo i salti\ndi gioia...\n\n\n\x0E\x01\x09\x04\x403\x200Ma... tu la proteggerai, vero?")
          		goto flw_97
          	}
          }

          void entrypoint_501_01() {
          	start()
/*<  1>*/ 	switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          	  case 0:
/*<  3>*/ 		switch (story_flags[340 /* us: 805A9AFE 0x04, jp: 805ACD7E 0x04 */]) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nNe parleremo dopo.\nOra vai!")
          		  case 1:
/*<132>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Fuori dal santuario, sul fondo\ndel vortice della terra, si nasconde\nun'entità imprigionata...\n\nPer il momento non occorre che tu\nsappia di più, ma prima o poi capirai...")
          		}
          	  case 1:
/*<  2>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1303La porta che conduce alla <r<foresta\ndi Firone>> è aperta. Usa l'ingresso\nsecondario e prosegui sempre\ndritto.\nPrima o poi la verità ti si rivelerà...\nProcedi senza timore,\nLink!")
          	}
          }

          void entrypoint_501_19() {
/*<210>*/ 	start()
/*<326>*/ 	set_camera(55, 0)
/*<359>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 485), ('param3', 6)])
/*<485>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 1), ('next', 327), ('param3', 40)])
/*<327>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 13), ('param2', 100), ('next', 328), ('param3', 14)])
/*<328>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 329), ('param3', 6)])
/*<329>*/ 	set_camera(59, 0)
/*<336>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 335), ('param3', 6)])
/*<335>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01\x0E\x01\x06\x02\xFECDOh...~~~\nBenvenuto!\nTu figlio del destino, disceso da un\nmare di nubi.")
/*<341>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 0), ('next', 342), ('param3', 13)])
/*<342>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 340), ('param3', 6)])
/*<340>*/ 	set_camera(56, 0)
/*<343>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 337), ('param3', 6)])
/*<337>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x08\x0E\x01\x06\x02\xFECDCome ti chiami?\n\n\n\n... \x0E\x01\x04\x02(Link?\nChe bel nome, Link!\n\n\nHo sentito che sai usare alla\nperfezione il <pling><r<potere celeste>>, quella\nforza che si concentra nella tua spada,\nquando la <g<innalzi verso il cielo>>.\n\x0E\x01\x09\x04\x00\x0BQuesto significa che la <b<spada della\nDea>>, che porti con te, è l'arma che\npiù ti si addice.\n\n\x0E\x01\x06\x02\xFFCDIo sono rimasta qui a lungo,\nattendendo il tuo arrivo,\ne ti farò da guida...")
/*<181>*/ 	set_camera(43, 0)
/*<182>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 9), ('param2', 356), ('next', 183), ('param3', 15)])
/*<183>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 180), ('param3', 17)])
/*<180>*/ 	set_camera(38, 0)
/*<184>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Ci troviamo nel <b<Santuario dell'esilio>>,\ncostruito dalla Dea nell'antichità più\nremota.\n\nIl tuo arrivo in questo luogo era\nprevisto sin dalla notte dei tempi...\n\n\nAnche la voce della Dea, della quale sei\nalla ricerca, ha fatto visita a questo\nsantuario qualche tempo fa,\ncircondata di luce.\nTutto è scritto nel libro del destino...")
/*<187>*/ 	set_camera(57, 0)
/*<344>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 185), ('param3', 6)])
/*<185>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nEppure, secondo il libro, la visita della\nvoce della Dea sarebbe dovuta avvenire\nin modo assai diverso...\n\nUna forza malvagia sta tentando\ndi modificare il vostro destino.")
/*<339>*/ 	set_camera(60, 0)
/*<338>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xFF08Link, ehi...\x0E\x01\x04\x02\x1E\nSei in pensiero per la voce della Dea?\n\n\n... Anche lei ha un grande incarico da\nportare a termine, proprio come te.\nTu non devi fare altro che andare\navanti...\n\nLei si è diretta alla <b<foresta di Firone>>\nper conoscere la natura del suo\nincarico. Vacci anche tu!")
/*<186>*/ 	story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */] = true;
/*<190>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xFF00Mostrami la tua mappa.")
/*<188>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 364), ('param3', 30)])
/*<364>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 363), ('param3', 6)])
/*<363>*/ 	scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
/*<362>*/ 	printf(/* textboxtype: 1, unk: 1 */ "Ecco qui, il segno \x0E\x02\x04\x02\x19CD ti indica il\nsentiero che conduce alla <b<foresta\ndi Firone>>.\n\nMa sarebbe un errore da profani\navventurarsi in una foresta piena di\ncreature oscure con il solo aiuto\ndella mappa. \nOra ti conferirò il potere di collocare\ndei <r<fari celesti >>sulla mappa.\n\n\nQuesti <r<fari celesti>>, una volta collocati\nsulla mappa, appaiono nella realtà\ncome delle colonne di luce visibili\nanche da lontano.\nProviamo: punta il luogo\ncontrassegnato da \x0E\x02\x04\x02\x19CD e premi (C)\x0E\x01\x11\x02\x6CD!")
/*<189>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 191), ('param3', 34)])
          	flw_191:
/*<191>*/ 	switch (scene_flags[24 /* 0x2 01 */]) {
          	  case 0:
/*<193>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Da qui è impossibile vederlo, ma il\nfaro celeste è stato collocato!\nLo potrai vedere con i tuoi\nocchi, una volta fuori di qui.\nQuando il faro non ti serve più, apri\nla mappa e premi (C) sullo stesso\npunto per rimuoverlo.\x0E\x01\x11\x02\x6CD D'ora in poi\nnon potrai più perderti.")
/*<194>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xFF03Bene! Ora puoi partire per\nla <b<foresta di Firone >>e seguire le tracce\ndella voce della Dea... ehm... di Zelda.\n\nIl contenuto dello <r<scrigno >>che si trova\nin questa stanza ti tornerà utile per\naffrontare l'avventura. Prendilo!")
/*<195>*/ 		scene_flags[10 'Sealed Grounds'][83 /* 0xB 08 */] = true;
/*<198>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 196), ('param3', 6)])
/*<196>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 197), ('param3', 32)])
/*<197>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 101), ('next', 199), ('param3', 17)])
/*<199>*/ 		set_camera(40, 0)
/*<358>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 10), ('next', 279), ('param3', 13)])
/*<279>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 200), ('param3', 17)])
/*<200>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 201), ('param3', 33)])
/*<201>*/ 		set_camera(41, 0)
/*<202>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 40), ('next', 203), ('param3', 6)])
/*<203>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 102), ('next', 205), ('param3', 24)])
/*<205>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 204), ('param3', 6)])
/*<204>*/ 		set_camera(42, 0)
/*<206>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Usa l'ingresso secondario per uscire,\npoi vai sempre dritto verso la foresta.\nMi raccomando! \n")
/*<333>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 334), ('param3', 17)])
/*<334>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 278), ('param3', 6)])
/*<278>*/ 		set_camera(49, 0)
/*<209>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1303Prima o poi la verità ti si\nrivelerà... \nProsegui senza timore,\nLink!")
/*<207>*/ 		story_flags[494 /* us: 805A9B13 0x10, jp: 805ACD93 0x10 */] = true;
/*<208>*/ 		scene_flags[10 'Sealed Grounds'][23 /* 0x3 80 */] = true;
/*<211>*/ 		scene_flags[10 'Sealed Grounds'][84 /* 0xB 10 */] = true;
/*<331>*/ 		set_camera(61, 0)
/*<330>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          	  case 1:
/*<192>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x06Non ci sono fari celesti nel luogo\ncontrassegnato da \x0E\x02\x04\x02\x19CD.\n\n\nSe vuoi cancellare un faro che\nhai collocato, puntalo e premi di\nnuovo (C).\x0E\x01\x11\x02\x6CD\n\nPer collocare i fari celesti con\nmaggior precisione, è molto comodo \ningrandire la mappa premendo (A)!")
/*<365>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 368), ('param3', 30)])
/*<368>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 367), ('param3', 6)])
/*<367>*/ 		scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
/*<369>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Punta i luoghi contrassegnati da \x0E\x02\x04\x02\x19CD\ne premi (C) per collocare un\nfaro celeste.\x0E\x01\x11\x02\x6CD")
/*<366>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 191), ('param3', 34)])
          		goto flw_191
          	}
          }

          void entrypoint_501_02() {
/*<  5>*/ 	start()
/*<  8>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 6), ('param3', 32)])
/*<  6>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 9), ('param3', 32)])
/*<  9>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 14), ('next', 7), ('param3', 17)])
/*<  7>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 4), ('next', 273), ('param3', 17)])
/*<273>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 99), ('next', 34), ('param3', 50)])
/*< 34>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1035), ('param2', 2560), ('next', 360), ('param3', 13)])
/*<360>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1008), ('next', 10), ('param3', 24)])
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 2 */ "\x0E\x01\x09\x04\x400=Ehhh?! Ma che dici, vegliarda?!")
/*<392>*/ 	set_camera(17, 0)
/*< 11>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 14), ('next', 27), ('param3', 17)])
          	goto flw_27
          }

          void entrypoint_501_20() {
/*<112>*/ 	start()
/*<114>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 113), ('param3', 32)])
/*<113>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 115), ('param3', 32)])
/*<115>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 99), ('next', 413), ('param3', 50)])
          	flw_413:
/*<413>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\x03L'hai imprigionato per la terza volta...")
/*<414>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 415), ('param3', 47)])
/*<415>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 5), ('param2', 356), ('next', 417), ('param3', 15)])
/*<417>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 416), ('param3', 6)])
/*<416>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 419), ('param3', 17)])
/*<419>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 421), ('param3', 50)])
/*<421>*/ 	set_camera(26, 0)
/*<422>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 418), ('param3', 6)])
/*<418>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 420), ('param3', 48)])
/*<420>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 412), ('param3', 6)])
/*<412>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Link... Bado... bravi!\n\n\n\nMa la creatura oscura impiega sempre\nmeno tempo per distruggere il sigillo...\n\n\nDevi fare presto, Link!\nSenti, hai trovato qualche indizio\nsulla Triforza?\n[1]Sì[2]No")
/*<424>*/ 	set_camera(44, 0)
/*<426>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...\x0E\x01\x04\x02\x19 Uhm...\n\n\n\nTrovati i tre draghi e con la Melodia\ndell'impavido completata, la strada\nper la Triforza ti si paleserà...\n\nLa <b<foresta di Firone >>è qui vicino...\n\n\n\n\x0E\x01\x09\x04\xE00\nMa di recente sembra che si trovi\nin condizioni anomale...\n\n\n\x0E\x01\x09\x04\xE01\xB00Non so bene cosa sia successo,\nma all'improvviso...\n\n\nLa strada che conduce alla foresta\ndi Firone si è improvvisamente\nallagata.")
/*<425>*/ 	set_camera(26, 0)
/*<130>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Per fermare il flusso d'acqua sono\nstata costretta ad apporre un blocco.\nQuesto significa che l'<r<accesso verso la\nforesta >>è chiuso.\nSe venisse riaperto il livello dell'acqua\nsalirebbe di nuovo, quindi è meglio\ntenerlo chiuso per ora.\n\nInsomma non credo che tu possa\nrecarti nella foresta di Firone...")
/*<128>*/ 	set_camera(46, 0)
/*<126>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 116), ('param3', 50)])
/*<116>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x400\x0DEh eh eh! Ci sono qui io!\n\n\n\nMentre combattevo, prima, stavo\ngiusto pensando a un nuovo modo\ndi usare la <r<badopulta>>!\n\nTi ci faccio salire, sparo a\ntutta potenza e vedrai che arrivi\nalla foresta in un batter d'occhio!")
/*<127>*/ 	set_camera(26, 0)
/*<125>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x40C\x202Intanto vado a prepararla!\nRaggiungimi subito, Link!")
/*<118>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 10), ('param2', 516), ('next', 467), ('param3', 14)])
/*<467>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 124), ('param3', 6)])
/*<124>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 100), ('next', 119), ('param3', 24)])
/*<119>*/ 	story_flags[485 /* us: 805A9B10 0x08, jp: 805ACD90 0x08 */] = true;
/*<129>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 99), ('next', 117), ('param3', 50)])
/*<117>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\x0BEcco...\n\n\n\nIl ragazzo mostra grandi potenzialità.\nMa si potrebbe anche fare a meno\ndi lui.")
/*<325>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 323), ('param3', 17)])
/*<323>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE08\xFF00Allora, Link!\nBuon viaggio!")
/*<423>*/ 	set_camera(1, 0)
/*<324>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_501_03() {
/*<264>*/ 	start()
/*<267>*/ 	give_item(186 0xBA);
/*<268>*/ 	story_flags[343 /* us: 805A9AFE 0x20, jp: 805ACD7E 0x20 */] = true;
/*<348>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_501_21() {
/*<120>*/ 	start()
/*<122>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 121), ('param3', 32)])
/*<121>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 123), ('param3', 32)])
/*<123>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 413), ('param3', 50)])
          	goto flw_413
          }

          void entrypoint_501_22() {
/*<240>*/ 	start()
/*<245>*/ 	switch (story_flags[225 /* us: 805A9AF2 0x10, jp: 805ACD72 0x10 */]) {
          	  case 0:
/*<246>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*<470>*/ 			switch (story_flags[490 /* us: 805A9B13 0x01, jp: 805ACD93 0x01 */]) {
          			  case 0:
/*<473>*/ 				switch (story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */]) {
          				  case 0:
/*<471>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\n... Link!\nSolo tu puoi farcela!\nIl destino di noi tutti\nè nelle tue mani!\nPer favore, salva il mondo!")
          				  case 1:
/*<472>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x14Prima ho visto <b<Bado >>correre\nlà dietro!\n\n\nSarà andato di sicuro alla\n<r<catapulta>>!")
          				}
          			  case 1:
/*<249>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\n... Link!\nSolo tu puoi farcela!\nIl destino di noi tutti\nè nelle tue mani!\nPer favore, salva il mondo!")
          			}
          		  case 1:
/*<247>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Cosa...?!\n<b<Mortipher>> si è risvegliato?\n\n\nOh... è terribile... se non facciamo\nqualcosa, questo mondo...")
/*<248>*/ 			scene_flags[10 'Sealed Grounds'][100 /* 0xD 10 */] = true;
/*<479>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\n... Link!\nSolo tu puoi farcela!\nIl destino di noi tutti\nè nelle tue mani!\nPer favore, salva il mondo!")
          		}
          	  case 1:
/*<242>*/ 		switch (scene_flags[99 /* 0xD 08 */]) {
          		  case 0:
/*<243>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0DLink!\nDevi assolutamente evitare che\nMortipher si risvegli nel mondo del\npassato!\nPresto, apri la Porta del Tempo\ne torna nel passato!")
          		  case 1:
/*<241>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Oh... Incredibile!\n<b<Zelda >>è stata portata via\nproprio all'ultimo minuto...!\n\nLink!\nDevi assolutamente evitare che\nMortipher si risvegli nel mondo del\npassato!\nPresto, apri la Porta del Tempo\ne torna nel passato!")
/*<244>*/ 			scene_flags[10 'Sealed Grounds'][99 /* 0xD 08 */] = true;
          		}
          	}
          }

          void entrypoint_501_05() {
/*<265>*/ 	start()
/*<266>*/ 	printf(/* textboxtype: 2, unk: 0 */ "<b<Melodia della Dea>>: si suppone\nsia stata intonata da Zelda\nnel giorno del battesimo del volo.\n\nProbabilità di ottenere informazioni\nsul testo della melodia da una\npersona associata alla scuola\nd'armi: 85%.")
/*<486>*/ 	story_flags[142 /* us: 805A9AEE 0x01, jp: 805ACD6E 0x01 */] = true;
          }

          void entrypoint_501_06() {
/*<148>*/ 	start()
/*<146>*/ 	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          	  case 0:
/*<149>*/ 		switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          		  case 0:
/*<141>*/ 			switch (scene_flags[80 /* 0xB 01 */]) {
          			  case 0:
/*<150>*/ 				switch (scene_flags[81 /* 0xB 02 */]) {
          				  case 0:
/*<151>*/ 					switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
          					  case 0:
/*<213>*/ 						switch (story_flags[344 /* us: 805A9AFE 0x40, jp: 805ACD7E 0x40 */]) {
          						  case 0:
/*<214>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x1606Che fai, Link?!\nHai già fatto quello che dovevi\nfare al di là della porta?\n\n\x0E\x01\x09\x04\x14\xB00No? Allora attraversa la porta!")
          						  case 1:
/*<152>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x03Forza Link!\nApri la Porta del Tempo\ne passaci attraverso!")
          						}
          					  case 1:
/*<212>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nQuell'essere oscuro sta per\nrisvegliarsi.\n\n\nLink!\nDevi imprigionarlo di nuovo!")
          					}
          				  case 1:
/*<143>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Scatena il <r<potere celeste>>, al quale è\nstata aggiunta la <r<forza>>, sulla\nPorta del Tempo ed essa si attiverà.\n\nSali su quella pedana e <g<colpisci con la\ntua spada colma di energia>> la Porta\ndel Tempo.")
          				}
          			  case 1:
          				goto flw_134
          			}
          		  case 1:
/*<147>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nPrima o poi l'essere oscuro\ndistruggerà di nuovo il sigillo...\n\n\nBado sta escogitando un piano\nper farsi trovare pronto.\n\n\nTu, Link,\ndevi trovare le tre fiamme sacre che\nritempreranno la tua spada!\nNon c'è tempo da perdere!")
          		}
          	  case 1:
/*<145>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Impregna la tua spada delle tre\nfiamme sacre e la porta si aprirà.\n\n\nPuoi trovare indizi sulle fiamme sacre\nnella <r<Melodia della Dea>>, che si\ntramanda nel tuo paese, Oltrenuvola.\n\nPresto, vai a Oltrenuvola!")
          	}
          }

          void entrypoint_501_23() {
/*<262>*/ 	start()
/*<272>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 2621), ('next', 263), ('param3', 13)])
/*<263>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x00Insegui quel farabutto,\nLink! \nLa vita di <b<Zelda >>è nelle tue mani!")
          }

