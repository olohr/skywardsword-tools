          void entrypoint_400_13() {
/*< 33>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_65() {
/*<161>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Wir sind an der <b<Ranelle-Mine\n>>angekommen.\n\n\nSuche mit der Aurasuche nach dem\nEingang zur Prüfung, die du bestehen\nmusst, um die heilige Flamme zu\nerhalten.")
/*<163>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_30() {
/*<234>*/ 	start()
/*<235>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Du willst hier arbeiten?\nDann nimm deine komische Kappe ab\nund setz einen Helm auf, bzzz!")
/*<244>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_14() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Hier muss die Lore durch, bzzz!\nGeh aus dem Weg!")
/*< 71>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_66() {
/*<164>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Wir sind in der <b<Wüste Ranelle\n>>angekommen.\n\n\nSuche mit der Aurasuche nach dem\nEingang zur Prüfung, die du bestehen\nmusst, um die heilige Flamme zu\nerhalten.")
/*<166>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_31() {
/*<236>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_15() {
/*< 37>*/ 	start()
/*<307>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<308>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_38:
/*< 38>*/ 			printf(/* textboxtype: 1, unk: 0 */ "...")
          		  case 1:
/*<345>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				flw_310:
/*<310>*/ 				printf(/* textboxtype: 1, unk: 0 */ "...")
          			  case 1:
/*<309>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 310), ('param3', 31)])
          				goto flw_310
          			}
          		}
          	  case 1:
          		goto flw_38
          	}
          }

          void entrypoint_400_67() {
/*<167>*/ 	start()
/*<168>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Wir sind am <b<Tempel der Zeit\n>>angekommen.\n\n\nSuche mit der Aurasuche nach dem\nEingang zur Prüfung, die du bestehen\nmusst, um die heilige Flamme zu\nerhalten.")
/*<169>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_32() {
/*<238>*/ 	start()
/*<239>*/ 	printf(/* textboxtype: 1, unk: 0 */ "In letzter Zeit greifen uns komische\nKerle an. Wir haben keine Waffen, um\nuns zu wehren. Die machen uns fertig,\nbzzz!")
/*<245>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_16() {
/*< 39>*/ 	start()
/*<  9>*/ 	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          	  case 0:
/*<311>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<312>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_12:
/*< 12>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Wie, du bist immer noch da?\nPass auf dich auf, bzzz!")
          			  case 1:
/*<313>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Du suchst einen Drachen?\n\n\n\n<b<\x0E\x01\x09\x04\x1303\x00>>Der <b<Donnerdrache>> lebt südlich der\n<b<Ranelle-Höhle>>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
/*<344>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_12
          		}
          	  case 1:
/*<  5>*/ 		switch (story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */]) {
          		  case 0:
          			flw_10:
/*< 10>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Jetzt kannst du mit dem Käfer\nObjekte <r<greifen und festhalten>>!\n\n\nPass auf dich auf!")
/*< 77>*/ 			scene_flags[7 'Lanayru Desert'][5 /* 0x1 20 */] = true;
/*<283>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          		  case 1:
/*<  6>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<277>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1303\x00Du hast mich gerettet, bzzz!")
/*<278>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 279), ('param3', 47)])
/*<279>*/ 				set_camera(6, 0)
/*<281>*/ 				OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 27), ('param2', 356), ('next', 280), ('param3', 15)])
/*<280>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 282), ('param3', 17)])
/*<282>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 7), ('param3', 48)])
/*<  7>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1303\x00Das war knapp! Beinahe hätten mir die\nKerle den Strom abgeklemmt, bzzz!\n\n\nAber sag mal...\x0E\x01\x04\x02\x1E Ist das etwa ein <y<Käfer>>?\nDer kommt von hier, ist aber ein altes\nModell...\n\nWeil du mir geholfen hast, werde ich\ndir dieses <r<Ding >>ein wenig verbessern.\n\x0E\x01\x09\x04\x1303\x00Gib mal her, bzzz!")
/*< 91>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 284), ('param3', 33)])
/*<284>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', 8), ('param3', 42)])
/*<  8>*/ 				give_item(75 0x4B);
/*< 11>*/ 				story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */] = true;
          				goto flw_10
          			  case 1:
