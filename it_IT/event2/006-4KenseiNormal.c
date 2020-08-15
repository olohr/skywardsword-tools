          void entrypoint_006_400() {
          	start()
/*<  4>*/ 	switch (story_flags[182 /* us: 805A9AE6 0x20, jp: 805ACD66 0x20 */]) {
          	  case 0:
/*<  5>*/ 		switch (story_flags[108 /* us: 805A9AE1 0x02, jp: 805ACD61 0x02 */]) {
          		  case 0:
/*< 17>*/ 			printf(/* textboxtype: 2, unk: 0 */ "La vostra energia è diminuita.\nRecuperatela al più presto.\x0E\x01\x0C\x04\x06\x192")
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 2, unk: 0 */ "La vostra vitalità è diminuita.\nRecuperatela al più presto.\n\n\nPer agevolarvi, ho impostato i <pling><y<cuori>>\ntra gli obiettivi del <g<rilevatore>>.")
/*<  6>*/ 			story_flags[108 /* us: 805A9AE1 0x02, jp: 805ACD61 0x02 */] = true;
/*<  7>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 11), ('next', 8), ('param3', 56)])
/*<  8>*/ 			printf(/* textboxtype: 2, unk: 0 */ "Premendo (C) e selezionando il <y<cuore\n>>dal cerchio potrete scegliere\nl'obiettivo del rilevatore.\x0E\x01\x11\x02\x6CD\nFatene buon uso.")
/*< 12>*/ 			switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          			  case 0:
/*< 13>*/ 				printf(/* textboxtype: 2, unk: 0 */ "Poiché ora vi trovate nella <r<modalità\neroica >>non appariranno cuori e\ntulicuori.\n\nTuttavia, se siete in possesso di un\n<y<amuleto del cuore>>, <r<avrete la\npossibilità >>che <pling>cuori e tulicuori\nappaiano.")
          			  case 1:
          			}
          		}
          	  case 1:
/*< 16>*/ 		printf(/* textboxtype: 2, unk: 0 */ "La vostra energia è diminuita.\nRecuperatela al più presto.\x0E\x01\x0C\x04\x06\x192")
          	}
          }

          void entrypoint_006_401() {
/*<  2>*/ 	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0 */ "La vostra energia è diminuita.\nRecuperatela al più presto.\x0E\x01\x0C\x04\x06\x192")
          }

          void entrypoint_006_402() {
/*< 15>*/ 	start()
/*<  9>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*< 10>*/ 		switch (story_flags[841 /* us: 805A9B35 0x01, jp: 805ACDB5 0x01 */]) {
          		  case 0:
/*< 14>*/ 			switch (adventure_pouch_has(8 0x0008)) {
          			  case 0:
          			  case 1:
          				flw_11:
/*< 11>*/ 				printf(/* textboxtype: 2, unk: 0 */ "Poiché ora vi trovate nella <r<modalità\neroica>>, non appariranno cuori e\ntulicuori. Raccomanderei un uso\nsapiente delle pozioni.")
          			}
          		  case 1:
          			goto flw_11
          		}
          	  case 1:
          	}
          }

