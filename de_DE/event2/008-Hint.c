          void entrypoint_008_002() {
/*<  5>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Hallo hallo, junger Mann!\nKomm doch mal rüber zu mir!")
          }

          void entrypoint_008_003() {
/*<  6>*/ 	start()
/*< 17>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*< 18>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Ich bin ein <b<Shiekah-Stein>>\x0E\x01\x04\x02\n.~~.~~.\x0E\x01\x04\x02\n\nAh, du weißt schon Bescheid. Na, wenn\ndas so ist...\n\nLass mich direkt zur Sache kommen...~~~\nDu spielst im <r<Helden-Modus>>, also gibt\nes kein Rätsel, das du nicht schon\ngelöst hast.\nDas finde ich wirklich beeindruckend,\nund deswegen kannst du dir gleich von\nAnfang an <pling><r<alle Visionen>> ansehen.\n\nWenn du dir die bereits gesehenen\nVisionen ansehen möchtest, komm\neinfach vorbei.\n\nAlles Gute!")
          	  case 1:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Ich bin ein <b<Shiekah-Stein>>.\nFreut mich, deine Bekanntschaft zu\nmachen.\n\nLass mich direkt zur Sache kommen...~~~\nIch denke, du wirst hin und wieder\nnicht wissen, was du tun sollst, wie es\nweitergeht...\nWenn du dir mal bei einem Rätsel\nvergeblich den Kopf zerbrichst und dir\nkeine Lösung einfällt, komm zu mir.\n\nIm Moment habe ich nichts für dich,\naber wenn du später wiederkommst,\nkann ich dir was <r<Tolles>> zeigen.\n\nAlles Gute!")
          	}
          }

          void entrypoint_008_004() {
/*< 13>*/ 	start()
/*< 20>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*< 21>*/ 		entrypoint_008_06();
          	  case 1:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Junger Mann\x0E\x01\x04\x02\n, es sieht so aus, als ob\nich keine Neuigkeiten für dich hätte.\n\n\nWie wär's, wenn du ein wenig später\nwieder zu mir kommen würdest?\nVielleicht habe ich dann wieder etwas\nInteressantes für dich.")
          	}
          }

          void entrypoint_008_005() {
          	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Na, wie geht's? Ich habe eine neue\nVision für dich! Willst du sie sehen?[1]Ja[2-]Nein")
/*<  1>*/ 	switch (choice(2)) {
          	  case 0:
/*<  2>*/ 		changeScene(62, 0) // {'name': 'F000', 'room': 0, 'layer': 22, 'entrance': 96, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          	  case 1:
/*<  4>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Gut, kein Problem.\nDann alles Gute weiterhin!")
          	}
          }

          void entrypoint_008_006() {
/*<  8>*/ 	start()
/*< 14>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Wie geht's?\x0E\x01\x04\x02\n Ich kann dir alle meine\nVisionen zeigen. Willst du Visionen\nsehen?[1]Ja[2-]Nein")
          		flw_9:
/*<  9>*/ 		switch (choice(2)) {
          		  case 0:
/*< 10>*/ 			changeScene(62, 0) // {'name': 'F000', 'room': 0, 'layer': 22, 'entrance': 96, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          		  case 1:
/*< 12>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Gut, kein Problem.\nDann alles Gute weiterhin!")
          		}
          	  case 1:
/*< 11>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Wie geht's?\x0E\x01\x04\x02\n Im Moment habe ich keine\ninteressanten Visionen für dich.\nWillst du eine alte Vision sehen?[1]Ja[2-]Nein")
          		goto flw_9
          	}
          }

