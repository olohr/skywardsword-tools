          void entrypoint_501_07() {
/*<250>*/ 	start()
/*<251>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Ah, Link!\nHast du die Schienen draußen schon\ngesehen?\n\n\x0E\x01\x09\x04\x00\xB00Wofür die gut sind?\nHehehe...\nDas wird eine Überraschung!")
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
/*<454>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Was für ein Baum!\nMan nennt ihn nicht umsonst\n\x201ELebensbaum\x201C!")
          			  case 1:
/*<457>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 497), ('param2', 1), ('next', 456), ('param3', 23)])
/*<456>*/ 				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 72)])) {
          				  case 0:
/*<455>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Hier ist überhaupt nichts, oder? Alles\nist so leer... Und das Mütterchen lebt\nhier schon wer weiß wie lang...\n\nWarum hat sie nicht wenigstens einen\nBaum gepflanzt?")
          				  case 1:
/*<458>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Irgendwie kann ich nicht anders, als\nmich um das Mütterchen zu sorgen.\n\n\n\x0E\x01\x09\x04\x00\xA00Aber erzähl meinen Kumpels ja nicht,\ndass ich mich um sie kümmere!")
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
/*<172>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\nWarte, Link!\nDu darfst den <r<Himmelsstrahl>>\njetzt nicht verwenden!\n\nEr wird sonst noch schneller\nerwachen!\n\n\nDu musst <r<ihn zuerst bannen>>!\nLos!")
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
/*<160>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x40A\x321F\x0E\x01\x08\x02\x1CDAaaaaaaaah!\x0E\x01\x05\x04\x1E\x00")
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
/*<163>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\nBei der Göttin...\n<r<Das Siegel wurde erneut gebrochen>>...\n\n\n<r<Er >>ist wieder erwacht.\n\n\n\nVielleicht eine Reaktion auf die <r<heilige\nKraft>>, die von deinem Schwert ausging.\n\n\n\x0E\x01\x09\x04\xE01\xB00Aber wir müssen das Schwert\neinsetzen, um das Zeitportal zu öffnen.\nWir haben keine andere Wahl.")
/*<165>*/ 		set_camera(22, 0)
/*<164>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE10\x1600Link...\nDu musst diese Bestie ein weiteres\nMal bannen!")
/*<276>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 167), ('param3', 50)])
/*<167>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1035), ('param2', 12544), ('next', 166), ('param3', 13)])
/*<166>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x400\x30DHaha! Endlich!")
/*<290>*/ 		set_camera(50, 0)
/*<289>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x40F\x2F0FEndlich kann ich es ausprobieren!\n\n\n\nDagegen kann dieses Vieh nicht\nanstinken, ha!\n\n\n\x0E\x01\x09\x04\x40B\x3101Quatscht ihr ruhig noch ein bisschen,\nich geh schon mal vor!")
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
/*<380>*/ 		printf(/* textboxtype: 1, unk: 3 */ "\x0E\x01\x06\x02\xFFCDDieser Junge...\nEr ist gar nicht mal so ungeschickt.\n\n\nVielleicht sollte ich ihn bitten, den\nTempel zu reparieren.")
          	  case 1:
/*<375>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<379>*/ 			printf(/* textboxtype: 1, unk: 3 */ "\x0E\x01\x06\x02\xFFCDDieser Tempel war früher ein Ort der\nRuhe. Und jetzt hat sich alles zum\nSchlimmsten gewendet.\n\nAch, ich sollte nicht so reden...\n\n\n\nAber meine schrecklichsten\nBefürchtungen werden vor meinen\nAugen wahr...")
          		  case 1:
/*<374>*/ 			switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          			  case 0:
/*<378>*/ 				printf(/* textboxtype: 1, unk: 3 */ "\x0E\x01\x06\x02\xFFCDIch hoffe, er kann Zelda einholen...")
          			  case 1:
/*<373>*/ 				switch (story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */]) {
          				  case 0:
/*<377>*/ 					printf(/* textboxtype: 1, unk: 3 */ "\x0E\x01\x06\x02\xFFCDIch hoffe, er kann Zelda einholen...")
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
/*<475>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Du suchst die drei Drachen? Ich weiß,\ndass der Donnerdrache in der Wüste\ngelebt hat...")
          		  case 1:
/*<480>*/ 			switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
          			  case 0:
/*<484>*/ 				switch (scene_flags[95 /* 0xA 80 */]) {
          				  case 0:
/*<483>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nLink!\nSorge mit <b<Bado>> dafür, dass das Biest\nwieder gebannt wird!")
          				  case 1:
/*<481>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nDas <r<Biest>> regt sich wieder!\nEs droht, <b<Zeldas>> Siegel an seine\nGrenzen zu bringen oder gar zu\nsprengen!\nLos, <b<Link>>!\nSorge mit <b<Bado>> dafür, dass es wieder\ngebannt wird! Beeil dich!")
/*<482>*/ 					scene_flags[10 'Sealed Grounds'][95 /* 0xA 80 */] = true;
          				}
          			  case 1:
/*<217>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Du suchst also die drei Drachen...\nUnd wenn du das Heldenlied von ihnen\ngelernt hast, weist es dir den Weg zum\nTriforce...\nPass auf dich auf!")
          			}
          		}
          	  case 1:
/*<215>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Der Schlüssel zum Triforce muss sich\nim <b<Wolkenhort>> verbergen.\n\n\n\x0E\x01\x09\x04\xE00\x07Du solltest dich auf die Suche nach dem\nTriforce machen.")
          	}
          }

          void entrypoint_501_26() {
/*<349>*/ 	start()
/*<357>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 356), ('param3', 32)])
/*<356>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 353), ('param3', 50)])
/*<353>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\x04Halt, Link!\nDu musst eine Katastrophe verhindern!")
/*<354>*/ 	set_camera(62, 0)
/*<352>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Jetzt ist keine Zeit für andere Dinge!\nGeh durch dieses Tor hinaus und sieh\nnach, was dort draußen vorgeht!")
/*<355>*/ 	set_camera(-1, 0)
/*<351>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Musst du dich noch vorbereiten?\nDann beeil dich!")
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
/*<404>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\x03Du hast ihn wieder in seinem Gefängnis\nversiegelt...")
/*<399>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 400), ('param3', 47)])
/*<400>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 5), ('param2', 356), ('next', 402), ('param3', 15)])
/*<402>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 401), ('param3', 6)])
/*<401>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 406), ('param3', 17)])
/*<406>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 408), ('param3', 50)])
/*<408>*/ 	set_camera(26, 0)
/*<409>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 403), ('param3', 6)])
/*<403>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 407), ('param3', 48)])
/*<407>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 63), ('param3', 6)])
/*< 63>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Link...")
/*< 65>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 4), ('next', 62), ('param3', 17)])
/*< 62>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...Mit <b<Bados >>Hilfe.")
/*<411>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 4), ('next', 299), ('param3', 33)])
/*<299>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 14), ('next', 64), ('param3', 17)])
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Ihr beide zusammen...")
/*< 69>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 14), ('next', 70), ('param3', 50)])
/*< 70>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x400\x0DHehe, lass gut sein, Mütterchen!\n\n\n\nDu hast mir doch beigebracht, dass\nselbst ein Tunichtgut wie ich etwas\nbewirken kann!")
/*<303>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1028), ('param2', 256), ('next', 72), ('param3', 13)])
/*< 72>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 99), ('next', 71), ('param3', 50)])
/*< 71>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE08\xB0BDas hast ganz allein du selbst\ngeschafft.")
/*<410>*/ 	set_camera(27, 0)
/*<300>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 73), ('param3', 17)])
/*< 73>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 301), ('param3', 17)])
/*<301>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 74), ('param3', 6)])
/*< 74>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\x07Es ist Zeit, dass wir über dieses\nUngeheuer reden, Link.\n\n\nEs ist die Verkörperung des Bösen.\nWenn du das Zeitportal öffnest, wirst\ndu die Wahrheit erkennen.\n\n\x0E\x01\x09\x04\xE01\xB00Das Biest wird wieder und wieder das\nSiegel brechen, um freizukommen.\n\n\nWir müssen seinen Ursprung zerstören,\nsonst wird es uns immer wieder\nheimsuchen.\n\n\x0E\x01\x09\x04\xE10\xB00Schnell, Link!\nKonzentriere...")
/*<302>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 76), ('param3', 50)])
/*< 76>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x40D\x206Konzentriere die Force in deinem\nSchwert und <g<richte >>den Himmelsstrahl\nauf das Zeitportal!")
/*< 75>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 14), ('next', 77), ('param3', 17)])
/*< 77>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Das meintest du doch, Mütterchen?")
/*<304>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1037), ('param2', 256), ('next', 277), ('param3', 13)])
/*<277>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 99), ('next', 78), ('param3', 50)])
/*< 78>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE01\x07Ja...\nGeh jetzt, Link!")
/*<306>*/ 	set_camera(53, 0)
/*<307>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 305), ('param3', 6)])
/*<305>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_501_28() {
/*<449>*/ 	start()
/*<450>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Dieser Ort eignet sich sehr gut dafür,\netwas zu pflanzen, aber wenn du erst\n<r<in dieser Zeit>> pflanzt, dürfte es zu\nlange dauern, bis du Resultate siehst.")
          }

          void entrypoint_501_11() {
/*<218>*/ 	start()
/*<219>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03<b<Bado>> bereitet deine Reise in den Wald\nvor.\n\n\nVielleicht ist dem <r<Wasserdrachen des\nWaldes>> etwas passiert... Das solltest\ndu überprüfen, Link.")
          }

          void entrypoint_501_12() {
/*<220>*/ 	start()
/*<225>*/ 	switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          	  case 0:
/*<226>*/ 		switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          		  case 0:
/*<239>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nEs ist an der Zeit.\n\n\n\nKehre zum Wolkenhort zurück und\nfinde das Triforce, Link!")
          		  case 1:
/*<232>*/ 			switch (scene_flags[96 /* 0xD 01 */]) {
          			  case 0:
/*<227>*/ 				switch (scene_flags[97 /* 0xD 02 */]) {
          				  case 0:
          					flw_487:
/*<487>*/ 					switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          					  case 0:
/*<238>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nNach der letzten Prüfung giltst du als\nwürdig, das Triforce in deinen Händen\nzu halten.\n\nKehre geschwind zum Wolkenhort\nzurück und stell dich der Prüfung!")
          					  case 1:
/*<488>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x14Ah, Link!\nSehr gut, die drei Drachen haben dich\nihre Stimmen des Liedes gelehrt.\n\nEs bleibt nicht viel Zeit!\nKehre schnell zum Wolkenmeer zurück\nund vervollständige das Heldenlied!")
          					}
          				  case 1:
/*<228>*/ 					switch (scene_flags[98 /* 0xD 04 */]) {
          					  case 0:
/*<231>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03<b<Bado>> wartet auf dich.\nDu findest ihn sicher <r<bei seinem\nKatapult>>.")
          					  case 1:
/*<229>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Du kommst gerade richtig. Ich muss\nmit dir reden, Link.\n\n\n<b<Bado>> scheint etwas auf dem Herzen zu\nhaben.\n\n\nDu findest ihn sicher <r<bei seinem\nKatapult>>. Geh und rede mit ihm.")
/*<230>*/ 						scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
          					}
          				}
          			  case 1:
/*<233>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Was ist im Wald nur geschehen?\nAber das Wichtigste ist, dass alles\nwieder in Ordnung ist.")
/*<234>*/ 				scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
/*<236>*/ 				switch (scene_flags[97 /* 0xD 02 */]) {
          				  case 0:
          					goto flw_487
          				  case 1:
/*<235>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Übrigens, Link...\n<b<Bado>> möchte mit dir reden.\n\n\nDu findest ihn sicher <r<bei seinem\nKatapult>>. Geh und rede mit ihm.")
/*<237>*/ 					scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<222>*/ 		switch (scene_flags[96 /* 0xD 01 */]) {
          		  case 0:
          			flw_224:
/*<224>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nFinde schnell die übrigen Stimmen des\n<r<Heldenlieds>>. Die Zeit läuft uns davon!")
          		  case 1:
/*<221>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Was ist im Wald nur geschehen?\nAber das Wichtigste ist, dass alles\nwieder in Ordnung ist.")
/*<223>*/ 			scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
          			goto flw_224
          		}
          	}
          }

          void entrypoint_501_13() {
/*<269>*/ 	start()
/*<270>*/ 	printf(/* textboxtype: 1, unk: 2 */ "\x0E\x01\x0B\x04\x00\x06Sehr schön gespielt!\n\n\n\nMachen wir weiter!")
/*<271>*/ 	printf(/* textboxtype: 1, unk: 2 */ "Versuche jetzt, im selben Rhythmus\nwie der <r<Lichtkreis >>zu spielen.\n\n\nIch singe zu deiner Musik ein Lied.\n\n\n\nDieses Lied wird dir auf deiner Reise\nnützlich sein.")
          }

          void entrypoint_501_14() {
/*<253>*/ 	start()
/*<464>*/ 	switch (story_flags[341 /* us: 805A9AFE 0x08, jp: 805ACD7E 0x08 */]) {
          	  case 0:
/*<254>*/ 		switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          		  case 0:
/*<256>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<259>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\xF0AJa! Was für ein fantastischer Baum!\nEr passt perfekt zu diesem Tempel!\n\n\n\x0E\x01\x09\x04\x03\x200Wenn ich ihn ansehe, fühle ich mich\nquicklebendig!")
          			  case 1:
/*<257>*/ 				switch (scene_flags[38 /* 0x5 40 */]) {
          				  case 0:
/*<258>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x22ESchön, dass du diesen Keimling\ngepflanzt hast... \x0E\x01\x04\x02\x14Aber es wird <r<eine\nEwigkeit dauern>>, bis er zu einem\nrichtigen Baum heranwächst.")
          				  case 1:
/*<452>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 497), ('param2', 1), ('next', 260), ('param3', 23)])
/*<260>*/ 					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 50)])) {
          					  case 0:
/*<261>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x204Hey! Link!\nWie hast du denn so einen Keimling\ngefunden?\n\n\x0E\x01\x09\x04\x00\xE0EAus dem wird hier mal ein riesiger\nBaum wachsen.\n\n\n\x0E\x01\x09\x04\x03\x200Aber...\x0E\x01\x04\x02\n\nEs dauert doch ziemlich lange, bis so\nein Baum richtig gewachsen ist, oder?")
          					  case 1:
/*<255>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02<b<Zeldas>> Schicksal liegt in deinen\nHänden, Link!\n\n\nAch ja, da fällt mir ein...\nIch will hier einen riesigen Baum\n<r<pflanzen>>... Hast du vielleicht Samen\noder so etwas?")
          					}
          				}
          			}
          		  case 1:
/*<252>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\x206Auf der anderen Seite des Portals\nwartet <b<Zelda>> auf dich!\n\n\nSchnell, Link!")
          		}
          	  case 1:
/*<465>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\x20DKonzentriere die Force in deinem\nSchwert und <g<richte>> den Himmelsstrahl\nauf das Zeitportal!\n\nAuf der anderen Seite wartet <b<Zelda>> auf\ndich!\n\n\nSchnell, Link!")
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
/*< 56>*/ 	printf(/* textboxtype: 1, unk: 2 */ "\x0E\x01\x09\x04\x400=Hä? Was soll das denn heißen?")
/*< 58>*/ 	set_camera(18, 0)
          	flw_27:
/*< 27>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 12), ('param3', 6)])
/*< 12>*/ 	set_camera(10, 0)
/*< 13>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x400\x02Na los, sag das noch mal!")
/*< 15>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 4), ('next', 16), ('param3', 50)])
/*< 16>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3598), ('param2', -256), ('next', 14), ('param3', 13)])
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\nEs tut mir leid, aber du bist nicht\nderjenige, der <b<Zelda>> helfen kann.\n\n\nIhre Bestimmung, die Welt zu retten,\nwurde schon vor sehr, sehr langer\nZeit festgelegt.")
/*< 18>*/ 	set_camera(65, 0)
/*< 32>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 14), ('next', 33), ('param3', 50)])
/*< 33>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1035), ('param2', 12544), ('next', 17), ('param3', 13)])
/*< 17>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x400>\x0E\x01\x08\x02\x1CDBlödsinn!\n\n\n\nIch, <b<Bado>>, soll <b<Zelda>> nicht helfen\nkönnen?!?\n\n\nWarum sollte ich sonst hier sein, hä?\nWer soll ihr denn sonst helfen?")
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
/*< 21>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x400\x3218Das hätte ich mir ja denken können...\n\n\n\n\x0E\x01\x09\x04\x40D\xA00Du wieder... Natürlich kannst nur du\nallein <b<Zelda>> retten, ja klar...\n\n\nLink...")
/*< 22>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1035), ('param2', 12544), ('next', 26), ('param3', 13)])
/*< 26>*/ 	set_camera(12, 0)
/*<394>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 395), ('param3', 32)])
/*<395>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 393), ('param3', 6)])
/*<393>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 25), ('param3', 17)])
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x400<Lächerlich!\nWen interessiert dieses angebliche\nSchicksal?!?\nIch pfeife auf das Schicksal!\n\x0E\x01\x09\x04\x40B\xA00Ich glaube kein Wort von diesem\nUnsinn!")
/*< 38>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 4), ('next', 30), ('param3', 17)])
/*< 30>*/ 	set_camera(14, 0)
/*< 29>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 2), ('param2', 516), ('next', 31), ('param3', 14)])
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x4008\x0E\x01\x08\x02\x1CDWaaaaaaaaah!\x0E\x01\x05\x04-\x00")
/*< 39>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 35), ('next', 462), ('param3', 6)])
/*<462>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 100), ('next', 463), ('param3', 24)])
/*<463>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 281), ('param3', 6)])
/*<281>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 282), ('param3', 17)])
/*<282>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 40), ('param3', 6)])
/*< 40>*/ 	set_camera(49, 0)
/*<283>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 41), ('param3', 16)])
/*< 41>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\x08Link...\nHast du <b<Zelda>> gefunden?")
/*< 42>*/ 	set_camera(16, 0)
/*< 43>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE0E\xFF05Hm...\nUnd sie hast du also auch getroffen...\n\n\nDer Name der Frau, die du mit Zelda\ngesehen hast, lautet <b<Impa>>...\n\n\nDie <b<Göttin>> hat sie geschickt, um Zelda\nbeizustehen.")
/*< 50>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Um ihre Bestimmung erfüllen zu\nkönnen, müssen Zelda und Impa an\nverschiedene Orte reisen.\n\nAber da Impa das Portal zerstört hat,\ndurch das sie gegangen sind, gibt es nur\neine Möglichkeit, ihnen zu folgen...")
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE0E\xFF00Die <b<Lyra>>, die Zelda dir gegeben hat...\nDu musst dir ihre Kraft zunutze\nmachen.")
/*< 47>*/ 	set_camera(15, 0)
/*< 44>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\x08Also, Link, hast du schon\nversucht, die <b<Lyra>> zu spielen?\n\n\nIch sehe dir an, dass du ein wenig Hilfe\nbrauchst.\n\n\nKeine Sorge, ich kann es dir\nbeibringen.\n\n\nDrücke zuerst (^), um die Lyra in die\nHand zu nehmen, und dann (A), um die\nrichtige Haltung einzunehmen.\x0E\x01\x11\x02\x8CD")
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
/*<134>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x160FDas Schwert...\n\n\n\n\x0E\x01\x09\x04\x00\xB00Es trägt die drei Flammen in sich...\nGut gemacht, Link.\nDas Schwert fließt nahezu über vor\nKraft...")
/*<135>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\xFF07Diese Kraft... Die <r<Force>>...\n\n\n\n\x0E\x01\x09\x04\x00\xB00Die heilige Kraft, die die alten Götter\ndieser Welt hinterlassen haben...\nDiese Kraft wird in der Hymne der\nGöttin besungen.\nUnd nun erfüllt sie dich und dein \nSchwert.")
/*<138>*/ 	set_camera(19, 0)
/*<427>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1603Nun denn, Link!\nÖffne das Zeitportal!")
/*<396>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 397), ('param3', 32)])
/*<397>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 398), ('param3', 6)])
/*<398>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 136), ('param3', 17)])
/*<136>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Diese Kraft... Dein Schwert wurde\ndurch die <r<Force >>gestärkt. Triff nun das\nZeitportal mit dem <r<Himmelsstrahl>> und\nes wird sich sicher öffnen lassen.")
/*<140>*/ 	set_camera(24, 0)
/*<137>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Stelle dich auf diese Plattform und\n<g<lasse die Kraft des Schwertes in das\nZeitportal fließen>>!")
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
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE01\x103Du bist wieder zurück.")
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
/*< 87>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Dann weißt du jetzt alles...")
/*< 83>*/ 	set_camera(30, 0)
/*< 84>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Auf der anderen Seite des Tores\nschläft <b<Zelda>>.\n\n\nDu musst keine Angst um sie haben,\nes geht ihr gut.")
/*<439>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 313), ('param3', 6)])
/*<313>*/ 	set_camera(33, 0)
/*<312>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Das <y+<Triforce>>, jene Kraft, die den\nTodbringer besiegen kann, wurde\nder Legende nach von der Göttin\nim Wolkenhort versteckt.\n\x0E\x01\x09\x04\xE01\xB00Aber niemand weiß, wo...~~~\nDazu schweigt die Legende.")
/*<438>*/ 	set_camera(32, 0)
/*<314>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE14\xB00Mehr weiß ich leider nicht darüber,\nLink.\n\n\nDer Schlüssel zum Triforce muss sich\nim <b<Wolkenhort>> verbergen.")
/*<315>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE08\xB07Du solltest dich auf die Suche nach dem\nTriforce machen.")
/*<316>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 319), ('param3', 32)])
/*<319>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 317), ('param3', 50)])
/*<317>*/ 	printf(/* textboxtype: 1, unk: 2 */ "\x0E\x01\x09\x04\x401\xFF04\x0E\x01\x08\x02\x1CDHey!\nWarte mal einen Moment!")
/*<318>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 131), ('param3', 16)])
/*<131>*/ 	set_camera(48, 0)
/*< 91>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x403\xFF00Link!\nIch muss mit dir reden!")
/*<308>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1028), ('param2', 256), ('next', 309), ('param3', 13)])
/*<309>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 89), ('param3', 6)])
/*< 89>*/ 	set_camera(34, 0)
/*< 90>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 75), ('next', 88), ('param3', 6)])
/*< 88>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 8), ('param2', 100), ('next', 92), ('param3', 14)])
/*< 92>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x403\xFF02Also...\n<b<Zelda>>... Ihr geht's doch gut, oder?\n\n[1]Ja.[2]Na ja...")
/*< 95>*/ 	switch (choice(2)) {
          	  case 0:
/*< 93>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Das ist gut.\n\n\n\n\x0E\x01\x09\x04\x403\x200Aber es ist noch nicht vorbei, oder?")
          		flw_97:
/*< 97>*/ 		set_camera(35, 0)
/*< 96>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x40E\xD09Es ist so, Link...\nIch habe mich entschieden, nicht zum\nWolkenhort zurückzukehren.\n\n\x0E\x01\x09\x04\x400\x200Ich bleibe mit dem Mütterchen hier.")
/*< 98>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x400\xFF0DHehe, mach nicht so ein Gesicht. Ich\nweiß schon, was ich tue.\n\n\n\x0E\x01\x09\x04\x400\x200Weißt du...\nIch habe hier meine Bestimmung\ngefunden. Ich muss dieses Ungeheuer\nbewachen...\n\x0E\x01\x09\x04\x400\x211Und mich um das Mütterchen kümmern\nund so. Meine Aufgabe ist sicher nicht\nso ruhmreich wie deine, aber ich bin\ndamit zufrieden, verstehst du?")
/*<100>*/ 		set_camera(36, 0)
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x403\xD08Außerdem gefällt es mir hier.\n\n\n\nZwischen den Wolken zu leben war\nnicht übel, aber ein richtig fester\nBoden unter den Füßen ist auch nicht\nzu verachten.")
/*<101>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 104), ('param3', 32)])
/*<104>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1025), ('param2', -256), ('next', 103), ('param3', 13)])
/*<103>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 101), ('next', 102), ('param3', 17)])
/*<102>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x40D\x209Schau!")
/*<108>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 109), ('param3', 17)])
/*<109>*/ 		set_camera(37, 0)
/*<107>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x404\x208Dank Zelda und dem Mütterchen ist\nLeben in dieses Land zurückgekehrt.\n\n\nWenn man hier <r<einen Keimling pflanzt>>,\nwürde daraus bestimmt ein toller\nBaum wachsen.\n\nDas hier wird sicher mal ein Ort, an\ndem die Menschen gerne leben wollen.\n\n\n\x0E\x01\x09\x04\x40D\x211Es wird wohl einige Zeit dauern, bis\nein Baum hier richtig groß wächst.\nAber ich habe Geduld.\n\n\x0E\x01\x09\x04\x400\x12Das ist, was ich gerade fühle.")
/*<110>*/ 		set_camera(36, 0)
/*<320>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 106), ('param3', 17)])
/*<106>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x40D\x22EJedenfalls... Also...\n\n\n\nGrüß alle von mir, wenn du zum\nWolkenhort zurückkehrst.\n\n\n\x0E\x01\x09\x04\x400\xE00Meine Jungs werden vielleicht traurig\nsein, aber sag ihnen, dass es mir hier\ngut geht.\n\n\x0E\x01\x09\x04\x400\x209Danke, Link...")
/*<105>*/ 		story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */] = true;
/*<111>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          	  case 1:
/*< 94>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x400\x1400Oh...\nDas klingt gar nicht gut.\n\n\n\x0E\x01\x09\x04\x403\x200Aber du wirst doch etwas unternehmen,\noder?")
          		goto flw_97
          	}
          }

          void entrypoint_501_01() {
          	start()
/*<  1>*/ 	switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          	  case 0:
/*<  3>*/ 		switch (story_flags[340 /* us: 805A9AFE 0x04, jp: 805ACD7E 0x04 */]) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nDie Zeit für weitere Erklärungen wird\nnoch kommen. Verlasse nun den\nTempel!")
          		  case 1:
/*<132>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Du hast es sicher schon gesehen, aber\ndie Grube vor dem Tempel ist wie eine\nSpirale angelegt und an ihrem Grund\nwird etwas festgehalten.\nWas, das musst du jetzt noch nicht\nwissen, aber es wird die Zeit kommen...")
          		}
          	  case 1:
/*<  2>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1303Das Tor zum <r<Wald von Phirone>> ist\noffen. Geh durch die Tür, sie führt\ndich geradewegs dorthin.\n\nEs wird mit Sicherheit bald alles klar\nwerden... Schreite ohne Furcht\nvoran, Link.")
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
/*<335>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01\x0E\x01\x06\x02\xFECDSieh an...~~~\nDer Auserwählte, der das Wolkenmeer\ndurchquert hat und vom Himmel\ngestiegen ist...")
/*<341>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 0), ('next', 342), ('param3', 13)])
/*<342>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 340), ('param3', 6)])
/*<340>*/ 	set_camera(56, 0)
/*<343>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 337), ('param3', 6)])
/*<337>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x08\x0E\x01\x06\x02\xFECDWie heißt du?\n\n\n\n...\x0E\x01\x04\x02(Link?\nGut, Link also.\n\n\nDu beherrschst den <pling><r<Himmelsstrahl>>,\njene heilige Kraft, die durch das\n<g<Emporstrecken des Schwertes gen\nHimmel>> beschworen wird.\n\x0E\x01\x09\x04\x00\x0BJa, du scheinst des <b<Schwertes der\nGöttin >>fürwahr würdig zu sein.\n\n\n\x0E\x01\x06\x02\xFFCDIch sitze hier seit ewiger Zeit und habe\nauf dich gewartet...\nDen Wegbereiter des Schicksals...")
/*<181>*/ 	set_camera(43, 0)
/*<182>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 9), ('param2', 356), ('next', 183), ('param3', 15)])
/*<183>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 180), ('param3', 17)])
/*<180>*/ 	set_camera(38, 0)
/*<184>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Das hier ist der uralte <b<Tempel des\nSiegels>>, der von der Göttin selbst\nerschaffen wurde.\n\nDein Kommen wurde vor sehr, sehr\nlanger Zeit vorherbestimmt...\n\n\nDas Mädchen, das du suchst, ist erst\nvor Kurzem von Licht umhüllt in\ndiesem Tempel erschienen.\n\nEs ist Schicksal...")
/*<187>*/ 	set_camera(57, 0)
/*<344>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 185), ('param3', 6)])
/*<185>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nAber ihre Ankunft im Erdland\nentsprach nicht der Prophezeiung.\n\n\nEs scheint gerade so, als wolle eine\nböse Macht euer beider Bestimmungen\nbeeinflussen.")
/*<339>*/ 	set_camera(60, 0)
/*<338>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xFF08Link...\x0E\x01\x04\x02\x1E\nMachst du dir Sorgen um sie?\n\n\nDann müssen wir jetzt handeln. Großes\nist euch beiden vorherbestimmt.\n\n\nUm ihre Bestimmung zu erkennen,\nging sie in den <b<Wald von Phirone>>.\nDu musst ihr folgen.")
/*<186>*/ 	story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */] = true;
/*<190>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xFF00Sieh auf deine Karte.")
/*<188>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 364), ('param3', 30)])
/*<364>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 363), ('param3', 6)])
/*<363>*/ 	scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
/*<362>*/ 	printf(/* textboxtype: 1, unk: 1 */ "Ich habe dir auf der Karte den Weg\nzum <b<Wald von Phirone >>mit einem \x0E\x02\x04\x02\x19CD\nmarkiert.\n\nAber es ist gefährlich, bei all den\nMonstern mit der Nase in der Karte\numherzulaufen.\n\nDaher bringe ich dir bei, wie du\n<r<Signallichter>> verwendest.\n\n\nWenn du auf der Karte ein <r<Signallicht\n>>setzt, erscheint dort eine Lichtsäule,\nan der du dich orientieren kannst.\n\nAlso, zeige auf \x0E\x02\x04\x02\x19CD und drücke (C),\num ein Signallicht zu setzen.\x0E\x01\x11\x02\x6CD")
/*<189>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 191), ('param3', 34)])
          	flw_191:
/*<191>*/ 	switch (scene_flags[24 /* 0x2 01 */]) {
          	  case 0:
/*<193>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Du kannst es von hier zwar nicht sehen,\naber das Signallicht leuchtet dir nun\nden Weg.\n\nWenn du das Signallicht nicht mehr\nbrauchst, zeige auf der Karte darauf\nund drücke erneut (C), um es zu\nentfernen.\x0E\x01\x11\x02\x6CD\nJetzt musst du nicht mehr fürchten,\ndich zu verlaufen!")
/*<194>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xFF03Geh nun in den Wald von Phirone und\nfinde die heilige Maid. Finde <b<Zelda>>...\n\n\nNimm den Inhalt der <r<Schatztruhe >>in\ndiesem Raum an dich, er wird dir auf\ndeiner Reise nützlich sein.")
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
/*<206>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Der Weg durch diese Tür führt dich\ndirekt zum Wald. Sei vorsichtig...")
/*<333>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 334), ('param3', 17)])
/*<334>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 278), ('param3', 6)])
/*<278>*/ 		set_camera(49, 0)
/*<209>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1303Es wird mit Sicherheit bald alles klar\nwerden... Schreite ohne Furcht voran,\nLink!")
/*<207>*/ 		story_flags[494 /* us: 805A9B13 0x10, jp: 805ACD93 0x10 */] = true;
/*<208>*/ 		scene_flags[10 'Sealed Grounds'][23 /* 0x3 80 */] = true;
/*<211>*/ 		scene_flags[10 'Sealed Grounds'][84 /* 0xB 10 */] = true;
/*<331>*/ 		set_camera(61, 0)
/*<330>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          	  case 1:
/*<192>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x06An der mit \x0E\x02\x04\x02\x19CD markierten Stelle\nscheint kein Signallicht zu sein...\n\n\nUm ein Signallicht zu entfernen, zeige\ndarauf und drücke erneut (C).\x0E\x01\x11\x02\x6CD\n\n\nDu kannst das Signallicht genauer\nplatzieren, indem du (A) drückst, um\ndie Ansicht zu vergrößern.")
/*<365>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 368), ('param3', 30)])
/*<368>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 367), ('param3', 6)])
/*<367>*/ 		scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
/*<369>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Zeige auf \x0E\x02\x04\x02\x19CD und drücke(C), um dort\nein Signallicht zu setzen.\x0E\x01\x11\x02\x6CD")
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
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 2 */ "\x0E\x01\x09\x04\x400=Hä? Was soll das denn heißen?")
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
/*<413>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\x03Du hast dieses Ungeheuer ein drittes\nMal gebannt...")
/*<414>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 415), ('param3', 47)])
/*<415>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 5), ('param2', 356), ('next', 417), ('param3', 15)])
/*<417>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 416), ('param3', 6)])
/*<416>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 419), ('param3', 17)])
/*<419>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 421), ('param3', 50)])
/*<421>*/ 	set_camera(26, 0)
/*<422>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 418), ('param3', 6)])
/*<418>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 420), ('param3', 48)])
/*<420>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 412), ('param3', 6)])
/*<412>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Link... Bado...\nIhr beide habt Großes geleistet.\n\n\nAber die Abstände, in denen dieses\nUngeheuer das Siegel bricht, werden\nimmer kürzer.\n\nWir haben kaum noch Zeit! Hast du\neinen Hinweis auf den Verbleib des\nTriforce gefunden, Link?\n[1]Ja![2]Also...")
/*<424>*/ 	set_camera(44, 0)
/*<426>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...\x0E\x01\x04\x02\x19\nHm...\n\n\nDu suchst also die drei Drachen...\nUnd wenn du das Heldenlied von ihnen\ngelernt hast, weist es dir den Weg zum\nTriforce...\nVon hier aus ist der <b<Wald von Phirone\n>>am nächsten, es kann nicht schaden,\ndort nachzusehen.\n\n\x0E\x01\x09\x04\xE00\nEs gibt allerdings ein Problem...\n\n\n\n\x0E\x01\x09\x04\xE01\xB00Ich weiß nicht, wie es passiert ist...\n\n\n\nIrgendwie wurde der Wald von Phirone\nüberflutet...")
/*<425>*/ 	set_camera(26, 0)
/*<130>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Ich musste zu unserer Sicherheit das\n<r<Tor zum Wald >>verschließen, um zu\nverhindern, dass das Wasser auch\ndiesen Tempel überflutet.\nDu kannst das Tor also nicht öffnen,\ndenn sonst steigt auch hier das Wasser.\n\n\nJetzt stellt sich die Frage, wie du in den\nWald von Phirone gelangst...")
/*<128>*/ 	set_camera(46, 0)
/*<126>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 116), ('param3', 50)])
/*<116>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x400\x0DHahaha, das könnt ihr mir überlassen!\n\n\n\nBei dem Kampf vorhin ist mir eine\nneue Anwendung für mein <r<mächtiges\nKatapult >>eingefallen.\n\nWir schießen dich einfach mit voller\nKraft direkt in den Wald!")
/*<127>*/ 	set_camera(26, 0)
/*<125>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x40C\x202Ich bereite alles vor!\nKomm schnell nach, Link!")
/*<118>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 10), ('param2', 516), ('next', 467), ('param3', 14)])
/*<467>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 124), ('param3', 6)])
/*<124>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 100), ('next', 119), ('param3', 24)])
/*<119>*/ 	story_flags[485 /* us: 805A9B10 0x08, jp: 805ACD90 0x08 */] = true;
/*<129>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 99), ('next', 117), ('param3', 50)])
/*<117>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\x0BAch...\n\n\n\nEr ist im Grunde ein guter Junge...\nAber er stellt meine Geduld ganz schön\nauf die Probe.")
/*<325>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 323), ('param3', 17)])
/*<323>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE08\xFF00Also dann, Link...\nGib auf dich acht.")
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
/*<471>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\n...Link!\nDas Schicksal dieser Welt hängt allein\nvon dir ab!\n\nRette unsere Welt!")
          				  case 1:
/*<472>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x14Wenn du <b<Bado >>suchst, er ist eben nach\ndraußen gestürmt.\n\n\nIch denke, er wird wieder <r<bei seinem\nKatapult>> sein.")
          				}
          			  case 1:
/*<249>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\n...Link!\nDas Schicksal dieser Welt hängt allein\nvon dir ab!\n\nRette unsere Welt!")
          			}
          		  case 1:
/*<247>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Was?!?\nWillst du sagen, dass <b<der Todbringer\n>>zurück ist?\n\nOh nein...\nDiese Welt wird...")
/*<248>*/ 			scene_flags[10 'Sealed Grounds'][100 /* 0xD 10 */] = true;
/*<479>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\n...Link!\nDas Schicksal dieser Welt hängt allein\nvon dir ab!\n\nRette unsere Welt!")
          		}
          	  case 1:
/*<242>*/ 		switch (scene_flags[99 /* 0xD 08 */]) {
          		  case 0:
/*<243>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0DLink!\nEr darf auf keinen Fall den\nTodbringer in der Vergangenheit\nbefreien!\nSchnell, öffne das Zeitportal und folge\nihm!")
          		  case 1:
/*<241>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Nein... Das kann nicht sein...\nWo wir <b<Zelda>> gerade wiederhatten...\n\n\nLink!\nEr darf auf keinen Fall den Todbringer\nin der Vergangenheit befreien!\n\nSchnell, öffne das Zeitportal und folge\nihm!")
/*<244>*/ 			scene_flags[10 'Sealed Grounds'][99 /* 0xD 08 */] = true;
          		}
          	}
          }

          void entrypoint_501_05() {
/*<265>*/ 	start()
/*<266>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Die <b<Hymne der Göttin>>. Ich vermute,\ndass es sich um das Lied handelt, das\nZelda am Tag der Vogelreiter-\nZeremonie vorgetragen hat.\nDie Wahrscheinlichkeit, dass jemand\naus der Ritterschule nähere\nInformationen zum Text des Liedes\nhat, liegt bei 85%.")
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
/*<214>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x1606Was tust du denn, Link!\nDu hast noch nicht alles Nötige auf\nder anderen Seite des Portals getan!\n\n\x0E\x01\x09\x04\x14\xB00Du musst zurückgehen!")
          						  case 1:
/*<152>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x03Los, Link!\nÖffne das Zeitportal und geh hindurch!")
          						}
          					  case 1:
/*<212>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nEr ist wieder erwacht.\n\n\n\nDu musst diese Bestie ein weiteres\nMal bannen, Link!")
          					}
          				  case 1:
/*<143>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Diese Kraft... Dein Schwert wurde\ndurch die <r<Force >>gestärkt. Triff nun das\nZeitportal mit dem <r<Himmelsstrahl>> und\nes wird sich sicher öffnen lassen.\nStelle dich auf diese Plattform und\n<g<lasse die Kraft des Schwertes in das\nZeitportal fließen>>!")
          				}
          			  case 1:
          				goto flw_134
          			}
          		  case 1:
/*<147>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nDer Verbannte wird weiter versuchen,\naus seinem Gefängnis zu entkommen,\nund es wird ihm über kurz oder lang\nerneut gelingen.\nAuch Bado scheint sich irgendwie\ndarauf vorzubereiten.\n\n\nLink, du musst die drei\nFlammen schnellstens finden!")
          		}
          	  case 1:
/*<145>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Wenn dein Schwert die drei heiligen\nFlammen in sich aufgenommen hat,\nkannst du das Zeitportal öffnen.\n\nDie <r<Hymne der Göttin>>, die in deiner\nHeimat Wolkenhort überliefert wird,\nbirgt Hinweise auf die drei Flammen.")
          	}
          }

          void entrypoint_501_23() {
/*<262>*/ 	start()
/*<272>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 2621), ('next', 263), ('param3', 13)])
/*<263>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x00Schnapp ihn dir, Link!\nFür <b<Zelda>>!")
          }

