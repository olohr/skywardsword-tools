          void entrypoint_006_300() {
          	start()
/*<  7>*/ 	switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          	  case 0:
/*<  8>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Non è possibile effettuare un'analisi\nstandard poiché siete impegnato nella\nsfida del drago del fulmine <b<Ranel>>, una\nparte del suo duro allenamento.")
          	  case 1:
/*<  1>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Questa è la <b<Terra dell'esilio>>.\nRilevo l'aura di nemici deboli.\nSono in pochi.")
/*<  5>*/ 		printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x01Mio signore, il vostro attuale\nequipaggiamento è\n\x0E\x02\x02\x04\x00\x00.")
/*<  2>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Idoneità all'area: \x0E\x02\x03\x06\x00\x00Í%.")
/*<  6>*/ 		printf(/* textboxtype: 2, unk: 0 */ "In questo luogo sarà sufficiente\ncombattere soltanto con la spada.\nConsiglierei di equipaggiare\noggetti non offensivi.")
/*<  3>*/ 		switch (adventure_pouch_has(6 0x0006)) {
          		  case 0:
/*<  4>*/ 			printf(/* textboxtype: 2, unk: 0 */ "Inoltre, il vostro attuale scudo di legno\nnon può prevenire i danni causati da\nfrecce infuocate.~~~ Ne sconsiglierei\nl'impiego.")
          		  case 1:
          		}
          	}
          }

          void entrypoint_006_301() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Nessun dato rilevante da riportare.")
          }

