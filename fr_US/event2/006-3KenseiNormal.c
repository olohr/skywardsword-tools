          void entrypoint_006_300() {
          	start()
/*<  7>*/ 	switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          	  case 0:
/*<  8>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Vous participez actuellement au\nprogramme d'entraînement de\n<b<Lanelle>>, le dragon de foudre. L'analyse\nde cette zone est impossible.")
          	  case 1:
/*<  1>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Nous sommes au <b<site du sceau>>.\nJe détecte la présence de quelques\nmonstres peu dangereux.")
/*<  5>*/ 		printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x01Maître, votre équipement actuel est de\ntype « \x0E\x02\x02\x04\x00\x00 ».")
/*<  2>*/ 		printf(/* textboxtype: 2, unk: 0 */ "L'adéquation de votre équipement à la\nzone actuelle est de \x0E\x02\x03\x06\x00\x00Í %.")
/*<  6>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Votre épée est la seule arme dont vous\naurez besoin ici. Je vous conseille de\nvous équiper d'objets non destinés au\ncombat.")
/*<  3>*/ 		switch (adventure_pouch_has(6 0x0006)) {
          		  case 0:
/*<  4>*/ 			printf(/* textboxtype: 2, unk: 0 */ "Le bouclier de bois n'est pas conçu\npour vous protéger des attaques de\nfeu.~~~ Je ne vous recommande pas de\nl'équiper ici.")
          		  case 1:
          		}
          	}
          }

          void entrypoint_006_301() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Je ne possède aucune information\npertinente sur cette zone.")
          }

