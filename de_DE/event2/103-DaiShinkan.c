          void entrypoint_103_01() {
          	start()
/*< 77>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*< 78>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Kannst du deinen Wolkenvogel denn\nnoch immer nicht spüren?\n\n\nKonzentriere dich! Ich bin mir sicher,\ndass du etwas spüren wirst...")
          	  case 1:
/*<  1>*/ 		switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          		  case 0:
/*<  3>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hallo, Link!\nHast du deinen Wolkenvogel gefunden?\n\n\n\x0E\x01\x04\x02(Was? <b<Bado>>...\nDas sieht diesem Burschen ähnlich!")
/*< 79>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 71), ('param3', 32)])
/*< 71>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', -1), ('next', 72), ('param3', 16)])
/*< 72>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 73), ('param3', 17)])
/*< 73>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Direktor!\nWenn das wahr ist, könnte sich das\nsogar als Vorteil für uns erweisen.\n\nSo kann er sich immerhin nicht\nbeklagen, wenn sich der Anfang der\nZeremonie verspätet...")
/*< 74>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 75), ('param3', 16)])
/*< 75>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Hm, da ist etwas dran...\n\n\n\nHör mal, Link!\nDu hast gehört, was dein Lehrer gesagt\nhat. Suche deinen Wolkenvogel und\nmach dir keine Sorgen.")
/*< 76>*/ 			scene_flags[0 'Skyloft'][92 /* 0xA 10 */] = true;
          		  case 1:
/*<  2>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Wir sollten Meister <b<Tytor>> von dieser\nSache berichten, ~~~Link!\nSag ihm, dass er in mein Zimmer\nkommen soll.\nAußerdem solltest du vielleicht die\nanderen Schüler nach deinem\nWolkenvogel fragen. Sie dürften alle\nauf dem Dorfplatz sein.")
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
/*< 68>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05So viele unglaubliche Dinge sind gerade\ngeschehen...\n\n\nAber vielleicht solltest du den\nRatschlag beherzigen und sehen,\nwas noch geschieht...")
          }

          void entrypoint_103_06() {
/*< 17>*/ 	start()
/*< 63>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*< 82>*/ 		switch (loadzone_temp_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			flw_84:
/*< 84>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Ich vertraue noch immer darauf,\ndass du es schaffen wirst, mir Zelda\nzurückzubringen.\nStreng dich an, Link!")
/*< 83>*/ 			loadzone_temp_flags[19 /* 0x3 08 */] = true;
          		  case 1:
/*< 64>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Link!\n\n\n\nDie Göttin...\x0E\x01\x04\x02\x1E\nDie Insel der Göttin...\nSie ist verschwunden!\n\n[1]Also...[2]Nun...")
/*< 66>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_65:
/*< 65>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Sag nichts, Link!\n\n\n\n<y+<Wenn das Unheil abgewendet ist, wird\ndie Göttin ins Erdland zurückkehren...>>\n\n\nSo heißt es am Ende der <r<Überlieferung>>.\x0E\x01\x04\x02\x14\nJetzt habe ich es endlich verstanden.\n\n\nHeißt das, dass es endlich ausgestanden\nist?\x0E\x01\x04\x02\x14 Meine Tochter...\x0E\x01\x04\x02\n Zelda ist endlich\nin Sicherheit?\n\n[1]Es tut mir\nleid...[2]Nein.")
/*< 98>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_99:
/*< 99>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Ich verstehe...\nMach dir keine Vorwürfe.\n\n\nGib einfach dein Bestes und ich bin\nsicher, alles wird sich zum Guten\nwenden.")
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
/*< 97>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Huch... Ich bilde mir ein, ich hätte\neben ein lautes Poltern gehört...\n\n\nNun, wie dem auch sei, bitte finde\nZelda so schnell wie möglich.")
          		  case 1:
/*< 87>*/ 			switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          			  case 0:
/*< 88>*/ 				switch (loadzone_temp_flags[19 /* 0x3 08 */]) {
          				  case 0:
/*< 91>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Ich bin mir sicher, dieses Juwel schon\neinmal irgendwo gesehen zu haben... \nAber wo?\n\nVielleicht solltest du einmal den\nWahrsager aufsuchen und ihn dazu\nbefragen.")
          				  case 1:
/*< 89>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Hallo, Link!\nWie geht es dir?\n\n\nWas sagst du da? Du musst das <r<Insigne\nder Reife>> irgendwo hinbringen?\n\n\nHmmm, ich kann mich erinnern, dass\nes einst irgendwo aufbewahrt wurde.\nAber wo?")
/*< 90>*/ 					loadzone_temp_flags[19 /* 0x3 08 */] = true;
          				}
          			  case 1:
/*< 80>*/ 				switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          				  case 0:
/*< 81>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Was sagst du da? Du hast Narishas\nZorn besänftigt und so über das\nTriforce erfahren?\n\nDu hast so viel in so kurzer Zeit\nerreicht! Ich bin tief beeindruckt...\n\n\nGib weiter dein Bestes und bestehe\nauch die folgenden Prüfungen, die das\nSchicksal für dich bereithält!")
          				  case 1:
/*< 60>*/ 					switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          					  case 0:
/*< 62>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 2), ('next', 61), ('param3', 13)])
/*< 61>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Ah, Narisha ist also... Hmmm...\nDer Tornadostoß ist nicht\nungefährlich, kann aber auch\nsehr hilfreich sein!")
          					  case 1:
/*< 34>*/ 						switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          						  case 0:
/*< 59>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 4), ('next', 31), ('param3', 13)])
/*< 31>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Geh nach nebenan und frage\nMeister <b<Otus>> nach Narisha, ja?")
          						  case 1:
/*< 85>*/ 							switch (story_flags[327 /* us: 805A9AFF 0x20, jp: 805ACD7F 0x20 */]) {
          							  case 0:
/*< 86>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Ob es jemanden gibt, der dir mehr\nüber das Triforce erzählen kann...\n\n\nIch befürchte, dass es hier im\nWolkenhort keine solche Person gibt...")
          							  case 1:
/*< 20>*/ 								switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          								  case 0:
/*< 35>*/ 									OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 58), ('param3', 31)])
/*< 58>*/ 									OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 2), ('next', 21), ('param3', 13)])
/*< 21>*/ 									printf(/* textboxtype: 1, unk: 0 */ "Link!\nHast du etwas Neues über Zelda\nherausgefunden?\n\nSag schon\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í\nUnd sei es nur der kleinste Hinweis, ich\nwill alles hören!")
/*< 69>*/ 									OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 40), ('next', 22), ('param3', 6)])
/*< 22>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02ÍDu kannst darüber noch nicht\nsprechen? Ich verstehe... Es gibt\nDinge, über die man nicht reden kann,\nund dann soll man schweigen\x0E\x01\x06\x02\xFECD...")
/*< 70>*/ 									OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 37), ('param3', 6)])
/*< 37>*/ 									printf(/* textboxtype: 1, unk: 0 */ "Ich habe ein wenig nachgedacht,\nLink...\n\n\nEs tut mir leid, mit anzusehen, wie du\ndich so mutterseelenallein deinem\nSchicksal stellst... Ich bin nur ein\nalter Mann\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í\nAber vielleicht kann ich dir gerade \ndeswegen helfen.\n\n\nIch habe beschlossen, all mein Wissen\nmit dir zu teilen!\n\n\nDu kannst mich alles fragen, was du\nzum Wolkenhort wissen willst...\n[1]Also...[2]Nicht jetzt.")
/*< 23>*/ 									switch (choice(2)) {
          									  case 0:
          										flw_25:
/*< 25>*/ 										printf(/* textboxtype: 1, unk: 0 */ "Was sagst du da? Du willst wissen,\nwas das <y+<Triforce>> ist\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í\n\n\nWoher weißt du...\n\n\n\nDie alten Schriften sagen leider nur\nsehr wenig darüber. Es ist auf jeden\nFall sehr rätselhaft...")
/*< 26>*/ 										printf(/* textboxtype: 1, unk: 0 */ "Es tut mir leid...\nDa rede ich von meiner Weisheit und\nmuss trotzdem passen...")
/*< 32>*/ 										story_flags[327 /* us: 805A9AFF 0x20, jp: 805ACD7F 0x20 */] = true;
          									  case 1:
/*< 24>*/ 										printf(/* textboxtype: 1, unk: 0 */ "Wie, du willst dir meine Weisheit\nnicht zunutze machen?\n\n\nIch bin mir sicher, dass ich dir\nbehilflich sein kann. Komm schon,\nfrag mich etwas!")
          										goto flw_25
          									}
          								  case 1:
