          void entrypoint_006_300() {
          	start()
/*<  7>*/ 	switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          	  case 0:
/*<  8>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Du nimmst an einer Herausforderung\nin <b<Ranelles Heldenschule >>teil.\n\n\nEine Analyse der Umgebung ist deshalb\nnicht möglich.")
          	  case 1:
/*<  1>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Du befindest dich im <b<Siegelhain>>. Ich\nspüre die Auren einer kleinen Anzahl\nschwacher Wesen, die dir feindlich\ngesinnt sind.")
/*<  5>*/ 		printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x01Gebieter, dein Ausrüstungs-Typ ist\ngegenwärtig \x201E\x0E\x02\x02\x04\x00\x00\x201C.")
/*<  2>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Deine Anpassung an diese Umgebung\nbeträgt \x0E\x02\x03\x06\x00\x00Í %.")
/*<  6>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Dein Schwert ist als Waffe für den\nKampf völlig ausreichend.\n\n\nIch schlage vor, Items auszurüsten,\ndie nicht direkt im Kampf eingesetzt\nwerden.")
/*<  3>*/ 		switch (adventure_pouch_has(6 0x0006)) {
          		  case 0:
/*<  4>*/ 			printf(/* textboxtype: 2, unk: 0 */ "Ich halte zudem den Einsatz des\nHolzschildes in diesem Gebiet für\nunangebracht,~~~ da er den Flammen\nnicht standhalten kann.")
          		  case 1:
          		}
          	}
          }

          void entrypoint_006_301() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Ich habe keine Informationen für dich.")
          }

