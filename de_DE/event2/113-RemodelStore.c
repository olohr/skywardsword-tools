          void entrypoint_113_33() {
/*<174>*/ 	start()
/*<177>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich\nbrauche mehr <y<Eidechsenschwänze>>, um\ndieses Item zu verbessern.\n\nIn den Büchern meines Opas steht, dass\nman diese Dinger finden kann, wenn\nman echsenartige Monster besiegt.")
/*<178>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das\nich verbessern soll?")
/*<176>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 175), ('param3', 12)])
/*<175>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_34() {
/*<179>*/ 	start()
/*<182>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich\nbrauche noch mehr <y<Eldin-Erz>>, um\ndieses Item zu verbessern.\n\nIn den Büchern meines Opas steht, dass\nman dieses Zeug in einem in Flammen\ngehüllten Berg abbauen kann.")
/*<187>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das\nich verbessern soll?")
/*<181>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 180), ('param3', 12)])
/*<180>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_35() {
/*<183>*/ 	start()
/*<241>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*<242>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich\nbrauche noch mehr <y<Äonenblumen>>, um\ndieses Item zu verbessern.\n\nDu weißt schon, das sind diese Blumen,\ndie früher in der Wüste gewachsen\nsind. Du hast mir eine gebracht, um\nmeinen lieben Trapo zu reparieren!")
          		flw_188:
/*<188>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das\nich verbessern soll?")
/*<185>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 184), ('param3', 12)])
/*<184>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          	  case 1:
/*<186>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich\nbrauche noch mehr <y<Äonenblumen>>, um\ndieses Item zu verbessern.\n\nIn den Büchern meines Opas steht, dass\ndiese Dinger in einer Zeit wachsen, als\ndie Wüste noch keine Wüste war. Ob\nsie wohl heute noch existieren?")
          		goto flw_188
          	}
          }

          void entrypoint_113_01() {
          	start()
/*< 92>*/ 	switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          	  case 0:
/*< 93>*/ 		printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x03Hey! Wie geht's meinem Trapo?\nOh, kommst du etwa, weil du Arbeit\nfür mich hast?\n[1]Items\nverbessern[2]Schild\nreparieren[3-]Kein Bedarf")
          		flw_4:
/*<  4>*/ 		switch (choice(3)) {
          		  case 0:
/*< 31>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<  2>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Alles klar! Das sind die Items, die ich\nfür dich verbessern kann.")
/*<  5>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          			  case 1:
/*< 32>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CHey, Freundchen! Du hast kein Item,\ndas ich verbessern könnte... Was für\nein Jammer!\n\nWie wär's, wenn du dir drüben beim\nItem-Laden etwas kaufst?")
          			}
          		  case 1:
/*< 69>*/ 			switch (context_related2(2)) {
          			  case 0:
/*< 68>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Sag mir, welchen Schild ich für dich\nreparieren soll!")
/*< 71>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', -1), ('param3', 33)])
          			  case 1:
/*< 70>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CMoment mal! Du hast doch gar keinen\nSchild, der repariert werden müsste!\n\n\nTreibst du hier etwa deine Späße mit\nmir, Freundchen?")
          			}
          		  case 2:
/*<  3>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CWenn du nichts für mich zu tun hast,\ndann quatsch mich gefälligst nicht an!")
          		}
          	  case 1:
/*< 54>*/ 		switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          		  case 0:
/*< 51>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1104Pass gut auf meinen Trapo auf!\n\n\n\nIch glaube, dass er die Fähigkeit hat,\nGedankenwellen überall aufzuspüren.\n\n\n\x0E\x01\x09\x04\x08\x700Du kannst ihn also ganz einfach rufen,\negal wo du dich befindest!\n\n\nEr hat ein loses Mundwerk, aber er\nmacht seine Arbeit ohne jeden Makel!\n\x0E\x01\x04\x02\x1EOh, tut mir leid, dass ich so viel rede!")
/*< 55>*/ 			printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x07\x700Na, was kann ich heute für dich tun?\nEinen Schild reparieren? Ein Item\nverbessern? Sag mir einfach Bescheid!\n[1]Items\nverbessern[2]Schild\nreparieren[3-]Nichts")
          			goto flw_4
          		  case 1:
/*< 33>*/ 			switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          			  case 0:
/*< 39>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 40), ('param3', 31)])
/*< 40>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Hey, kleiner Freund! Du guckst ja\nbelämmert drein!\n\n\nWie? Du hast eine Bitte an mich?\n[1]Ganz genau.[2-]Eigentlich\nnicht.")
/*< 41>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          					  case 0:
/*< 38>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Ich brauche eine <y<Äonenblume>>, um\nmeinen <b<Trapo>> zu reparieren. Aber\nich hab keine Ahnung, wo man so\neine finden kann.\n[1]Hier, bitte![2-]Ich auch\nnicht.")
          						flw_84:
/*< 84>*/ 						switch (choice(2)) {
          						  case 0:
/*< 85>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x717Was sagst du da? Du hast so eine?!?\nDas ist ja fabulös!")
/*< 34>*/ 							switch (context_related2(1)) {
          							  case 0:
/*< 35>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CWas \x0E\x01\x06\x02\xFDCDsoll\x0E\x01\x06\x02Í denn das, Freundchen? Erst\nsagst du, dass du so eine Blume hast,\nund dann stimmt das gar nicht! Ich bin\nwirklich entsetzt!")
/*< 37>*/ 								story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
          							  case 1:
/*< 98>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 101), ('param3', 47)])
/*<101>*/ 								set_camera(4, 0)
/*<100>*/ 								OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 3), ('param2', 356), ('next', 99), ('param3', 15)])
/*< 99>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 42), ('param3', 48)])
/*< 42>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x18D-das ist... eine <y<Äonenblume>>?!?\nTatsächlich... Die Essenz der Wurzel\ngibt ein absolut hervorragendes Öl ab!\n\nUnglaublich! Damit kann ich meinen\n<b<Trapo>> endlich reparieren!\n\n\n\x0E\x01\x09\x04\x07\x700Warte einen Moment!\nIch mache mich gleich an die Arbeit!")
/*<112>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', 61), ('param3', 42)])
/*< 61>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', -1), ('param3', 33)])
          							}
          						  case 1:
/*< 86>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\x916Hm... Du hast also auch noch nie\neine <y<Äonenblume>> gesehen...")
/*< 91>*/ 							story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
/*<158>*/ 							loadzone_temp_flags[3 /* 0x1 08 */] = false;
          						}
          					  case 1:
/*< 52>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x1008Was?\x0E\x01\x04\x02( Der Roboter meines Opas?\n\n\n\n\x0E\x01\x09\x04\x00\xE00Kommst du denn etwa auch, um mich\nauszulachen, weil es mir nicht gelingt,\nihn zu reparieren?\n\nNein?\x0E\x01\x04\x02( Was sagst du? Du willst mit\nmeinem Roboter etwas aus der Welt\nunter den Wolken holen?\n\n\x0E\x01\x09\x04\x07\x700Heißt das, du glaubst mir die Sache mit\nmeinem Opa und dem Roboter?")
/*< 53>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x900Das freut mich ja, aber ich glaube\nnicht, dass ich dir eine große Hilfe\nsein werde. Der Roboter ist leider...")
/*< 94>*/ 						set_camera(3, 0)
/*< 95>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Da, sieh ihn dir an!\n\n\n\nEr heißt <b<Trapo>>. Na ja, er sieht aus wie\nein Haufen Schrott, oder?\n\n\nEs heißt, man konnte ihn einst rufen\nund allerhand Sachen von einem Ort\nzum anderen transportieren lassen.\n\nAber jetzt\x0E\x01\x06\x02\xFFCD...\x0E\x01\x06\x02Í Ach, du siehst es ja selbst.\nEr funktioniert einfach nicht mehr.")
/*< 96>*/ 						set_camera(-1, 0)
/*< 97>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\xE00Opa sagte, man könne ihn reparieren,\nwenn man den Extrakt einer Blume als\nSchmieröl verwendet. Es handelt sich\ndabei um eine <y<Äonenblume>>.\n\x0E\x01\x09\x04\x0F\xE00Aber von so was hab ich noch nie\ngehört. Geschweige denn hab ich je\nso eine Blume gesehen...\n[1]Hier, bitte![2-]Ich auch\nnicht.")
          						goto flw_84
          					}
          				  case 1:
          					flw_25:
/*< 25>*/ 					loadzone_temp_flags[4 /* 0x1 10 */] = false;
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x01Hey! Willkommen in der Werkstatt!\nIch kann hier deine Items verbessern\nund deinen Schild reparieren! Also,\nwo soll ich die Schrauben ansetzen?\n[1]Items\nverbessern[2]Schild\nreparieren[3-]Nichts")
          					goto flw_4
          				}
          			  case 1:
          				goto flw_25
          			}
          		}
          	}
          }

          void entrypoint_113_36() {
/*<189>*/ 	start()
/*<192>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich\nbrauche noch mehr <y<Bernsteinhalb-\nmonde>>, um dieses Item zu verbessern.\n\nIn den Büchern meines Opas steht, dass\ndiese Dinger an unterschiedlichen\nOrten einfach so herumliegen...")
/*<193>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das\nich verbessern soll?")
/*<191>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 190), ('param3', 12)])
/*<190>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_02() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x806Jawoll! Aber vergiss nicht, eine\nVerbesserung kann nicht mehr\nrückgängig gemacht werden!\n[1]Kein Problem![2-]Dann nicht.")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
/*<128>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 10), ('param3', 33)])
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x70EAlles klar! Dann lege ich mal los!")
/*<102>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 12), ('param3', 12)])
/*< 12>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 14), ('param3', 33)])
/*< 14>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x809So, ich bin fertig!\nHier, das gehört dir!")
/*< 26>*/ 		loadzone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 11>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE05Willst du mich auf deinen schmächtigen\nArm nehmen, Freundchen?\n\n\nSuch doch was anderes aus!")
/*<103>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 18), ('param3', 12)])
/*< 18>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          	}
          }

          void entrypoint_113_37() {
/*<194>*/ 	start()
/*<197>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich\nbrauche noch mehr <y<Finsterhalbmonde>>,\num dieses Item zu verbessern.\n\nIn den Büchern meines Opas steht, dass\nman diese Dinger in einer Welt finden\nkann, die in unserer Seele existiert.\nWas soll das denn bitte heißen?")
/*<198>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das\nich verbessern soll?")
/*<196>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 195), ('param3', 12)])
/*<195>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_03() {
/*<  9>*/ 	start()
/*<104>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 27), ('param3', 12)])
/*< 27>*/ 	switch (loadzone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 28>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x800Oh, vielen Dank!\nBis zum nächsten Mal!\x0E\x01\x09\x04\x00\x02")
/*<123>*/ 		story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
          		flw_143:
/*<143>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
/*<149>*/ 			switch (story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */]) {
          			  case 0:
          			  case 1:
/*<145>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 144), ('param3', 51)])
/*<144>*/ 				printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\n\n\nDie neue Kraft deines Schwertes\nermöglicht dir nun die Suche nach\n<r<Schätzen>> mithilfe der <r<Aurasuche>>.\n\nWähle einfach <r<Schätze>> als Ziel für die\n<r<Aurasuche>> aus, wenn du diese Funktion\nnutzen möchtest.")
/*<146>*/ 				story_flags[102 /* us: 805A9ADE 0x08, jp: 805ACD5E 0x08 */] = true;
/*<157>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 18), ('next', 147), ('param3', 56)])
/*<147>*/ 				story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */] = true;
/*<148>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 36)])
          			}
          		  case 1:
          		}
          	  case 1:
/*< 13>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x90DAch, warum denn das?\nSei kein Spielverderber!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Aber na ja, was soll's! Komm wieder,\nwenn du's dir anders überlegt hast!\x0E\x01\x09\x04\x00\x02")
          		goto flw_143
          	}
          }

          void entrypoint_113_20() {
/*< 58>*/ 	start()
/*< 60>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x12\x04\x00e\x0E\x01\x09\x04\x00\x0FPuh\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í Und fertig!\x0E\x01\x05\x04\x1E\x00")
          }

          void entrypoint_113_38() {
/*<199>*/ 	start()
/*<202>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich\nbrauche noch mehr <y<Glibber>>, um dieses\nItem zu verbessern.\n\nIn den Büchern meines Opas steht, dass\nman dieses Zeug finden kann, wenn\nman schleimige Monster besiegt.")
/*<207>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das\nich verbessern soll?")
/*<201>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 200), ('param3', 12)])
/*<200>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_04() {
/*< 15>*/ 	start()
/*<152>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Sag mir Bescheid, wenn ich noch ein\nanderes Item für dich verbessern soll!")
/*< 17>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          	  case 1:
/*<151>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Beim Wolkenvogel! Du hast ja gar kein\nItem mehr, das ich verbessern könnte.\nTja, das ist aber schade!")
          	}
          }

          void entrypoint_113_21() {
/*< 59>*/ 	start()
/*<111>*/ 	set_camera(5, 0)
/*< 62>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 22), ('next', 63), ('param3', 32)])
/*< 63>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 0), ('next', 43), ('param3', 16)])
/*< 43>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x161A\x200Danke! Ich bin wieder voller Energie!\nIch bin jederzeit bereit, wenn es etwas\nzu transportieren gibt!")
/*<118>*/ 	set_camera(8, 0)
/*<119>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 100), ('next', 113), ('param3', 16)])
/*<113>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x04\x02\x1E\x0E\x01\x09\x04\x160C\x900Hm?\x0E\x01\x04\x02\x1E Wer ist denn der grüne Wicht?")
/*<120>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 22), ('next', 44), ('param3', 50)])
/*< 44>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x110AEr spricht! Trapo spricht! Ha, ich bin\nder beste Mechaniker aller Zeiten!\n\n\nGuck mal, Trapo! Der grüne Kerl hier\nhat mir geholfen, dich zu reparieren,\nalso sei ihm dankbar, verstanden?")
/*< 64>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 100), ('next', 45), ('param3', 16)])
/*< 45>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x160B\x900Pah! Dieser Wicht? Hmmm...\n\n\n\n\x0E\x01\x09\x04\x160C\x900Also gut... \x201EVielen Dank, dass du dabei\ngeholfen hast, mich zu reparieren.\x201C\nReicht das?")
/*< 65>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 22), ('next', 46), ('param3', 50)])
/*< 46>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x952Also wirklich! Wie sprichst du denn\nmit deinem Lebensretter?\n\n\n\x0E\x01\x09\x04\x07\x700Sei ein guter Roboter und hilf ihm, ja?\nUnser Freundchen hat nämlich Arbeit\nfür dich!")
/*< 66>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 100), ('next', 47), ('param3', 16)])
/*< 47>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x160B\x900Pah! Das ist mir doch egal! Ich rede,\nwie ich will, und basta!\n\n\n\x0E\x01\x09\x04\x160C\x900Und ich lasse mich doch nicht von so\neinem Wicht herumkommandieren!")
/*< 56>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 45), ('param2', 0), ('next', 114), ('param3', 51)])
/*<114>*/ 	set_camera(6, 0)
/*< 67>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 100), ('next', 48), ('param3', 16)])
/*< 48>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x01Gebieter...\n\n\n\nEs ist möglich, den herabgestürzten\n<r<Windrad-Propeller>> für das große\nWindrad mit der <pling><r<Aurasuche>> zu finden.")
/*<136>*/ 	story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<137>*/ 	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<138>*/ 	story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<139>*/ 	story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<140>*/ 	story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<141>*/ 	story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<155>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 12), ('next', 154), ('param3', 56)])
/*<154>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<156>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Er ist jedoch zu schwer, um ihn in der\nTasche hierher tragen zu können.")
/*<125>*/ 	set_camera(11, 0)
/*<130>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 22), ('next', 115), ('param3', 17)])
/*<115>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 3), ('next', 49), ('param3', 50)])
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x161A\x200Wie? Was?\n\x0E\x01\x09\x04\x160E\x200Oh! Oooh!")
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x160E\x200P-P-Phai? Die... Phai? Oh, verehrte\nPhai, wie kann ich Euch dienen?")
/*<116>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x160C\x200Sehr\x0E\x01\x04\x02\x14 wohl, verehrte Phai!\n\n\n\n\x0E\x01\x09\x04\x160E\x200So schwer es auch sein mag, für Euch\ntrage ich es bis ans Ende der Welt!")
/*< 87>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x06\x02\xFCCD\x0E\x01\x12\x04\x00\x14...\x0E\x01\x06\x02Í")
/*<131>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 100), ('next', 88), ('param3', 16)])
/*< 88>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x01Gebieter...\n\n\n\nMithilfe des Roboters ist es möglich,\nden <b<Windrad-Propeller >>aus dem\nErdland hierher zu transportieren.\n\nBegib dich nun auf die Suche nach\ndem Propeller.")
/*< 57>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 90), ('param3', 36)])
/*< 90>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 100), ('next', 127), ('param3', 16)])
/*<127>*/ 	set_camera(11, 0)
/*< 89>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x160C\x200Also, ich helfe dir, grüner Wicht!\nFrag die verehrte Phai, wenn du\nmich brauchst. Ich kann ihre\nGedankenwellen aufspüren.\n\x0E\x01\x09\x04\x160E\x200Bitte die verehrte Phai, mich zu rufen,\nwenn ich etwas transportieren soll.")
/*< 50>*/ 	story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */] = true;
/*<135>*/ 	set_camera(8, 0)
/*<150>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 134), ('param3', 50)])
/*<134>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Wie findest du eigentlich die Sachen,\ndie unter die Wolken gestürzt sind?\n\n\nVielleicht hilft dir ja unser schrulliger\n<r<Wahrsager>> da drüben...\n\n\nEr sieht aus wie ein Hohlkopf, aber\nseine Vorhersagen sind meistens gar\nnicht mal so übel.")
/*<117>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 142), ('param3', 42)])
/*<142>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<153>*/ 	loadzone_temp_flags[3 /* 0x1 08 */] = false;
          }

          void entrypoint_113_39() {
/*<203>*/ 	start()
/*<206>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich\nbrauche noch mehr <y<Monsterklauen>>,\num dieses Item zu verbessern.\n\nIn den Büchern meines Opas steht, dass\nman diese Dinger finden kann, wenn\nman fliegende Monster besiegt. Hier\nschwirren ja nachts auch welche rum...")
/*<239>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<240>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\xE11Obwohl... Ich habe schon länger keine\nmehr hier gesehen. Warum es wohl so\nruhig geworden ist?")
          		flw_208:
/*<208>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das\nich verbessern soll?")
/*<205>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 204), ('param3', 12)])
/*<204>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          	  case 1:
          		goto flw_208
          	}
          }

          void entrypoint_113_05() {
/*< 19>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CHey, Freundchen! Du musst noch ein\npaar Schätze mehr sammeln, damit ich\ndieses Item verbessern kann.\n\n\x0E\x01\x09\x04\x07\x700Aber vielleicht findest du ja noch was\nanderes, an das ich meinen treuen\nSchraubenzieher anlegen kann?")
/*<105>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 24), ('param3', 12)])
/*< 24>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_06() {
/*< 20>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CHey, Freundchen! Ich mach das hier\nnicht umsonst! Du hast nicht genügend\nRubine für diese Verbesserung.\n\n\x0E\x01\x09\x04\x07\x700Aber vielleicht findest du ja etwas, das\ndu dir leisten kannst? Sieh dich ruhig\nnoch mal um!")
/*<106>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 23), ('param3', 12)])
/*< 23>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_40() {
/*<209>*/ 	start()
/*<212>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich\nbrauche noch mehr <y<Monsterhörner>>,\num dieses Item zu verbessern.\n\nIn den Büchern meines Opas steht, dass\nman diese Dinger finden kann, wenn\nman Monster besiegt, die mit einem\nSignalhorn ihre Handlanger rufen...")
/*<213>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das\nich verbessern soll?")
/*<211>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 210), ('param3', 12)])
/*<210>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_07() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CHey, Freundchen! Du hast kein Item,\ndas ich verbessern könnte... Was für\nein Jammer!\n\nWie wär's, wenn du dir drüben beim\nItem-Laden etwas kaufst?")
          }

          void entrypoint_113_41() {
/*<214>*/ 	start()
/*<217>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich\nbrauche noch mehr <y<Schmuckschädel>>,\num dieses Item zu verbessern.\n\nIn den Büchern meines Opas steht, dass\nman diese Dinger finden kann, wenn\nman Monster besiegt, die mit Knüppeln\noder anderen Waffen kämpfen.")
/*<218>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das\nich verbessern soll?")
/*<216>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 215), ('param3', 12)])
/*<215>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_08() {
/*< 72>*/ 	start()
/*< 77>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 73), ('param3', 12)])
/*< 73>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x800Diesen Schild hier soll ich reparieren?\nPah, nichts leichter als das. Mal sehen,\nfür <r<10 Rubine >>sieht er gleich wieder\naus wie neu!\n[1]Danke![2-]Doch nicht.")
/*< 74>*/ 	switch (choice(2)) {
          	  case 0:
/*< 81>*/ 		switch (has_rupees(10)) {
          		  case 0:
/*< 83>*/ 			rupees += -10;
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x70EAlles klar! Dann lege ich mal los!")
/*<132>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 121), ('param3', 12)])
/*<121>*/ 			story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = true;
/*< 79>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 80), ('param3', 33)])
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x809So, ich bin fertig!\nHier, das gehört dir!")
          		  case 1:
/*< 82>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CHey, Freundchen! Versuchst du etwa,\nmich übers Ohr zu hauen? Pah! Komm\nwieder, wenn du genügend Rubine hast!")
          		}
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Was? Ist dir das etwa zu teuer?\nOder willst du doch lieber einen\nanderen Schild reparieren lassen?")
/*<133>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 76), ('param3', 12)])
/*< 76>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', -1), ('param3', 33)])
          	}
          }

          void entrypoint_113_42() {
/*<219>*/ 	start()
/*<222>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich\nbrauche noch mehr <y<Schattenkristalle>>,\num dieses Item zu verbessern.\n\nIn den Büchern meines Opas steht,\ndass man diese Dinger finden kann,\nwenn man finstere Monster besiegt...")
/*<227>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das\nich verbessern soll?")
/*<221>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 220), ('param3', 12)])
/*<220>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_09() {
/*<124>*/ 	start()
/*<122>*/ 	story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
/*<107>*/ 	switch (context_related2(2)) {
          	  case 0:
/*<108>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x800Hey! Soll ich noch einen anderen Schild\nfür dich reparieren?")
/*<110>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', -1), ('param3', 33)])
          	  case 1:
/*<109>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x800Hey, Freundchen! Du hast keinen\nSchild mehr, den ich reparieren\nkönnte. Komm ein andermal wieder!")
          	}
          }

          void entrypoint_113_43() {
/*<223>*/ 	start()
/*<226>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich\nbrauche noch mehr <y<blaue Vogelfedern>>,\num dieses Item zu verbessern.\n\nIn den Büchern meines Opas steht,\ndass man sie finden kann, wenn man\nirgendwelche Vögel an einem grünen\nOrt mit einem Netz fängt...")
/*<228>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das\nich verbessern soll?")
/*<225>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 224), ('param3', 12)])
/*<224>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_44() {
/*<229>*/ 	start()
/*<232>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich\nbrauche noch mehr <y<goldene Schmuck-\nschädel>>, um dieses Item zu verbessern.\n\nIn den Büchern meines Opas steht,\ndass diese Dinger herrlich glänzen und\nsehr selten sind.")
/*<233>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das\nich verbessern soll?")
/*<231>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 230), ('param3', 12)])
/*<230>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_45() {
/*<234>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich\nbrauche noch mehr <y<Geschenke der\nGöttin>>, um dieses Item zu verbessern.\n\nIn den Büchern meines Opas steht,\ndass diese Dinger furchtbar selten\nund unheimlich wertvoll sind.")
/*<238>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das\nich verbessern soll?")
/*<236>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 235), ('param3', 12)])
/*<235>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_30() {
/*<159>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich\nbrauche noch mehr <y<Bienenlarven>>, um\ndieses Item zu verbessern.\n\nIn den Büchern meines Opas steht, dass\nman diese Dinger finden kann, wenn\nman sich an Bienenstöcken in irgend-\neinem Wald zu schaffen macht...")
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das\nich verbessern soll?")
/*<161>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 160), ('param3', 12)])
/*<160>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_31() {
/*<163>*/ 	start()
/*<166>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich\nbrauche noch mehr <y<Vogelfedern>>, um\ndieses Item zu verbessern.\n\nIn den Büchern meines Opas steht,\ndass man diese Dinger finden kann,\nwenn man Vögel an einem Ort voller\nGrün mit einem Netz fängt...")
/*<168>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das\nich verbessern soll?")
/*<165>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 164), ('param3', 12)])
/*<164>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_113_32() {
/*<169>*/ 	start()
/*<172>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich\nbrauche noch mehr <y<Wüstengras>>, um\ndieses Item zu verbessern.\n\nIn den Büchern meines Opas steht,\ndass man dieses Zeug mit einem Netz\neinfangen kann, wenn es durch die\nWüste rollt...")
/*<173>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das\nich verbessern soll?")
/*<171>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 170), ('param3', 12)])
/*<170>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