/*< 19>*/ 									switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          									  case 0:
/*< 57>*/ 										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 5), ('next', 18), ('param3', 13)])
/*< 18>*/ 										printf(/* textboxtype: 1, unk: 0 */ "Link!\nAuf dir ruht meine ganze Hoffnung...\nFinde Zelda für mich!")
          									  case 1:
/*< 11>*/ 										switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          										  case 0:
/*< 56>*/ 											OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 1), ('next', 12), ('param3', 13)])
/*< 12>*/ 											printf(/* textboxtype: 1, unk: 0 */ "Werden zwei große Flügel zum\nTurm des Lichts geführt, so wird\ndem Jüngling der Verbleib des\nlegendären Liedes enthüllt...\nHör mal, Link!\nDieses Lied wird im Wolkenhort seit\nGenerationen weitergegeben...\n\nVielleicht solltest du einmal nachsehen,\nwo im Wolkenhort sich diese <r<zwei\nFlügel>> befinden könnten? Eventuell\nerhältst du so einen Hinweis...")
          										  case 1:
/*< 50>*/ 											switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          											  case 0:
/*< 36>*/ 												OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 55), ('param3', 31)])
/*< 55>*/ 												OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 3), ('next', 92), ('param3', 13)])
/*< 92>*/ 												printf(/* textboxtype: 1, unk: 0 */ "Oh, da bist du ja, Link!\nIch freue mich, dass du wohlauf bist.\n\n\nHast du etwas über Zeldas Verbleib\nherausfinden können?")
/*< 94>*/ 												set_camera(10, 0)
/*< 93>*/ 												printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Ich verstehe\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\nOh, Zelda...\n\n\nNein, ich darf nicht klagen, sonst wird\ndie Last, die du auf deinen Schultern\nträgst, nur noch schwerer...")
/*< 95>*/ 												set_camera(-1, 0)
/*<  4>*/ 												printf(/* textboxtype: 1, unk: 0 */ "Was?\x0E\x01\x04\x02( Du willst den Text des Liedes\nerfahren, das Zelda am Tag der\nVogelreiter-Zeremonie gesungen hat?\n\nIch helfe dir ja gerne, aber ich bin\nwirklich kein großer Musiker...\n[1]Der Text\ngenügt![2]Bitte sing!")
/*<  5>*/ 												switch (choice(2)) {
          												  case 0:
/*<  7>*/ 													printf(/* textboxtype: 1, unk: 0 */ "Und ich dachte schon... Na ja, umso\nbesser!\n\n\nWarte einen Augenblick...")
          													flw_8:
/*<  8>*/ 													printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x06\x02\xFCCD<y+<Ein Jüngling, geleitet von der Göttin,\nwird Himmel und Erde verbinden und\ndas Licht bringen...>>\x0E\x01\x06\x02Í\n\nUnd weiter geht es so...\n\n\n\n\x0E\x01\x06\x02\xFCCD<y+<Er wird zwei Flügel zum Turm des\nLichts führen... Ein Weg wird sich\nöffnen, das Echo des Liedes\nerschallen...>>\x0E\x01\x06\x02Í")
/*<  9>*/ 													printf(/* textboxtype: 1, unk: 0 */ "Dies ist der Text des Liedes...\n\n\n\nDer <r<Turm des Lichts >>ist der Turm am\nDorfplatz...\n\n\nAber die großen Flügel\x0E\x01\x06\x02\xFECD...\nWenn man zwei Flügel zum Turm am\nDorfplatz führt, passiert also etwas\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í\n\n<r<Zwei große Flügel>>...\nHmmm\x0E\x01\x06\x02\xFECD...")
/*< 10>*/ 													story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */] = true;
/*<100>*/ 													story_flags[142 /* us: 805A9AEE 0x01, jp: 805ACD6E 0x01 */] = true;
          												  case 1:
/*<  6>*/ 													printf(/* textboxtype: 1, unk: 0 */ "Ich... Jetzt hör schon auf mit diesem\nUnfug! Den Text kann ich dir\naufsagen...\n\nMoment mal...")
          													goto flw_8
          												}
          											  case 1:
/*< 52>*/ 												switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          												  case 0:
/*< 51>*/ 													printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Hallo, Link!\nHast du etwas über Zelda\nherausgefunden?\n\nIch habe es vorgezogen, nicht über die\nEreignisse jener Nacht zu sprechen.\nIch möchte hier im Dorf keine Unruhe\nstiften.\nEs tut mir leid, dass du ganz alleine\nbist, aber ich bitte dich... Erweise dich\ndieser Aufgabe würdig! Für uns alle!")
          												  case 1:
/*< 53>*/ 													printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Ich hörte, dass der <r<Schwertmeister>>\nBedenken bezüglich deiner Reise hat.\n\n\nVielleicht solltest du vor deinem\nAufbruch noch mal kurz bei der\nÜbungshalle vorbeischauen und\nmit ihm reden?\n\nLink, ich vertraue dir.\nFinde Zelda!")
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
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Einen Moment, Link!")
/*< 43>*/ 	set_camera(1, 0)
/*< 44>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 100), ('next', 29), ('param3', 15)])
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Einen Hinweis kann ich dir geben.\nVielleicht hast du von dem uralten\n<r<Himmelsgeist >><b<Narisha>> gehört...\n\n\x0E\x01\n\x04\x02ÍNarisha ist seit ewiger Zeit der\nHüter der Wolken und zugleich ein\nwandelndes Lexikon...\n\nIch bin mir sicher, dass er dir etwas\nzum <y+<Triforce>> sagen können wird.\n[1]Wo ist er?[2]Ein Lexikon?")
/*< 38>*/ 	switch (choice(2)) {
          	  case 0:
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Hm, das ist eine wirklich gute Frage...")
          		flw_45:
/*< 45>*/ 		set_camera(3, 0)
/*< 30>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Dir ist sicher schon diese riesige\n<r<Sturmwolke >>aufgefallen, die vor\nKurzem aus heiterem Himmel\nerschienen ist...\nEs gibt das Gerücht, dass Narisha\nin dieser Wolke eingeschlossen wäre...")
/*< 46>*/ 		set_camera(4, 0)
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Ich hatte Meister <b<Otus>> beauftragt,\ndiesem Gerücht nachzugehen, doch\ndann kam die Sache mit Zelda\ndazwischen...\nIch habe ihn noch nicht befragen\nkönnen, aber vielleicht hat er bereits\netwas herausgefunden...\n\nVielleicht solltest du Meister <b<Otus>>\ndirekt nach Narisha fragen!")
/*< 33>*/ 		story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */] = true;
/*< 47>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          	  case 1:
/*< 40>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Ja, er scheint in der Tat allwissend\nzu sein. Allerdings...")
          		goto flw_45
          	}
          }

          void entrypoint_103_08() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x17Was soll das denn jetzt werden?\nBeeil dich und folge den anderen, und\nzwar dalli! Auf geht's!")
          }