/*<  4>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Hilf mir, bzzz! Hilfe!")
/*< 76>*/ 				scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
/*<228>*/ 				scene_flags[7 'Lanayru Desert'][28 /* 0x2 10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_400_50() {
/*< 58>*/ 	start()
/*<142>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*< 59>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00\x0E\x01\x12\x04\x00\x0BGebieter Link, ich habe dir\netwas zu berichten. Wir sind nun in der\n<b<Ranelle-Mine >>angekommen.")
          }

          void entrypoint_400_68() {
/*<170>*/ 	start()
/*<172>*/ 	set_camera(-1, 0)
/*<171>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Gut gemacht, \x0E\x01\x12\x04\x00\x04Gebieter.")
/*<173>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x01Gebieter, du hast die Prüfung\nbestanden. Mit deinem reinen Herzen\nhast du die Kraft erlangt, die heilige\nFlamme zu finden.")
/*<175>*/ 	set_camera(3, 0)
/*<174>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Dieser <y<Greifhaken>> ist ein Schatz der\nGöttin.\n\n\nNutze die Klaue an der Kette, um dich\nan <r<Efeu>> oder <r<Greifhaken-Zielen>>\nhochzuziehen.")
/*<177>*/ 	set_camera(-1, 0)
/*<176>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Die Flamme befindet sich irgendwo in\nder Wüste... \x0E\x01\x12\x04\x00\x01Gebieter, ich vermute sie\nan einem Ort, den du noch nicht\nbetreten hast.")
          }

          void entrypoint_400_33() {
/*<240>*/ 	start()
/*<241>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_17() {
/*< 40>*/ 	start()
/*<125>*/ 	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          	  case 0:
/*<216>*/ 		switch (scene_flags[89 /* 0xA 02 */]) {
          		  case 0:
/*<218>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x16\x2007Jetzt kann ich das Innere erforschen!\n\x0E\x01\x09\x04\x00\x2000Und danach will ich zum Siegelhain...\nIch habe zu tun!")
          		  case 1:
/*<126>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\x1B09Du... du warst drinnen?!?\n\n\n\n\x0E\x01\x09\x04\x15\x1B00Was sagst du?\nEs gibt einen weiteren Geheimgang?\nDas hättest du mir früher sagen sollen!\n\n\x0E\x01\x09\x04\x08\x2100Ich hatte schon aufgegeben und war\nnach Hause aufgebrochen, aber dann\nhörte ich diesen Lärm und bin\nzurückgekehrt.\n\x0E\x01\x09\x04\x16\x2007Jetzt kann ich das Innere erforschen!\n\x0E\x01\x09\x04\x00\x2000Und danach will ich zum Siegelhain...\nIch habe zu tun!")
/*<217>*/ 			scene_flags[7 'Lanayru Desert'][89 /* 0xA 02 */] = true;
          		}
          	  case 1:
/*<150>*/ 		switch (scene_flags[73 /* 0x8 02 */]) {
          		  case 0:
/*<152>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x16\x2007Ich würde nur zu gerne da hinein...\nOb es denn wirklich keinen anderen\nWeg zum Tempel gibt?")
          		  case 1:
/*< 41>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Oh, so trifft man sich wieder!\nIch will dir nicht zu nahe treten, aber\ndich trifft man wirklich an den\nverrücktesten Orten!\n\x0E\x01\x09\x04\x17\x2008Aber hör mal... Ich habe hier gerade\ndie Entdeckung des Jahrhunderts\ngemacht!\n\n\x0E\x01\x09\x04\x00\x2000Dies ist der <b<Tempel der Zeit>>, ein sehr\nheiliger Ort. \n\n\n\x0E\x01\x09\x04\x00\x190AUnd stell dir vor, an diesem Ort habe\nich eine <r<Bewohnerin der legendären\nInsel der Göttin >>gesehen!\n\n\x0E\x01\x09\x04\x00\x1900Ihre Kleider waren ganz so, wie sie die\nalten Schriften schildern...\n\n\n\x0E\x01\x09\x04\x08\x2105Sie ist mit einer anderen Person in den\nTempel gegangen. Ich wollte ihnen\nfolgen...\n\n\x0E\x01\x09\x04\x15\x1B00Aber da gab es eine Explosion! Und das\nResultat siehst du ja...\n\x0E\x01\x09\x04\x16\x2007Jetzt kommt hier keiner mehr durch.\n\nUnd dabei wüsste ich nur zu gerne, was\nsie da gesucht haben...")
/*<151>*/ 			scene_flags[7 'Lanayru Desert'][73 /* 0x8 02 */] = true;
          		}
          	}
          }

          void entrypoint_400_51() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 2, unk: 0 */ "An diesem Ort hat sich die Zeit\nverändert.\n\n\nAls du den blauen Stein getroffen hast,\nsind wir in der Zeit zurückgewandert.\n<pling>Ich schätze, dass wir uns hier in der\n<r<Vergangenheit>> befinden.")
          }

          void entrypoint_400_69() {
/*<207>*/ 	start()
/*<208>*/ 	printf(/* textboxtype: 8, unk: 0 */ "Sicherheit geht vor!\nHelft, Unfälle zu vermeiden!\n\x09Die Bauleitung")
          }

          void entrypoint_400_34() {
/*<242>*/ 	start()
/*<243>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Du interessierst dich für die Steine\nder Zeit? Dann musst du ins\n<b<Ranelle-Steinwerk>>.")
/*<246>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_52() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Ich spüre in dieser Gegend etwas, das\ndem <b<Hauptschalter>> ähnlich ist.\nSpüre es mit der <pling><r<Aurasuche >>auf.")
/*<220>*/ 	story_flags[107 /* us: 805A9AE1 0x01, jp: 805ACD61 0x01 */] = true;
/*<294>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 3), ('next', 268), ('param3', 56)])
/*<268>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_400_35() {
/*<247>*/ 	start()
/*<248>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_19() {
/*< 42>*/ 	start()
/*<314>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<315>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_43:
/*< 43>*/ 			printf(/* textboxtype: 1, unk: 0 */ "...")
          		  case 1:
/*<347>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_43
          			  case 1:
/*<316>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 43), ('param3', 31)])
          				goto flw_43
          			}
          		}
          	  case 1:
          		goto flw_43
          	}
          }

          void entrypoint_400_53() {
/*< 92>*/ 	start()
/*<113>*/ 	story_flags[109 /* us: 805A9AE1 0x04, jp: 805ACD61 0x04 */] = true;
/*<114>*/ 	printf(/* textboxtype: 2, unk: 0 */ "")
/*<159>*/ 	set_camera(1, 0)
/*<160>*/ 	printf(/* textboxtype: 2, unk: 0 */ "")
/*<178>*/ 	set_camera(-1, 0)
/*<179>*/ 	printf(/* textboxtype: 2, unk: 0 */ "")
          }

          void entrypoint_400_70() {
/*<209>*/ 	start()
/*<210>*/ 	printf(/* textboxtype: 8, unk: 0 */ "Angeplante Fördermenge: \n150 Kisten\n\x09Die Bauleitung")
          }

          void entrypoint_400_36() {
/*<249>*/ 	start()
/*<250>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Die Steine der Zeit bewegen uns und\nunsere Maschinen. Ihre Energie\nsprengt jede Skala!")
/*<259>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
/*< 72>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_54() {
/*<100>*/ 	start()
/*<205>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<206>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2F08\x709Link!\nDu hast das Heim des Donnerdrachen\nbetreten!\x0E\x01\x04\x02T\n\n\x0E\x01\x09\x04\x2F01\x805\x0E\x01\x08\x02\x2CDUnd dabei wollte ich der\nErste sein...\x0E\x01\x04\x02Z\n\n\n\x0E\x01\x09\x04\x2F0F\x706\x0E\x01\x08\x02\x2CDDas Leben ist ungerecht zu\nso großen Kerlen wie mir...")
          		flw_149:
/*<149>*/ 		scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
/*<269>*/ 		story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
/*<270>*/ 		story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<271>*/ 		story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<272>*/ 		story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          	  case 1:
/*<109>*/ 		switch (scene_flags[75 /* 0x8 08 */]) {
          		  case 0:
/*<111>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2F08\xD0AIch habe einen Weg zum Heim des\n<r<Donnerdrachen>> gefunden!\x0E\x01\x04\x02-\n\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F0D\x800Leider ist der Zugang zu eng für mich.\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F08\x700Irgendwas müsste doch zu machen\nsein...")
          			goto flw_149
          		  case 1:
/*<112>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 105), ('param3', 31)])
/*<105>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<275>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2F08\xD02Ohoho, Link!")
/*<276>*/ 				set_camera(5, 0)
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Was ist mit der <b<heiligen Flamme>>, von\nder du erzählt hast? Hast du sie denn\ngefunden?\n\nIch bin so neugierig! Erzähle mir doch\nbitte, was dir widerfahren ist!\n\n\n\x0E\x01\x09\x04\x2F08\x407Hmmm.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14 Eine steinharte Geschichte,\ndie du mir da erzählst!\n\n\nDu bist wirklich beeindruckend,\nLink!")
/*<358>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2F08\xD0AIch kann dir etwas von der Legende der\ndrei Drachen erzählen.~~~\n\n\nEs gibt tatsächlich einen verborgenen\nOrt in der Wüste vor uns!\n\n\nIch habe nämlich einen <r<kleinen Gang>><pling>\ngefunden!\n\n\n\x0E\x01\x09\x04\x2F00\xD00Ich glaube, dass der <r<Donnerdrache>>,\neiner der drei mystischen Drachen der\nLegende, dort sein Zuhause hat.\n\n\x0E\x01\x09\x04\x2F00\x800Ich bin mir ziemlich sicher, dass eine\nVerbindung zwischen ihm und den\nRobotern hier besteht!~~~\n\n\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDDer <r<Donnerdrache>>, die Roboter,\ndie Steine der Zeit\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CDWas für ein Mysterium!")
/*<107>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xD00Gut, dass ich dich hier antreffe,\nLink!\n\n\nErinnerst du dich? Du hast mir doch\nvor einiger Zeit ein paar Rubine für\nmeine Forschung gegeben.\x0E\x01\x04\x02\x14\n\nIch habe hier Steine der Zeit gefunden.\nJetzt habe ich finanziell ausgesorgt!\n\x0E\x01\x09\x04\x2F00\xD01Ich gebe dir das Zehnfache von dem\nzurück, was du mir gegeben hast!")
/*<106>*/ 				rupees += 100;
          				flw_285:
/*<285>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 110), ('param3', 42)])
/*<110>*/ 				scene_flags[7 'Lanayru Desert'][75 /* 0x8 08 */] = true;
          				goto flw_149
          			  case 1:
/*<273>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2F08\xD02Ohoho, Link!")
/*<274>*/ 				set_camera(5, 0)
/*<211>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Was ist mit der <b<heiligen Flamme>>, von\nder du erzählt hast? Hast du sie denn\ngefunden?\n\nIch bin so neugierig! Erzähle mir doch\nbitte, was dir widerfahren ist!\n\n\n\x0E\x01\x09\x04\x2F08\x407Hmmm.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14 Eine steinharte Geschichte,\ndie du mir da erzählst!\n\n\nDu bist wirklich beeindruckend,\nLink!")
/*<359>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2F08\xD0AIch kann dir etwas von der Legende der\ndrei Drachen erzählen.~~~\n\n\nEs gibt tatsächlich einen verborgenen\nOrt in der Wüste vor uns!\n\n\nIch habe nämlich einen <r<kleinen Gang>><pling>\ngefunden!\n\n\n\x0E\x01\x09\x04\x2F00\xD00Ich glaube, dass der <r<Donnerdrache>>,\neiner der drei mystischen Drachen der\nLegende, dort sein Zuhause hat.\n\n\x0E\x01\x09\x04\x2F00\x800Ich bin mir ziemlich sicher, dass eine\nVerbindung zwischen ihm und den\nRobotern hier besteht!~~~\n\n\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDDer <r<Donnerdrache>>, die Roboter,\ndie Steine der Zeit\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CDWas für ein Mysterium!")
          				goto flw_285
          			}
          		}
          	}
          }

          void entrypoint_400_71() {
/*<213>*/ 	start()
/*<214>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.")
/*<298>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 299), ('param3', 30)])
/*<299>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Die Symbole auf den Hebeln dieses\nHauptschalters stimmen mit denen\nder drei bereits betätigten Schalter\nüberein.\nIch gehe davon aus, dass zwischen\nihnen ein Zusammenhang besteht.")
/*<300>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 34)])
          }

          void entrypoint_400_37() {
/*<251>*/ 	start()
/*<252>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_03() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_20() {
/*< 44>*/ 	start()
/*< 63>*/ 	switch (scene_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<317>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<318>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_66:
/*< 66>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Der Tempel der Zeit ist wirklich\nwunderschön. Ich könnte jedes Mal\nbzzzen, wenn ich ihn sehe...")
          			  case 1:
/*<319>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Du suchst einen Drachen?\n\n\n\n<b<\x0E\x01\x09\x04\x1303\x00>>Der <b<Donnerdrache>> lebt südlich der\n<b<Ranelle-Höhle>>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
/*<346>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_66
          		}
          	  case 1:
/*< 94>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*< 96>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Uff, das war knapp, bzzz!\nDanke für deine Hilfe!")
/*< 93>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 45), ('param3', 33)])
/*< 45>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x900Dies ist der <b<Tempel der Zeit>>.\nAn diesem Ort befindet sich das\n<b<Zeitportal>>, das die Göttin erschuf.\n\n\x0E\x01\x09\x04\x03\x900Wir halten die Umgebung des Tempels\nsauber. Zum Zeitportal gelangst du\ndurch das Tor, bzzz!\n\n\x0E\x01\x09\x04\x03\x900Was meinst du? Du suchst einen\nanderen Weg?\n\n\n\x0E\x01\x09\x04\x03\x900Nun, der <b<Tempel der Zeit>> ist mit dem\n<b<Ranelle-Steinwerk>> durch einen\n<r<unterirdischen Gang>> verbunden.\nDas Steinwerk ist hier!")
/*<202>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 98), ('param3', 33)])
/*< 98>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 215), ('param3', 30)])
/*<215>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 90), ('param3', 6)])
/*< 90>*/ 			scene_flags[7 'Lanayru Desert'][3 /* 0x1 08 */] = true;
/*< 99>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 97), ('param3', 6)])
/*< 97>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Nanu? Diese Karte hat Fehler. Ich\nrepariere sie.")
/*< 64>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 3), ('next', 197), ('param3', 30)])
/*<197>*/ 			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 9), ('param2', 356), ('next', 67), ('param3', 15)])
/*< 67>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 200), ('param3', 34)])
/*<200>*/ 			set_camera(4, 0)
/*<199>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 65), ('param3', 17)])
/*< 65>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x900Das Ranelle-Steinwerk ist da vorne.")
/*<203>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 68), ('param3', 33)])
/*< 68>*/ 			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 6), ('param2', 0), ('next', 89), ('param3', 14)])
/*< 89>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 101), ('param3', 17)])
/*<101>*/ 			story_flags[129 /* us: 805A9AED 0x40, jp: 805ACD6D 0x40 */] = true;
/*<196>*/ 			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
/*<198>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 201), ('param3', 17)])
/*<201>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 204), ('param3', 42)])
/*<204>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', -1), ('param3', 33)])
          		  case 1:
/*< 95>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Hilfe!")
/*<127>*/ 			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
          		}
          	}
          }

          void entrypoint_400_55() {
/*<102>*/ 	start()
/*<286>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x01Gebieter, ich habe dir etwas zu\nberichten. Ich spüre <b<Zeldas>> Aura\nnicht mehr.")
/*<287>*/ 	set_camera(7, 0)
/*<288>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Als dieses Portal zerstört wurde, habe\nich Zeldas Aura plötzlich verloren.\n<pling><r<Du kannst sie mit der Aurasuche nicht\nmehr aufspüren>>.")
/*<289>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Zeldas Begleiterin sagte, du solltest\ndie Hüterin des Siegelhains treffen...\n\n\nIch schlage vor, dass du dich zum\n<b<Tempel des Siegels>> begibst.")
/*<104>*/ 	scene_flags[7 'Lanayru Desert'][57 /* 0x6 02 */] = true;
/*<219>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = false;
/*<290>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_400_72() {
/*<221>*/ 	start()
/*<222>*/ 	printf(/* textboxtype: 8, unk: 0 */ "Putzplan für den Tempel\n\x09Die Bauleitung")
          }

          void entrypoint_400_38() {
/*<253>*/ 	start()
/*<254>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Was macht ein Mensch an diesem Ort?\nSuchst du etwa Steine der Zeit, bzzz?")
/*<260>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_04() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
/*< 73>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_21() {
/*< 46>*/ 	start()
/*<320>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<321>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_47:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0 */ "...")
          		  case 1:
/*<349>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_47
          			  case 1:
/*<322>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 47), ('param3', 31)])
          				goto flw_47
          			}
          		}
          	  case 1:
          		goto flw_47
          	}
          }

          void entrypoint_400_56() {
/*<128>*/ 	start()
/*<129>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
          }

          void entrypoint_400_73() {
/*<223>*/ 	start()
/*<224>*/ 	printf(/* textboxtype: 8, unk: 0 */ "Keine Chance der Dürre!\nMachen wir Ranelle grüner!\n\x09Die Bauleitung")
          }

          void entrypoint_400_39() {
/*<255>*/ 	start()
/*<256>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_05() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
          }

          void entrypoint_400_22() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[103 /* 0xD 80 */]) {
          	  case 0:
/*< 79>*/ 		switch (scene_flags[30 /* 0x2 40 */]) {
          		  case 0:
/*<323>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<324>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_81:
/*< 81>*/ 					switch (scene_flags[8 /* 0x0 01 */]) {
          					  case 0:
/*< 83>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Dies ist das <b<Ranelle-Steinwerk>>!\nIn ihm stellen wir die Steine der Zeit\nher.\n\n\x0E\x01\x09\x04\x1303\x00Immer wieder ein toller Anblick, bzzz!")
          					  case 1:
/*< 82>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Du hast die Kombination gefunden?\nNicht zu fassen!\n\n\n\x0E\x01\x09\x04\x1303\x00Dies ist das <b<Ranelle-Steinwerk>>!\nIn ihm stellen wir die Steine der Zeit\nher.\n\n\x0E\x01\x09\x04\x1303\x00Immer wieder ein toller Anblick, bzzz!")
/*< 84>*/ 						scene_flags[7 'Lanayru Desert'][8 /* 0x0 01 */] = true;
          						flw_85:
/*< 85>*/ 						scene_flags[7 'Lanayru Desert'][35 /* 0x5 08 */] = true;
          					}
          				  case 1:
/*<325>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Du suchst einen Drachen?\n\n\n\n<b<\x0E\x01\x09\x04\x1303\x00>>Der <b<Donnerdrache>> lebt südlich der\n<b<Ranelle-Höhle>>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
/*<348>*/ 					story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          				}
          			  case 1:
          				goto flw_81
          			}
          		  case 1:
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Du hast die richtige Kombination\ngefunden? Doch damit alleine wirst du\ndas Steinwerk nicht betreten können,\nbzzz...")
          			goto flw_85
          		}
          	  case 1:
