          void entrypoint_251_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x12\x04\x00dAdorata Faih!\nAccorro! Eccomi! Bzzz!\n\n\nVuoi che trasporti qualcosa?\nCerto! Bzzz!")
          }

          void entrypoint_251_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Ecco qui! Ti aspetto in volo, nel cielo,\nraggiungimi presto!!! Bzzz!!!")
          }

          void entrypoint_251_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x01Signore, suggerirei di tornare nel\nCielo e portare subito il Kyuri nella\nterra designata.")
/*< 23>*/ 	story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*< 13>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = true;
/*< 24>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*< 25>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
/*< 26>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*< 27>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
/*< 28>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
/*< 29>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
/*< 30>*/ 	story_flags[673 /* us: 805A9B20 0x04, jp: 805ACDA0 0x04 */] = true;
/*< 34>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
          }

          void entrypoint_251_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x12\x04\x00dEhi, togliti di mezzo! Bzzz!\nNon farmi ripetere sempre le\nstesse cose! Sgrunt!")
          }

          void entrypoint_251_06() {
/*< 22>*/ 	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Probabilità che questa creatura sia\nuna pianta: 40%. <b<Asio Otus >>sarà in\ngrado di capire se si tratta di una nuova\nspecie.\nÈ possibile trasportarla per mezzo\ndel robot. Volete che lo chiami?\n[1]Sì[2-]No")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  4>*/ 		printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Bene, signore. Proverò\na chiamare il robot telepaticamente.")
          	  case 1:
/*<  3>*/ 		printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Bene, signore,\nse volete trasportarla\nesaminatela di nuovo.")
          	}
          }

          void entrypoint_251_01() {
          	start()
/*< 31>*/ 	switch (story_flags[673 /* us: 805A9B20 0x04, jp: 805ACDA0 0x04 */]) {
          	  case 0:
/*< 33>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x14Ehi, tu, tenero virgulto! Non si illude\ncosì la gente portandola su nel cielo\ne poi lasciando le cose a metà!\n\n\x0E\x01\x09\x04\x09\x13Mi sono appassito pensando\nche non sarei più andato a vivere\nin un posto tranquillo!")
/*< 32>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x04Allora, questa volta portamici\nsul serio!\n\n\n\x0E\x01\x09\x04\x00\x01Ci conto!")
          	  case 1:
/*< 36>*/ 		switch (loadzone_temp_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*< 37>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x03Voglio essere trasportato in\nun posto pacifico in cui possa vivere\ntranquillo senza bisogno di\nnascondermi!\n\x0E\x01\x09\x04\x00\x01Conto su di te!")
          		  case 1:
/*< 14>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Oh, sei tu, giovane virgulto!\nSono stato nascosto troppo a lungo\ne mi fanno male le spalle... \n[1]Spalle?[2]Poverino!")
/*< 15>*/ 			switch (choice(2)) {
          			  case 0:
/*< 16>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x14Ma come ti permetti!\nNon sono molto pronunciate,\nma ce le ho le spalle!\n\n\x0E\x01\x09\x04\x07\x11Sai quanto ci si stanca\na stare fermi come una natura morta\nper scampare il pericolo?!")
          				flw_38:
/*< 38>*/ 				switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          				  case 0:
/*< 39>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x13Tutti dicono che nella foresta\nè tornata la pace e sono contenti...\nBeh, io non ci credo affatto!\n\n\x0E\x01\x09\x04\x07\x04Forse dovrò passare tutta\nla vita così!")
          					flw_19:
/*< 19>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x05Non esisterà un posto in\ncui si possa vivere tranquilli\nsenza bisogno di nascondersi?!\n[1]Certo![2]Ci penso io!")
/*< 20>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_21:
/*< 21>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x06\x07Davvero?! Portamici\nsubito!!!")
/*< 35>*/ 						loadzone_temp_flags[9 /* 0x0 02 */] = true;
/*< 40>*/ 						story_flags[1094 /* us: 805A9B52 0x10, jp: 805ACDD2 0x10 */] = true;
          					  case 1:
          						goto flw_21
          					}
          				  case 1:
/*< 18>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x13Ma ci sono ancora\nun sacco di cattivi in giro...\n\n\n\x0E\x01\x09\x04\x07\x04Noi Kyuri saremo\ncondannati a passare la\nnostra vita così?!")
          					goto flw_19
          				}
          			  case 1:
/*< 17>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x11È dura la vita a stare fermi \ncome una natura morta aspettando di\nscampare il pericolo, credimi!")
          				goto flw_38
          			}
          		}
          	}
          }

