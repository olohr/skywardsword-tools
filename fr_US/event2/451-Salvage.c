          void entrypoint_451_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Cet objet pourrait être celui qu'a\nperdu l'homme de l'île fortune.\n\n\nJe peux appeler le robot de l'atelier\nde rénovation pour qu'il vienne le\nrécupérer. Dois\x2010je appeler le robot?\n[1]S'il te plaît[2-]Non merci")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  3>*/ 		printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Très bien, Maître.\nJ'appelle le robot par transmission\ntélépathique.")
          	  case 1:
/*<  4>*/ 		printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Très bien, Maître.\nSi vous voulez le récupérer,\nexaminez\x2010le à nouveau.")
          	}
          }

          void entrypoint_451_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x12\x04\x00dMam'selle Fay! zrrpt!\nTu m'as appelé?\n\n\nC'est bizarre, zrrft... cet endroit me\nrend tout nostalgique... brrzrrt...\n\n\nBzzzt... Cette fois, c'est ça qu'il faut\ntransporter?")
          }

          void entrypoint_451_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x12\x04\x00dTrès bien, j'apporte ça dans le ciel.\nRejoignez\x2010moi vite! vrrt!!")
          }

          void entrypoint_451_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x01Maître, je vous conseille de regagner le\nciel pour remettre la roue de fortune à\nson propriétaire au plus vite.")
/*< 14>*/ 	story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*< 13>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = true;
/*< 19>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*< 18>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
/*< 17>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*< 16>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
/*< 20>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
/*< 15>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
/*< 21>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 721), ('next', 22), ('param3', 52)])
/*< 22>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 722), ('next', 24), ('param3', 52)])
/*< 24>*/ 	story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = false;
/*< 23>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
          }

          void entrypoint_451_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x12\x04\x00dBon, zrrft... toi, le maître en vert,\nreste tranquille. Laisse faire le pro!\nbzzzt!")
          }

          void entrypoint_451_06() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Cet objet pourrait être celui qu'a\nperdu l'homme de l'île fortune.\n\n\nJe pourrais appeler le robot de l'atelier\nde rénovation pour qu'il vienne le\nrécupérer.\n\nMais pour l'heure, ce robot est en\nmission au volcan d'Ordinn.\nJe ne peux donc pas le faire venir ici.\n\nJe vous conseille de retourner au\nvolcan d'Ordinn pour vérifier où en est\nle robot.")
          }

