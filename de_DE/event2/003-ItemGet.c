          void entrypoint_003_062() {
/*< 11>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
/*<  7>*/ 	give_item(62 0x3E);
          }

          void entrypoint_003_028() {
/*<118>*/ 	start()
/*<148>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 505), ('param2', 2), ('next', 149), ('param3', 23)])
/*<149>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 6)])) {
          	  case 0:
/*< 27>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 505), ('param2', 3), ('next', 28), ('param3', 23)])
/*< 28>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 4)])) {
          		  case 0:
/*< 24>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 505), ('param2', 4), ('next', 25), ('param3', 23)])
/*< 25>*/ 			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 2)])) {
          			  case 0:
/*< 21>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 505), ('param2', 5), ('next', 22), ('param3', 23)])
/*< 22>*/ 				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 0)])) {
          				  case 0:
/*<151>*/ 					printf(/* textboxtype: 5, unk: 1 */ "Du hast das letzte <y<Schlüsselfragment>>\nerhalten. Nun kannst du das Tor zum\nTempel öffnen.\n\nBegib dich zurück zum Gipfel und mache\ndich im Tempel auf die Suche nach Zelda.")
/*<588>*/ 					story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */] = true;
/*<677>*/ 					story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<589>*/ 					story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          				  case 1:
/*< 23>*/ 					printf(/* textboxtype: 5, unk: 1 */ "Du hast ein <y<Schlüsselfragment >>erhalten!\nEs ist Teil des Schlüssels, der das\nverschlossene Tor zum Tempel öffnet.\nEs fehlt dir nur noch<r< 1 Fragment>>!")
          				}
          			  case 1:
/*< 26>*/ 				printf(/* textboxtype: 5, unk: 1 */ "Du hast ein <y<Schlüsselfragment >>erhalten!\nEs ist Teil des Schlüssels, der das\nverschlossene Tor zum Tempel öffnet.\nEs fehlen dir nur noch<r< 2 Fragmente>>!")
          			}
          		  case 1:
/*< 29>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Du hast ein <y<Schlüsselfragment >>erhalten!\nEs ist Teil des Schlüssels, der das\nverschlossene Tor zum Tempel öffnet.\nEs fehlen dir nur noch<r< 3 Fragmente>>!")
          		}
          	  case 1:
/*<150>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast ein <y<Schlüsselfragment >>erhalten!\nEs ist Teil des Schlüssels, der das\nverschlossene Tor zum Tempel öffnet.\n\nSammle alle 5 Fragmente, um ihn zu\nvervollständigen. Es fehlen dir nur\nnoch <r<4 Fragmente>>!")
          	}
          }

          void entrypoint_003_010() {
/*<136>*/ 	start()
/*< 77>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast das <y<Übungsschwert >>erhalten!\nDieses äußerst scharfe Schwert wird\nvon den Schülern der Ritterschule bei\nÜbungskämpfen verwendet.\nDrücke (1), um dir anzusehen, welche\nGegenstände du besitzt.\x0E\x01\x11\x02\x4CD")
/*<383>*/ 	story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */] = true;
/*<569>*/ 	story_flags[571 /* us: 805A9B18 0x04, jp: 805ACD98 0x04 */] = true;
          }

          void entrypoint_003_097() {
/*<223>*/ 	start()
/*<578>*/ 	story_flags[730 /* us: 805A9B27 0x04, jp: 805ACDA7 0x04 */] = true;
/*<221>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 95), ('param2', 1), ('next', 222), ('param3', 23)])
/*<222>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 24)])) {
          	  case 0:
/*<224>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 96), ('param2', 1), ('next', 225), ('param3', 23)])
/*<225>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 26)])) {
          		  case 0:
/*<582>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Du hast das <y+<Triforce der Weisheit\n>>erhalten! Diese Macht wurde einst den\nMenschen von den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <r<unendliche Kraft>> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<527>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_539:
/*<539>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Du hast das <y+<Triforce der Weisheit\n>>erhalten! Diese Macht wurde einst den\nMenschen von den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <r<unendliche Kraft>> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<537>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Sammle <r<ein>> weiteres Artefakt, um das\nTriforce zu vervollständigen.")
/*<574>*/ 			changeScene(1, 1) // 
          		}
          	  case 1:
/*<549>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 96), ('param2', 1), ('next', 550), ('param3', 23)])
/*<550>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 68)])) {
          		  case 0:
          			goto flw_539
          		  case 1:
/*<226>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Du hast das <y+<Triforce der Weisheit\n>>erhalten! Diese Macht wurde einst den\nMenschen von den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <r<unendliche Kraft>> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<536>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Sammle <r<zwei>> weitere Artefakte, um das\nTriforce zu vervollständigen.")
/*<575>*/ 			changeScene(1, 1) // 
          		}
          	}
          }

          void entrypoint_003_104() {
/*<242>*/ 	start()
/*<238>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Dämonen-Medaille>> erhalten!\nTrägst du sie bei dir, wirst du häufiger\nals sonst auf Rubine und Schätze stoßen.\n\nDoch Vorsicht! Ein Fluch lastet auf ihr,\nder dich am Öffnen deiner Tasche hindert!")
          }

          void entrypoint_003_121() {
/*<272>*/ 	start()
/*<559>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<563>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<268>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<starken Eisenschild>> erhalten!\nDieser äußerst robuste Schild gilt als der\nwiderstandsfähigste aller Eisenschilde.")
          	}
          }

          void entrypoint_003_139() {
/*<314>*/ 	start()
/*<310>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_173() {
/*<360>*/ 	start()
/*<358>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast einen <y<Schattenkristall >>erhalten!\nDieser äußerst seltene Kristall beinhaltet\ndie konzentrierte Boshaftigkeit eines\nMonsters in kristallisierter Form.")
/*<640>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_156() {
/*<373>*/ 	start()
/*<371>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_045() {
/*<448>*/ 	start()
/*<450>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 500), ('param2', 14), ('next', 449), ('param3', 23)])
/*<449>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 52)])) {
          	  case 0:
/*<451>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast <y<Nayrus Tränen >>gefunden.\nDies hat deine Seele reifen lassen,\nLink!\n\nDoch noch ist die Prüfung nicht vorbei...\nBegib dich vorsichtig zum Ausgang, um ein\nZeichen deiner Reife zu erhalten.")
          	  case 1:
/*<447>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast eine von <y<Nayrus Tränen >>erhalten!\nIhre heilige Macht hindert die Hüter für\n<r<90 Sekunden >>daran, sich zu bewegen.\n\nSammle alle <r<15>>, um diese Prüfung zu\nbestehen!")
          	}
          }

          void entrypoint_003_190() {
/*<474>*/ 	start()
/*<472>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_063() {
/*< 13>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
/*<  5>*/ 	give_item(63 0x3F);
          }

          void entrypoint_003_029() {
/*<117>*/ 	start()
/*< 59>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<goldenen Schlüssel>> erhalten!\nEr ist seltsam geformt und mit dekorativen\nMustern überzogen.")
          }

          void entrypoint_003_011() {
/*<135>*/ 	start()
/*<608>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<609>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast das <y<Schwert der Göttin>> erhalten!\nDieses legendäre Schwert ist erfüllt vom\nheiligen Licht der Göttin.\n\nDie Erinnerungen an deine zahlreichen\nKämpfe durchströmen es, wenn du es gen\nHimmel hältst.\n\n<r<<pling>Der Himmelsstrahl fügt nun maximalen\nSchaden zu>>!")
          		flw_462:
/*<462>*/ 		story_flags[3 /* us: 805A9AD9 0x10, jp: 805ACD59 0x10 */] = true;
/*<524>*/ 		changeScene(7, 0) // 
          	  case 1:
/*< 76>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast das <y<Schwert der Göttin>> erhalten!\nDieses legendäre Schwert ist erfüllt vom\nheiligen Licht der Göttin.")
          		goto flw_462
          	}
          }

          void entrypoint_003_080() {
/*<192>*/ 	start()
/*<173>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_098() {
/*<227>*/ 	start()
/*<528>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<antike Seekarte>> erhalten!\nDiese Karte stammt aus einer Zeit, in der\ndiese Wüste noch ein Meer war.")
/*<530>*/ 	story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */] = true;
          }

          void entrypoint_003_105() {
/*<241>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Streu-Schleuder>> erhalten!\nHalte (A) gedrückt, um mit einem Schuss\neinen großen Bereich abzudecken.")
          }

          void entrypoint_003_122() {
/*<271>*/ 	start()
/*<562>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<564>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<671>*/ 		switch (story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */]) {
          		  case 0:
/*<672>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<heiligen Schild>> erhalten!\nDank der Kraft, die ihn durchströmt,\nrepariert er sich selbst. Er kann Feuer,\nElektrizität und Flüche abwehren.")
          		  case 1:
/*<673>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<heiligen Schild>> erhalten!\nDank der Kraft, die ihn durchströmt,\n<r<repariert er sich selbst>>.\n\nEr ist nicht sehr haltbar und zerbricht\nleicht, wehrt dafür aber Feuer,\nElektrizität und Flüche ab.")
/*<674>*/ 			story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */] = true;
/*<518>*/ 			story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          		}
          	}
          }

          void entrypoint_003_174() {
/*<359>*/ 	start()
/*<357>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast eine <y<blaue Vogelfeder>> erhalten!\nDiese kostbare Feder kann man nur bei\nextrem seltenen blauen Vögeln finden.")
/*<641>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_157() {
/*<376>*/ 	start()
/*<375>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_046() {
/*<443>*/ 	start()
/*<445>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 500), ('param2', 14), ('next', 444), ('param3', 23)])
/*<444>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 50)])) {
          	  case 0:
/*<446>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast alle <y<heiligen Tränen >>gefunden.\nDies hat deine Seele reifen lassen,\nLink!\n\nDoch noch ist die Prüfung nicht vorbei...\nBegib dich vorsichtig zum Ausgang, um ein\nZeichen deiner Reife zu erhalten.")
          	  case 1:
/*<442>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast eine <y<heilige Träne>> erhalten!\nIhre heilige Macht hindert die Hüter für\n<r<90 Sekunden >>daran, sich zu bewegen.\n\nSammle alle <r<15>>, um diese Prüfung zu\nbestehen!")
          	}
          }

          void entrypoint_003_191() {
/*<473>*/ 	start()
/*<471>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_064() {
/*< 14>*/ 	start()
/*<  2>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
/*<  3>*/ 	give_item(64 0x40);
          }

          void entrypoint_003_047() {
/*<102>*/ 	start()
/*< 44>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast eine <y<Lichtfrucht >>erhalten! Diese\nmysteriöse Frucht lässt <r<30 Sekunden>> lang\nSignallichter erscheinen, die dir den Weg\nzu den übrigen Tränen weisen.")
          }

          void entrypoint_003_012() {
/*<134>*/ 	start()
/*< 75>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
/*<541>*/ 	story_flags[582 /* us: 805A9B1B 0x20, jp: 805ACD9B 0x20 */] = true;
          }

          void entrypoint_003_081() {
/*<191>*/ 	start()
/*<172>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast einen <y<Herztrank SV>> erhalten!\nDiesen stark verfeinerten Herztrank\nkannst du <r<2-mal>> genießen. Er füllt <r<all\ndeine Herzen >>wieder auf.")
          }

          void entrypoint_003_099() {
/*<235>*/ 	start()
/*<592>*/ 	switch (story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */]) {
          	  case 0:
/*<593>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Mogma-Klauen >>wieder!\nNutze sie, um dich durch Mogma-Löcher\nzu graben.")
/*<594>*/ 		story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */] = false;
          	  case 1:
/*<231>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Mogma-Klauen>> erhalten!\nSolche Grabklauen bekommen selbst\nMogma nur selten zu sehen!\n\nMit ihnen kannst du dich sogar <g<unter der\nErde vorwärts bewegen>>. Halte Ausschau\nnach geeigneten Löchern!")
          	}
          }

          void entrypoint_003_106() {
/*<240>*/ 	start()
/*<236>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_123() {
/*<282>*/ 	start()
/*<565>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<567>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<278>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<hochheiligen Schild>> erhalten!\nDieser mysteriöse Schild repariert sich\nselbst und ist um einiges robuster als sein\nVorgänger.")
          	}
          }

          void entrypoint_003_140() {
/*<313>*/ 	start()
/*<309>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast das <y<Meisterfänger-Netz>> erhalten!\nDein Netz ist nun doppelt so groß wie\nzuvor. Damit solltest du selbst die\nschnellsten Insekten erwischen.")
          }

          void entrypoint_003_175() {
/*<368>*/ 	start()
/*<366>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast einen <y<goldenen Schmuckschädel\n>>erhalten! Ein wirklich sehr seltenes\nSchmuckstück. Sein goldener Glanz wirkt\nseltsam.")
/*<642>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_158() {
/*<378>*/ 	start()
/*<377>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast <y<Rax' Brief>> in Verwahrung\ngenommen! Darin stehen viele\npersönliche Dinge. Pass auf, dass er\nnicht irgendwo als Schmierpapier endet!")
          }

          void entrypoint_003_192() {
/*<476>*/ 	start()
/*<475>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_065() {
/*< 15>*/ 	start()
/*<  1>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast einen <y<Rüstungstrank >>erhalten!\nDieser Trank halbiert jeglichen Schaden,\nden du erleidest! Die Wirkung einer\nFlasche hält <r<3 Minuten >>an.")
          }

          void entrypoint_003_048() {
/*<101>*/ 	start()
/*< 43>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast <r<ein>> <y<Juwel der Güte>> erhalten!\nDieses Juwel ist aus der Dankbarkeit einer\ndir unbekannten Person entstanden.\n\nSammle für <b<Morsego >>noch mehr\nDankbarkeit in kristallisierter Form.")
/*<645>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_030() {
/*<116>*/ 	start()
/*< 58>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<Drachenschlüssel >>erhalten!\nDieser in sich verschlungene Drache\nwurde aus strahlendem Gold gefertigt.")
          }

          void entrypoint_003_013() {
/*<133>*/ 	start()
/*<404>*/ 	switch (story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */]) {
          	  case 0:
/*<436>*/ 		story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */] = false;
/*<504>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast das <y<wahre Master-Schwert>> wieder!\nNun kannst du die Bokblins endlich \nzurechtstutzen und wieder mit <pling><b<Phai\n>>sprechen.")
/*<587>*/ 		scene_flags[5 'Eldin Volcano Summit'][44 /* 0x4 10 */] = true;
          	  case 1:
/*< 74>*/ 		printf(/* textboxtype: 5, unk: 1 */ "")
          	}
          }

          void entrypoint_003_082() {
/*<190>*/ 	start()
/*<171>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_107() {
/*<251>*/ 	start()
/*<247>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_124() {
/*<281>*/ 	start()
/*<566>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<568>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<277>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<göttlichen Schild>> erhalten!\nDieser mysteriöse Schild repariert sich\nselbst und ist um ein Vielfaches robuster\nals sein Vorgänger.")
          	}
          }

          void entrypoint_003_141() {
/*<312>*/ 	start()
/*<647>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<648>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x3CD>> erhalten!\nSchwärme dieser Insekten fallen alle zehn\nJahre über das Land her und vernichten\ndie komplette Vegetation.")
          		flw_616:
/*<616>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<308>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x3CD>> gefangen!\nSchwärme dieser Insekten fallen alle zehn\nJahre über das Land her und vernichten\ndie komplette Vegetation.")
          		goto flw_616
          	}
          }

          void entrypoint_003_176() {
/*<367>*/ 	start()
/*<365>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast das <y<Geschenk der Göttin>> erhalten!\nEs heißt, dieser legendäre, sehr seltene\nSchatz habe einst der Göttin selbst gehört.")
/*<643>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_159() {
/*<382>*/ 	start()
/*<380>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast <y<Terris Insektenkäfig>> erhalten!\nDarin befindet sich Terris Lieblingsinsekt.\nBringe ihm den Käfig schnell zurück!")
          }

          void entrypoint_003_193() {
/*<478>*/ 	start()
/*<477>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_200() {
/*<498>*/ 	start()
/*<496>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_066() {
/*< 10>*/ 	start()
          	printf(/* textboxtype: 5, unk: 1 */ "Du hast einen <y<Rüstungstrank V>> erhalten!\nDieser verfeinerte Trank schützt dich für\n<r<3 Minuten>> vor jeglichem Schaden.")
          }

          void entrypoint_003_049() {
/*<100>*/ 	start()
/*<405>*/ 	switch (story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */]) {
          	  case 0:
/*<406>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<magischen Krug >>wieder!\nEndlich kannst du wieder Dinge durch die\nGegend pusten.")
/*<427>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 4), ('next', 428), ('param3', 38)])
/*<428>*/ 		story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */] = false;
          	  case 1:
/*< 42>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<magischen Krug >>erhalten!\nDiesem uralten und mysteriösen Artefakt\nentströmt starker Wind.\n\n<r<Verlierst >>du beim Zielen den <r<Fokus>>,\ndrücke einfach (v), um deine Ansicht \nwieder zu zentrieren.\x0E\x01\x11\x02\x9CD")
/*<407>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 4), ('next', -1), ('param3', 38)])
          	}
          }

          void entrypoint_003_031() {
/*<115>*/ 	start()
/*< 57>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast das <y<uralte Gebilde>> erhalten!\nEs ist aus Gold gefertigt und sieht aus wie\nein Bestandteil von etwas Größerem. Seine\nOberfläche ist mit Schaltkreisen versehen.")
          }

          void entrypoint_003_014() {
/*<132>*/ 	start()
/*< 73>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_083() {
/*<189>*/ 	start()
/*<170>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_108() {
/*<250>*/ 	start()
/*<246>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<mittlere Geldbörse>> erhalten!\nSie bietet etwas mehr Platz als deine\nalte Geldbörse. In ihr kannst du bis zu\n<r<500 Rubine >>aufbewahren!")
          }

          void entrypoint_003_125() {
/*<280>*/ 	start()
/*<276>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<Hylia-Schild>> erhalten!\nEr enthält die Macht des Helden.\nNichts und niemand kann ihn zerstören!")
/*<519>*/ 	story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          }

          void entrypoint_003_142() {
/*<311>*/ 	start()
/*<649>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<650>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x4CD>> erhalten!\nWird der Panzer dieses Insekts poliert,\ngewinnt es an Stärke. Es zählt zu den\nkräftigsten aller Insekten.")
          		flw_617:
/*<617>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<307>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x4CD>> gefangen!\nWird der Panzer dieses Insekts poliert,\ngewinnt es an Stärke. Es zählt zu den\nkräftigsten aller Insekten.")
          		goto flw_617
          	}
          }

          void entrypoint_003_177() {
/*<387>*/ 	start()
/*<385>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_194() {
/*<489>*/ 	start()
/*<487>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<Wundertrank SV>> erhalten!\nDieser stark verfeinerte Trank repariert\ndeinen Schild <r<automatisch>>, stellt <r<8 >>Herzen\nwieder her und ist <r<2-mal>> einsetzbar.")
          }

          void entrypoint_003_067() {
/*< 90>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_032() {
/*<114>*/ 	start()
/*< 56>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast einen \x0E\x00\x03\x02\nsilbernen Rubin >>erhalten!\nEr ist sagenhafte <r<100 Rubine>> wert!\nFühlt sich gut an, nicht wahr?")
          }

          void entrypoint_003_015() {
/*<131>*/ 	start()
/*< 72>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_084() {
/*<188>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast einen <y<Ausdauertrank>> erhalten!\nTrinke ihn, und deine Ausdaueranzeige\nleert sich langsamer. Die Wirkung einer\nFlasche hält <r<3 Minuten >>an.")
          }

          void entrypoint_003_109() {
/*<249>*/ 	start()
/*<245>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<große Geldbörse>> erhalten!\nSie bietet viel mehr Platz als deine\nalte Geldbörse. In ihr kannst du bis\nzu <r<1000 Rubine >>aufbewahren!")
          }

          void entrypoint_003_126() {
/*<279>*/ 	start()
/*<275>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<Wundertrank>> erhalten!\nDieser mysteriöse Trank stellt deine\nSchildanzeige <r<komplett>> wieder her und\nfüllt außerdem <r<4>> Herzen auf.")
          }

          void entrypoint_003_143() {
/*<318>*/ 	start()
/*<651>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<652>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x5CD>> erhalten!\nErhitzt man ihr Gift, erhält man eine\nwirksame Medizin. Halte dich von\ngroßen Schwärmen fern!")
          		flw_618:
/*<618>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<316>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x5CD>> gefangen!\nErhitzt man ihr Gift, erhält man eine\nwirksame Medizin. Halte dich von\ngroßen Schwärmen fern!")
          		goto flw_618
          	}
          }

          void entrypoint_003_160() {
/*<381>*/ 	start()
/*<379>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast eine <y<Rassel>> erhalten!\nVon vielen Babys heiß geliebt. Wer mag\ndiese Rassel wohl verloren haben?")
          }

          void entrypoint_003_178() {
/*<386>*/ 	start()
/*<384>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_195() {
/*<488>*/ 	start()
/*<486>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast <y<heiße Kürbissuppe>> erhalten!\nDiese hausgemachte Kürbissuppe kühlt\ninnerhalb von <r<5 Minuten>> ab!")
          }

          void entrypoint_003_068() {
/*< 89>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Wasserdrachenschuppe \n>>erhalten! Einer der drei Schätze der\nGöttin. Er ermöglicht dir zu tauchen und\ndie Wasserschraube auszuführen.")
/*<500>*/ 	story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */] = true;
          }

          void entrypoint_003_050() {
/*< 99>*/ 	start()
/*< 41>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Dungeon-Karte>> erhalten!\nSie zeigt dir eine Übersicht deiner \nUmgebung und welche Räume du noch\naufsuchen musst.")
/*<509>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 1), ('next', 508), ('param3', 30)])
/*<508>*/ 	switch (story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */]) {
          	  case 0:
/*<613>*/ 		story_flags[850 /* us: 805A9B34 0x01, jp: 805ACDB4 0x01 */] = true;
/*<510>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', -1), ('param3', 34)])
          	  case 1:
/*<513>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Sie weist dich außerdem auf Schatztruhen\nhin! Behalte sie deshalb gut im Auge.")
/*<512>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 511), ('param3', 34)])
/*<511>*/ 		story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */] = true;
          	}
          }

          void entrypoint_003_033() {
/*<113>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast einen \x0E\x00\x03\x02\x0Bgoldenen Rubin >>erhalten!\nEr ist unglaubliche <r<300 Rubine>> wert!\nAber behalte das lieber für dich...")
          }

          void entrypoint_003_016() {
/*<130>*/ 	start()
/*< 71>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_085() {
/*<187>*/ 	start()
/*<168>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast einen <y<Ausdauertrank V>> erhalten!\nDieser verfeinerte Trank verhindert, dass\nsich deine Ausdaueranzeige leert. Die\nWirkung einer Flasche hält <r<3 Minuten >>an.")
          }

          void entrypoint_003_127() {
/*<290>*/ 	start()
/*<286>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<Wundertrank V>> erhalten!\nDieser verfeinerte Trank stellt deine\nSchildanzeige <r<automatisch>> wieder her und\nfüllt außerdem <r<8>> Herzen auf.")
          }

          void entrypoint_003_144() {
/*<317>*/ 	start()
/*<653>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<654>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x6CD\n>>erhalten! Mit seinen starken Greifarmen\nmacht dieses Insekt Jagd auf seine Beute.\nEs lebt gerne in luftigen Höhen.")
          		flw_619:
/*<619>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<315>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x6CD\n>>gefangen! Mit seinen starken Greifarmen\nmacht dieses Insekt Jagd auf seine Beute.\nEs lebt gerne in luftigen Höhen.")
          		goto flw_619
          	}
          }

          void entrypoint_003_161() {
/*<340>*/ 	start()
/*<338>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast <y<Bienenlarven>> erhalten!\nGelten als sehr nahrhaft, können aber auch\nfür Handwerksarbeiten genutzt werden.")
/*<628>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_179() {
/*<391>*/ 	start()
/*<389>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_196() {
/*<493>*/ 	start()
/*<491>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_069() {
/*< 88>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_051() {
/*< 98>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_034() {
/*<112>*/ 	start()
/*< 54>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast eine \x0E\x00\x03\x02\x0CRubin-Falle>> erhalten!\nDir wurden <r<10 Rubine >>abgezogen.\nWie gemein...")
          }

          void entrypoint_003_017() {
/*<129>*/ 	start()
/*< 70>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast das <y<Seelengefäß >>erhalten!\nDiese geheimnisvolle Pflanze spiegelt\ndeine Seele wider, Link.")
          }

          void entrypoint_003_086() {
/*<186>*/ 	start()
/*<167>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast einen <y<Lufttrank>> erhalten!\nTrinke ihn, und deine Luftanzeige leert\nsich langsamer. Die Wirkung einer Flasche\nhält <r<3 Minuten >>an.")
          }

          void entrypoint_003_110() {
/*<248>*/ 	start()
/*<244>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<riesige Geldbörse>> erhalten!\nSie bietet noch viel mehr Platz als deine\nalte Geldbörse. In ihr kannst du bis zu\n<r<5000 Rubine >>aufbewahren!")
          }

          void entrypoint_003_128() {
/*<289>*/ 	start()
/*<285>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<kleine Deku-Tasche >>erhalten!\nMit ihr kannst du <r<10 >>weitere Deku-Kerne\nbei dir tragen. Sehr nützlich, wenn du gern\ndie Schleuder einsetzt.")
          }

          void entrypoint_003_145() {
/*<322>*/ 	start()
/*<655>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<656>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x7CD>> erhalten!\nAngeblich färbt sich dieses Insekt rot,\nwenn man es mit Erz füttert. Ist sehr\nruhig und bewegt sich kaum.")
          		flw_620:
/*<620>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<320>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x7CD>> gefangen!\nAngeblich färbt sich dieses Insekt rot,\nwenn man es mit Erz füttert. Ist sehr\nruhig und bewegt sich kaum.")
          		goto flw_620
          	}
          }

          void entrypoint_003_162() {
/*<339>*/ 	start()
/*<337>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\xFCD>> erhalten!\nDiese Federn werden im Wolkenhort wegen\nihrer Seltenheit und Nützlichkeit hoch\ngeschätzt.")
/*<629>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_197() {
/*<492>*/ 	start()
/*<585>*/ 	switch (story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */]) {
          	  case 0:
/*<586>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<Lebensbaumkeimling\n>>ausgegraben! Hier würde es zu lang\ndauern, bis er herangewachsen ist. Pflanze\nihn an einem anderen Ort ein.")
          	  case 1:
/*<490>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<Lebensbaumkeimling\n>>erhalten! Ein Keimling des legendären\nBaumes, dessen Früchte jede noch so\nschwere Krankheit heilen sollen.")
/*<529>*/ 		story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */] = true;
          	}
          }

          void entrypoint_003_052() {
/*< 97>*/ 	start()
/*<415>*/ 	switch (story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */]) {
          	  case 0:
/*<597>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 105), ('param2', 1), ('next', 598), ('param3', 23)])
/*<598>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 96)])) {
          		  case 0:
/*<599>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Streu-Schleuder >>wieder!\nJetzt kannst du endlich die Gegner auf\nPatrouille betäuben.")
          			flw_433:
/*<433>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 417), ('param3', 38)])
/*<417>*/ 			story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */] = false;
          		  case 1:
/*<416>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Schleuder >>wieder!\nJetzt kannst du endlich die Gegner auf\nPatrouille betäuben.")
          			goto flw_433
          		}
          	  case 1:
/*< 39>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Schleuder >>erhalten!\nVerschieße mit ihr Deku-Kerne, um deine\nGegner zu betäuben.\n\n<r<Verlierst >>du beim Zielen den <r<Fokus>>,\ndrücke einfach (v), um deine Ansicht \nwieder zu zentrieren.\x0E\x01\x11\x02\x9CD")
/*<153>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 493), ('param2', 20), ('next', 521), ('param3', 25)])
/*<521>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 520), ('param3', 38)])
/*<520>*/ 		story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */] = true;
/*<522>*/ 		story_flags[569 /* us: 805A9B18 0x01, jp: 805ACD98 0x01 */] = true;
          	}
          }

          void entrypoint_003_035() {
/*<111>*/ 	start()
/*< 53>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast<r< 5 >><y<Juwelen der Güte >>erhalten.\nEin Juwel der Güte beinhaltet menschliche\nDankbarkeit in kristallisierter Form.\n\nHilfst du einem Menschen, so erhältst du\nstets <r<5 Einheiten>> davon.")
/*<646>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_018() {
/*<128>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_000() {
/*<146>*/ 	start()
/*<595>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*< 87>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Hier ist nichts Brauchbares.")
          	  case 1:
/*<596>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du solltest besser nicht in anderer Leute\nSchränke stöbern!")
          	}
          }

          void entrypoint_003_087() {
/*<185>*/ 	start()
/*<166>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast einen <y<Lufttrank V>> erhalten!\nDieser verfeinerte Trank verhindert, dass\nsich deine Luftanzeige leert. Die Wirkung\neiner Flasche hält <r<3 Minuten >>an.")
          }

          void entrypoint_003_111() {
/*<259>*/ 	start()
/*<255>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Luxus-Geldbörse>> erhalten!\nDiese enorme Geldbörse lässt selbst den\nreichsten Händler erblassen. In ihr kannst\ndu bis zu <r<9000 Rubine >>aufbewahren!")
          }

          void entrypoint_003_129() {
/*<288>*/ 	start()
/*<284>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<mittlere Deku-Tasche>>\nerhalten! Mit ihr kannst du <r<20 >>weitere\nDeku-Kerne bei dir tragen. Sehr nützlich,\nwenn du gern die Schleuder einsetzt.")
          }

          void entrypoint_003_146() {
/*<321>*/ 	start()
/*<657>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<658>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x8CD>> erhalten!\nEin weit verbreitetes Insekt. Manchmal\nhält es sich auch an seltsamen Orten auf.")
          		flw_621:
/*<621>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<319>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x8CD>> gefangen!\nEin weit verbreitetes Insekt. Manchmal\nhält es sich auch an seltsamen Orten auf.")
          		goto flw_621
          	}
          }

          void entrypoint_003_163() {
/*<344>*/ 	start()
/*<342>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast <y<Wüstengras>> erhalten! Dieses Gras\nlässt sich vielleicht für etwas Nützliches\nverwenden, wenn man es trocknet.")
/*<630>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_180() {
/*<390>*/ 	start()
/*<388>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast das <y<Insigne der Reife>> erhalten!\nDieses gravierte Artefakt soll dem Helden\ndas Versteck des Triforce enthüllen.")
/*<523>*/ 	story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */] = true;
          }

          void entrypoint_003_198() {
/*<495>*/ 	start()
/*<494>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Lebensbaumfrucht >>erhalten!\nSie soll angeblich jede Krankheit heilen\nkönnen. Gib sie dem Donnerdrachen.")
          }

          void entrypoint_003_999() {
/*<611>*/ 	start()
/*<610>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<Greifkäfer>> erhalten!\nMit seinen größeren Zangen kann er\nItems aufheben und tragen!\n\nDrücke (Z), um nach unten zu blicken\nund ein getragenes Item abzuwerfen.\x0E\x01\x11\x02\x7CD")
          }

          void entrypoint_003_053() {
/*< 96>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<Käfer >>erhalten!\nDieses käferartige Artefakt fliegt auf\nmagische Weise durch die Luft!\n\nZeige mit der Wii-Fernbedienung auf den\n<r<Bildschirm >>und lass den Käfer durch\nDrücken von (A) fliegen!\n\n<r<Verlierst >>du beim Zielen den <r<Fokus>>,\ndrücke einfach (v), um deine Ansicht \nwieder zu zentrieren.\x0E\x01\x11\x02\x9CD")
/*<422>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', -1), ('param3', 38)])
          }

          void entrypoint_003_036() {
/*<110>*/ 	start()
/*< 52>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast <y<Glitzersporen >>erhalten!\nDieser feine Puder wird von Glitzerpilzen\nfreigesetzt.")
          }

          void entrypoint_003_019() {
/*<127>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<Holzbogen >>erhalten!\nDamit kannst du von weitem mit hoher\nAngriffskraft Pfeile auf ein Ziel feuern.\n\n<r<Verlierst >>du beim Zielen den <r<Fokus>>,\ndrücke einfach (v), um deine Ansicht \nwieder zu zentrieren.\x0E\x01\x11\x02\x9CD")
/*<679>*/ 	story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */] = true;
/*<152>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 498), ('param2', 20), ('next', 421), ('param3', 25)])
/*<421>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 7), ('next', -1), ('param3', 38)])
          }

          void entrypoint_003_001() {
/*<145>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast einen <y<kleinen Schlüssel >>erhalten!\nDamit lassen sich verschlossene Türen in\ndiesem Gebiet öffnen. Du kannst ihn aber\nnur ein einziges Mal verwenden.")
          }

          void entrypoint_003_070() {
/*<147>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Insekten-Medaille >>erhalten!\nDamit findest du Insekten leichter.\nSuche auf der Karte nach \x0E\x02\x04\x02\x1ACD!")
          }

          void entrypoint_003_088() {
/*<184>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast eine <y<Fee >>gefangen!\nDiese gütigen Wesen füllen <r<sechs >>deiner\nHerzen auf.\n\nIn einer Flasche mitgenommen spendet sie\ndir ihre heilende Energie <r<automatisch,\nwenn deine Kräfte schwinden>>.")
          }

          void entrypoint_003_112() {
/*<258>*/ 	start()
/*<418>*/ 	switch (story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */]) {
          	  case 0:
/*<419>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Abenteurertasche>> wieder!\nUnd sieh nur! Deine restlichen vermissten\nItems sind auch dabei!")
/*<435>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 8), ('next', 420), ('param3', 38)])
/*<420>*/ 		story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */] = false;
          	  case 1:
/*<254>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Abenteurertasche>> erhalten!\nSie bietet Platz für Items, die du während\ndeines Abenteuers finden wirst.")
/*<603>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 57)])
          	}
          }

          void entrypoint_003_147() {
/*<326>*/ 	start()
/*<659>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<660>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x9CD>> erhalten!\nMan sagt, in dem Bau des Insekts würde\nsich eine Wasserquelle befinden. So kann\nes in der Wüste überleben.")
          		flw_622:
/*<622>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<324>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x9CD>> gefangen!\nMan sagt, in dem Bau des Insekts würde\nsich eine Wasserquelle befinden. So kann\nes in der Wüste überleben.")
          		goto flw_622
          	}
          }

          void entrypoint_003_164() {
/*<343>*/ 	start()
/*<341>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast einen <y<Eidechsenschwanz>> erhalten!\nDieser Eidechsenschwanz mit stacheliger\nKugel am Ende lässt sich vielleicht sinnvoll\nverarbeiten.")
/*<631>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_181() {
/*<395>*/ 	start()
/*<393>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_199() {
/*<499>*/ 	start()
/*<497>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Zusatz-Geldbörse>> erhalten!\nIst deine normale Geldbörse voll, bietet\nsie Platz für weitere <r<300 Rubine>>.")
/*<644>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_071() {
/*< 20>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast das <y<Schmetterlingsnetz >>erhalten!\nFange damit flink und leise Insekten und\nandere Dinge.")
/*<423>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 2), ('next', 612), ('param3', 38)])
/*<612>*/ 	story_flags[849 /* us: 805A9B35 0x80, jp: 805ACDB5 0x80 */] = true;
          }

          void entrypoint_003_054() {
/*< 95>*/ 	start()
/*< 37>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast <y<Wasser >>erhalten!\nFarbloses, klares, reines Wasser. Es könnte\nsich vielleicht noch als nützlich erweisen.")
          }

          void entrypoint_003_037() {
/*<109>*/ 	start()
/*< 51>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_002() {
/*<144>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast einen \x0E\x00\x03\x02\x07grünen Rubin>>\x0E\x00\x03\x02\x07 >>erhalten!\nEr ist <r<1 Rubin >>wert. Sammle so viele davon,\nwie du nur kannst!")
          }

          void entrypoint_003_089() {
/*<183>*/ 	start()
/*<164>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_113() {
/*<257>*/ 	start()
/*<253>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast deine <y<Abenteurertasche\n>>vergrößert! Nun kannst du <r<ein\nweiteres Item>> mit dir führen.")
/*<604>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', -1), ('param3', 57)])
          }

          void entrypoint_003_130() {
/*<287>*/ 	start()
/*<283>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<große Deku-Tasche>> erhalten!\nMit ihr kannst du <r<30>> weitere Deku-Kerne\nbei dir tragen. Sehr nützlich, wenn du gern\ndie Schleuder einsetzt.")
          }

          void entrypoint_003_148() {
/*<325>*/ 	start()
/*<661>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<662>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\xACD>> erhalten!\nDieses Insekt verbringt zehn Jahre seines\nLebens als Larve unter der Erde und lässt\nsich nur schwer fangen!")
          		flw_623:
/*<623>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<323>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\xACD>> gefangen!\nDieses Insekt verbringt zehn Jahre seines\nLebens als Larve unter der Erde und lässt\nsich nur schwer fangen!")
          		goto flw_623
          	}
          }

          void entrypoint_003_165() {
/*<348>*/ 	start()
/*<346>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast <y<Eldin-Erz>> erhalten!\nEin äußerst hartes und robustes Erz, das\nglitzert. Lässt sich gut weiterverarbeiten. ")
/*<632>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_182() {
/*<394>*/ 	start()
/*<392>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_072() {
/*< 19>*/ 	start()
/*<506>*/ 	switch (has_empty_bottle()) {
          	  case 0:
/*<507>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast eine <y<Fee >>gefunden!\nDiese gütigen Wesen füllen <r<sechs >>deiner\nHerzen auf.\n\nDu besitzt jedoch keine leere <y<Flasche>>,\nalso lass sie wieder frei.")
          	  case 1:
/*<505>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast eine <y<Fee >>gefunden!\nDiese gütigen Wesen füllen <r<sechs >>deiner\nHerzen auf.")
          	}
          }

          void entrypoint_003_055() {
/*< 94>*/ 	start()
/*<614>*/ 	switch (story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */]) {
          	  case 0:
/*<615>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast <y<Pilzsporen >>erhalten!\nSie stammen von einem gigantischen Pilz.\nMit ihnen kannst du die Verletzungen des\nVogels heilen!")
          	  case 1:
/*< 36>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast <y<Pilzsporen >>erhalten!\nSie stammen von einem gigantischen Pilz.\nEs kann nicht schaden, sie mitzunehmen.")
          	}
          }

          void entrypoint_003_038() {
/*<108>*/ 	start()
/*< 50>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_020() {
/*<126>*/ 	start()
/*<408>*/ 	switch (story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */]) {
          	  case 0:
/*<409>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<Greifhaken>> wieder!\nEndlich kannst du dich wieder an weit\nentfernte Orte hangeln.")
/*<429>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 6), ('next', 430), ('param3', 38)])
/*<430>*/ 		story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */] = false;
          	  case 1:
/*< 67>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<Greifhaken >>erhalten!\n\n\n\nEiner der drei Schätze der Göttin.\nNutze die Klaue an der Kette, um dich\nan ein <r<Greifhaken-Ziel>> oder an <r<Efeu>>\nziehen zu lassen.\n<r<Verlierst >>du beim Zielen den <r<Fokus>>,\ndrücke einfach (v), um deine Ansicht \nwieder zu zentrieren.\x0E\x01\x11\x02\x9CD")
/*<501>*/ 		story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */] = true;
/*<410>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 6), ('next', -1), ('param3', 38)])
          	}
          }

          void entrypoint_003_003() {
/*<143>*/ 	start()
/*<591>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*<590>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast einen \x0E\x00\x03\x02\x08blauen Rubin>> gefunden!\nEr ist <r<5 Rubine >>wert. Steck ihn in deinen\nBeutel und nimm ihn mit!")
          	  case 1:
/*< 84>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast einen \x0E\x00\x03\x02\x08blauen Rubin>> erhalten!\nEr ist <r<5 Rubine >>wert. Das nennt man einen\nglücklichen Fund!")
          	}
          }

          void entrypoint_003_114() {
/*<256>*/ 	start()
/*<252>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast eine <y<Lebenskraft-Medaille>>\nerhalten! Trägst du sie bei dir, erhältst du\n<r<ein weiteres Herz>>. Entscheide selbst, wann\nes lohnt, diese Medaille mit dir zu führen.")
          }

          void entrypoint_003_131() {
/*<298>*/ 	start()
/*<294>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<kleinen Köcher>> erhalten!\nMit ihm kannst du <r<5>> weitere Pfeile bei dir\ntragen. Nutze ihn, wenn du häufig deinen\nBogen einsetzen möchtest.")
          }

          void entrypoint_003_149() {
/*<330>*/ 	start()
/*<663>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<664>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\xBCD>> erhalten!\nDie Facettenaugen dieses Insekts glitzern\nwie Rubine. Seine langen Flügel sind\ndurchsichtig wie Glas.")
          		flw_624:
/*<624>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<328>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\xBCD>> gefangen!\nDie Facettenaugen dieses Insekts glitzern\nwie Rubine. Seine langen Flügel sind\ndurchsichtig wie Glas.")
          		goto flw_624
          	}
          }

          void entrypoint_003_166() {
/*<347>*/ 	start()
/*<345>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast eine <y<Äonenblume>> erhalten!\nBlühte bereits in vergangenen Zeiten\nwunderschön und soll im Dunkeln hell\nleuchten.")
/*<633>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_183() {
/*<482>*/ 	start()
/*<480>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_056() {
/*< 93>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Grabklauen >>erhalten!\nDrücke (A), um mit ihnen in auffällig\naussehendem Erdreich zu graben.")
          }

          void entrypoint_003_039() {
/*<107>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_021() {
/*<125>*/ 	start()
/*< 66>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Vogelfigur >>erhalten!\nDiese Figur weist dich als Sieger des\nheutigen zeremoniellen Wettfluges aus.\nZelda wird sich freuen!")
/*<584>*/ 	changeScene(3, 0) // 
          }

          void entrypoint_003_004() {
/*<142>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast einen <r+<roten Rubin>> erhalten!\nEr ist <r<20 Rubine >>wert. Was für ein Glück!")
          }

          void entrypoint_003_073() {
/*<154>*/ 	start()
/*< 17>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_090() {
/*<182>*/ 	start()
/*<163>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<Eisenbogen>> erhalten!\nDieser Bogen wurde für äußerst erfahrene\nSchützen gefertigt. Seine Kraft übersteigt\ndie deines alten Bogens.")
          }

          void entrypoint_003_115() {
/*<267>*/ 	start()
/*<263>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_132() {
/*<297>*/ 	start()
/*<293>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<mittleren Köcher>> erhalten!\nMit ihm kannst du <r<10>> weitere Pfeile bei dir\ntragen. Nutze ihn, wenn du häufig deinen\nBogen einsetzen möchtest.")
          }

          void entrypoint_003_167() {
/*<362>*/ 	start()
/*<361>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast einen <y<Bernsteinhalbmond\n>>erhalten! Niemand weiß, wie dieses\nbernsteinfarbene Kleinod seine endgültige\nForm erhielt.")
/*<634>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_184() {
/*<481>*/ 	start()
/*<479>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_057() {
/*< 92>*/ 	start()
/*<396>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 52), ('param2', 1), ('next', 397), ('param3', 23)])
/*<397>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 28)])) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast <y<5 Deku-Kerne>> erhalten!\nDiese kleinen Kerne kannst du mit der\nSchleuder verschießen. Achte dabei immer\nauf deinen Munitionsvorrat.")
          	  case 1:
/*<398>*/ 		printf(/* textboxtype: 5, unk: 1 */ "")
/*<503>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 493), ('param2', -5), ('next', -1), ('param3', 25)])
          	}
          }

          void entrypoint_003_022() {
/*<124>*/ 	start()
/*< 65>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_005() {
/*<141>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Das <y+<Triforce>><y+< >>ist vollständig! Mit seiner\nMacht kannst du Zeldas Bitte nachkommen\nund den <b<Todbringer>> <r<vernichten>>.")
/*<540>*/ 	story_flags[645 /* us: 805A9B1D 0x40, jp: 805ACD9D 0x40 */] = true;
/*<583>*/ 	story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */] = true;
          }

          void entrypoint_003_074() {
/*<155>*/ 	start()
/*<675>*/ 	scene_flags[11 'Faron: Skyview Temple'][119 /* 0xF 80 */] = true;
/*<600>*/ 	loadzone_temp_flags[1 /* 0x1 02 */] = true;
/*<676>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
          		flw_156:
/*<156>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast <y<heiliges Wasser>> erhalten!\nEs sieht wie gewöhnliches Wasser aus,\nstrahlt jedoch spürbar Energie aus.")
          	  case 1:
/*<514>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<515>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Du hast <y<heiliges Wasser >>erhalten!\nDieses reine Wasser hat die Kraft, den\nWasserdrachen zu heilen. Diese Kraft ist\nin keinem normalen Wasser zu finden.")
/*<601>*/ 			scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = false;
/*<602>*/ 			scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = false;
          		  case 1:
          			goto flw_156
          		}
          	}
          }

          void entrypoint_003_091() {
/*<181>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<heiligen Bogen>> erhalten!\nDie heilige Macht der Göttin verleiht ihm\nKraft und bringt Verderben über all deine\nFeinde!")
          }

          void entrypoint_003_116() {
/*<266>*/ 	start()
/*<551>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<552>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<262>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<Holzschild>> erhalten!\nEr ist leicht zu handhaben, hält aber\nnicht viel aus und brennt leicht.")
/*<516>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_133() {
/*<296>*/ 	start()
/*<292>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<großen Köcher>> erhalten!\nMit ihm kannst du <r<15>> weitere Pfeile bei dir\ntragen. Nutze ihn, wenn du häufig deinen\nBogen einsetzen möchtest.")
          }

          void entrypoint_003_150() {
/*<329>*/ 	start()
/*<665>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<666>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\xCCD>> erhalten!\nDieses Insekt liebt alles, was stinkt und\nrollt es in sein Nest. Sieht dabei ziemlich\nniedlich aus.")
          		flw_625:
/*<625>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<327>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\xCCD>> gefangen!\nDieses Insekt liebt alles, was stinkt und\nrollt es in sein Nest. Sieht dabei ziemlich\nniedlich aus.")
          		goto flw_625
          	}
          }

          void entrypoint_003_168() {
/*<364>*/ 	start()
/*<363>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast einen <y<Finsterhalbmond >>erhalten!\nEr ähnelt dem Bernsteinhalbmond, hat\njedoch eine andere Beschaffenheit und ist\nnur an bestimmten Orten zu finden.")
/*<635>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_185() {
/*<484>*/ 	start()
/*<483>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_040() {
/*<106>*/ 	start()
/*< 48>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast <y<5 Bomben >>erhalten!\nWirf oder rolle sie, um Objekte in die Luft\nzu sprengen. Nimm Bomben, die du\nunterwegs findest, für später mit.")
          }

          void entrypoint_003_023() {
/*<123>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_006() {
/*<140>*/ 	start()
/*< 81>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast ein <y<Herz >>gefunden!\nEs ist mit heilender Energie erfüllt und\nstellt <r<ein Herz>> wieder her.")
          }

          void entrypoint_003_092() {
/*<180>*/ 	start()
/*<402>*/ 	switch (story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */]) {
          	  case 0:
/*<403>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Bombentasche >>wieder!\nKrach-Bumm! Endlich kannst du wieder\nSachen in die Luft sprengen!")
/*<426>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 3), ('next', 434), ('param3', 38)])
/*<434>*/ 		story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */] = false;
          	  case 1:
/*<424>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*<425>*/ 			printf(/* textboxtype: 5, unk: 0 */ "Du hast eine <y<Bombentasche>> erhalten!\n<b<Ferri >>hat sie dir netterweise überlassen.\nBeseitige mit ihr Hindernisse.")
/*<678>*/ 			story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */] = true;
          		  case 1:
/*<161>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Du hast eine <y<Bombentasche>> gefunden!\nIn dieser nützlichen Tasche kannst du\nDonnerblumen mit dir herumtragen.\n\nSie ermöglicht dir das Vordringen an Orte,\ndie dir sonst verwehrt bleiben. Frage <b<Ferri>>,\nob er sie dir leiht!")
/*<414>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 3), ('next', -1), ('param3', 38)])
          		}
          	}
          }

          void entrypoint_003_075() {
/*<197>*/ 	start()
/*<178>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<Greifkäfer>> erhalten!\nMit seinen größeren Zangen kann er\nItems aufheben und tragen!\n\nDrücke (Z), um nach unten zu blicken\nund ein getragenes Item abzuwerfen.\x0E\x01\x11\x02\x7CD")
          }

          void entrypoint_003_117() {
/*<265>*/ 	start()
/*<553>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<555>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<261>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<harten Holzschild>> erhalten!\nEr ist immer noch leicht zu handhaben,\nhält aber mehr aus als sein Vorgänger.")
          	}
          }

          void entrypoint_003_134() {
/*<295>*/ 	start()
/*<291>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<kleine Bombentasche >>erhalten! \nMit ihr kannst du <r<5>> weitere Bomben bei dir\ntragen. Praktisch, wenn du häufig Bomben\neinsetzen möchtest.")
          }

          void entrypoint_003_151() {
/*<334>*/ 	start()
/*<667>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<668>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\xDCD>> erhalten!\nSehr beliebt bei den Kindern im\nWolkenhort. Achtung! Kneift gerne\nmit den Zangen!")
          		flw_626:
/*<626>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<332>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\xDCD>> gefangen!\nSehr beliebt bei den Kindern im\nWolkenhort. Achtung! Kneift gerne\nmit den Zangen!")
          		goto flw_626
          	}
          }

          void entrypoint_003_169() {
/*<352>*/ 	start()
/*<350>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast <y<Glibber>> erhalten!\nNicht besonders hübsch, aber für eine\nVielzahl von Dingen verwendbar.")
/*<636>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_058() {
/*<453>*/ 	start()
/*<454>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 491), ('param2', 199), ('next', 455), ('param3', 23)])
/*<455>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 54)])) {
          	  case 0:
/*<452>*/ 		printf(/* textboxtype: 5, unk: 1 */ "")
          	  case 1:
/*<456>*/ 		printf(/* textboxtype: 5, unk: 1 */ "")
          	}
          }

          void entrypoint_003_186() {
/*<466>*/ 	start()
/*<464>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Hymne der Göttin>> erlernt!\nDiese mysteriöse Melodie stammt aus\nuralten Zeiten.")
/*<579>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_003_041() {
/*<105>*/ 	start()
/*< 47>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast <y<10 Bomben >>erhalten!\nWirf oder rolle sie, um Objekte in die Luft\nzu sprengen. Bis du sie brauchst, kannst\ndu sie in deiner Bombentasche sammeln.")
          }

          void entrypoint_003_024() {
/*<122>*/ 	start()
/*< 63>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_007() {
/*<139>*/ 	start()
/*<157>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 19), ('param2', 1), ('next', 158), ('param3', 23)])
/*<158>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 8)])) {
          	  case 0:
/*< 80>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast einen<y< verschossenen Pfeil \n>>gefunden! Er ist noch ganz und kann\nerneut verwendet werden. Praktisch!")
          	  case 1:
/*<159>*/ 		printf(/* textboxtype: 5, unk: 1 */ "")
          	}
          }

          void entrypoint_003_093() {
/*<179>*/ 	start()
/*<160>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast einen <y<Herzcontainer>> erhalten!\nDeine Lebensenergie wurde um <r<ein Herz \n>>erhöht und wieder vollständig aufgefüllt!")
          }

          void entrypoint_003_076() {
/*<196>*/ 	start()
/*<177>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<Flinkkäfer>> erhalten!\nEr ist um einiges schneller als dein alter\nKäfer. Aber pass auf, dass du damit die\nKurve kriegst!")
          }

          void entrypoint_003_100() {
/*<234>*/ 	start()
/*<605>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<606>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast eine <y<Herz-Medaille>> erhalten!\nHast du sie bei dir, so kannst du auch\nim <r<Helden-Modus >>Herzen finden.\n\nSie bewirkt außerdem, dass Herz-Blumen\nerblühen. Nimm sie mit, falls dir deine\nGesundheit am Herzen liegt.")
/*<607>*/ 		story_flags[841 /* us: 805A9B35 0x01, jp: 805ACDB5 0x01 */] = true;
          	  case 1:
/*<230>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast eine <y<Herz-Medaille>> erhalten!\nTrägst du sie bei dir, wirst du häufiger\nauf Herzen stoßen. Nimm sie mit, falls dir\ndeine Gesundheit am Herzen liegt.")
          	}
          }

          void entrypoint_003_118() {
/*<264>*/ 	start()
/*<554>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<556>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<260>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<starken Holzschild>> erhalten!\nDieser leicht zu handhabende Schild ist der\nrobusteste aller Holzschilde.")
          	}
          }

          void entrypoint_003_135() {
/*<306>*/ 	start()
/*<302>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<mittlere Bombentasche\n>>erhalten! Mit ihr kannst du <r<10>> weitere\nBomben bei dir tragen. Praktisch, wenn du\nhäufig Bomben einsetzen möchtest.")
          }

          void entrypoint_003_152() {
/*<333>*/ 	start()
/*<669>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<670>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\xECD>>\nerhalten! Gilt als das seltenste Insekt\nüberhaupt und kann ausschließlich an\ndunklen Orten gefunden werden.")
          		flw_627:
/*<627>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<331>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\xECD>>\ngefangen! Gilt als das seltenste Insekt\nüberhaupt und kann ausschließlich an\ndunklen Orten gefunden werden.")
          		goto flw_627
          	}
          }

          void entrypoint_003_059() {
/*<458>*/ 	start()
/*<459>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 492), ('param2', 19999), ('next', 460), ('param3', 23)])
/*<460>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 56)])) {
          	  case 0:
/*<457>*/ 		printf(/* textboxtype: 5, unk: 1 */ "")
          	  case 1:
/*<461>*/ 		printf(/* textboxtype: 5, unk: 1 */ "")
          	}
          }

          void entrypoint_003_187() {
/*<465>*/ 	start()
/*<463>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
/*<485>*/ 	story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = true;
          }

          void entrypoint_003_042() {
/*<104>*/ 	start()
/*< 46>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast eine <y<Ausdauerfrucht >>erhalten!\nDiese geheimnisvolle Frucht stellt deine\nAusdauer wieder komplett her.")
          }

          void entrypoint_003_025() {
/*<121>*/ 	start()
/*< 62>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<gesegneten Schlüssel>> erhalten!\nDiese Holzschnitzerei strahlt Güte aus. Sie\nähnelt der Statue im oberen Stockwerk.")
          }

          void entrypoint_003_008() {
/*<138>*/ 	start()
/*< 79>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast <y<10 Pfeile>> erhalten!\nDu kannst sie mit deinem Bogen abfeuern.\nIhre Anzahl ist begrenzt, also setze sie mit\nBedacht ein!")
          }

          void entrypoint_003_077() {
/*<195>*/ 	start()
/*<176>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<Kraftkäfer>> erhalten!\nEr kann viel länger fliegen als dein alter\nKäfer. Nun kannst du auch Orte, die weiter\nentfernt sind, erforschen!")
          }

          void entrypoint_003_094() {
/*<204>*/ 	start()
/*<205>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 489), ('param2', 1), ('next', 206), ('param3', 23)])
/*<206>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 14)])) {
          	  case 0:
/*<201>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 489), ('param2', 2), ('next', 202), ('param3', 23)])
/*<202>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 12)])) {
          		  case 0:
/*<198>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 489), ('param2', 3), ('next', 199), ('param3', 23)])
/*<199>*/ 			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 10)])) {
          			  case 0:
/*<208>*/ 				printf(/* textboxtype: 5, unk: 1 */ "Du hast ein <y<Herzteil>> erhalten!\nSammle vier, um deine Lebensenergie\num ein Herz zu erhöhen.\nDir fehlt nur noch <r<ein >>weiteres!")
          			  case 1:
/*<200>*/ 				printf(/* textboxtype: 5, unk: 1 */ "Du hast ein <y<Herzteil>> erhalten!\nSammle vier, um deine Lebensenergie\num ein Herz zu erhöhen.\nDir fehlen nur noch <r<zwei >>weitere!")
          			}
          		  case 1:
/*<203>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Du hast ein <y<Herzteil>> erhalten!\nSammle vier, um deine Lebensenergie\num ein Herz zu erhöhen.\nDir fehlen nur noch <r<drei >>weitere!")
          		}
          	  case 1:
/*<207>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast ein <y<Herzteil>> erhalten!\nDamit hast du nun einen vollständigen\nHerzcontainer. Deine Lebensenergie wird\num ein Herz erhöht.")
          	}
          }

          void entrypoint_003_101() {
/*<233>*/ 	start()
/*<229>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast eine <y<Rubin-Medaille>> erhalten!\nTrägst du sie bei dir, wirst du häufiger\nals sonst auf Rubine stoßen. Nimm sie mit,\num schnell zu Reichtum zu kommen.")
          }

          void entrypoint_003_119() {
/*<274>*/ 	start()
/*<557>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<560>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<270>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<Eisenschild>> erhalten!\nDieser robuste Schild zerbricht nicht so\nleicht und brennt auch nicht. Allerdings \nsolltest du dich vor Elektrizität hüten!")
/*<517>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_136() {
/*<305>*/ 	start()
/*<301>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<große Bombentasche\n>>erhalten! Mit ihr kannst du <r<15>> weitere\nBomben bei dir tragen. Praktisch, wenn du\nhäufig Bomben einsetzen möchtest.")
          }

          void entrypoint_003_153() {
/*<336>*/ 	start()
/*<335>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast eine <y<Flasche>> erhalten!\nBewahre verschiedene Dinge darin auf.")
          }

          void entrypoint_003_170() {
/*<351>*/ 	start()
/*<349>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast eine <y<Monsterklaue >>erhalten!\nDiese Klaue stammt von einem Monster\nund sieht äußerst gefährlich aus.")
/*<637>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_188() {
/*<470>*/ 	start()
/*<468>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
/*<543>*/ 	story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */] = true;
          }

          void entrypoint_003_060() {
/*< 91>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast <y<10 Deku-Kerne >>erhalten!\nDiese kleinen Kerne kannst du mit der\nSchleuder verschießen. Achte dabei immer\nauf deinen Munitionsvorrat.")
          }

          void entrypoint_003_043() {
/*<103>*/ 	start()
/*<400>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 500), ('param2', 14), ('next', 399), ('param3', 23)])
/*<399>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 30)])) {
          	  case 0:
/*<401>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast <y<Farores Tränen >>gefunden.\nDies hat deine Seele reifen lassen,\nLink!\n\nDoch noch ist die Prüfung nicht vorbei...\nBegib dich vorsichtig zum Ausgang, um ein\nZeichen deiner Reife zu erhalten.")
          	  case 1:
/*< 45>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast eine von <y<Farores Tränen >>erhalten!\nIhre heilige Macht hindert die Hüter für\n<r<90 Sekunden >>daran, sich zu bewegen.\n\nSammle alle <r<15>>, um diese Prüfung zu\nbestehen!")
          	}
          }

          void entrypoint_003_026() {
/*<120>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<Mysterienkristall >>erhalten!\nEinige der schwach leuchtenden\nKristallquadrate scheinen zu fehlen.")
          }

          void entrypoint_003_009() {
/*<137>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
/*<542>*/ 	story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */] = true;
          }

          void entrypoint_003_078() {
/*<194>*/ 	start()
/*<175>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast einen <y<Herztrank>> erhalten!\nSetze ihn als Taschen-Item ein, um\n<r<8 Herzen >>wiederaufzufüllen.")
          }

          void entrypoint_003_095() {
/*<211>*/ 	start()
/*<576>*/ 	story_flags[729 /* us: 805A9B27 0x02, jp: 805ACDA7 0x02 */] = true;
/*<209>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 96), ('param2', 1), ('next', 210), ('param3', 23)])
/*<210>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 16)])) {
          	  case 0:
/*<212>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 97), ('param2', 1), ('next', 213), ('param3', 23)])
/*<213>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 18)])) {
          		  case 0:
/*<580>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Du hast das <y+<Triforce des Mutes >>erhalten!\nDiese Macht wurde einst den Menschen\nvon den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <r<unendliche Kraft>> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<525>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_533:
/*<533>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Du hast das <y+<Triforce des Mutes >>erhalten!\nDiese Macht wurde einst den Menschen\nvon den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <r<unendliche Kraft>> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<532>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Sammle <r<ein>> weiteres Artefakt, um das\nTriforce zu vervollständigen.")
/*<570>*/ 			changeScene(3, 1) // 
          		}
          	  case 1:
/*<545>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 97), ('param2', 1), ('next', 546), ('param3', 23)])
/*<546>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 64)])) {
          		  case 0:
          			goto flw_533
          		  case 1:
/*<214>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Du hast das <y+<Triforce des Mutes >>erhalten!\nDiese Macht wurde einst den Menschen\nvon den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <r<unendliche Kraft>> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<531>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Sammle <r<zwei>> weitere Artefakte, um das\nTriforce zu vervollständigen.")
/*<571>*/ 			changeScene(3, 1) // 
          		}
          	}
          }

          void entrypoint_003_102() {
/*<232>*/ 	start()
/*<228>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Schatz-Medaille>> erhalten!\nTrägst du sie bei dir, wirst du häufiger\nals sonst auf Schätze stoßen. Nimm sie mit,\nwenn du auf Schatzsuche gehst.")
          }

          void entrypoint_003_137() {
/*<304>*/ 	start()
/*<411>*/ 	switch (story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */]) {
          	  case 0:
/*<412>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Peitsche>> wieder!\nSieh dich um, vielleicht gibt es etwas, das\ndu jetzt erreichen kannst!")
/*<431>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 5), ('next', 413), ('param3', 38)])
/*<413>*/ 		story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */] = false;
          	  case 1:
/*<300>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Peitsche>> erhalten!\nAn ihrer Spitze befindet sich eine magische\nLichtkugel, die an den unterschiedlichsten\nDingen haften kann.\nDrücke (Z), um ein Ziel anzuvisieren und\nbewege die Wii-Fernbedienung ruckartig,\num deine Peitsche zu schwingen.\x0E\x01\x11\x02\x7CD")
/*<432>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 5), ('next', -1), ('param3', 38)])
          	}
          }

          void entrypoint_003_171() {
/*<356>*/ 	start()
/*<354>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast ein <y<Monsterhorn>> erhalten!\nDieses beeindruckende Signalhorn ist \nziemlich hart und kann als Werkstoff\nverwendet werden.")
/*<638>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_154() {
/*<370>*/ 	start()
/*<369>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_189() {
/*<469>*/ 	start()
/*<467>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
/*<544>*/ 	story_flags[73 /* us: 805A9AE9 0x40, jp: 805ACD69 0x40 */] = true;
          }

          void entrypoint_003_061() {
/*< 12>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
/*<  9>*/ 	give_item(61 0x3D);
          }

          void entrypoint_003_027() {
/*<119>*/ 	start()
/*< 60>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<Tentakelschlüssel >>erhalten!\nDiese Schnitzerei sieht aus wie ein\nTintenfisch mit unzähligen Saugnäpfen.")
          }

          void entrypoint_003_079() {
/*<193>*/ 	start()
/*<174>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast einen <y<Herztrank V>> erhalten!\nDieser verfeinerte Herztrank füllt <r<all\ndeine Herzen >>wieder auf.")
          }

          void entrypoint_003_096() {
/*<217>*/ 	start()
/*<577>*/ 	story_flags[728 /* us: 805A9B27 0x01, jp: 805ACDA7 0x01 */] = true;
/*<215>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 95), ('param2', 1), ('next', 216), ('param3', 23)])
/*<216>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 20)])) {
          	  case 0:
/*<218>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 97), ('param2', 1), ('next', 219), ('param3', 23)])
/*<219>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 22)])) {
          		  case 0:
/*<581>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Du hast das <y+<Triforce der Kraft >>erhalten!\nDiese Macht wurde einst den Menschen\nvon den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <r<unendliche Kraft>> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<526>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_538:
/*<538>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Du hast das <y+<Triforce der Kraft >>erhalten!\nDiese Macht wurde einst den Menschen\nvon den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <r<unendliche Kraft>> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<535>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Sammle <r<ein>> weiteres Artefakt, um das\nTriforce zu vervollständigen.")
/*<572>*/ 			changeScene(2, 1) // 
          		}
          	  case 1:
/*<547>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 97), ('param2', 1), ('next', 548), ('param3', 23)])
/*<548>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 66)])) {
          		  case 0:
          			goto flw_538
          		  case 1:
/*<220>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Du hast das <y+<Triforce der Kraft >>erhalten!\nDiese Macht wurde einst den Menschen\nvon den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <r<unendliche Kraft>> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<534>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Sammle <r<zwei>> weitere Artefakte, um das\nTriforce zu vervollständigen.")
/*<573>*/ 			changeScene(2, 1) // 
          		}
          	}
          }

          void entrypoint_003_103() {
/*<243>*/ 	start()
/*<239>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Medizin-Medaille>> erhalten!\nTrägst du sie bei dir, kannst du Effekte\ndeiner Tränke verlängern. Nimm sie mit,\nwenn du Tränke im Gepäck hast.")
          }

          void entrypoint_003_120() {
/*<273>*/ 	start()
/*<558>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<561>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<269>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast den <y<harten Eisenschild>> erhalten!\nDieser robuste Schild hält mehr aus als\nsein Vorgänger.")
          	}
          }

          void entrypoint_003_138() {
/*<303>*/ 	start()
/*<299>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast die <y<Feuerohrringe>> erhalten!\nEiner der drei Schätze der Göttin.\nMit ihrer Hilfe kannst du selbst der\ngrößten Hitze trotzen. ")
/*<502>*/ 	story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */] = true;
          }

          void entrypoint_003_172() {
/*<355>*/ 	start()
/*<353>*/ 	printf(/* textboxtype: 5, unk: 1 */ "Du hast einen <y<Schmuckschädel >>erhalten!\nDiese Nachbildung eines Schädels ist das\nSymbol der Bokblins.")
/*<639>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_155() {
/*<374>*/ 	start()
/*<372>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_044() {
/*<438>*/ 	start()
/*<440>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 500), ('param2', 14), ('next', 439), ('param3', 23)])
/*<439>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 48)])) {
          	  case 0:
/*<441>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast <y<Dins Tränen >>gefunden.\nDies hat deine Seele reifen lassen,\nLink!\n\nDoch noch ist die Prüfung nicht vorbei...\nBegib dich vorsichtig zum Ausgang, um ein\nZeichen deiner Reife zu erhalten.")
          	  case 1:
/*<437>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Du hast eine von<y< Dins Tränen >>erhalten!\nIhre heilige Macht hindert die Hüter für\n<r<90 Sekunden >>daran, sich zu bewegen.\n\nSammle alle <r<15>>, um diese Prüfung zu\nbestehen!")
          	}
          }

