          void entrypoint_502_06() {
/*< 69>*/ 	start()
/*< 70>*/ 	switch (story_flags[787 /* us: 805A9B2C 0x08, jp: 805ACDAC 0x08 */]) {
          	  case 0:
/*< 71>*/ 		story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */] = true;
          		flw_73:
/*< 73>*/ 		loadzone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 72>*/ 		story_flags[787 /* us: 805A9B2C 0x08, jp: 805ACDAC 0x08 */] = true;
          		goto flw_73
          	}
          }

          void entrypoint_502_07() {
/*< 74>*/ 	start()
/*< 77>*/ 	switch (story_flags[798 /* us: 805A9B2F 0x40, jp: 805ACDAF 0x40 */]) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Zeig dem Todbringer, wo's lang geht!\nDu schaffst das!\n\n\n\x0E\x01\x09\x04\x00\x03Ich zähle auf dich, Link!")
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\x20DPuh!\nDas war nun wirklich knapp...\n\n\n\x0E\x01\x09\x04\x00\x200Da kannst du wirklich von Glück\nreden, dass du mich hast, stimmt's?!?\n\n\n\x0E\x01\x09\x04\x00\x200Mach dir keine Sorgen um <b<Zelda>>,\nich passe auf sie auf!\n\n\nDu solltest dich währenddessen um den\n<b<Todbringer>> kümmern! Zeig's ihm!\n\n\n\x0E\x01\x09\x04\x00\x203Ich zähle auf dich, Link!")
/*< 78>*/ 		story_flags[798 /* us: 805A9B2F 0x40, jp: 805ACDAF 0x40 */] = true;
          	}
          }

          void entrypoint_502_08() {
/*< 79>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x04Gebieter, bist du nun bereit für\nden Kampf?\n[1]Bereit![2-]Warte!")
/*< 87>*/ 	switch (choice(2)) {
          	  case 0:
/*< 88>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter.\nDann brechen wir auf!")
/*< 90>*/ 		changeScene(11, 0) // 
          	  case 1:
/*< 89>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter.\nBereite dich nur gut vor.")
          	}
          }

          void entrypoint_502_09() {
/*< 80>*/ 	start()
/*< 81>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x04Gebieter, willst du dich noch einmal\nzurückziehen, um dich auf diesen\nKampf vorzubereiten?\n[1]Ja[2-]Nein")
/*< 82>*/ 	switch (choice(2)) {
          	  case 0:
/*< 83>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter.\nKehre zurück, wenn du deine\nVorbereitungen abgeschlossen hast.")
/*< 85>*/ 		changeScene(10, 0) // 
          	  case 1:
/*< 84>*/ 		printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Sehr wohl, Gebieter.")
          	}
          }

          void entrypoint_502_01() {
          	start()
/*<  3>*/ 	switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          	  case 0:
/*< 27>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*< 31>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 51>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Noch hast du deine Aufgabe\nnicht erfüllt...\n\n\nTu, was dir aufgetragen wurde...\nTu es für <b<Zelda>>!\n")
          			  case 1:
/*< 32>*/ 				switch (scene_flags[37 /* 0x5 20 */]) {
          				  case 0:
/*< 48>*/ 					switch (scene_flags[103 /* 0xD 80 */]) {
          					  case 0:
/*< 50>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Ich spüre die Kraft dieses Setzlings!\nEines Tages wird einmal ein großer,\nschöner Baum aus ihm wachsen!")
          					  case 1:
/*< 47>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BOh, du hast ihn eingepflanzt!\n\n\n\nIch spüre die Kraft dieses Setzlings!\nEines Tages wird einmal ein großer,\nschöner Baum aus ihm wachsen!")
/*< 49>*/ 						scene_flags[10 'Sealed Grounds'][103 /* 0xD 80 */] = true;
          					}
          				  case 1:
/*< 33>*/ 					switch (scene_flags[102 /* 0xD 40 */]) {
          					  case 0:
/*< 46>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Ein Baum, der etliche Generationen\nübersteht... Ob es irgendwo einen\n<r<Keimling >>für solch einen Baum gibt?")
          					  case 1:
/*< 34>*/ 						printf(/* textboxtype: 1, unk: 0 */ "~~~.~~~.~~~.\n\x0E\x01\x09\x04\x0F\x803Uh...\n\n\n[1]Was ist?[2]Entschuldige!")
/*< 35>*/ 						switch (choice(2)) {
          						  case 0:
/*< 36>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x703Uh...\nNichts Wichtiges...")
/*< 57>*/ 							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 58), ('param3', 32)])
/*< 58>*/ 							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 38), ('param3', 6)])
/*< 38>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 101), ('next', 39), ('param3', 17)])
/*< 39>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 59), ('param3', 17)])
/*< 59>*/ 							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 40), ('param3', 6)])
/*< 40>*/ 							set_camera(5, 0)
/*< 41>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Siehst du das sonnige Fleckchen\nErde dort?\n\n\nIch hatte mir überlegt, dort einen\nBaum zu pflanzen.\n\n\nWenn <b<Zelda>> wieder erwacht, wird sie\nsich an seinen Blättern erfreuen\nkönnen.")
/*< 60>*/ 							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 61), ('param3', 6)])
/*< 61>*/ 							set_camera(-1, 0)
/*< 42>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 43), ('param3', 17)])
/*< 43>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 0), ('next', 44), ('param3', 17)])
/*< 44>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Es müsste allerdings ein Baum sein,\nder Tausende von Jahren überstehen\nkann...\n\nOb es irgendwo <r<Keimlinge>> für solch\neinen Baum gibt?")
/*< 45>*/ 							scene_flags[10 'Sealed Grounds'][102 /* 0xD 40 */] = true;
          						  case 1:
/*< 37>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Uhuhum...")
          						}
          					}
          				}
          			}
          		  case 1:
/*< 29>*/ 			switch (scene_flags[101 /* 0xD 20 */]) {
          			  case 0:
          				flw_28:
/*< 28>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nSorge dich nicht!\nIch werde <b<Zelda>> hier beschützen.\nVollende du deine Aufgabe!")
          			  case 1:
/*<  2>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Ihr habt euch verabschiedet...\n\n\n\nFinde das <y+<Triforce>>, so wie du es <b<Zelda>>\nversprochen hast!\n\n\nIn deiner eigenen Zeit warten viele\nAufgaben auf dich.")
/*< 30>*/ 				scene_flags[10 'Sealed Grounds'][101 /* 0xD 20 */] = true;
          				goto flw_28
          			}
          		}
          	  case 1:
/*<  4>*/ 		switch (scene_flags[82 /* 0xB 04 */]) {
          		  case 0:
/*< 18>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Dies ist die Zeit, in der die Göttin <b<Hylia\n>>den <b<Todbringer>> hier an diesem Ort\neingeschlossen hat.\n\nIch bin mir sicher, dass du viele Fragen\nhast... Geh aber nun durch das Tor\ndort hinten!\n\nDort erwartet dich jene Person, für\ndie du all diese Strapazen auf dich\ngenommen hast.")
          		  case 1:
/*< 19>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 10), ('param3', 31)])
/*< 10>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 11), ('param3', 32)])
/*< 11>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Da bist du ja endlich, Link!\nIch habe dich erwartet.\n\n\nIch kann mir vorstellen, dass du etwas\nverwirrt bist, doch ich werde dich\naufklären.")
/*< 12>*/ 			set_camera(2, 0)
/*<  5>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Dies ist der <r<Hylia-Tempel>>.\nIn deiner Zeit kennt man ihn unter dem\nNamen <b<Tempel des Siegels>>...\n\nUnermesslich lange ist es für euch her,\ndass die Göttin den<b< Todbringer >>an\ndiesem Ort eingeschlossen hat...\n\nHier ist indes nur ein Augenblick\nvergangen, seit der Wolkenhort vom\nErdland getrennt wurde...")
/*< 13>*/ 			set_camera(-1, 0)
/*<  6>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xF0F\x703Genau.\nDu hast das <b<Zeitportal>> durchquert\nund bist in die <r<Vergangenheit>> gereist.\n\nIch bin mir sicher, dass du viele Fragen\nhast... Geh aber nun durch das Tor\ndort hinten!")
/*< 15>*/ 			set_camera(3, 0)
/*< 14>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Dort erwartet dich jene Person, für\ndie du all diese Strapazen auf dich\ngenommen hast.")
/*<  7>*/ 			story_flags[349 /* us: 805A9B01 0x08, jp: 805ACD81 0x08 */] = true;
/*<  8>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<  9>*/ 				story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */] = true;
          				flw_17:
/*< 17>*/ 				scene_flags[10 'Sealed Grounds'][82 /* 0xB 04 */] = true;
/*< 16>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          			  case 1:
          				goto flw_17
          			}
          		}
          	}
          }

          void entrypoint_502_02() {
/*<  1>*/ 	start()
/*< 21>*/ 	switch (scene_flags[85 /* 0xB 20 */]) {
          	  case 0:
/*< 25>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x12Er ist durch das <r<Haupttor >>geflohen!\nSchnell... Folge <b<Ghirahim>>!")
          	  case 1:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x12Aaah... Link?\nGhirahim hat mich erwischt...\n\n\nSorge dich nicht um mich...\nDu musst ihn aufhalten!")
/*< 20>*/ 		set_camera(4, 0)
/*< 23>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Er ist durch dieses <r<Haupttor >>geflohen!\nNoch ist es offen... Schnell!")
/*< 24>*/ 		scene_flags[10 'Sealed Grounds'][85 /* 0xB 20 */] = true;
/*< 26>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          	}
          }

          void entrypoint_502_03() {
/*< 52>*/ 	start()
/*< 53>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 56>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xC04Hab keine Angst! <b<Zelda>> geht es gut.\nSie schläft da hinten in der Kammer.\n\n\n\x0E\x01\x09\x04\x00\x706Du musst den Kerl besiegen und\ndie Welt retten, Link!")
          	  case 1:
/*< 54>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xC0BHab keine Angst! <b<Zelda>> geht es gut.\nSie schläft da hinten in der Kammer.\n\n\n\x0E\x01\x09\x04\x0F\x700Dass der Todbringer erneut erwacht\nist... \x0E\x01\x04\x02\nNun liegt es in deinen Händen!\n\x0E\x01\x09\x04\x00\x706Gib alles, Link!")
/*< 55>*/ 		scene_flags[10 'Sealed Grounds'][104 /* 0xC 01 */] = true;
          	}
          }

          void entrypoint_502_04() {
/*< 62>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 2, unk: 1 */ "\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\n\n\nWenn du hier weitergehst, liegt die\nWahrscheinlichkeit, dass du nicht mehr\nzurückkehren kannst, ohne den Kampf\nbeendet zu haben, bei 100 %.\nFühlst du dich bereit für den Kampf?\n[1]Ja[2-]Nein")
/*< 63>*/ 	switch (choice(2)) {
          	  case 0:
/*< 65>*/ 		printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Gebieter,~~~ ich bin immer bei dir...\n\n\n\n\x0E\x01\x12\x04\x00\x01Gebieter...\x0E\x01\x04\x02\x1E Viel Glück.")
          	  case 1:
/*< 66>*/ 		printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Gebieter, komm hierhin zurück, wenn\ndeine Vorbereitungen abgeschlossen\nsind.")
          	}
          }

          void entrypoint_502_05() {
/*< 67>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 3, unk: 0 */ "\x0E\x01\x05\x04-\x00\x0E\x01\x08\x02\x2CDDieser verfluchte Wicht!")
          }