/*< 49>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Wer bist du, bzzz?\n\n\n\n\x0E\x01\x09\x04\x1303\x00Dies ist der Hauptschalter zum\nEingang des Ranelle-Steinwerks. \n\n\n\x0E\x01\x09\x04\x1303\x00Nur eine bestimmte <r<Kombination der\ndrei Zeiger >>wird dieses Tor öffnen!")
/*< 86>*/ 		scene_flags[7 'Lanayru Desert'][34 /* 0x5 04 */] = true;
          	}
          }

          void entrypoint_400_57() {
/*<130>*/ 	start()
/*<131>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00Seit Hunderten von Jahren wird diese\nGegend nach und nach zu einer Wüste.")
          }

          void entrypoint_400_74() {
/*<229>*/ 	start()
/*<230>*/ 	switch (scene_flags[11 /* 0x0 08 */]) {
          	  case 0:
          	  case 1:
/*< 62>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Dieser Roboter scheint schon sehr \nlange nicht mehr zu funktionieren.\nIch verstehe nicht, was er uns sagen\nwill...")
/*<231>*/ 		scene_flags[7 'Lanayru Desert'][11 /* 0x0 08 */] = true;
          	}
          }

          void entrypoint_400_06() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
/*< 74>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_23() {
/*< 50>*/ 	start()
/*<326>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<327>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_51:
/*< 51>*/ 			printf(/* textboxtype: 1, unk: 0 */ "...")
          		  case 1:
/*<351>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_51
          			  case 1:
/*<328>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 51), ('param3', 31)])
          				goto flw_51
          			}
          		}
          	  case 1:
          		goto flw_51
          	}
          }

          void entrypoint_400_58() {
/*<132>*/ 	start()
/*<133>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00Ich schätze, dass <b<Zelda>> hierher\ngekommen und bereits vorausgeeilt ist.")
/*<267>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<266>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_400_40() {
/*<257>*/ 	start()
/*<258>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Vor Kurzem wurde einer meiner\nFreunde entführt! Man munkelt, dass\ndiese Kerle uns die Energie abzapfen...\nWie schrecklich!")
/*<261>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_75() {
/*<291>*/ 	start()
/*<292>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 2), ('next', 293), ('param3', 40)])
/*<293>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', -1), ('param3', 6)])
          }

          void entrypoint_400_07() {
/*< 21>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_24() {
/*< 52>*/ 	start()
/*<186>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<329>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<330>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_187:
/*<187>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Du hast die Kombination gefunden?\nNicht zu fassen!")
          			  case 1:
/*<331>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Du suchst einen Drachen?\n\n\n\n<b<\x0E\x01\x09\x04\x1303\x00>>Der <b<Donnerdrache>> lebt südlich der\n<b<Ranelle-Höhle>>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
/*<350>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_187
          		}
          	  case 1:
/*<115>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*<116>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Bzzz!\nWas soll das denn?\n\n\n\x0E\x01\x09\x04\x1303\x00Glaube ja nicht, dass dich die richtige\nKombination alleine ins Steinwerk\nbringt!")
          			flw_155:
/*<155>*/ 			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
/*<157>*/ 			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
          		  case 1:
/*<180>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*< 53>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Du suchst die richtige Kombination,\num in das Ranelle-Steinwerk\neinzudringen?\n\n\x0E\x01\x09\x04\x1303\x00Du siehst komisch aus!\nKomischen Kerlen verraten wir nichts!\n\n\n\x0E\x01\x09\x04\x1303\x00Fass den Mechanismus bloß nicht an!\nUnd nicht hineinstechen, bzzz!")
          				goto flw_155
          			  case 1:
/*<181>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Du siehst verdächtig aus, bzzz!\n\n\n\n\x0E\x01\x09\x04\x1303\x00Fass den Mechanismus bloß nicht an!\nUnd nicht hineinstechen!")
          				goto flw_155
          			}
          		}
          	}
          }

          void entrypoint_400_59() {
/*<134>*/ 	start()
/*<143>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<135>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00Wir sind in der <b<Wüste >><b<Ranelle\n>>angekommen. Eine große Dürre hat\nden gesamten Landstrich vollkommen\nverändert.")
          }

          void entrypoint_400_76() {
/*<295>*/ 	start()
/*<296>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Wir sind am <b<Tempel der Zeit\n>>angekommen.\n\n\nSuche mit der Aurasuche nach dem\nEingang zur Prüfung, die du bestehen\nmusst, um die heilige Flamme zu\nerhalten.")
/*<297>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_08() {
/*< 23>*/ 	start()
/*<225>*/ 	switch (scene_flags[29 /* 0x2 20 */]) {
          	  case 0:
/*<226>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Die blauen Steine sind gefährlich und\nnix für Menschen. Rühr sie nicht an\nund störe uns nicht bei der Arbeit!")
          	  case 1:
/*< 24>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Wo kommst du denn her?\nWir sammeln hier die Steine der Zeit.\nDie tragen wir zum <b<Ranelle-Steinwerk>>.\n\n\x0E\x01\x09\x04\x1303\x00Die Steine sind gefährlich und nix\nfür Menschen. Rühr sie nicht an!")
/*<227>*/ 		scene_flags[7 'Lanayru Desert'][29 /* 0x2 20 */] = true;
/*< 75>*/ 		scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          	}
          }

          void entrypoint_400_25() {
/*< 54>*/ 	start()
/*<332>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<333>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_55:
/*< 55>*/ 			printf(/* textboxtype: 1, unk: 0 */ "...")
          		  case 1:
/*<353>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_55
          			  case 1:
/*<334>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 55), ('param3', 31)])
          				goto flw_55
          			}
          		}
          	  case 1:
          		goto flw_55
          	}
          }

          void entrypoint_400_77() {
/*<301>*/ 	start()
/*<302>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu\nberichten. Du hast die richtige\nKombination der drei Schalter\ngefunden.\nBegib dich nun zum <r<Hauptschalter>> am\n<b<Ranelle-Steinwerk>>.\n")
          }

          void entrypoint_400_09() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_26() {
/*< 56>*/ 	start()
/*<188>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<335>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<336>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_189:
/*<189>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Du hast die Kombination\nherausbekommen? Nicht zu fassen!")
          			  case 1:
/*<337>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Du suchst einen Drachen?\n\n\n\n<b<\x0E\x01\x09\x04\x1303\x00>>Der <b<Donnerdrache>> lebt südlich der\n<b<Ranelle-Höhle>>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
/*<352>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_189
          		}
          	  case 1:
/*<117>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
          		  case 0:
/*<118>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Bzzz!\nWas machst du da?\n\n\n\x0E\x01\x09\x04\x1303\x00Mit der richtigen Kombination alleine\nkommst du dort nicht rein!")
          			flw_153:
/*<153>*/ 			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
/*<158>*/ 			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
          		  case 1:
/*<182>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*< 57>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Du suchst die richtige Kombination,\num in das Ranelle-Steinwerk\neinzudringen?\n\n\x0E\x01\x09\x04\x1303\x00Du siehst komisch aus!\nKomischen Kerlen verraten wir nichts!\n\n\n\x0E\x01\x09\x04\x1303\x00Fass den Mechanismus bloß nicht an!\nUnd nicht hineinstechen, bzzz!")
          				goto flw_153
          			  case 1:
/*<183>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Du siehst verdächtig aus, bzzz!\n\n\n\n\x0E\x01\x09\x04\x1303\x00Fass den Mechanismus bloß nicht an!\nUnd nicht hineinstechen!")
          				goto flw_153
          			}
          		}
          	}
          }

          void entrypoint_400_60() {
/*<136>*/ 	start()
/*<137>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00Ich stelle eine erhöhte Konzentration\nvon gefährlichem <r<Treibsand>> fest. \nDas Gefahrenpotenzial steigt um 30 %.")
          }

          void entrypoint_400_78() {
/*<303>*/ 	start()
/*<304>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu\nberichten. Ich schätze, dass es\nnotwendig ist, dieses <r<Gerät>> mit\nStrom zu versorgen.")
          }

          void entrypoint_400_27() {
/*<119>*/ 	start()
/*<338>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<339>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_120:
/*<120>*/ 			printf(/* textboxtype: 1, unk: 0 */ "...")
          		  case 1:
/*<355>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_120
          			  case 1:
/*<340>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 120), ('param3', 31)])
          				goto flw_120
          			}
          		}
          	  case 1:
          		goto flw_120
          	}
          }

          void entrypoint_400_61() {
/*<138>*/ 	start()
/*<139>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00Ich empfehle, \x0E\x02\x04\x02\x3CD zu drücken,\num auf deiner Karte die\n<pling><r<Bodenbeschaffenheit>> zu prüfen.\x0E\x01\x11\x02\x3CD")
          }

          void entrypoint_400_79() {
/*<305>*/ 	start()
/*<306>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\n\n\nDie Übereinstimmung deiner Karte mit\nder derzeitigen Umgebung beträgt\n35 %. Der Unterschied ist beträchtlich.\n\nIch schätze, dass die WR-301-Einheit\nvorhin die Karte an das <r<frühere\nLandschaftsbild>><pling> angepasst hat.")
          }

          void entrypoint_400_10() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Die Lore ist für die Steine der Zeit\ngedacht. Menschen haben nichts da\ndrinnen verloren! Verzieh dich! Bzzz!")
/*< 69>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_28() {
/*<121>*/ 	start()
/*<190>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<341>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<342>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_191:
/*<191>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Du hast die Kombination\nherausbekommen?\nNicht zu fassen!")
          			  case 1:
/*<343>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Du suchst einen Drachen?\n\n\n\n<b<\x0E\x01\x09\x04\x1303\x00>>Der <b<Donnerdrache>> lebt südlich der\n<b<Ranelle-Höhle>>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
/*<354>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_191
          		}
          	  case 1:
/*<123>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*<124>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Bzzz!\nWas machst du da?\n\n\n\x0E\x01\x09\x04\x1303\x00Mit der richtigen Kombination alleine\nkommst du dort nicht rein!")
          			flw_154:
/*<154>*/ 			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
/*<156>*/ 			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
          		  case 1:
/*<184>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<122>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Du suchst die richtige Kombination,\num in das Ranelle-Steinwerk\neinzudringen?\n\n\x0E\x01\x09\x04\x1303\x00Du siehst komisch aus!\nKomischen Kerlen verraten wir nichts!\n\n\n\x0E\x01\x09\x04\x1303\x00Fass den Mechanismus bloß nicht an!\nUnd nicht hineinstechen, bzzz!")
          				goto flw_154
          			  case 1:
/*<185>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Du siehst verdächtig aus, bzzz!\n\n\n\n\x0E\x01\x09\x04\x1303\x00Fass den Mechanismus bloß nicht an!\nUnd nicht hineinstechen!")
          				goto flw_154
          			}
          		}
          	}
          }

          void entrypoint_400_62() {
/*<140>*/ 	start()
/*<141>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00Ich schätze, dass <b<Zelda>> hier war.\nWie ich bereits sagte, birgt diese\nGegend Gefahren für dich.\n\n\x0E\x01\x05\x04Z\x00Ich empfehle, sie bald zu treffen,\num zu erfahren, aus welchem\nGrund sie nach <b<Eldin>> gereist ist.")
          }

          void entrypoint_400_11() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_63() {
/*<144>*/ 	start()
/*<145>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\n\n\n\x0E\x01\x12\x04\x00\x02Gebieter, du stehst auf Treibsand,\nohne zu versinken. Ich empfehle dir,\ndie Karte zu konsultieren.")
/*<192>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 261), ('next', 193), ('param3', 30)])
/*<193>*/ 	printf(/* textboxtype: 2, unk: 0 */ "An dieser Stelle verlief einst eine\nStraße, die nun durch den Treibsand\nverdeckt wird.\n\nEs scheint, als könntest du hier laufen,\nohne zu versinken.\n\n\nIch empfehle, Signallichter auf der\nKarte zu setzen, um den Weg zu\nmarkieren.")
/*<212>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Ich empfehle, <b<mehrere>><pling> Signallichter\nzu setzen.")
/*<195>*/ 	story_flags[745 /* us: 805A9B29 0x02, jp: 805ACDA9 0x02 */] = true;
/*<194>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 34)])
          }

          void entrypoint_400_29() {
/*<232>*/ 	start()
/*<233>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_80() {
/*<356>*/ 	start()
/*<357>*/ 	printf(/* textboxtype: 2, unk: 0 */ "<b<Wüstengras>> kannst du in der Wüste\nRanelle und anderen Orten finden.\nEs rollt über den Boden und kann für\nallerlei Dinge verwendet werden.\nWenn du es siehst, fange es schnell mit\ndeinem <r<Schmetterlingsnetz>> ein.")
          }

          void entrypoint_400_12() {
/*< 31>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Quatsch uns nicht von der Seite an!\nDu störst uns bei der Arbeit!")
/*< 70>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_64() {
/*<146>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2F0C\xD01\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x2F00\x01Du bist doch Link?\nWusste ich's doch! \x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CDSchön, dich\nzu sehen!~~~\n\nDu kommst mir wie gerufen!~~~\n\n\n\n\x0E\x01\x06\x02\x2CD\x0E\x01\x08\x02\x1CDKomm mal rauf zu mir!")
/*<148>*/ 	scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
/*<262>*/ 	story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
/*<263>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<264>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<265>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

