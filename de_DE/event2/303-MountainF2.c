          void entrypoint_303_27() {
/*< 91>*/ 	start()
/*< 92>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Verehrte Phai!\nHabt Ihr das gesehen?")
          }

          void entrypoint_303_44() {
/*<203>*/ 	start()
/*<204>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Oh, du gehst aber ran! Aber das lässt\nmich ganz kalt. Ich bin schließlich das\nneueste Modell!")
          }

          void entrypoint_303_10() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x0B\x04\x00rWo willst du denn hin?\nDa gehe ich nicht rein! Ich warte hier\ndraußen auf dich...")
          }

          void entrypoint_303_28() {
/*< 93>*/ 	start()
/*< 94>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Bitte ruft mich wieder, wenn ich\nEuch behilflich sein kann!")
          }

          void entrypoint_303_45() {
/*<205>*/ 	start()
/*<206>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Sag mal, was soll ich denn hier?\nIch habe nicht ewig Zeit!")
          }

          void entrypoint_303_11() {
/*< 56>*/ 	start()
/*< 57>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x0B\x04\x00rAh, heiliges Kugellager!\nHilf mir!")
          }

          void entrypoint_303_29() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Ich stelle fest, dass die Flammen, die\nden Weg versperrten, erloschen sind.\nIch empfehle, weiterzugehen.")
/*<200>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<291>*/ 	story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = false;
          }

          void entrypoint_303_46() {
/*<207>*/ 	start()
/*<208>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Wie, jetzt schon?\nAuf geht's, bzzz!")
          }

          void entrypoint_303_12() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x0B\x04\x00rAah, ich werde getroffen!\nTu doch was, bzzz!")
          }

          void entrypoint_303_47() {
/*<219>*/ 	start()
/*<220>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Willkommen zurück, \x0E\x01\x12\x04\x00\x04Gebieter.\n\n\n\nIch schätze, dass dir die <y<Feuerohrringe>>\nerlauben, in den heißen Bereich\neinzudringen.\n\nIch empfehle, dort nach der <r<heiligen\nFlamme>> zu suchen.")
          }

          void entrypoint_303_13() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x2CDUargh!")
          }

          void entrypoint_303_30() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04K\x00\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\n\n\nWir befinden uns nahe des Kraters am\nGipfel des <b<Vulkans Eldin>>.")
          }

          void entrypoint_303_48() {
/*<221>*/ 	start()
/*<223>*/ 	switch (scene_flags[108 /* 0xC 10 */]) {
          	  case 0:
/*<252>*/ 		switch (scene_flags[112 /* 0xF 01 */]) {
          		  case 0:
/*<254>*/ 			switch (scene_flags[113 /* 0xF 02 */]) {
          			  case 0:
/*<270>*/ 				switch (scene_flags[114 /* 0xF 04 */]) {
          				  case 0:
/*<271>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x801Hey, mein Freund!\nHast du den starken <r<Kerl mit dem\ngroßen Schild >>schon besiegt?\n\n\x0E\x01\x09\x04ÿ\xFF00Den hölzernen Schild zerschneiden!\nDen Speerangriff zurückschlagen!\nDen Schild wie eine Wand behandeln!\n\nWenn du dich an diese drei Ratschläge\nhältst, sollte alles glatt gehen!")
/*<272>*/ 					loadzone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
/*<263>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Macht dir der starke Kerl mit dem\n<r<riesigen Schild>> denn noch immer zu\nschaffen? Ist ja unglaublich!\n\n\x0E\x01\x09\x04\x15\x80BWenn du willst, kann ich dir <r<eine letzte\nGeheiminformation>> zu ihm verraten.\nMit der wirst du ihn problemlos\nbesiegen können!")
/*<264>*/ 					OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 256), ('param3', 12)])
/*<256>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04ÿ\xFF09Selbst-\x0E\x01\x04\x02\nver-\x0E\x01\x04\x02\nständ-\x0E\x01\x04\x02\nlich\x0E\x01\x04\x02\n ist diese\nInformation nicht umsonst.\n<r<50 Rubine>>. Was meinst du? [1]Ja[2-]Nein")
          					flw_245:
/*<245>*/ 					switch (choice(2)) {
          					  case 0:
/*<247>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 50), ('next', 248), ('param3', 23)])
/*<248>*/ 						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 84)])) {
          						  case 0:
/*<269>*/ 							rupees += -50;
/*<250>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x80BDu bist wirklich ein klasse Kerl!\nSo großherzig und unbesorgt, dass es\nschon fast wieder bedenklich ist, hehe!\n\n\x0E\x01\x09\x04\x14\x1200Pass nur auf, dass du dich von keinem\nBetrüger hereinlegen lässt...")
/*<251>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<265>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04ÿ\xFF00Also, hier ist mein Tipp. Der Schild\ndieses Kerls ist fast so hoch wie eine\nMauer, oder?\n\n\x0E\x01\x09\x04\x11\x800Und wenn du auf eine Mauer\nmit voller Kraft zurennst, dann...\n\n\n\x0E\x01\x09\x04ÿ\xFF09Hehe, probier es mal aus! Du wirst\nschon sehen, was dann passiert...\n\n\n\x0E\x01\x09\x04\x11\x800Na, dann wünsche ich dir mal viel\nGlück! Und nochmals danke für die\nschönen Rubine!")
/*<266>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<275>*/ 							loadzone_temp_flags[7 /* 0x1 80 */] = true;
          						  case 1:
/*<249>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\x1215Deine Rubine reichen nicht?\nPech gehabt, sage ich da!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Komm einfach wieder, wenn du die\n<r<50 Rubine>> beisammen hast!")
/*<274>*/ 							loadzone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					  case 1:
/*<246>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\x1215Was stellst du dich denn so an?\nSind doch nur <r<50 olle Rubine>>...\n\n\n\x0E\x01\x09\x04ÿ\xFF00Aber wie du willst: Komm einfach\nwieder, wenn du deine Meinung\ngeändert hast!")
/*<273>*/ 						loadzone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				}
          			  case 1:
/*<261>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Macht dir der starke Kerl mit dem\n<r<riesigen Schild>> etwa noch immer zu\nschaffen?\n\n\x0E\x01\x09\x04\x15\x80BWenn du willst, kann ich dir <r<noch eine\nGeheiminformation>> zu ihm verraten. \nWenn du die kennst, ist er kein Problem\nmehr für dich!")
/*<262>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 255), ('param3', 12)])
/*<255>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04ÿ\xFF09Selbst-\x0E\x01\x04\x02\nver-\x0E\x01\x04\x02\nständ-\x0E\x01\x04\x02\nlich\x0E\x01\x04\x02\n \nist diese Information nicht umsonst\nzu bekommen.\n<r<30 Rubine>>. Was meinst du? [1]Ja[2-]Nein")
          				flw_234:
/*<234>*/ 				switch (choice(2)) {
          				  case 0:
/*<236>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 30), ('next', 237), ('param3', 23)])
/*<237>*/ 					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 78)])) {
          					  case 0:
/*<268>*/ 						rupees += -30;
/*<239>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x808Du bist ganz nach meinem Geschmack,\nFreund! Also, hör gut hin...\n\n\n\x0E\x01\x09\x04ÿ\xFF00Mit seinem Speer kann dir der Kerl\nganz schön gefährlich werden... Aber\ndu kannst seinen Angriff auch\n<r<zurückschlagen>>!~~~\n\x0E\x01\x09\x04\x11\x800Den Rest weißt du, oder?~~~\n[1]Das wusste ich nicht![2]Das wusste ich!")
/*<241>*/ 						scene_flags[4 'Eldin Volcano'][113 /* 0xF 02 */] = true;
/*<242>*/ 						switch (choice(2)) {
          						  case 0:
/*<244>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x80BNatürlich nicht! Ich habe mich auch\nsehr angestrengt, um diese wichtige\nInformation zu erhalten!\n\n\x0E\x01\x09\x04ÿ\xFF00Aber ich weiß noch mehr!\x0E\x01\x04\x02\x14\n<r<50 Rubine>>, abgemacht?\n[1]Gut![2-]Vergiss es!")
          							goto flw_245
          						  case 1:
/*<243>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\xE04Was?!? Du bist ganz schön\nausgekocht, das muss ich dir sagen!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Aber meine nächste Info kennst du\nganz sicher noch nicht. Nur <r<50 Rubine>>!\n[1]Lass hören![2-]Vergiss es!")
          							goto flw_245
          						}
          					  case 1:
/*<238>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\x1215Deine Rubine reichen nicht aus?\nPech gehabt, mein Freund!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Komm einfach wieder vorbei,\nwenn du die <r<30 Rubine>> beisammen\nhast!")
/*<276>*/ 						loadzone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				  case 1:
/*<235>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\x1215Was, du willst meinen Rat nicht\nannehmen? Machst hier wegen\n<r<30 Rubinen >>rum? Pah!\n\n\x0E\x01\x09\x04ÿ\xFF00Nun gut, dann komm eben wieder,\nwenn du es dir anders überlegt hast.")
/*<277>*/ 					loadzone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			}
          		  case 1:
/*<259>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Macht dir der starke Kerl mit dem\n<r<riesigen Schild >>noch immer zu\nschaffen?\n\n\x0E\x01\x09\x04\x15\x80BWenn du willst, kann ich dir eine\n<r<Geheiminformation>> zu ihm verraten.\nWenn du die kennst, ist er kein Problem\nmehr!")
/*<260>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 253), ('param3', 12)])
/*<253>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04ÿ\xFF09Selbst-\x0E\x01\x04\x02\nver-\x0E\x01\x04\x02\nständ-\x0E\x01\x04\x02\nlich\x0E\x01\x04\x02\n \nist diese Information nicht kostenlos.\n<r<30 Rubine>>. Was meinst du? [1]Ja[2-]Nein")
          			flw_225:
/*<225>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 30), ('next', 228), ('param3', 23)])
/*<228>*/ 				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 72)])) {
          				  case 0:
/*<267>*/ 					rupees += -30;
/*<230>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x809Das Haus dankt, hehe! Aber denk dran,\ndas ist ein Geheimnis! Erzähl es bloß\nnicht weiter, ja?\n\n\x0E\x01\x09\x04ÿ\xFF00Also...\x0E\x01\x04\x02\x14 Du kannst den Schild des Kerls\nmit deinem Schwert durchschneiden!\nAbgefahren, oder?\n\nAber pass auf, denn weiter drinnen gibt\nes auch Gegner mit Eisenschilden...\n[1]Klingt gut![2]Das ist alles?")
/*<240>*/ 					scene_flags[4 'Eldin Volcano'][112 /* 0xF 01 */] = true;
/*<231>*/ 					switch (choice(2)) {
          					  case 0:
/*<233>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\x90BAber ich weiß noch viel mehr, hehe!\n\x0E\x01\x09\x04ÿ\xFF00Willst du es hören?\x0E\x01\x04\x02\x14 Für <r<30 Rubine>>?\n[1]Ja[2-]Nein")
          						goto flw_234
          					  case 1:
/*<232>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Wie, das genügt dir nicht? Du trägst\ndeine Nase ganz schön hoch!\n\n\n\x0E\x01\x09\x04\x15\x809Aber sei's drum, ich weiß noch mehr als\ndas! Hast du noch einmal <r<30 Rubine>>?\n[1]Ja[2-]Nein")
          						goto flw_234
          					}
          				  case 1:
/*<229>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\x1215Deine Rubine reichen nicht aus?\nPech gehabt, mein Freund!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Komm einfach wieder vorbei,\nwenn du die <r<30 Rubine>> beisammen\nhast!")
/*<278>*/ 					loadzone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			  case 1:
/*<226>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\x1215Was, du willst meinen Rat nicht\nannehmen? Machst hier wegen\n<r<30 Rubinen >>rum? Pah!\n\n\x0E\x01\x09\x04ÿ\xFF00Nun gut, dann komm eben wieder,\nwenn du es dir anders überlegt hast.")
/*<279>*/ 				loadzone_temp_flags[7 /* 0x1 80 */] = true;
          			}
          		}
          	  case 1:
/*<222>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hey, Freund!\nBist wohl müde von all dem vielen\nMonsterschlagen, was?\n\n\x0E\x01\x09\x04\x11\x900Da vorne wartet ein besonders\nstarker Kerl mit einem <r<riesigen Schild>>!\n\n\n\x0E\x01\x09\x04\x15\x80BWenn du willst, kann ich dir eine\n<r<Geheiminformation>> zu ihm verraten.\nWenn du die kennst, ist er kein Problem\nmehr!")
/*<258>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 257), ('param3', 12)])
/*<257>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04ÿ\xFF09Selbst-\x0E\x01\x04\x02\nver-\x0E\x01\x04\x02\nständ-\x0E\x01\x04\x02\nlich\x0E\x01\x04\x02\n \ngibt es diese Information nicht gratis.\n<r<30 Rubine>>. Was meinst du? [1]Ja[2-]Nein")
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][108 /* 0xC 10 */] = true;
          		goto flw_225
          	}
          }

          void entrypoint_303_14() {
/*< 62>*/ 	start()
/*< 63>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x05\x04Z\x00Aaah... Bin... kaputt!\nIch... funktioniere... nicht mehr...")
          }

          void entrypoint_303_31() {
/*< 99>*/ 	start()
/*<100>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00In dieser Gegend herrscht eine\n<r<extreme Hitze>>. Mit den <y<Feuerohrringen\n>>kannst du dich länger hier aufhalten.")
          }

          void entrypoint_303_49() {
/*<280>*/ 	start()
/*<281>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu\nberichten. An diesem Ort kann\nich kein <r<Wasser >>erspüren.\n\nUm diesen Mechanismus zu bedienen,\nwirst du viel <r<Wasser>> benötigen.\nIch empfehle dir, danach<pling> zu suchen.")
/*<282>*/ 	scene_flags[5 'Eldin Volcano Summit'][115 /* 0xF 08 */] = true;
          }

          void entrypoint_303_15() {
/*< 64>*/ 	start()
/*< 65>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x12\x04\x00dHey! Was soll denn das?!?\nIch kann dir dahin nicht folgen!\nLass uns laufen, ja?")
          }

          void entrypoint_303_32() {
/*<101>*/ 	start()
/*<102>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00Es besteht eine Wahrscheinlichkeit von\n90 %, dass sich die letzte <r<heilige\nFlamme >>hier befindet. Ich empfehle,\nsie zu suchen.")
          }

          void entrypoint_303_16() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x0B\x04\x00rHey, du kannst mich hier\ndoch nicht alleine lassen!")
          }

          void entrypoint_303_33() {
/*<103>*/ 	start()
/*<104>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Der Roboter ist beschädigt.\nIch empfehle, ihn reparieren zu lassen\nund dann hierhin zurückzukehren.")
          }

          void entrypoint_303_50() {
/*<293>*/ 	start()
/*<294>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu\nberichten. Der Roboter wartet am\nFuß des Vulkans auf dich.\n\nIch empfehle, auf dem Luftweg zu ihm\nzurückzukehren und ihn hierher zu\nbegleiten.")
/*<295>*/ 	temp_flags[29 /* 0x2 20 */] = true;
          }

          void entrypoint_303_17() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x0B\x04\x00rJetzt hast du mich verloren!\nSchau auf der <r<Karte>> hier \x0E\x02\x04\x02\x3CD nach\nmeiner Position und komm zu mir!")
          }

          void entrypoint_303_34() {
/*<105>*/ 	start()
/*<106>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Und dieses Mal passt du gefälligst\nbesser auf, ja?")
/*<199>*/ 	story_flags[723 /* us: 805A9B24 0x08, jp: 805ACDA4 0x08 */] = false;
          }

          void entrypoint_303_00() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Auf geht's, grüner Wicht!\nIch folge dir unauffällig.")
          }

          void entrypoint_303_18() {
/*< 70>*/ 	start()
/*<196>*/ 	switch (random(3)) {
          	  case 0:
/*< 71>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x0B\x04\x00rAaah! Was sind denn das für fiese\nGestalten? Mach etwas, schnell!")
          	  case 1:
/*<197>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x0B\x04\x00rHey, die kommen immer näher!\nMach doch was, schnell!")
          	  case 2:
/*<198>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x0B\x04\x00rSiehst du diese Monster da?\nDie wollen mir an die Schrauben!\nTu doch was, schnell!")
          	}
          }

          void entrypoint_303_35() {
/*<107>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Bitte ruft mich wieder, wenn ich\nEuch behilflich sein kann!")
          }

          void entrypoint_303_01() {
/*<  2>*/ 	start()
/*<  6>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*<  8>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Auf diesem Berg scheint es noch\n<y<Artefakte der Göttin>> zu geben... Willst\ndu sie nicht suchen?")
          	  case 1:
/*<  3>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\x1B09So sieht man sich wieder!\nAlles in Ordnung bei dir?\n\n\nIch habe gehört, dass sich hier einige\n<y<Artefakte der Göttin>> befinden sollen...\n\n\nVielleicht hast du ja schon welche\ngefunden, aber es scheint noch mehr\ndavon zu geben...\n\n\x0E\x01\x09\x04\x18\x17FFWillst du sie nicht suchen?")
/*<  9>*/ 		loadzone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_303_19() {
/*< 72>*/ 	start()
/*< 74>*/ 	switch (random(3)) {
          	  case 0:
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x0B\x04\x00rHey, wo bleibst du denn?\nWenn du nicht weißt, wo ich bin, schau\ndoch auf der <r<Karte>> hier \x0E\x02\x04\x02\x3CD nach!")
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x0B\x04\x00rJetzt komm endlich her!\nWenn du nicht weißt, wo ich bin, schau\ndoch auf der <r<Karte>> hier \x0E\x02\x04\x02\x3CD nach!")
          	  case 2:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x0B\x04\x00rKomm schon, beeil dich!\nWenn du nicht weißt, wo ich bin, schau\ndoch auf der <r<Karte>> hier \x0E\x02\x04\x02\x3CD nach!")
          	}
          }

          void entrypoint_303_36() {
/*<109>*/ 	start()
/*<213>*/ 	switch (story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */]) {
          	  case 0:
/*<215>*/ 		set_camera(2, 0)
/*<216>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 49), ('next', 217), ('param3', 32)])
/*<217>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 49), ('next', 214), ('param3', 33)])
/*<214>*/ 		printf(/* textboxtype: 1, unk: 0 */ "")
/*<218>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	  case 1:
/*<116>*/ 		set_camera(2, 0)
/*<209>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 49), ('next', 210), ('param3', 32)])
/*<210>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 49), ('next', 110), ('param3', 33)])
/*<110>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x12\x04\x00dWie?\nHier ist es gut, ja? Ich hatte schon\nfast keine Kraft mehr...\n\n\x0E\x01\x04\x02\nWas?!? Auf den Gipfel?!?~~~\nSag das doch gleich! Jetzt muss ich\nmit dem schweren Ding noch einmal\nlosfliegen!~~~")
/*<114>*/ 		set_camera(1, 0)
/*<111>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x12\x04\x00dHier ist alles voller Monster...")
/*<115>*/ 		set_camera(3, 0)
/*<112>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x12\x04\x00dNicht, dass ich etwa vor Monstern\nAngst hätte... Aber im Augenblick\ntrage ich ja noch diesen schweren\nBehälter...")
/*<113>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x12\x04\x00dAuf geht's, grüner Wicht!\nJetzt zeige ich dir mal, was ein\nechter Transportroboter ist!\n\nPass auf mich auf, ja?\nIch folge dir unauffällig...")
/*<187>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x12\x04\x00dUnd pass bloß auf, dass mir keines\ndieser Ungeheuer zu nah kommt!")
/*<211>*/ 		story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */] = true;
/*<212>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	}
          }

          void entrypoint_303_02() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten. \n\n\nDie Kraft des Schwertes ist gewachsen.\nNun kannst du die <y<Artefakte der Göttin\n>>mit der <r<Aurasuche>> aufspüren.\n\n<y<Artefakte der Göttin>> wurden als Ziel\nfür die <r<Aurasuche>> hinzugefügt.\n<pling>Bitte nutze diese Funktion.")
/*<  7>*/ 	story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */] = true;
/*<290>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 21), ('next', -1), ('param3', 56)])
          }

          void entrypoint_303_37() {
/*<117>*/ 	start()
/*<124>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<125>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Jetzt bist du den ganzen Weg gelatscht\nund kommst nicht weiter, wie? Das ist\nziemlich mies.\n\n\x0E\x01\x09\x04\x15\xDFFHm...\x0E\x01\x04\x02\x14 Ich fühle mich, als hätte ich was\nWichtiges vergessen...\n\n\nHabe ich dir das nicht vorhin bereits\ngesagt...\x0E\x01\x04\x02\x14 \x0E\x01\x09\x04\x00\x04Was war das doch gleich?\n\n\n\x0E\x01\x09\x04\x09\x8FFNa ja, wie dem auch sei... Wenn du viel\nWasser brauchst, solltest du zum\n<r<Floria-See>> gehen...")
          		flw_141:
/*<141>*/ 		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          		  case 0:
          		  case 1:
/*<138>*/ 			loadzone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*<118>*/ 		printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x11\x801Ach, du hier?\nSuchst du immer noch nach deiner\nFreundin?\n\n\x0E\x01\x09\x04\x09\x8FFWas ich hier mache? Ich suche\nnatürlich nach einem Schatz, ist\ndoch klar!\n\n\x0E\x01\x09\x04\x15\xDFFBis jetzt habe ich aber noch nichts\ngefunden. Hast du vielleicht 'ne Idee?\n[1]Willst du\nes wissen?[2]Ich sage nichts!")
/*<119>*/ 		switch (choice(2)) {
          		  case 0:
/*<120>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x900Wie, du weißt was?!?\nDu und ich, wir sind doch gute\nFreunde... Los jetzt, erzähl schon!")
          			flw_122:
/*<122>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x80EWas, die Flammen versperren dir den\nWeg? Dann kipp doch Wasser drauf!\n\n\n\x0E\x01\x09\x04\x15\x800Du brauchst ganz viel Wasser dafür?\nSo ist das also...\x0E\x01\x04\x02\x14 Dann reicht das hier\nwohl nicht, verstehe...\n\n\x0E\x01\x09\x04\x09\x8FFDas Wasser hier stammt aus dem\n<r<Floria-See>><pling>. Der ist ziemlich weit weg.\n\n\n\x0E\x01\x09\x04\x11\x8FFEin Kumpel von mir war im <b<Wald von\nPhirone>> auf Schatzsuche und ist von\ndort über den Wasserweg hierher\nzurückgekehrt. Sagt er zumindest.\n\x0E\x01\x09\x04\x09\x8FFMit dem Wasser aus dem See lässt sich\ndein Problem ja vielleicht lösen.")
/*<123>*/ 			story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */] = true;
          			goto flw_141
          		  case 1:
/*<121>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\x120AWas sagst du da?\nIch dachte, wir wären Freunde...\nKomm schon, sag's mir!")
          			goto flw_122
          		}
          	}
          }

          void entrypoint_303_03() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 7, unk: 0 */ "Lindere meinen Durst,\nund ich gebe den Weg\nfrei...")
          }

          void entrypoint_303_20() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x0B\x04\x00rEndlich! Das wurde aber auch\nallerhöchste Zeit!")
          }

          void entrypoint_303_38() {
/*<126>*/ 	start()
/*<135>*/ 	switch (scene_flags[114 /* 0xF 04 */]) {
          	  case 0:
/*<136>*/ 		printf(/* textboxtype: 2, unk: 1 */ "\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\n\n\nDie Flamme, die den Zugang\nblockiert, ist noch immer nicht\ngelöscht.\n\nSoll ich das Gefäß, in dem sich der\n<b<Wasserdrache>> aufhielt, als Ziel für\ndie <g<Aurasuche >>festlegen?\n[1]Ja[2-]Nein")
          		flw_139:
/*<139>*/ 		switch (choice(2)) {
          		  case 0:
/*<128>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<129>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<130>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<131>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<132>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<133>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<289>*/ 			printf(/* textboxtype: 2, unk: 0 */ "Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Das Gefäß, in\ndem sich der <b<Wasserdrache >>aufhielt,\nwurde als Ziel für die <g<Aurasuche\n>>festgelegt.<pling>")
/*<288>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 13), ('next', 134), ('param3', 56)])
          			flw_134:
/*<134>*/ 			scene_flags[5 'Eldin Volcano Summit'][114 /* 0xF 04 */] = true;
/*<137>*/ 			loadzone_temp_flags[0 /* 0x1 01 */] = false;
          		  case 1:
/*<140>*/ 			printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Gebieter, ich folge deinem Wunsch und\nwerde damit noch warten.")
          			goto flw_134
          		}
          	  case 1:
/*<127>*/ 		printf(/* textboxtype: 2, unk: 1 */ "\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu\nberichten. Ich empfehle, den Worten\ndes <b<Mogma>> zu folgen und zum\n<r<Floria-See>> zu gehen.\nWas den Transport des Wassers\nangeht...~~~ Vielleicht solltest du dich an\nden <r<Wasserdrachen>> wenden?<pling>\n\nMit dem <r<Wasserbehälter>>, in dem er\nsich von seiner Verletzung erholt hat,\nsollte es möglich sein, das Wasser\nzu transportieren.")
/*<296>*/ 		printf(/* textboxtype: 2, unk: 1 */ "Soll ich die frühere Information\nverarbeiten und das Gefäß als\nZiel für die <r<Aurasuche>> festlegen?\n[1]Ja[2-]Nein")
          		goto flw_139
          	}
          }

          void entrypoint_303_04() {
/*< 12>*/ 	start()
/*< 14>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\x1B09Sag bloß, du suchst ebenfalls\nnach dem <y<Artefakt der Göttin>>?\nIst das hier nicht etwas heiß für dich?\n\n\x0E\x01\x09\x04ÿ\xFF00Mir macht die Hitze ja an sich\nwenig aus, aber diese Flammen da\nsind selbst mir zu heiß!")
          		flw_17:
/*< 17>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x18\x17FFIrgendwie müsste man diese Flammen\nja doch überwinden können, oder?")
          	  case 1:
/*< 13>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\x1B09Hallo, mein Freund!\nGeht es dir gut?\n\n\n\x0E\x01\x09\x04\x16\xBFFIch habe gehört, dass sich hier noch\n<y<Artefakte der Göttin>> verbergen sollen.\n\n\n\x0E\x01\x09\x04\x00\xB00Ich glaube, dass sich hier hinten\neines verbirgt, aber diese Flammen\nversperren mir den Weg...")
/*< 16>*/ 		loadzone_temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_17
          	}
          }

          void entrypoint_303_21() {
/*< 79>*/ 	start()
/*< 80>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x0B\x04\x00rHey! Was soll das?")
          }

          void entrypoint_303_39() {
/*<148>*/ 	start()
/*<150>*/ 	switch (loadzone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*<151>*/ 		printf(/* textboxtype: 1, unk: 2 */ "\x0E\x01\x09\x04\x0C\x405Ich habe immer von einem hoch\ngelegenen Ort als Altersdomizil\ngeträumt...\n\n\x0E\x01\x09\x04\x0C\xDFFWenn man sein ganzes Leben in\nstinkenden Kellern verbracht hat,\nsehnt man sich nach Sonne und frischer\nLuft...\n\x0E\x01\x09\x04\x09\x906Ach, ich würde mir sogar wünschen,\nin meinem nächsten Leben als Vogel\nwiedergeboren zu werden!")
          	  case 1:
/*<149>*/ 		printf(/* textboxtype: 1, unk: 2 */ "\x0E\x01\x09\x04\x0B\xC07Hey, wo kommst du denn her?\n\n\n\n\x0E\x01\x09\x04\x0B\x506Hehehehe...\nWie gefallen dir diese tollen Klauen?\nDie habe ich entworfen!\n\nWas ich so treibe? Nun...\n\n\n\n\x0E\x01\x09\x04\x0C\x405Ich war auf der Suche nach neuen\nSchätzen, aber irgendwie finde ich im\nAugenblick nichts Rechtes...\n\nIn dieser Hitze hier unten macht die\nSchatzsucherei sowieso keinen so\nrechten Spaß...\n\n\x0E\x01\x09\x04\x09\x908Ich denke manchmal, dass ich so\nlangsam in Rente gehen und das\nLeben genießen sollte...")
/*<152>*/ 		loadzone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

          void entrypoint_303_05() {
/*< 23>*/ 	start()
/*< 21>*/ 	switch (scene_flags[106 /* 0xC 04 */]) {
          	  case 0:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x18\x1700Wenn du hier raus gehst und am Ende\nrechts abbiegst, findest du eine <r<Quelle>>!\nVielleicht hilft dir das ja weiter...")
          	  case 1:
/*< 20>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*< 18>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x201ELindere meinen Durst...\x201C?\nDa fällt mir ein, wenn du hier raus\ngehst und am Ende dann rechts...\n\nDann kommst du nach draußen, und\ndort ist eine <r<Quelle>>...<pling>\nIhr Wasser ist wirklich lecker!\n\n\x0E\x01\x09\x04\x18\x1705Aber wie willst du das Wasser\nhierher bringen? Den Frosch selbst\nkönnen wir ja schlecht zur Quelle\nbringen...~~~ Wie machen wir das?")
/*< 19>*/ 			scene_flags[5 'Eldin Volcano Summit'][106 /* 0xC 04 */] = true;
          		  case 1:
/*< 24>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x18\x17FFIrgendwie müsste man diese Flammen\nja doch überwinden können, oder?")
          		}
          	}
          }

          void entrypoint_303_22() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x0B\x04\x00rSchluss jetzt! Wenn du so\nweitermachst, breche ich noch\nauseinander!")
          }

          void entrypoint_303_06() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x17\x1908Sieh mal, die Flammen sind erloschen!\nJetzt können wir diesen Abschnitt\nendlich erkunden.")
/*<153>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 25), ('param2', 6911), ('next', 28), ('param3', 13)])
/*< 28>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 2), ('param2', 0), ('next', 27), ('param3', 14)])
/*< 27>*/ 	story_flags[468 /* us: 805A9B0F 0x40, jp: 805ACD8F 0x40 */] = true;
/*<142>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_303_23() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BGebieter, der Roboter wartet am\nVulkan auf dich. Ich empfehle dir,\nschnell zu ihm zu gehen.")
          }

          void entrypoint_303_40() {
/*<155>*/ 	start()
/*<157>*/ 	switch (story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */]) {
          	  case 0:
          		flw_165:
/*<165>*/ 		switch (scene_flags[81 /* 0xB 02 */]) {
          		  case 0:
/*<166>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1A\x30DBoss!\nIch hoffe, es geht dir gut... Ich werde\nein würdiger Nachfolger sein,\nversprochen!")
          		  case 1:
/*<158>*/ 			printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x1C\x180FWas?!?\nUnser Boss ist in die Höhe geschossen\nworden? Wohin denn?\n[1]Ins Wolkenmeer[2]Ins Paradies")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
/*<162>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1A\x2011Was, ins Wolkenmeer?\n\n\n\n\x0E\x01\x09\x04\x1B\x407Abgefahren!\x0E\x01\x04\x02\x14 ...Aber er wollte ja schon\nimmer mal dahin!\n\n\nIch bin mir sicher, dass er auch da oben\ndie Finger nicht von der Schatzsuche\nlassen kann...")
          				flw_164:
/*<164>*/ 				scene_flags[4 'Eldin Volcano'][81 /* 0xB 02 */] = true;
          			  case 1:
/*<163>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1A\x2011Ins Paradies?\n\n\n\n\x0E\x01\x09\x04\x1B\x2207Hm\x0E\x01\x04\x02\x14...\nDann war es wohl Zeit...\n\n\nOb es da wohl Schätze gibt? Das würde\nmich interessieren...")
          				goto flw_164
          			}
          		}
          	  case 1:
/*<186>*/ 		switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          		  case 0:
          			goto flw_165
          		  case 1:
/*<160>*/ 			switch (scene_flags[81 /* 0xB 02 */]) {
          			  case 0:
/*<176>*/ 				switch (loadzone_temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<177>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\x2207Ein toller Hecht, unser Boss! Immer\nunterwegs zwischen den Wolken und\nKellergewölben!")
          				  case 1:
/*<174>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1A\x2011Wa... Was?!?\nEr ist schon wieder zurück?\n\n\n\x0E\x01\x09\x04\x1B\x2207Ein toller Hecht, unser Boss! Immer\nunterwegs zwischen den Wolken und\nKellergewölben!")
/*<175>*/ 					loadzone_temp_flags[4 /* 0x1 10 */] = true;
          				}
          			  case 1:
/*<167>*/ 				switch (loadzone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<172>*/ 					switch (loadzone_temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*<173>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x15Das Leben genießen...\nNun, wenn der Boss das will, solltest\ndu ihm dabei helfen!")
          					  case 1:
/*<286>*/ 						switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          						  case 0:
/*<170>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1A\x2001Und, warst du beim Boss?\nWie geht es ihm?\n\n\n...\n\n\n\n\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x1A\x2011Was sagst du da? Das Leben\ngenießen? Wie abgefahren!\n\n\n...\x0E\x01\x09\x04\x00ÿAber was ist mit den Schätzen?\nWill er die etwa uns überlassen?\n\n\n\x0E\x01\x09\x04\x1B\x1E15Unser Boss ist schon ein komischer\nKauz...\n\n\nAber er ist immer noch der Boss!\nDu solltest ihm seinen Wunsch erfüllen,\nwenn du kannst...")
          							flw_171:
/*<171>*/ 							loadzone_temp_flags[3 /* 0x1 08 */] = true;
          						  case 1:
/*<287>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\x2201Hey, was machst du denn hier?\nAlles klar bei dir?\n\n\nWas, wie es mir geht? Natürlich\nprächtig, ist doch klar!\n\n\n\x0E\x01\x09\x04\x00\x02Aber unser Boss ist irgendwie\nkomisch drauf, seit er in dieser Ruine\nwar...\n\n\x0E\x01\x09\x04\x1B\x22FFWie, du warst beim Boss? Wie geht\nes ihm denn?\n\n\n\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x1A\x2011Was sagst du da? Das Leben\ngenießen? Wie abgefahren!\n\n\n\x0E\x01\x09\x04\x00ÿAber was ist mit den Schätzen?\nWill er die etwa uns überlassen?\n\n\n\x0E\x01\x09\x04\x1B\x1E15Unser Boss ist schon ein komischer\nKauz...\n\n\nAber er ist immer noch der Boss!\nDu solltest ihm seinen Wunsch erfüllen,\nwenn du kannst...")
/*<292>*/ 							story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          							goto flw_171
          						}
          					}
          				  case 1:
/*<168>*/ 					switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          					  case 0:
/*<169>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\x50ASchau mal bei unserem <b<Boss>> vorbei,\ner muss hier in der Nähe sein...\n\n\nVielleicht baut es ihn auf, dich zu\nsehen...")
          					  case 1:
/*<156>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\x2201Hey, Kumpel! Da bist du ja wieder!\nWie geht's?\n\n\nWas, wie es mir geht? Natürlich\nprächtig, ist doch klar!\n\n\n\x0E\x01\x09\x04\x00\x02Aber unser <b<Boss>> ist irgendwie\nkomisch drauf, seit er in dieser Ruine\nwar...\n\n\x0E\x01\x09\x04\x1B\x230ADu solltest mal zu ihm gehen und\nihm Hallo sagen! Er muss hier in der \nNähe sein...")
/*<159>*/ 						story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_303_07() {
/*< 29>*/ 	start()
/*< 31>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
          		flw_32:
/*< 32>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Bitte, versuch es noch einmal!\nTu es für die Wissenschaft!")
          	  case 1:
/*< 30>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x16\x1E56Nicht schon wieder...\nIrgendwas müssen wir doch tun\nkönnen!")
/*< 33>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_32
          	}
          }

          void entrypoint_303_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x12\x04\x00dDa bist du ja endlich! Los geht's,\nbring mich zum Gipfel!")
          }

          void entrypoint_303_41() {
/*<178>*/ 	start()
/*<180>*/ 	switch (loadzone_temp_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<181>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\x2215Das Einzige, was <b<Platio>> interessiert,\nsind die Schätze...")
          	  case 1:
/*<179>*/ 		printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x1A\x200FAber das ist ja... Wir kennen uns\ndoch?!?~~~\n\n\n\x0E\x01\x09\x04\x1B\x2209Na ja, ist ja auch egal...\n\n\n\nMein Bruder hat rausbekommen, was\nmir da in der Ruine für ein kleines...\nMissgeschick passiert ist!\n\n\x0E\x01\x09\x04\x1B\x1EFFAber ihn hat es wohl auf die gleiche\nArt erwischt... Ich sage es ja immer,\nkeiner ist besser als der andere!\n\n\x0E\x01\x09\x04\x1A\xA12Aber sag mal, hast du <b<Platio>>\nirgendwo gesehen?\n[1]Ja[2]Nein")
/*<183>*/ 		switch (choice(2)) {
          		  case 0:
/*<184>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\xA12Ach, wirklich?\nDann ist's ja gut!\n\n\nIch habe ihn in letzter Zeit so gut wie\ngar nicht gesehen...\n\n\n\x0E\x01\x09\x04\x1B\x160FIch bin mir sicher, dass er wieder\nallerhand Unfug im Schilde führt!\n\n\n\x0E\x01\x09\x04\x1B\x16FFDem muss man wirklich keine\nRatschläge geben, der hört eh nicht\nauf einen...")
          			flw_182:
/*<182>*/ 			loadzone_temp_flags[5 /* 0x1 20 */] = true;
          		  case 1:
/*<185>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\x2207Dieser Kerl...\x0E\x01\x04\x02\x14 \nDer ist bestimmt mal wieder alleine zur\nSchatzsuche aufgebrochen...\n\nDas ist gefährlich, aber er will ja\neinfach nicht auf meine Ratschläge\nhören...\n\n\x0E\x01\x09\x04\x1B\x09Na ja, ist ja auch egal! Ein echter\n<b<Schatzsucher>> trotzt jeder Gefahr...\n\n\nSolltest du <b<Platio>> begegnen, dann\ngrüße ihn von mir, ja?")
          			goto flw_182
          		}
          	}
          }

          void entrypoint_303_08() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x17\x1908Oh, klasse!\nDann lass uns mal nachsehen...")
/*<154>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 25), ('param2', 6911), ('next', 37), ('param3', 13)])
/*< 37>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 3), ('param2', 0), ('next', 36), ('param3', 14)])
/*< 36>*/ 	story_flags[469 /* us: 805A9B0E 0x02, jp: 805ACD8E 0x02 */] = true;
/*<143>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_303_25() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x12\x04\x00dHey, vergiss mich nicht!\nHier auf der <r<Karte>> \x0E\x02\x04\x02\x3CD kannst du\nnachsehen, wo ich mich gerade befinde.\x0E\x01\x11\x02\x3CD")
          }

          void entrypoint_303_42() {
/*<188>*/ 	start()
/*<190>*/ 	switch (scene_flags[82 /* 0xB 04 */]) {
          	  case 0:
/*<191>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x509Ich begebe mich dann mal wieder\nauf die Schatzsuche...")
          	  case 1:
/*<189>*/ 		printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x0E\x1008Hey, du! Geht es dir gut?\n\n\n\n\x0E\x01\x09\x04\x11\x110BOh, du hast dir also all deine Sachen\nzurückgeholt... Ich wusste, dass du\ndas kannst!\n\nAber sag mal...\x0E\x01\x04\x02\x14 Wie war's?\nHast du Schätze gefunden?\n[1]Klar![2]Fehlanzeige...")
/*<192>*/ 		switch (choice(2)) {
          		  case 0:
/*<193>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\x505Wirklich? Abgefahren!\n\n\n\n\x0E\x01\x09\x04\x0E\x1F0AAber ich sage dir, die Welt ist groß!\nSchätze schlummern überall, und du\nhast längst noch nicht alle gefunden!\n\nIch schaue nicht zurück... Und beim\nnächsten Mal bin ich es, der den\nHauptgewinn abräumt!")
          			flw_195:
/*<195>*/ 			scene_flags[4 'Eldin Volcano'][82 /* 0xB 04 */] = true;
          		  case 1:
/*<194>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\x40AWie, du hast gar nichts gefunden?\nDann war dein Trip ja völlig umsonst!\n\n\n\x0E\x01\x09\x04\x0F\x508Aber mach dir nichts draus!\nDie Welt ist groß und voller Schätze!\nBeim nächsten Mal...")
          			goto flw_195
          		}
          	}
          }

          void entrypoint_303_09() {
/*< 38>*/ 	start()
/*< 45>*/ 	switch (story_flags[173 /* us: 805A9AE2 0x10, jp: 805ACD62 0x10 */]) {
          	  case 0:
/*< 52>*/ 		switch (scene_flags[111 /* 0xC 80 */]) {
          		  case 0:
/*< 53>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Ich werde mich noch woanders\numsehen... Bis dann!")
          		  case 1:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x18\x1702Und, was hast du da drinnen\ngefunden?\n[1]Viele Fallen[2]Viele Monster")
/*< 47>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_49:
/*< 49>*/ 				switch (story_flags[248 /* us: 805A9AF7 0x04, jp: 805ACD77 0x04 */]) {
          				  case 0:
/*< 50>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x16\x1E56Ach, wirklich?\nHm, dann solltest du diesen Bereich\nwohl besser alleine erkunden...\n\n\x0E\x01\x09\x04\x08\xBFFIch werde mir derweilen eine andere\nGegend vornehmen. So vieles will noch\nerforscht werden... Bis bald!")
          					flw_51:
/*< 51>*/ 					scene_flags[5 'Eldin Volcano Summit'][111 /* 0xC 80 */] = true;
          				  case 1:
/*< 48>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x16\x1E56Ach, wirklich?\nHm, dann solltest du diesen Bereich\nwohl besser alleine erkunden...\n\n\x0E\x01\x09\x04\x08\xBFFÜbrigens, ich glaube wirklich,\ndass sich dort auch ein <y<Artefakt\nder Göttin>> versteckt...\n\nIch täusche mich selten, deswegen\nhalte besser die Augen offen, ja?")
          					goto flw_51
          				}
          			  case 1:
          				goto flw_49
          			}
          		}
          	  case 1:
/*< 43>*/ 		switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          		  case 0:
/*< 44>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x17\x1908Hey, du bist klasse!\nDir ist wirklich nichts zu schwer, was?\n\n\n\x0E\x01\x09\x04\x08\xBFFDafür lasse ich dir auch den Vortritt!\nNa los, geh rein und sieh dich um!")
          		  case 1:
/*< 40>*/ 			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          			  case 0:
/*<284>*/ 				switch (temp_flags[15 /* 0x0 80 */]) {
          				  case 0:
/*<285>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x18\x1707Wir bräuchten eine Menge <r<Wasser>>\nund dazu noch einen <r<großen Behälter>>...\nFällt dir da nichts ein?")
          				  case 1:
/*< 41>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x18\x1707Wie kommen wir hier nur vorbei?\nWir bräuchten eine Menge <r<Wasser>>\nund dazu noch einen <r<großen Behälter>>...\n\n\x0E\x01\x09\x04\x16\x1EFFDu hast doch bereits so manches\nAbenteuer bestanden... Fällt dir\nnichts ein?")
/*<283>*/ 					temp_flags[15 /* 0x0 80 */] = true;
          				}
          			  case 1:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Oh, schau dir das nur an!\nUnheimlich...\n\n\n\x0E\x01\x09\x04\x17\x1908Das ist bestimmt nicht für das <y<Artefakt\nder Göttin>> gedacht! Dahinter muss sich\netwas <r<Größeres>> befinden.")
/*<144>*/ 				set_camera(4, 0)
/*<146>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x16\x1EFFUnd dieses Mal sind die Flammen noch\nviel größer! Mit einer <y<Flasche>> wirst\ndu da nicht weiterkommen...")
/*<145>*/ 				set_camera(-1, 0)
/*<147>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Hm...~~~ \x0E\x01\x09\x04\x18\x1700Irgendwie müssten wir da\ngenügend Wasser draufspritzen.\nHast du keinen <r<großen Behälter>><pling>?\n\n\x0E\x01\x09\x04\x16\x1EFFUnd dann bräuchten wir natürlich\nauch noch eine ganze Menge <r<Wasser>>...\nWie machen wir das nur?")
/*< 42>*/ 				story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_303_26() {
/*< 89>*/ 	start()
/*< 90>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Da soll ich Wasser drauf spritzen?\nNa, dann sieh zu und lerne!")
          }

          void entrypoint_303_43() {
/*<201>*/ 	start()
/*<202>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Wir sind am Vulkan Eldin angelangt.\n\n\n\nSuche mit der <r<Aurasuche>> nach dem\nEingang zur Prüfung, die du bestehen\nmusst, um die heilige Flamme zu\nerhalten.")
          }

