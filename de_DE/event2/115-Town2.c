          void entrypoint_115_02() {
/*<444>*/ 	start()
/*<443>*/ 	switch (story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */]) {
          	  case 0:
/*<433>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nHast du Schätze, die du loswerden\nmöchtest?")
          		flw_495:
/*<495>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 432), ('param3', 33)])
/*<432>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x600Die folgenden Schätze kaufe ich heute.\n\n\n\n<y<\x0E\x02\x02\x04\x00\x02>>\n<y<\x0E\x02\x02\x04\x00\x03\n>><y<\x0E\x02\x02\x04\x00\x00>>\n<y<\x0E\x02\x02\x04\x00\x01>>\n\x0E\x01\x09\x04\x10\x600Willst du davon etwas verkaufen?\n[1]Ja[2-]Nein")
/*<415>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_414:
/*<414>*/ 			printf(/* textboxtype: 1, unk: 1 */ "Was möchtest du denn verkaufen?\n\n\n\nSchatz 1: <y<\x0E\x02\x02\x04\x00\x02>>\nSchatz 2: <y<\x0E\x02\x02\x04\x00\x03>>\nSchatz 3: <y<\x0E\x02\x02\x04\x00\x00>>\nSchatz 4: <y<\x0E\x02\x02\x04\x00\x01>>[1]Schatz 3[2]Schatz 4[3]Schatz 1[4]Schatz 2")
/*<413>*/ 			switch (choice(4)) {
          			  case 0:
/*<488>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 481), ('param3', 33)])
/*<481>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<489>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x600<y<\x0E\x02\x02\x04\x00\x00>>?\nFür diesen Schatz gebe ich dir pro\nStück \x0E\x02\x03\x06\x00\x00Í \x0E\x03\x04\x02\x1CD.")
          					flw_656:
/*<656>*/ 					OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 412), ('param3', 12)])
/*<412>*/ 					printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x10\x600Davon hast du \x0E\x02\x03\x06\x00\x04Í Stück.\nWie viel willst du verkaufen?\n[1]1[2]5[3]Alles[4-]Nichts")
/*<411>*/ 					switch (choice(4)) {
          					  case 0:
/*<500>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 497), ('param3', 33)])
          						flw_497:
/*<497>*/ 						switch (context_related2(0)) {
          						  case 0:
/*<409>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x900<y<\x0E\x02\x02\x04\x00\x00>> also...\n\x0E\x02\x03\x06\x00\x00Í Stück... Das macht \x0E\x02\x03\x06\x00\x01Í \x0E\x03\x04\x02\x1CD!\n[1]Verkauft![2-]Doch nicht.")
/*<408>*/ 							switch (choice(2)) {
          							  case 0:
/*<430>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x80AAbgemacht! Hier sind deine Rubine!\n")
/*<496>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 572), ('param3', 33)])
/*<572>*/ 								set_camera(6, 0)
/*<571>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 2048), ('next', 573), ('param3', 13)])
/*<573>*/ 								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 429), ('param3', 6)])
/*<429>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Danke! Schau mal wieder rein!")
/*<574>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          							  case 1:
          								flw_410:
/*<410>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\x0CNa gut. Komm wieder, wenn du es dir\nanders überlegt hast.")
          							}
          						  case 1:
/*<431>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\x409So viele hast du gar nicht!\nLass bitte solche Scherze, ja?")
          							goto flw_656
          						}
          					  case 1:
/*<499>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 497), ('param3', 33)])
          						goto flw_497
          					  case 2:
/*<498>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 497), ('param3', 33)])
          						goto flw_497
          					  case 3:
          						goto flw_410
          					}
          				  case 1:
          					flw_494:
/*<494>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\x409Was soll das denn...\n\n\n\nDu hast nicht einen einzigen Schatz\ndieser Art. Hast du mir etwas anderes\nanzubieten?\n[1]Ja[2-]Nein")
/*<480>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_414
          					  case 1:
          						goto flw_410
          					}
          				}
          			  case 1:
/*<487>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 482), ('param3', 33)])
/*<482>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<490>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x600<y<\x0E\x02\x02\x04\x00\x01>>?\nFür diesen Schatz gebe ich dir pro\nStück \x0E\x02\x03\x06\x00\x01Í \x0E\x03\x04\x02\x1CD.")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 2:
/*<486>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 483), ('param3', 33)])
/*<483>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<491>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x600<y<\x0E\x02\x02\x04\x00\x02>>?\nFür diesen Schatz gebe ich dir pro\nStück \x0E\x02\x03\x06\x00\x02Í \x0E\x03\x04\x02\x1CD.")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 3:
/*<485>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 484), ('param3', 33)])
/*<484>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<492>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x600<y<\x0E\x02\x02\x04\x00\x03>>?\nFür diesen Schatz gebe ich dir pro\nStück \x0E\x02\x03\x06\x00\x03Í \x0E\x03\x04\x02\x1CD.")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			}
          		  case 1:
          			goto flw_410
          		}
          	  case 1:
/*<493>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 442), ('param3', 31)])
/*<442>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nAh, du bist es... Was willst du?\n[1]Einkaufen![2]Äh...")
/*<441>*/ 		switch (choice(2)) {
          		  case 0:
/*<440>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\x409So, du möchtest also einkaufen.\nWürde es dir etwas ausmachen, dazu\nmorgen in meinen Laden zu kommen?")
          		  case 1:
/*<439>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x13\x609\x201EÄh\x201C bedeutet, dass du eigentlich gar \nkeinen Grund hast, hier zu sein, oder?")
/*<438>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Ach? Du findest mich unfreundlich?\nGanz anders als tagsüber?\n\n\n\x0E\x01\x09\x04\x10\x60BEs ist sehr ermüdend, den ganzen Tag\ndieses Verkäuferlächeln zu tragen,\nweißt du?\n\nBitte glaube nicht, dass das mein\nwahres Ich ist.\n\n\nAber genug davon...\n\n\n\nBist du wegen meines <r<Nachtladens\n>>hier?\n[1]Nachtladen?[2]Genau!")
/*<437>*/ 			switch (choice(2)) {
          			  case 0:
/*<436>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Ah, du bist das erste Mal hier! Hm...")
          				flw_434:
/*<434>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x600Ich <r<kaufe>> hier ganz spezielle Dinge...\nUnd zwar <r<Schätze>>.\n\n\nAber nicht einfach irgendwelche\nbeliebigen Schätze. Nein, nur die, <r<die\nich bestimme>>.\n\n\x0E\x01\x09\x04\x10\x600So, dann kommen wir doch fix zum\ngeschäftlichen Teil.")
/*<428>*/ 				story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */] = true;
          				goto flw_495
          			  case 1:
/*<435>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\x409Das hättest du ja auch gleich am\nAnfang sagen können.")
          				goto flw_434
          			}
          		}
          	}
          }

          void entrypoint_115_20() {
/*< 56>*/ 	start()
/*<535>*/ 	switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          	  case 0:
/*<173>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 25), ('param2', 6656), ('next', 57), ('param3', 13)])
/*< 57>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00TUh...\nNnn... Nnn...\nHi... Hilfe...")
/*<528>*/ 		switch (loadzone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
          		  case 1:
/*<724>*/ 			loadzone_temp_flags[17 /* 0x3 02 */] = true;
/*<529>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          		}
          	  case 1:
/*<174>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 25), ('param2', 6656), ('next', 536), ('param3', 13)])
/*<536>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x17Uuuh... <b<Cuco>>...\nIch hasse dich... Verflucht...")
          	}
          }

          void entrypoint_115_03() {
/*<426>*/ 	start()
/*<425>*/ 	switch (story_flags[298 /* us: 805A9AFD 0x10, jp: 805ACD7D 0x10 */]) {
          	  case 0:
/*<717>*/ 		switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          		  case 0:
/*<718>*/ 			switch (story_flags[810 /* us: 805A9B31 0x04, jp: 805ACDB1 0x04 */]) {
          			  case 0:
          				flw_479:
/*<479>*/ 				switch (random(2)) {
          				  case 0:
/*<478>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x01Ah, Link!\nDachte mir schon, dass du heute\nkommst. Hast du was Neues für mich?")
          					flw_476:
/*<476>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 475), ('param3', 33)])
/*<475>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Heute kaufe ich folgende Insekten:\nInsekt 1: <y<\x0E\x02\x02\x04\x00\x02>>\nInsekt 2: <y<\x0E\x02\x02\x04\x00\x00>>\nInsekt 3: <y<\x0E\x02\x02\x04\x00\x01>>\nUnd, wie sieht's aus?\n[1]Verkaufen[2-]Nicht\nverkaufen")
/*<474>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_472:
/*<472>*/ 						printf(/* textboxtype: 1, unk: 1 */ "Insekt 1: <y<\x0E\x02\x02\x04\x00\x02>>\nInsekt 2: <y<\x0E\x02\x02\x04\x00\x00>>\nInsekt 3: <y<\x0E\x02\x02\x04\x00\x01>>\n[1]Insekt 2[2]Insekt 3[3]Insekt 1")
/*<471>*/ 						switch (choice(3)) {
          						  case 0:
/*<466>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 461), ('param3', 33)])
/*<461>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<467>*/ 								printf(/* textboxtype: 1, unk: 0 */ "<y<\x0E\x02\x02\x04\x00\x00>>... Ich gebe dir\n\x0E\x02\x03\x06\x00\x00Í \x0E\x03\x04\x02\x1CD pro Exemplar.")
          								flw_657:
/*<657>*/ 								OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 458), ('param3', 12)])
/*<458>*/ 								printf(/* textboxtype: 1, unk: 1 */ "Du hast \x0E\x02\x03\x06\x00\x04Í Exemplare gefangen...\nWie viele möchtest du verkaufen?\n[1]1[2]5[3]Alle[4-]Abbrechen")
/*<457>*/ 								switch (choice(4)) {
          								  case 0:
/*<455>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 452), ('param3', 33)])
          									flw_452:
/*<452>*/ 									switch (context_related2(0)) {
          									  case 0:
/*<456>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x14\x0E\x02\x03\x06\x00\x00Í-mal <y<\x0E\x02\x02\x04\x00\x00>>, dafür\ngebe ich dir insgesamt \x0E\x02\x03\x06\x00\x01Í \x0E\x03\x04\x02\x1CD.\n[1]Verkaufen[2-]Nicht\nverkaufen")
/*<449>*/ 										switch (choice(2)) {
          										  case 0:
/*<451>*/ 											printf(/* textboxtype: 1, unk: 0 */ "Hier, bitte sehr.")
/*<445>*/ 											OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 448), ('param3', 12)])
/*<448>*/ 											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 450), ('param3', 33)])
/*<450>*/ 											printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\xFF04Ich freue mich ja so! Es kribbelt, als\nhätte ich Ameisen in der Hose!\n\n\nDanke, Link!\nBitte weiter so!")
          										  case 1:
          											flw_473:
/*<473>*/ 											printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\xFF13Schade...\n\x0E\x01\x09\x04\x00\x500Ich war schon in Insekten-Stimmung...")
          										}
          									  case 1:
/*<459>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x100So viele hast du gar nicht.\nAlso von vorn...")
          										goto flw_657
          									}
          								  case 1:
/*<454>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 452), ('param3', 33)])
          									goto flw_452
          								  case 2:
/*<453>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 452), ('param3', 33)])
          									goto flw_452
          								  case 3:
          									goto flw_473
          								}
          							  case 1:
          								flw_470:
/*<470>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\xFF0CDu siehst aus, als könntest du keiner\nFliege was zuleide tun, aber versuchst,\nmich übers Ohr zu hauen!\n\nFang zuerst Insekten, bevor\ndu versuchst, sie zu verkaufen!\n\n\n\x0E\x01\x09\x04\x01\xFF00Willst du mir andere Insekten\nverkaufen?\n[1]Ja[2-]Nein")
/*<460>*/ 								switch (choice(2)) {
          								  case 0:
          									goto flw_472
          								  case 1:
          									goto flw_473
          								}
          							}
          						  case 1:
/*<465>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 462), ('param3', 33)])
/*<462>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<468>*/ 								printf(/* textboxtype: 1, unk: 0 */ "<y<\x0E\x02\x02\x04\x00\x01>>... Ich gebe dir\n\x0E\x02\x03\x06\x00\x01Í \x0E\x03\x04\x02\x1CD pro Exemplar.")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						  case 2:
/*<464>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 463), ('param3', 33)])
/*<463>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<469>*/ 								printf(/* textboxtype: 1, unk: 0 */ "<y<\x0E\x02\x02\x04\x00\x02>>... Ich gebe dir\n\x0E\x02\x03\x06\x00\x02Í \x0E\x03\x04\x02\x1CD pro Exemplar.")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						}
          					  case 1:
          						goto flw_473
          					}
          				  case 1:
/*<477>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x01Oh, du bist es, Link.\nIrgendwie habe ich heute\nSchmetterlinge im Bauch... Haha!")
          					goto flw_476
          				}
          			  case 1:
/*<721>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 719), ('param3', 31)])
/*<719>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x01Link...\nVielleicht weißt du das ja schon...\nGeh mal nachts in die Höhle am\nWasserfall.\nDort versammeln sich <r<Himmelsfalter\n>>an einer Stelle, obwohl dort\nanscheinend nichts Besonderes ist.\n\nMich würde ja interessieren, warum sie\nsich gerade dort zusammenfinden...\n\n\nWenn du das auch interessant findest,\nsolltest du mal nachts in die Höhle\ngehen.")
/*<722>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Und, welche Insekten möchtest du mir\ndenn heute verkaufen?")
/*<720>*/ 				story_flags[810 /* us: 805A9B31 0x04, jp: 805ACDB1 0x04 */] = true;
          				goto flw_476
          			}
          		  case 1:
          			goto flw_479
          		}
          	  case 1:
/*<446>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 666), ('param3', 31)])
/*<666>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', -256), ('next', 427), ('param3', 13)])
/*<427>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xFF01Was willst du von mir,\nLink?")
/*<578>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', -256), ('next', 416), ('param3', 13)])
/*<416>*/ 		printf(/* textboxtype: 1, unk: 0 */ "<r<\x0E\x01\x09\x04\x00\x300>>Hä? Was ich mache?\n\n\n\n\x0E\x01\x09\x04ÿ\x114Ich sehe mir <r<Insekten>> an...")
/*<575>*/ 		set_camera(22, 0)
/*<577>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 418), ('param3', 6)])
/*<418>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\xFF00Käfer sind wunderbar...\nWie Bado...\nNein, noch wunderbarer.\n\nÖh...\x0E\x01\x04\x02\x1E Das soll nicht heißen, dass Bado\nweniger wert ist als ein Insekt, ähem.")
/*<576>*/ 		set_camera(-1, 0)
/*<417>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Jedenfalls <r<mag ich Insekten>>.\nIch hätte gern eine Sammlung\nverschiedenster Insekten.\n\nNein, besser noch, ich hätte gern\neine ganze Insel voller Insekten...")
/*<424>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04ÿ\xFF01Ah! Das ist überhaupt die Idee!\n\n\n\nLink, <r<wenn du Insekten\nfindest, verkauf sie mir doch!>>\n<r<\n>>\nIch zahle auch gut!\n[1]Einverstanden![2]Ähm...")
/*<423>*/ 		switch (choice(2)) {
          		  case 0:
/*<422>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\xFF04Gnihihihi...\nBald wird meine Insekten-Sammlung\nvollständig sein!")
          			flw_420:
/*<420>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Wenn du Insekten verkaufen willst,\ndann komm zu mir. Ich bin abends\nnormalerweise hier.\n\n\x0E\x01\x09\x04\x12\x100Ich kaufe aber nicht einfach wahllos\njedes Insekt... Was ich kaufe,\n<r<entscheide ich jeden Tag neu>>.\n\nUnd Bado darf nichts davon wissen!\n\n\n\nAch ja, außerdem <r<kaufe ich nur nachts>>.\nIch muss ja auf meinen Ruf achten.\n\n\n\x0E\x01\x09\x04\x03\xFF14Alles klar, Link?\nIch vertraue dir, von Insektenfreund\nzu Insektenfreund.")
/*<447>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Dann zeig mal, was du für mich hast.")
/*<419>*/ 			story_flags[298 /* us: 805A9AFD 0x10, jp: 805ACD7D 0x10 */] = true;
          			goto flw_476
          		  case 1:
/*<421>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\xFF05Was? Das sage ich Bado!")
          			goto flw_420
          		}
          	}
          }

          void entrypoint_115_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x00Chrrrrrrrrrrrr...\nPüüüüüüüüh...")
          }

          void entrypoint_115_21() {
/*< 67>*/ 	start()
/*< 68>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
/*< 85>*/ 		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          		  case 0:
/*<798>*/ 			entrypoint_115_28();
          		  case 1:
/*< 84>*/ 			switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          			  case 0:
/*<115>*/ 				switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          				  case 0:
/*<799>*/ 					switch (loadzone_temp_flags[20 /* 0x3 10 */]) {
          					  case 0:
/*<116>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x909Danke, Link! Hihihi!\nDank dir habe ich nun einen\nwundervollen Freund.\n\nAber <b<Rax>> gegenüber war das Ganze\nwohl nicht sehr nett...")
          					  case 1:
/*<800>*/ 						entrypoint_115_28();
          					}
          				  case 1:
/*< 87>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Danke, dass du mir den Brief\ngebracht hast, Link!\n\n\n\x0E\x01\x09\x04\x01\xD14Was würde wohl <b<Cuco>> denken, wenn er\ndavon wüsste...")
          				}
          			  case 1:
/*<130>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 133), ('param3', 31)])
/*<133>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 587), ('param3', 33)])
/*<587>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 12), ('param2', 1024), ('next', 73), ('param3', 13)])
/*< 73>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x14Ach...\nWie mache ich <b<Cuco>> nur auf mich\naufmerksam...")
/*<134>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 74), ('param3', 33)])
/*< 74>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x404Hallo, Link!\n\n\n\nWas... Was willst du?\n\x0E\x01\x08\x02\xFECDHast du mich etwa gerade gehört?\x0E\x01\x08\x02Í\n\n\n[1]Brief geben[2]Brief nicht geben")
/*< 75>*/ 				switch (choice(2)) {
          				  case 0:
/*< 77>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x906Ein Brief?\nFür mich\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n?\nVielleicht von... <b<Cuco>>?\n[1]Bitte sehr![2]Doch nicht...")
/*< 78>*/ 					switch (choice(2)) {
          					  case 0:
/*< 80>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\x90ADa... Danke!")
/*<592>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 3072), ('next', 593), ('param3', 13)])
/*<593>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 598), ('param3', 6)])
/*<598>*/ 						set_camera(23, 0)
/*<599>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 611), ('param3', 6)])
/*<611>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 591), ('param3', 49)])
/*<591>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x400Von... Von wem ist er?")
/*<594>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 81), ('param3', 6)])
/*< 81>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\xD00Also...\x0E\x01\x04\x02\x14\n\x0E\x01\x06\x02\xFECDDie Handschrift ist sehr krakelig...\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\x10\x400Aber egal, mal sehen, was da steht...")
/*<596>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', -256), ('next', 665), ('param3', 13)])
/*<665>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 104), ('next', 597), ('param3', 24)])
/*<597>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 600), ('param3', 6)])
/*<600>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 4608), ('next', 595), ('param3', 13)])
/*<595>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x201E...Meine Liebe für dich ist weiter als\nder Himmel und so stark wie ein\nSturm...\x201C\n\n\x0E\x01\x09\x04\x13\x1200\x201EIch möchte, dass du meine Freundin\nwirst.\nDein Ritter, <b<Rax>>\x201C\n\n\x0E\x01\x09\x04\x00\x500.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\n\n\n\n\x0E\x01\x09\x04\x01\xD00Hmmmmmm...\n<b<Rax>>... Treibt der sich nicht immer mit\n<b<Bado>> herum?\n\n\x0E\x01\x09\x04\x0C\x400Und dieser Liebesbrief...\nEr ist von eben diesem <b<Rax>>...\n\n\n\x0E\x01\x09\x04\x0B\x712Ach du liebe Güte...")
/*<588>*/ 						set_camera(-1, 0)
/*<589>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 12), ('param2', 1792), ('next', 590), ('param3', 13)])
/*<590>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 612), ('param3', 6)])
/*<612>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 82), ('param3', 16)])
/*< 82>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Aber der Brief ist so schön, so voller\nGefühl...\n\n\nVielleicht sollte ich mich wirklich mit\n<b<Rax>> verabreden.\n\n\n\x0E\x01\x09\x04\x08\x900Was rede ich da?\n\n\n\n\x0E\x01\x09\x04\x01\xD14Was würde wohl <b<Cuco>> denken, wenn er\ndavon wüsste...")
/*< 83>*/ 						story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */] = true;
          					  case 1:
/*< 79>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x912Was soll das?\nDas ist nicht lustig!")
          					}
          				  case 1:
/*< 76>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x406Hm?\nDu bist seltsam, Link...")
          				}
          			}
          		}
          	  case 1:
/*<667>*/ 		switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          		  case 0:
/*< 69>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Du, sag mal Link...\nWas hältst du so von <b<Cuco>>?\n[1]Netter Kerl.[2]Ich?")
/*< 70>*/ 			switch (choice(2)) {
          			  case 0:
/*< 71>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x70AJa, genau!\nEr ist freundlich und hilfsbereit!\nUnd männlich! Und sieht gut aus! \n\n\x0E\x01\x09\x04\x0C\x416Huch, was ist nur mit mir los...\n\n\n\n\x0E\x01\x09\x04\x08\x400Tut mir leid, dass ich dich so etwas\nKomisches gefragt habe...")
          			  case 1:
/*< 72>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x406Oh!\nAlso, äh, ich meine...\n\n\n\x0E\x01\x09\x04\x08\x416Nichts, ähem, schönes Wetter heute,\noder?")
          			}
          		  case 1:
/*<669>*/ 			switch (loadzone_temp_flags[15 /* 0x0 80 */]) {
          			  case 0:
/*<671>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1001Diese Kleidung steht dir gut!\n\n\n\n\x0E\x01\x09\x04\x00\x40AAllerdings nicht so gut wie Cuco...")
          			  case 1:
/*<668>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x404\x0E\x01\x04\x02\x14Glückwunsch, Link!\nDu bist in die Oberstufe aufgestiegen!\n\n\n\x0E\x01\x09\x04\x08\x400Dieses Jahr ist die Uniform also grün.\n\x0E\x01\x04\x02\x14Sehr elegant!\n\n\n\x0E\x01\x09\x04\n\x1000Zelda würde sich sicher freuen, dich so\nzu sehen...\n\n\n\x0E\x01\x09\x04\x00\x406Mach dir keine Sorgen! Wo auch immer\nsie sein mag, ihr geht es sicher gut und\nsie ist bald wieder hier!")
/*<670>*/ 				loadzone_temp_flags[15 /* 0x0 80 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_115_05() {
/*<  7>*/ 	start()
/*<830>*/ 	switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          	  case 0:
/*<  8>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 17>*/ 			switch (story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */]) {
          			  case 0:
/*< 22>*/ 				switch (story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */]) {
          				  case 0:
/*<104>*/ 					switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          					  case 0:
/*<579>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 3584), ('next', 105), ('param3', 13)])
/*<105>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xE08Jetzt kann ich endlich wieder schlafen!\nVielen, vielen Dank!")
          					  case 1:
/*<580>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 3584), ('next', 23), ('param3', 13)])
/*< 23>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x08Danke, danke! Ich danke dir!")
          					}
          				  case 1:
/*<123>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 160), ('param2', 1), ('next', 124), ('param3', 23)])
/*<124>*/ 					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 60)])) {
          					  case 0:
/*<126>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 19), ('param3', 31)])
/*< 19>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xE0DD-d-das ist ja... Die <y<Rassel>>!\nDu hast sie gefunden!")
/*<584>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 586), ('param3', 47)])
/*<586>*/ 						story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */] = true;
/*<712>*/ 						OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 356), ('next', 713), ('param3', 15)])
/*<713>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 714), ('param3', 17)])
/*<714>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 556), ('param3', 6)])
/*<556>*/ 						set_camera(10, 0)
/*<555>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 3328), ('next', 585), ('param3', 13)])
/*<585>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 557), ('param3', 48)])
/*<557>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 60), ('next', 20), ('param3', 6)])
/*< 20>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Gut, gut!\nUnd jetzt ins Bettchen...\x0E\x01\x05\x04x\x00")
/*<558>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 3584), ('next', 559), ('param3', 13)])
/*<559>*/ 						set_camera(29, 0)
/*< 21>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xE08Sieh dir das an...\nDas Baby scheint sich beruhigt zu\nhaben und schläft sicher bald ein.\n\nEndlich!\nEndlich kann ich wieder schlafen!\n\n\n\x0E\x01\x09\x04\x10\xE00Vielen Dank!\nDas werde ich dir nie vergessen!")
/*<103>*/ 						loadzone_temp_flags[0 /* 0x1 01 */] = true;
/*<715>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 125), ('param3', 42)])
/*<125>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 716), ('param3', 43)])
/*<716>*/ 						set_camera(30, 0)
          					  case 1:
/*<743>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 18), ('param3', 31)])
/*< 18>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\xF09Ach...\nWenn doch nur jemand diese <y<Rassel\n>>finden würde...\n\n\x0E\x01\x09\x04\x10\x00Ein <r<Vogel>> hat sie sich geschnappt und\nist <r<weggeflogen>>, aber sie muss noch\n<r<hier im Dorf>> sein.\n\n\x0E\x01\x09\x04\x0D\x00Ich werde wohl heute wieder nicht\nschlafen können...")
          					}
          				}
          			  case 1:
/*< 10>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 561), ('param3', 31)])
/*<561>*/ 				set_camera(10, 0)
/*<560>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 14), ('param2', 3072), ('next', 562), ('param3', 13)])
/*<562>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 75), ('next', 11), ('param3', 6)])
/*< 11>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x06\x02\xFCCD...\x0E\x01\x04\x02-\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x0D\x00Ach...\x0E\x01\x05\x04A\x00")
/*<563>*/ 				set_camera(-1, 0)
/*<565>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 3840), ('next', 564), ('param3', 13)])
/*<564>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Sieht aus, als bekäme ich heute wieder\nkeinen Schlaf...\n[1]Warum?[2]Erschöpft?")
/*< 12>*/ 				switch (choice(2)) {
          				  case 0:
/*< 24>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\xF06Es ist nett, dass du dir Sorgen machst...")
          					flw_26:
/*< 26>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\xF00Das Weinen meines Kindes hält mich\nNacht für Nacht vom Schlafen ab...\n\n\nNormalerweise schläft mein kleiner\nWonneproppen tief und fest, aber ohne\nSIE...\n[1]SIE?[2]Ach, die...?")
/*< 27>*/ 					switch (choice(2)) {
          					  case 0:
/*< 13>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\xF01Die <y<Rassel>>.")
          						flw_15:
/*< 15>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xF00Mit ihr schläft das Baby sofort ein.\nAber wir haben sie neulich verloren.\n\n\nEin <r<Vogel>> hat sie sich geschnappt\nund ist damit <r<weggeflogen>>. Er dachte\nwohl, sie wäre etwas Essbares.\n\n\x0E\x01\x09\x04\x0E\xF00Natürlich konnte er sie nicht fressen,\nalso denke ich, dass sie noch <r<hier im\nDorf sein muss>>.\nAber ich konnte sie nicht finden...\n\x0E\x01\x09\x04\x00\x09Vielleicht findet sie ja jemand anderes\nfür mich...")
/*< 16>*/ 						story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */] = true;
          					  case 1:
/*< 14>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\xF04Ah, du weißt Bescheid. Genau, die\n<y<Rassel>>.")
          						goto flw_15
          					}
          				  case 1:
/*< 25>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\xF07Das hört man doch, oder?")
          					goto flw_26
          				}
          			}
          		  case 1:
          			flw_9:
/*<  9>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Uhuhuhu, dieses Kind will\neinfach nicht schlafen...\nWas mache ich nur...\n[1]Schlimm...[2]Und die Mama?")
/*<127>*/ 			switch (choice(2)) {
          			  case 0:
/*<128>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Das kann man wohl sagen!\nAber ist dieses Baby trotzdem nicht\neinfach unglaublich süß?\n\nWenn du selbst mal Kinder hast, wirst\ndu das verstehen! ")
          			  case 1:
/*<129>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Ach, meine Frau\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\nSie arbeitet den ganzen Tag im Laden\nund braucht ihren Schlaf.\n\n\x0E\x01\x09\x04\x0D\xF06Wenn sie nicht ihren Schlaf bekommt...\nÄhm...")
          			}
          		}
          	  case 1:
          		goto flw_9
          	}
          }

          void entrypoint_115_22() {
/*< 88>*/ 	start()
/*< 89>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*< 91>*/ 		switch (story_flags[556 /* us: 805A9B16 0x20, jp: 805ACD96 0x20 */]) {
          		  case 0:
/*< 98>*/ 			switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          			  case 0:
/*<794>*/ 				switch (loadzone_temp_flags[20 /* 0x3 10 */]) {
          				  case 0:
/*< 99>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\x401Danke, Link!\nDank dir habe ich nun eine wundervolle\nFreundin!")
          				  case 1:
/*<796>*/ 					entrypoint_115_27();
          				}
          			  case 1:
/*<547>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 3072), ('next', 548), ('param3', 13)])
/*<548>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x18Äh... Also...\n\n\n\n\x0E\x01\x09\x04\x0F\x1100Angenommen, du hättest ein Interesse\ndaran, zu wissen, wie sich das Ganze\nentwickelt, dann würdest du sie einfach\nfragen, oder?\n\n\x0E\x01\x09\x04\x11\xE00Quatsch, mich interessiert das nicht,\nich interessiere mich nur für das\nPhänomen Liebe an sich...")
          			}
          		  case 1:
/*<132>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 546), ('param3', 31)])
/*<546>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 1024), ('next', 92), ('param3', 13)])
/*< 92>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Na, was gibt's Neues, Link?")
/*<545>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\xC09Was sagst du da?\n<b<Giruna>> hat einen Liebesbrief\nbekommen?\n\n\x0E\x01\x09\x04\x0F\x1100Das...\nAlso...\nWie schön für sie...\n\n\x0E\x01\x09\x04\x0C\xC54Und...\nWeißt du zufällig, was sie vor hat?\n[1]Sich verabreden...[2]Äh...")
/*< 93>*/ 			switch (choice(2)) {
          			  case 0:
/*< 94>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\xE53Was?!?\nDas ist nicht gut!")
          				flw_96:
/*< 96>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\xE09Was soll's!\n<b<Giruna>> und ich sind sowieso nur\nFreunde, mehr nicht...\n\nSie kann sich verabreden, mit wem sie\nwill, ich halte mich da raus.\n\n\n\x0E\x01\x09\x04\x0C\xC00Aber was ist denn mit Moral und\nAnstand an der Ritterschule?\n\n\n\x0E\x01\x09\x04\x08\xC00Ist es andererseits nicht die ideale\nLiebe, zu lieben, wen man will? Ist eine\nLiebe, die diese Bedingung nicht\nerfüllt, überhaupt Liebe?\n\x0E\x01\x09\x04\x0B\xC00Es ist meine Pflicht, ihr Recht darauf\nzu lieben, wen sie will, zu beschützen!\n\n\n\x0E\x01\x09\x04\x11\xE00Aber auch ich habe ein Recht darauf,\nzu lieben, wen ich möchte! \n\n\n\x0E\x01\x09\x04\x0C\xC1BOder doch nicht? Link?!?\n[1]Weiß nicht...[2]Liebst du sie?")
/*<119>*/ 				switch (choice(2)) {
          				  case 0:
/*<121>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\x1152Ja, vielleicht ist es ein bisschen mit mir\ndurchgegangen...")
          					flw_122:
/*<122>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x1117Na ja...\n\n\n\n\x0E\x01\x09\x04\x0F\xC00Könntest du sie vielleicht fragen, was\nsie tun wird?")
/*< 97>*/ 					story_flags[556 /* us: 805A9B16 0x20, jp: 805ACD96 0x20 */] = true;
/*<114>*/ 					story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
          				  case 1:
/*<120>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\xE53Was redest du für einen Unsinn,\nLink!\n\n\n\x0E\x01\x09\x04\x12\xC00Es will mir nicht in den Sinn, wie du auf\nsolch abwegige Gedanken kommst!")
          					goto flw_122
          				}
          			  case 1:
/*< 95>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\x1118Du weißt es nicht...\nAber... Aber ich muss es wissen...")
          				goto flw_96
          			}
          		}
          	  case 1:
/*<814>*/ 		entrypoint_115_27();
          	}
          }

          void entrypoint_115_06() {
/*<253>*/ 	start()
/*<252>*/ 	switch (story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */]) {
          	  case 0:
/*<744>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 256), ('param3', 31)])
/*<256>*/ 		switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          		  case 0:
/*<257>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x1602Ich werde alles geben, um stärker zu\nwerden! Komm bald mal wieder und\nsieh dir an, was ich erreicht habe!")
          		  case 1:
/*<258>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<278>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 12), ('next', 277), ('param3', 32)])
/*<277>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', -256), ('next', 260), ('param3', 13)])
/*<260>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x11Uff... uff...\nIst das da etwa ein <y<Ausdauertrank>>,\nLink?\n\nWürdest du mir den eventuell geben?\n[1]Ja[2-]Nein")
          				flw_261:
/*<261>*/ 				switch (choice(2)) {
          				  case 0:
/*<263>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BWirklich?!? Danke!\nDu hast etwas gut bei mir!")
/*<266>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3092), ('param2', 7936), ('next', 271), ('param3', 13)])
/*<271>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 270), ('param3', 6)])
/*<270>*/ 					set_camera(5, 0)
/*<267>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 135), ('next', 265), ('param3', 6)])
/*<265>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 279), ('param3', 33)])
/*<279>*/ 					set_camera(-1, 0)
/*<280>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 264), ('param3', 6)])
/*<264>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x10Ah! Ja!\nDie Müdigkeit verschwindet!")
/*<268>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', -256), ('next', 269), ('param3', 13)])
/*<269>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x12Aber...\nAber schaffe ich es so, jemals stark zu\nwerden?\n[1]Liegt an dir.[2]Klar!")
/*<281>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3079), ('param2', -256), ('next', 291), ('param3', 13)])
/*<291>*/ 					switch (choice(2)) {
          					  case 0:
/*<292>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Ja! Genau so ist es!\nIch muss mich nur mächtig anstrengen!\nIch sollte nicht nur jammern, sondern\ndie Sache einfach angehen!")
          						flw_294:
/*<294>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1800Danke, Link!\nIch werde alles geben, um stärker zu\nwerden!\n\n\x0E\x01\x09\x04\x15\x1800Ich trainiere weiter!\nKomm bald mal wieder und sieh dir an,\nwas ich erreicht habe!")
/*<295>*/ 						story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */] = true;
/*<213>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          					  case 1:
/*<293>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1609Ja... Also...\nWenn du so fest daran glaubst, dann\nkönnte ich es ja vielleicht schaffen...")
          						goto flw_294
          					}
          				  case 1:
/*<262>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x11Oh... Ich hätte nicht fragen sollen...")
/*<288>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', 3072), ('next', 287), ('param3', 13)])
/*<287>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03M-m-mach dir keine Sorgen! Ich\ntrainiere weiter!")
          				}
          			  case 1:
/*<275>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 12), ('next', 274), ('param3', 32)])
/*<274>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', -256), ('next', 276), ('param3', 13)])
/*<276>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x11Puh... puh...\nEs geht einfach nicht mehr...\n\n\nHätte ich einen <r<Trank, der mir\nAusdauer verleiht>>, dann könnte ich\nnoch weitertrainieren...")
/*<290>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3079), ('param2', -256), ('next', 289), ('param3', 13)])
/*<289>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Nein!\nIch darf nicht aufgeben!\n\n\nIch werde allein versuchen, es zu\nschaffen!")
          			}
          		}
          	  case 1:
/*<259>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 273), ('param3', 31)])
/*<273>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 12), ('next', 272), ('param3', 32)])
/*<272>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', 6912), ('next', 254), ('param3', 13)])
/*<254>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x10Uff... Huh... Gnrf...\n\n\n\n\x0E\x01\x09\x04\x10\x1600Oh, Link!\nGuten Abend!\n\n\nWas ich hier mache? Ich trainiere, wie\ndu sehen kannst.\n\n\nIch kann nicht einmal ein einziges Fass\ntragen. Das will ich ändern, denn ich\nwäre gern ein bisschen stärker.\n\nAber das Ganze ist mir peinlich,\nverstehst du? Deswegen trainiere ich\nnachts, wenn mich keiner sieht.\n\n\x0E\x01\x09\x04\x00\x1711Aber es nützt alles nichts...\nIch bin zu erschöpft, ich glaube, ich\ngebe auf...")
/*<255>*/ 		story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */] = true;
/*<282>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<284>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BOh! Ist das etwa ein <y<Ausdauertrank>>,\nLink?\n\n\nWürdest du mir den... geben?\n[1]Ja[2-]Nein")
          			goto flw_261
          		  case 1:
/*<283>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Ach, hätte ich nur einen <r<Trank, der mir\nAusdauer verleiht>>...\nDann könnte ich weitermachen...")
/*<286>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3079), ('param2', -256), ('next', 285), ('param3', 13)])
/*<285>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Nein!\nIch darf nicht aufgeben!\n\n\nIch werde allein versuchen, es zu\nschaffen!")
          		}
          	}
          }

          void entrypoint_115_23() {
/*<530>*/ 	start()
/*<531>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
/*<680>*/ 		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          		  case 0:
/*<681>*/ 			switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
          			  case 0:
          				flw_534:
/*<534>*/ 				entrypoint_115_24();
          			  case 1:
/*<682>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x08Was willst du, Link?!?\nNachts kann ich nur an Giruna denken!\n\n\nWenn du mir was zu sagen hast, komm\ntagsüber!")
          			}
          		  case 1:
          			goto flw_534
          		}
          	  case 1:
/*<532>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x10Hehehe...\nIch habe keine Angst vor <b<Bado>>...\nDieses Zimmer gehört jetzt mir!")
          	}
          }

          void entrypoint_115_07() {
/*<298>*/ 	start()
/*<299>*/ 	switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          	  case 0:
/*<745>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 302), ('param3', 31)])
/*<302>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<304>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Link!\nIch werde so stark sein, dass du deinen\nAugen nicht trauen wirst!\n\nKomm bald wieder und sieh selbst!")
          		  case 1:
/*<300>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<332>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 12), ('next', 331), ('param3', 32)])
/*<331>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', -256), ('next', 305), ('param3', 13)])
/*<305>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x10Huh... Nnngh...\n\n\n\nAh, Link!\nGibst du mir etwas von deinem\n<y<Ausdauertrank>>?\n[1]Ja[2-]Nein")
          				flw_306:
/*<306>*/ 				switch (choice(2)) {
          				  case 0:
/*<308>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BJa? Danke!\nIch bin dann mal so frei...")
/*<333>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3092), ('param2', 7936), ('next', 312), ('param3', 13)])
/*<312>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 311), ('param3', 6)])
/*<311>*/ 					set_camera(5, 0)
/*<310>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 135), ('next', 309), ('param3', 6)])
/*<309>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 334), ('param3', 33)])
/*<334>*/ 					set_camera(-1, 0)
/*<335>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 345), ('param3', 6)])
/*<345>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x10Oh ja, ich fühle mich wie neu geboren!\nMeine Müdigkeit ist verflogen!")
/*<347>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', -256), ('next', 346), ('param3', 13)])
/*<346>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x12...Manchmal mache ich mir Sorgen.\nWird das ewig so weitergehen?\n\n\nWie lange muss ich so weitermachen,\nbis ich stark werde? Was denkst du,\nLink?\n\nWie viele Liegestütze muss ich wohl\nnoch machen?\n[1]Tausend![2]Unwichtig!")
/*<348>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3073), ('param2', 2048), ('next', 349), ('param3', 13)])
/*<349>*/ 					switch (choice(2)) {
          					  case 0:
/*<350>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00SS-s-so... So viele?\n\n\n\n\x0E\x01\x09\x04\x10\xE00Der Weg zu Stärke scheint mir steil und\nsteinig zu sein...")
          						flw_352:
/*<352>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x1600Es ist alles klar!\nIch werde stark sein!\n\n\n\x0E\x01\x09\x04\x00\x1800Komm bald wieder und sieh dir an, was\nich erreicht habe!")
/*<353>*/ 						story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */] = true;
/*<354>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          					  case 1:
/*<351>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Unwichtig?\nAber natürlich! Das ist es! Genial!\n\n\n\x0E\x01\x09\x04\x07\x800Ich muss so viele Liegestütze machen,\ndass ich vergesse, wie viele es waren!\nDie Masse macht's!")
          						goto flw_352
          					}
          				  case 1:
/*<307>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x11Oh...\nTut mir leid, das war sehr aufdringlich\nvon mir.")
/*<344>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3079), ('param2', -256), ('next', 343), ('param3', 13)])
/*<343>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Kein Problem!\nIch schaffe das allein!")
          				}
          			  case 1:
/*<330>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 12), ('next', 329), ('param3', 32)])
/*<329>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', -256), ('next', 303), ('param3', 13)])
/*<303>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x11Puh... puh...\nEs geht einfach nicht mehr...\n\n\nHätte ich einen <r<Trank, der mir\nAusdauer verleiht>>, dann könnte ich\nnoch weitertrainieren...")
/*<342>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3079), ('param2', -256), ('next', 341), ('param3', 13)])
/*<341>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Nein, nein!\nIch darf mich nicht immer nur auf\nandere verlassen!\n\nIch werde es allein schaffen!")
          			}
          		}
          	  case 1:
/*<301>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 328), ('param3', 31)])
/*<328>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 12), ('next', 327), ('param3', 32)])
/*<327>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', 6912), ('next', 296), ('param3', 13)])
/*<296>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x10Puh... pfff...\nGuten Abend, Link!\n\n\n\x0E\x01\x09\x04\xC10\xFF00Ich habe weiter trainiert, aber ich\nkomme irgendwie nicht voran...\n\n\nVielleicht bin ich einfach wieder zu\nschlapp...")
/*<297>*/ 		story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */] = true;
/*<336>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<338>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BAh!\nIst das da etwa ein <y<Ausdauertrank,\n>>Link?\n\nWürdest du mir davon etwas abgeben?\n[1]Ja[2-]Nein")
          			goto flw_306
          		  case 1:
/*<337>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Sag mal, Link...\nHast du vielleicht noch so einen\n<y<Ausdauertrank>>?")
/*<340>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3079), ('param2', -256), ('next', 339), ('param3', 13)])
/*<339>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Nein, nein!\nIch darf mich nicht immer nur auf\nandere verlassen!\n\nIch werde es allein schaffen!")
          		}
          	}
          }

          void entrypoint_115_24() {
/*<533>*/ 	start()
          	flw_58:
/*< 58>*/ 	switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          	  case 0:
/*< 61>*/ 		switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
          		  case 0:
/*< 66>*/ 			printf(/* textboxtype: 1, unk: 0 */ "")
          		  case 1:
/*<679>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 686), ('param3', 31)])
/*<686>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 687), ('param3', 47)])
/*<687>*/ 			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 13), ('param2', 356), ('next', 689), ('param3', 15)])
/*<689>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 690), ('param3', 16)])
/*<690>*/ 			set_camera(27, 0)
/*<829>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 688), ('param3', 33)])
/*<688>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 568), ('param3', 48)])
/*<568>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 3072), ('next', 59), ('param3', 13)])
/*< 59>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Link!\nHast du ihr meinen Brief gegeben...\n[1]Ja, also...[2]Na ja...")
/*< 60>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x1F1DNein... Nein...\nDu hast ihn dem Verrückten... auf dem\nKlo...")
          				flw_64:
/*< 64>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x1F00Ich habe dir gesagt, dass du das nicht\ntun darfst! So oft habe ich es gesagt!\n\n\n\x0E\x01\x09\x04\x1A\x1F17Leute wie dich, die der Liebe anderer\nim Weg stehen, sollten von einem Vogel\ngetreten werden!\n\nIch bin ab jetzt nicht mehr dein\nFreund! Oh, wie ich dich hasse,\nLink!")
/*<692>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 7936), ('next', 683), ('param3', 13)])
/*<683>*/ 				OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 14), ('param2', 0), ('next', 691), ('param3', 14)])
/*<691>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1F18Wäääääääääääääääääääh!!!")
/*<697>*/ 				OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 12), ('param2', 256), ('next', 698), ('param3', 15)])
/*<698>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 696), ('param3', 6)])
/*<696>*/ 				set_camera(28, 0)
/*<695>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 1024), ('next', 693), ('param3', 13)])
/*<693>*/ 				OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 12), ('param2', 0), ('next', 65), ('param3', 14)])
/*< 65>*/ 				story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */] = true;
/*<707>*/ 				story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
/*<708>*/ 				story_flags[771 /* us: 805A9B2A 0x08, jp: 805ACDAA 0x08 */] = true;
/*<694>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          			  case 1:
/*< 63>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\x1F12D-d-du...\nDu machst Witze...\nEs muss ein Witz sein...\nEs kann nur ein Witz sein...\n\x0E\x01\x09\x04\x11\x1B00Du hast ihn wirklich... dem Verrückten\nauf dem Klo gegeben?")
          				goto flw_64
          			}
          		}
          	  case 1:
/*<821>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 113), ('param3', 31)])
/*<113>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<541>*/ 			switch (story_flags[664 /* us: 805A9B1F 0x40, jp: 805ACD9F 0x40 */]) {
          			  case 0:
/*<570>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 6912), ('next', 544), ('param3', 13)])
/*<544>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0FJetzt weiß <b<Giruna>>, wie ich für sie\nempfinde...\n\n\n\x0E\x01\x08\x02\xFFCD\x0E\x01\x09\x04\x01\x1F00Ich bin so aufgeregt...")
          			  case 1:
/*<567>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 24), ('param2', 6912), ('next', 542), ('param3', 13)])
/*<542>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x13Was?!?\nDu hast <b<Giruna>> meinen Brief also\ngegeben?\n\n\x0E\x01\x09\x04\x01\x2500Und was jetzt?\nWas mach ich jetzt?\nIch muss sie wohl um eine Antwort\nbitten...\n\x0E\x01\x08\x02\xFFCD\x0E\x01\x09\x04\x01\x1F00Aber... Das ist... so peinlich...")
/*<543>*/ 				story_flags[664 /* us: 805A9B1F 0x40, jp: 805ACD9F 0x40 */] = true;
          			}
          		  case 1:
/*<566>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 5120), ('next', 40), ('param3', 13)])
/*< 40>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Also, Link, du gibst den\nBrief dem Mädchen mit der <r<runden\nMütze>>.\n\n\x0E\x01\x09\x04\x01\x1B00Und auf gar keinen Fall gibst du diesen\nBrief diesem <r<Verrückten da auf dem\nKlo>>! Schwöre es!")
          		}
          	}
          }

          void entrypoint_115_25() {
/*<239>*/ 	start()
/*<243>*/ 	switch (story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */]) {
          	  case 0:
/*<248>*/ 		switch (story_flags[393 /* us: 805A9B0C 0x08, jp: 805ACD8C 0x08 */]) {
          		  case 0:
/*<250>*/ 			switch (temp_flags[53 /* 0x7 20 */]) {
          			  case 0:
/*<251>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Uoooooooooooh...")
          			  case 1:
/*<249>*/ 				printf(/* textboxtype: 1, unk: 0 */ "3985... 3986... 3987... 3988...")
/*<844>*/ 				temp_flags[53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*<245>*/ 			switch (temp_flags[53 /* 0x7 20 */]) {
          			  case 0:
/*<247>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Nuoooh... Gnuoooh...")
          			  case 1:
/*<244>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x06\x02\xFECD55... 56... 57...")
/*<843>*/ 				temp_flags[53 /* 0x7 20 */] = true;
          			}
          		}
          	  case 1:
/*<242>*/ 		switch (temp_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*<246>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Nuh... oh... oh...")
          		  case 1:
/*<240>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x06\x02\xFCCD5... 6... 7...")
/*<241>*/ 			temp_flags[53 /* 0x7 20 */] = true;
          		}
          	}
          }

          void entrypoint_115_08() {
/*<313>*/ 	start()
/*<314>*/ 	switch (story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */]) {
          	  case 0:
/*<326>*/ 		switch (loadzone_temp_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<321>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\x180AIch trainiere weiter!\nAls Nächstes will ich ein Fass mit nur\neinem Finger hochheben!")
          		  case 1:
/*<322>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\x180AHmpf...\nIch könnte immer so weitermachen!")
          		}
          	  case 1:
/*<323>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 315), ('param3', 31)])
/*<315>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\x190AHmpf...\nIch könnte noch ewig so weitermachen!\n\n\n\x0E\x01\x09\x04\x01\x1600Hey, Link!\nGut, dass du hier bist. Ich wollte dich\netwas fragen.\n\n\x0E\x01\x09\x04\x07\x1800Also, ich habe jetzt mal wieder\nversucht, ein Fass hochzuheben...\nUnd es ging mit nur einer Hand!\n\n\x0E\x01\x09\x04\x00\x1600Das heißt doch, dass ich stärker\ngeworden bin, oder?\n\n\nLink, bin ich jetzt stärker?\n[1]Zu stark...[2]Ja!")
/*<317>*/ 		switch (choice(2)) {
          		  case 0:
/*<319>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x1809Na, jetzt übertreibst du.\nAber ich bin trotzdem glücklich.")
          			flw_320:
/*<320>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1600Ich habe es nur dank dir so weit\ngeschafft, Link.\n\n\n\x0E\x01\x09\x04\x01\x1900Ohne dich hätte ich einfach\naufgegeben.\n\n\n\x0E\x01\x09\x04\x07\x180BIch danke dir von ganzem Herzen,\nLink!")
/*<324>*/ 			loadzone_temp_flags[1 /* 0x1 02 */] = true;
/*<316>*/ 			story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */] = true;
/*<325>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 43)])
          		  case 1:
/*<318>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x180BWirklich? Danke!\nIch bin so glücklich...")
          			goto flw_320
          		}
          	}
          }

          void entrypoint_115_09() {
/*<175>*/ 	start()
/*<212>*/ 	switch (story_flags[383 /* us: 805A9B0D 0x02, jp: 805ACD8D 0x02 */]) {
          	  case 0:
/*<215>*/ 		switch (story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */]) {
          		  case 0:
/*<788>*/ 			switch (temp_flags[11 /* 0x0 08 */]) {
          			  case 0:
/*<789>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\xE09Danke, Link!\nDanke, dass du dich um mein\nSchwesterchen gekümmert hast! Das\nwerde ich nie vergessen!")
          			  case 1:
/*<772>*/ 				entrypoint_115_26();
          			}
          		  case 1:
/*<742>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 731), ('param3', 31)])
/*<731>*/ 			switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          			  case 0:
/*<214>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\xE09Link! Mein Schwesterchen\nist wieder da!\n\n\n\x0E\x01\x09\x04\n\x400Ich hatte mir schon das Schlimmste\nausgemalt! Ich bin so erleichtert!\n\n\n\x0E\x01\x09\x04\x0B\x400Danke, Link!")
/*<216>*/ 				story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<787>*/ 				temp_flags[11 /* 0x0 08 */] = true;
/*<732>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 43)])
          			  case 1:
/*<734>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\xE09Link!\nMein Schwesterchen ist wieder da!\n\n\n\x0E\x01\x09\x04\n\x400Ich hatte mir schon das Schlimmste\nausgemalt! Ich bin so erleichtert!\n\n\nWas sagst du? Du hast ihr die\nVogelmedizin gebracht?\x0E\x01\x04\x02\x14\x0E\x01\x09\x04\x0B\x400 Vielen Dank!\n\n\nBitte nimm das hier als kleines Zeichen\nmeines Dankes!")
/*<738>*/ 				switch (is_adventure_pouch_full()) {
          				  case 0:
/*<739>*/ 					switch (is_item_check_full()) {
          					  case 0:
/*<740>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\xA05Eigentlich wollte ich dir eine <y<leere\nFlasche>> geben, aber deine Tasche und\ndas Item-Lager sind schon voll.\n\nKomm noch mal zu mir, wenn du\nwieder Platz in deiner Tasche oder im\nItem-Lager hast.")
          					  case 1:
          						flw_735:
/*<735>*/ 						story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
/*<736>*/ 						story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<733>*/ 						give_item(153 0x99);
/*<786>*/ 						temp_flags[11 /* 0x0 08 */] = true;
/*<812>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x400Ich bin sicher, dass du irgendwie\nVerwendung dafür finden wirst.\nNoch mal vielen Dank!")
/*<813>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 43)])
          					}
          				  case 1:
          					goto flw_735
          				}
          			}
          		}
          	  case 1:
/*<176>*/ 		switch (story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */]) {
          		  case 0:
/*<741>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 183), ('param3', 31)])
/*<183>*/ 			switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          			  case 0:
/*<200>*/ 				switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          				  case 0:
/*<204>*/ 					switch (adventure_pouch_has(5 0x0005)) {
          					  case 0:
/*<205>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x409Worauf wartest du, Link?\nBring diese <y<Pilzsporen>><y< >>schnell zu\nmeinem Schwesterchen!\n\n\x0E\x01\x09\x04\n\x400Ich verlass mich auf dich!")
          					  case 1:
/*<201>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x406Was? Was hast du denn mit den\n<y<Pilzsporen>> gemacht? Hast du sie noch\nnicht zu meinem Schwesterchen\ngebracht?\n\x0E\x01\x09\x04\n\x400Wenn du die <y<Pilzsporen >>verloren hast,\n<r<findest du bei Pilzen neue>>.\n\n\nIch verlass mich auf dich,\nLink!")
          					}
          				  case 1:
/*<220>*/ 					switch (story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */]) {
          					  case 0:
/*<221>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x409Wenn du Platz in deiner Tasche hast,\ndann kannst du ihr das hier bringen!\n\n\n\x0E\x01\x09\x04\n\x400Diese <y<Pilzsporen >>sollten ihrem Vogel\nhelfen.")
          						flw_231:
/*<231>*/ 						switch (is_adventure_pouch_full()) {
          						  case 0:
/*<228>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x50DDu trägst zu viel mit dir herum!\n\x0E\x01\x09\x04\x00\x400Schaff ein bisschen Platz in deiner\nTasche und komm dann wieder!")
/*<229>*/ 							story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */] = true;
          						  case 1:
/*<746>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = true;
/*<230>*/ 							give_item(55 0x37);
/*<747>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = false;
/*<232>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x404Damit geht es ihrem Vogel bald besser\nund er kann aus eigener Kraft nach\nHause fliegen. \x0E\x01\x09\x04\x00\xC00Bring den Trank zu\nmeinem Schwesterchen!\n\x0E\x01\x09\x04\x00\x400Die <r<leere Flasche >>kannst du dann\nbehalten!\n\n\nIch verlass mich auf dich,\nLink!")
/*<227>*/ 							story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
          						}
          					  case 1:
          						flw_199:
/*<199>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x50DWas?!?\nDu hast mein Schwesterchen gesehen?\nIhr Vogel ist verletzt und kann nicht \nfliegen?\n\x0E\x01\x09\x04\n\xC00Oh nein!\nBring ihr schnell das hier!\n\n\n\x0E\x01\x09\x04\x00\x400Diese <y<Pilzsporen>> sollten ihrem Vogel\nhelfen!")
          						goto flw_231
          					}
          				}
          			  case 1:
/*<184>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\xC12Oh oh oh...\nIch mach mir solche Sorgen!\n\n\nSie hat sonst immer eine <r<Flasche>> mit\nMedizin dabei, falls ihr Vogel sich\nverletzt...\n\nUnd heute hat sie sie vergessen...")
/*<835>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 836), ('param3', 33)])
/*<836>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x400Mein Schwesterchen wollte sich diese\n<b<bunte, runde Insel>> ansehen. Das heißt,\nsie müsste irgendwo im <r<Südwesten>> sein.")
/*<837>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 838), ('param3', 17)])
/*<838>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x400Bitte such mein Schwesterchen für\nmich, Link!")
          			}
          		  case 1:
/*<202>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 177), ('param3', 31)])
/*<177>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\xC12Oh oh oh oh oh...\nWas mach ich nur? Was mach ich nur?\n[1]Was ist los?[2]Beruhig dich...")
/*<178>*/ 			switch (choice(2)) {
          			  case 0:
/*<179>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x411Ach, Link.\nHast du kurz Zeit, mir zuzuhören?\nDanke.")
          				flw_181:
/*<181>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x400Es ist so...\nMein <r<Schwesterchen>> hat einen Ausflug\ngemacht und ist noch nicht wieder\nzurückgekehrt.\nSie ist schon zu lang weg, also habe ich\nsie gesucht, aber keine Spur von ihr...\n\n\n\x0E\x01\x09\x04\x0B\x500Wenn ihr nun etwas passiert ist!\nIch mache mir solche Sorgen!")
/*<198>*/ 				switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          				  case 0:
/*<219>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          					goto flw_199
          				  case 1:
/*<197>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x411Link, kannst du vielleicht\nnach ihr suchen?")
/*<831>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 832), ('param3', 33)])
/*<832>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x400Sie hat gesagt, dass diese <b<bunte runde\nInsel >>sie interessiert, also ist sie wohl\nnach <r<Südwesten >>geflogen.\n")
/*<833>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 834), ('param3', 17)])
/*<834>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x400Ich verlasse mich auf dich,\nLink!")
/*<182>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          				}
          			  case 1:
/*<180>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x500Ich soll mich beruhigen?!?\n...Entschuldigung.\nDich anzuschreien hilft ja nichts.")
          				goto flw_181
          			}
          		}
          	}
          }

          void entrypoint_115_26() {
/*<762>*/ 	start()
/*<765>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<766>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x409Es heißt, die Insel der Göttin sei\nverschwunden! Wie entsetzlich!\n\n\n\x0E\x01\x09\x04\n\x400Das bedeutet nichts Gutes!")
          		flw_790:
/*<790>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          		  case 1:
/*<791>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<792>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x400<b<Stru>> hat ein <r<seltenes Insekt>> gefunden\nund ist überglücklich zur Sturmwolke\naufgebrochen.\n\nEr wird noch durch seine Prüfungen\nfallen...")
          			  case 1:
/*<767>*/ 				switch (story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */]) {
          				  case 0:
/*<771>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x400<b<Stru>> meinte, er würde auf einer Insel <r<in\nder Sturmwolke >>Insekten versammeln\nund so sein Insektenparadies\nvergrößern!")
          				  case 1:
/*<770>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 768), ('param3', 31)])
/*<768>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\xA00Du hast doch einen Klassenkameraden\nnamens <b<Stru>>, oder?\n\n\nEr sagte, er hätte <r<in der >><r<Sturmwolke\n>>ein wahres Insektenparadies entdeckt.\nEr mag diese Tierchen sehr, was?\n\n\x0E\x01\x09\x04\x0B\x400Was will er denn mit einem\nInsektenparadies?")
/*<769>*/ 					story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<810>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<811>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Es hat sich angehört, als hätte sich die\nErde bewegt... Was das nur war?")
          			goto flw_790
          		  case 1:
/*<774>*/ 			switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          			  case 0:
/*<775>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Was hast du auf dem Marktplatz\ngemacht? Es ist plötzlich so dunkel\ngeworden.")
          				goto flw_790
          			  case 1:
/*<773>*/ 				switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          				  case 0:
/*<764>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\x405Ich frage mich, warum sich diese\nSchmetterlinge auf dem Marktplatz\nversammeln, obwohl da gar nichts ist...")
          					goto flw_790
          				  case 1:
/*<841>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<842>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hallo, Link!\nDu bist auch ständig unterwegs, was?")
          						goto flw_790
          					  case 1:
/*<779>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
/*<784>*/ 							switch (story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */]) {
          							  case 0:
/*<783>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hallo, Link!\nIn letzter Zeit habe ich unsere drei\nRabauken gar nicht mehr gesehen.\n\nHaben sie vielleicht angefangen, für\ndie Schule zu lernen, nachdem sie\ndie Prüfung für die Oberstufe nicht\ngeschafft haben?")
          							  case 1:
/*<785>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hallo, Link!\nIch habe diese Roulette-Insel jetzt\nauch gesehen, die mein Schwesterchen\nso fasziniert hat.\nDem Besitzer der Insel ist seine\n<r<Roulettescheibe >>anscheinend unter die\nWolken gefallen.\n\nTja, wenn sie tatsächlich unter die\nWolken gefallen ist, dann braucht er\neigentlich gar nicht erst danach zu\nsuchen...")
          							}
          						  case 1:
/*<776>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<782>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\x405Siehst du das?!?\nVom Turm des Lichts geht ein\nLichtstrahl in Richtung Sturmwolke...\n\nDas schreit ja geradezu danach, sich\ndie Sturmwolke einmal genauer\nanzusehen.")
          							  case 1:
/*<840>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									flw_780:
/*<780>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Sag mal, Link...\nIn letzter Zeit habe ich Zelda gar\nnicht mehr gesehen, ist etwas passiert?")
          								  case 1:
/*<778>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<781>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hallo, Link!\n\n\n\n\x0E\x01\x09\x04\n\x400Was? <r<Zwei Flügel>>?\x0E\x01\x04\x02\x1E\nIch hab's nicht so mit Rätseln, frag\ndoch mal den <r<Wahrsager>>.")
          									  case 1:
/*<777>*/ 										switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          										  case 0:
          											goto flw_780
          										  case 1:
/*<763>*/ 											printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\xE09Danke, Link!\nDanke, dass du dich um mein\nSchwesterchen gekümmert hast! Das\nwerde ich nie vergessen!")
          										}
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_27() {
/*<795>*/ 	start()
/*<816>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<818>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\x401Ich habe gehört, dass die Insel der\nGöttin verschwunden ist! \x0E\x01\x04\x02\x1EDas macht\nmich irgendwie traurig...\n\n\x0E\x01\x09\x04\x11\xE00Aber ich glaube, die Göttin wollte uns\ndamit sagen, dass wir uns nicht nur auf\nsie verlassen sollen. Wir müssen auch\nstark sein, wenn sie nicht bei uns ist.")
/*<819>*/ 		switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          		  case 0:
/*<820>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\x40B\x0E\x01\x08\x02\xFECDUnd wenn ich ehrlich bin, gibt es noch eine zweite\nGöttin in meinem Leben, hihihi...")
          		  case 1:
          		}
          	  case 1:
/*<815>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<817>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1101Hallo, Link! Das, was ich\ndir jetzt sage, bleibt unter uns, ja?\n\n\n\x0E\x01\x09\x04\x0C\x400Ich habe bei meinem Spaziergang\nneulich bemerkt, dass unter der Statue\nder Göttin ein seltsames Gebäude\nherausragt.\n\x0E\x01\x09\x04\x11\xE00Was passiert denn hier in unserem\nschönen Wolkenhort?")
          		  case 1:
/*<702>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<703>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Na, du wirkst ja schon viel fröhlicher,\nLink!\n\n\n\x0E\x01\x09\x04\x00\x40BDas ist die richtige Einstellung!\x0E\x01\x04\x02\x14\nZelda wird nach Hause kommen,\ndu musst nur fest daran glauben!")
          			  case 1:
/*<700>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<701>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Wie geht's dir, Link?\n\n\n\n\x0E\x01\x09\x04\x0C\x1400Hä? Die Göttin hat das Triforce\nversteckt?\n\n\n\x0E\x01\x09\x04\x10\x1100Äh, also, davon weiß ich nichts...\n\n\n\n\x0E\x01\x09\x04\x08\x1400Vielleicht solltest du besser einen der\nLehrer fragen?")
          				  case 1:
/*<663>*/ 					switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          					  case 0:
/*<662>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Na, du wirkst ja schon viel fröhlicher,\nLink!\n\n\n\x0E\x01\x09\x04\x00\x40BDas ist die richtige Einstellung!\x0E\x01\x04\x02\x14\nZelda wird nach Hause kommen,\ndu musst nur fest daran glauben!")
          					  case 1:
/*<661>*/ 						switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          						  case 0:
/*<660>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Geht's dir ein bisschen besser,\nLink?\n\n\n\x0E\x01\x09\x04\x09\x1400Ich habe auch so meine Probleme, aber\nich versuche, mir vor anderen Leuten\nnichts anmerken zu lassen.\n\n\x0E\x01\x09\x04\x11\x400Dann verschwindet die Traurigkeit\neinfach! Glaub daran und lebe danach!")
          						  case 1:
/*< 90>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Link!\nEndlich bist du in der Oberstufe!\nSiehst gut aus in der Uniform!\n\n\x0E\x01\x09\x04\x10\x1100Aber es ist unpassend, so zu reden,\nnachdem Zelda verschwunden ist...\n\n\n\x0E\x01\x09\x04\x0C\x1400Ihr beide wart schon als kleine Kinder\nbefreundet... Ich kann mir gut\nvorstellen, wie du dich fühlen musst.\n\n\x0E\x01\x09\x04\x08\x1400Aber ihr geht es sicher gut! Du musst\nnur fest daran glauben, und sie wird\nnach Hause kommen!")
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_10() {
/*<185>*/ 	start()
/*<186>*/ 	switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          	  case 0:
/*<206>*/ 		switch (adventure_pouch_has(5 0x0005)) {
          		  case 0:
/*<845>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 195), ('param3', 31)])
/*<195>*/ 			switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          			  case 0:
/*<207>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BAh, <y<Pilzsporen>>! So ein Glück!\nDu hast die Medizin mitgebracht!\n[1]Geben[2-]Nicht\ngeben")
          				flw_208:
/*<208>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_210:
/*<210>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x409Danke! Damit kann ich meinen Vogel\nversorgen!")
/*<607>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 610), ('param3', 47)])
/*<610>*/ 					OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 356), ('next', 224), ('param3', 15)])
/*<224>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 647), ('param3', 33)])
/*<647>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 646), ('param3', 6)])
/*<646>*/ 					OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 2), ('param2', 256), ('next', 234), ('param3', 15)])
/*<234>*/ 					set_camera(7, 0)
/*<235>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', -256), ('next', 608), ('param3', 13)])
/*<608>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 236), ('param3', 48)])
/*<236>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 233), ('param3', 6)])
/*<233>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Es wird ihm gleich besser gehen!")
/*<237>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 581), ('param3', 6)])
/*<581>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 609), ('param3', 33)])
/*<609>*/ 					set_camera(24, 0)
/*<238>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 1280), ('next', 222), ('param3', 13)])
/*<222>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Ich dachte schon, es wäre aus! Du hast\nuns wirklich aus der Patsche geholfen!\n\n\nDu hast meinem Vogel und mir das\nLeben gerettet! Tausend Dank!")
/*<225>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 223), ('param3', 43)])
/*<223>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Wir machen uns dann mal auf den\nRückweg! Man sieht sich im Dorf!")
/*<615>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 582), ('param3', 47)])
/*<582>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 613), ('param3', 33)])
/*<613>*/ 					set_camera(25, 0)
/*<617>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 0), ('next', 583), ('param3', 17)])
/*<583>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 40), ('next', 616), ('param3', 48)])
/*<616>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 211), ('param3', 33)])
/*<211>*/ 					story_flags[383 /* us: 805A9B0D 0x02, jp: 805ACD8D 0x02 */] = true;
/*<823>*/ 					story_flags[838 /* us: 805A9B32 0x40, jp: 805ACDB2 0x40 */] = true;
/*<614>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          				  case 1:
/*<209>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1113Du Ungeheuer!")
          				}
          			  case 1:
/*<730>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x50BGibst du mir die Pilzsporen?\nDie würden meinen Vogel im Nu wieder\ngesund machen.\n[1]Ja[2-]Nein")
          				goto flw_208
          			}
          		  case 1:
/*<226>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 196), ('param3', 31)])
/*<196>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01<r<Mein Bruder >>hat <r<Vogelmedizin>>.\nBitte geh zu ihm!\n\n\nMein Vogel und ich warten hier. Wir\nverlassen uns auf dich!")
          		}
          	  case 1:
/*<203>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 188), ('param3', 31)])
/*<188>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x50BWenn das nicht Link ist...\nGut, dass du hier bist!\n\n\n\x0E\x01\x09\x04\x12\x200Mein Vogel hat sich bei unserem\nAusflug verletzt und kann nicht mehr\nfliegen.\n\n\x0E\x01\x09\x04\x01\x1500Irgendwie konnten wir hier zwar\nnotlanden, aber jetzt kommen wir\nnicht mehr nach Hause.\n\n\x0E\x01\x09\x04\x12\x1500Ich kann allerdings sowieso nicht weg\nhier, bevor ich seine Verletzung\nversorgt habe. Und dafür brauche ich\n<r<Medizin>>.\nUnd zwar keine für Menschen, sondern\n<r<spezielle Vogelmedizin>>.\n\n\n\x0E\x01\x09\x04\x15\x200Kannst du mir bitte Vogelmedizin\nbringen, Link?\n[1]Na klar![2]Tut mir leid...")
/*<189>*/ 		switch (choice(2)) {
          		  case 0:
/*<190>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x409Danke!\nDu bist ein Lebensretter!")
          			flw_192:
/*<192>*/ 			printf(/* textboxtype: 1, unk: 0 */ "<r<Vogelmedizin>> bekommst du von\n<r<meinem Bruder>>. Geh zu ihm.\n\n\nBestimmt macht er sich schon Sorgen\nund wartet am <r<Dorfplatz des\nWolkenhorts>> auf mich.")
/*<727>*/ 			story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */] = true;
/*<725>*/ 			switch (adventure_pouch_has(5 0x0005)) {
          			  case 0:
/*<726>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x509Sieh an, du hast ja schon Medizin\ndabei! Diese <y<Pilzsporen>> sind genau das,\nwas ich brauche!\n\nDie würden meinen Vogel im Nu wieder\ngesund machen. Gibst du sie mir bitte?\n[1]Ja[2-]Nein")
/*<728>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_210
          				  case 1:
/*<737>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 4352), ('next', 729), ('param3', 13)])
/*<729>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Schade. Aber kannst du vielleicht\nmeinem Bruder sagen, was passiert\nist?")
          				}
          			  case 1:
/*<187>*/ 				switch (story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */]) {
          				  case 0:
/*<193>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Oh, du hast schon mit ihm gesprochen?\nDas macht die Sache einfacher.")
          					flw_194:
/*<194>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Mein Vogel und ich warten hier.\nWir verlassen uns auf dich! Danke!")
          				  case 1:
          					goto flw_194
          				}
          			}
          		  case 1:
/*<191>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\x1513Du Ungeheuer!\n\n\n\n\x0E\x01\x09\x04\x0B\x409Jetzt ist nicht die Zeit für solche\nScherze!")
          			goto flw_192
          		}
          	}
          }

          void entrypoint_115_28() {
/*<797>*/ 	start()
/*<805>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<806>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\x456Von draußen war ein Riesenlärm zu\nhören, da muss wohl irgendwas\npassiert sein...")
          	  case 1:
/*<807>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
          			flw_86:
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hallo, Link.\nIrgendwie wirst du in letzter Zeit\nimmer attraktiver.\n\nDiese Uniform steht dir. Man hat das\nGefühl, sich auf dich verlassen zu\nkönnen.")
          		  case 1:
/*<802>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<804>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xE06Was? Du kannst mit deinem Vogel den\nTornadostoß einsetzen?!?\n\n\n\x0E\x01\x09\x04\x08\x909Alle Achtung!\x0E\x01\x04\x02\x1E \x0E\x01\x09\x04\x0C\x400Aber\x0E\x01\x04\x02\x14 Cuco kann das\nbestimmt auch!")
          			  case 1:
/*<801>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<803>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x06Wie? Triforce?\x0E\x01\x04\x02\x1E\nWas soll das sein?")
          				  case 1:
          					goto flw_86
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_11() {
/*<217>*/ 	start()
/*<759>*/ 	switch (story_flags[1082 /* us: 805A9B53 0x01, jp: 805ACDD3 0x01 */]) {
          	  case 0:
/*<704>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<705>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Link!\nDie Insel der Göttin ist verschwunden!\n\n\n\x0E\x01\x09\x04\x00\x1513Die Insel war immer ein guter Platz\nzum Ausruhen für die Vögel...")
          		  case 1:
/*<808>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<809>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x13Das hat ja ganz schön gewackelt. Ist\nirgendetwas passiert?")
          			  case 1:
/*<753>*/ 				switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          				  case 0:
/*<758>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hallo, Link!\n\n\n\n\x0E\x01\x09\x04\x0C\x200Du hast tatsächlich den Tornadostoß\nerlernt und kannst ihn einsetzen?\x0E\x01\x04\x02\x1E\n\x0E\x01\x09\x04\x0C\x50BDu bist ja ein toller Hecht!")
          				  case 1:
/*<752>*/ 					switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          					  case 0:
/*<757>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00WWas sagst du da? Triforce? Hmmm...\x0E\x01\x04\x02\x14\nWas soll das denn sein? Von so etwas\nhabe ich noch nie gehört...\n\nHast du schon deine Lehrer gefragt?")
          					  case 1:
/*<751>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
          							flw_754:
/*<754>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hallo, Link! \nDieses Mädchen von der Ritterschule~~.~~.~~.~~\nZelda, so hieß sie doch?\n\nIch habe euch in letzter Zeit gar nicht\nmehr zusammen gesehen, habt ihr euch\ngestritten?")
          						  case 1:
/*<748>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<756>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x13Was war denn da eben los? Der ganze\nHimmel wurde einen Augenblick lang\nkomplett in Dunkelheit gehüllt...")
          							  case 1:
/*<839>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									goto flw_754
          								  case 1:
/*<750>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<755>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hallo, Link!\n\n\n\n\x0E\x01\x09\x04\x11WWie? <r<Zwei große Flügel>>?\n\n\n\n\x0E\x01\x09\x04\x01\x00Hm, das erinnert mich an unsere\n<r<Windräder>>. Die sehen doch so aus,\nals ob sie Flügel hätten...")
          									  case 1:
/*<749>*/ 										switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          										  case 0:
          											goto flw_754
          										  case 1:
/*<218>*/ 											printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BVielen Dank noch mal für deine Hilfe,\nLink.\n\n\n\x0E\x01\x09\x04\x00\x400Mein Vogel ist dank dir wieder gesund.")
          										}
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	  case 1:
/*<760>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BVielen Dank noch mal für deine Hilfe,\nLink.\n\n\n\x0E\x01\x09\x04\x00\x400Mein Vogel ist dank dir wieder gesund.")
/*<761>*/ 		story_flags[1082 /* us: 805A9B53 0x01, jp: 805ACDD3 0x01 */] = true;
          	}
          }

          void entrypoint_115_12() {
/*< 28>*/ 	start()
/*<654>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 673), ('param3', 32)])
/*<673>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 105), ('next', 29), ('param3', 24)])
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Uuuuuuuuuuuuuuuuh...")
/*<106>*/ 	set_camera(3, 0)
/*<653>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 674), ('param3', 17)])
/*<674>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 106), ('next', 107), ('param3', 24)])
/*<107>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Uuuuuuuuuh...\nBitte...\nHört mich jemand...")
/*< 30>*/ 	story_flags[545 /* us: 805A9B17 0x04, jp: 805ACD97 0x04 */] = true;
/*< 54>*/ 	scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = true;
/*<652>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_115_13() {
/*<501>*/ 	start()
/*<504>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
/*<510>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<676>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 106), ('next', 506), ('param3', 24)])
/*<506>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Bitte vergiss das mit dem Papier...\nLebwohl...")
/*<509>*/ 			story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          			flw_507:
/*<507>*/ 			scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = false;
          		  case 1:
/*<677>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 105), ('next', 505), ('param3', 24)])
/*<505>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Ah... <r<Papier>>...\nDu hast mir <r<Papier>> gebracht!\n\n\nIch mache jetzt die Tür auf...\nBitte komm herein...")
/*<508>*/ 			story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */] = true;
/*<709>*/ 			story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = true;
          			goto flw_507
          		}
          	  case 1:
/*<675>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 105), ('next', 502), ('param3', 24)])
/*<502>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Uuuuuuuuuuuh...\n<r<Papier>>...\n\n\nBitte.. Irgendjemand... <r<Papier>>...\n<r<Bitte, Papier>>...\n\n\n<r<Welches Papier ist egal>>...\nUuuuuh...")
/*<503>*/ 		story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */] = true;
          	}
          }

          void entrypoint_115_14() {
/*< 31>*/ 	start()
/*< 33>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
          		goto flw_58
          	  case 1:
/*<141>*/ 		switch (loadzone_temp_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*<163>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 5120), ('next', 142), ('param3', 13)])
/*<142>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1B1BWas quatschst du da?!?\nDas ist nicht einfach Papier!\nDas ist ein <r<Brief>>!\n\n\x0E\x01\x09\x04\x17\x2500In jedem einzelnen Buchstaben steckt\nmein Herzblut!\n\n\n\x0E\x01\x09\x04\x17\x1800Denk nicht mal im Traum daran, ihn\nals Klopapier zu benutzen!")
/*<169>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 5120), ('next', 172), ('param3', 13)])
/*<172>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 167), ('param3', 6)])
/*<167>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Gib diesen Brief einer Schülerin aus\nder Oberstufe... Sie heißt <b<Giruna>>.\n\n\n\x0E\x01\x09\x04\x01\xC11Du weißt doch, wen ich meine?\nSie trägt diese <r<runde Mütze>>. Sie ist ja\nsooo hübsch... Und sooo süß...\n\n\x0E\x01\x09\x04\x17\x1800Und auf gar keinen Fall gibst du diesen\nBrief diesem <r<Verrückten da auf dem\nKlo>>! Schwöre es!")
/*<170>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 5120), ('next', 549), ('param3', 13)])
/*<549>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 168), ('param3', 6)])
/*<168>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Ich vertraue dir meinen Brief an. Und\nwehe, du liest auch nur ein Wort!")
/*<710>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 109), ('next', 165), ('param3', 24)])
/*<165>*/ 			story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */] = true;
/*<166>*/ 			give_item(158 0x9E);
/*<164>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Na dann, Link!\nWenn du deine Sache gut machst,\ndarfst du mein Handlanger werden!\nUnd jetzt ab mit dir!")
/*<550>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          		  case 1:
/*<139>*/ 			switch (loadzone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
/*<160>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 3072), ('next', 108), ('param3', 13)])
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x08...?\nWarum schaust du zum Klo?")
/*<162>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 23), ('param2', 6144), ('next', 161), ('param3', 13)])
/*<161>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Was?\nDa ist nachts jemand, der Papier will?")
/*<143>*/ 				loadzone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 32>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 135), ('param3', 31)])
/*<135>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 155), ('param3', 33)])
/*<155>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 4608), ('next', 34), ('param3', 13)])
/*< 34>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Ach...\nGeb ich ihn ihr...\nGeb ich ihn ihr nicht...")
/*<136>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 672), ('param3', 33)])
/*<672>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 20), ('param2', 4889), ('next', 35), ('param3', 13)])
/*< 35>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Wa...?\nLink!\nSchleich dich gefälligst nicht so an!\n\n\x0E\x01\x09\x04\x17\x1800...Ich muss über etwas sehr Wichtiges\nnachdenken, also schwirr ab!\n[1]Nachdenken?[2]Ich helfe dir!")
/*<156>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 3072), ('next', 37), ('param3', 13)])
/*< 37>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Wie? Du willst mir zuhören?\n\n\n\n\x0E\x01\x09\x04\x00\x1CHmpf!\nAusgerechnet du...\nAber...")
          					flw_157:
/*<157>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 23), ('param2', 6144), ('next', 39), ('param3', 13)])
/*< 39>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Vielleicht bist du genau der Richtige!\nDu scheinst zu wissen, wie man mit\nFrauen redet... So sehr ich es hasse,\ndas zuzugeben.\nGut, so machen wir's, Link.\nIch habe einen Auftrag für dich!\nDu darfst dich geehrt fühlen!")
/*<159>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 5120), ('next', 171), ('param3', 13)])
/*<171>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 158), ('param3', 6)])
/*<158>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Bring dieses <r<Papier>> zu ihr!\nDieses <r<Papier>> ist wichtig!\nDu musst es ihr unbedingt geben!")
/*<140>*/ 					loadzone_temp_flags[10 /* 0x0 04 */] = true;
          				  case 1:
/*< 38>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Wirklich?\n\n\n\n\x0E\x01\x09\x04\x00\x1CPah!\nIch brauche deine Hilfe nicht!\nAber...")
          					goto flw_157
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_15() {
/*< 41>*/ 	start()
/*<118>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*<110>*/ 		set_camera(4, 0)
/*<678>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 106), ('next', 42), ('param3', 24)])
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Bitte vergiss das mit dem Papier...\nLebwohl...")
/*< 55>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          		flw_53:
/*< 53>*/ 		story_flags[550 /* us: 805A9B17 0x80, jp: 805ACD97 0x80 */] = true;
          	  case 1:
/*<109>*/ 		set_camera(4, 0)
/*<137>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 112), ('param3', 33)])
/*<112>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 111), ('param3', 6)])
/*<111>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 53), ('param3', 6)])
          		goto flw_53
          	}
          }

          void entrypoint_115_16() {
/*< 43>*/ 	start()
/*<117>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*< 44>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Bitte vergiss das mit dem Papier...\nLebwohl...")
/*<138>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 45), ('param3', 33)])
/*< 45>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          	  case 1:
/*<131>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 144), ('param3', 31)])
/*<144>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4), ('param2', 1), ('next', 154), ('param3', 13)])
/*<154>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 46), ('param3', 6)])
/*< 46>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Uuuuuuuuh... <r<Papier>>...\nIch brauche <r<Papier>>...\n\n\nIch will niemandem etwas tun, <r<ich will\nnur Papier>>...\n[1]Brief geben.[2-]Nichts tun.")
/*< 47>*/ 		switch (choice(2)) {
          		  case 0:
/*< 49>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x04Oh...\nPapier? Für mich?\nIch bin so glücklich...")
/*<146>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 7), ('param2', 0), ('next', 511), ('param3', 13)])
/*<511>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 145), ('param3', 6)])
/*<145>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Aber...\nDas sieht aus wie ein Brief...\nWillst du mir das wirklich überlassen?\n[1]Natürlich![2-]Lieber nicht.")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<147>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 0), ('next', 711), ('param3', 13)])
/*<711>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 109), ('next', 706), ('param3', 24)])
/*<706>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 517), ('param3', 33)])
/*<517>*/ 				set_camera(8, 0)
/*<516>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 153), ('param3', 6)])
/*<153>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Danke...\nIch werde es ganz behutsam\nverwenden.\n\nAber ich bin eine Dame, also frag nicht,\nwofür...\n\n\nWir sehen uns wieder...\nMein edler Retter...")
/*<514>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 513), ('param3', 33)])
/*<513>*/ 				story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
/*<512>*/ 				story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */] = true;
/*<554>*/ 				story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
/*<515>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          			  case 1:
          				flw_48:
/*< 48>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x05\x03Uuuuuuuuuh...\nIrgendjemand... Papier...")
          			}
          		  case 1:
          			goto flw_48
          		}
          	}
          }

          void entrypoint_115_17() {
/*< 51>*/ 	start()
/*< 52>*/ 	switch (story_flags[553 /* us: 805A9B16 0x04, jp: 805ACD96 0x04 */]) {
          	  case 0:
/*<518>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 148), ('param3', 32)])
/*<148>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6), ('param2', 0), ('next', 149), ('param3', 13)])
/*<149>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Ach... Geliebter...\nIch bleibe für immer bei dir...\nTihihi...")
          	  case 1:
/*<824>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 527), ('param3', 31)])
/*<527>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 152), ('param3', 32)])
/*<152>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 12), ('param2', 0), ('next', 526), ('param3', 13)])
/*<526>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 151), ('param3', 6)])
/*<151>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Ah...\nDu bist der galante junge Mann von\nneulich...")
/*<524>*/ 		set_camera(9, 0)
/*<525>*/ 		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 356), ('next', 150), ('param3', 15)])
/*<150>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x06\x02Schön, dich wiederzusehen.\nDank dir habe ich meine große Liebe\ngefunden...\n\nIhn hier...\n\n\n\n\x0E\x01\x09\x04\x0C\x00Weil du mir diesen Brief von ihm\ngebracht hast...\n\n\n\x0E\x01\x09\x04\x06\x00Durch diesen wunderschönen\nLiebesbrief habe ich mich im\nHandumdrehen verliebt...")
/*<521>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Er füllt mein Herz aus...\nLässt es höher schlagen und im selben\nMoment stillstehen...\nIch fühle mich so lebendig...")
/*<723>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 522), ('param3', 42)])
/*<522>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 523), ('param3', 43)])
/*<523>*/ 		set_camera(-1, 0)
/*<658>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6), ('param2', 0), ('next', 519), ('param3', 13)])
/*<519>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Ach... Geliebter...\nIch bleibe für immer bei dir...\nTihihi...")
/*<520>*/ 		story_flags[553 /* us: 805A9B16 0x04, jp: 805ACD96 0x04 */] = true;
/*<655>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          	}
          }

          void entrypoint_115_18() {
/*<357>*/ 	start()
/*<664>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1005), ('next', 358), ('param3', 24)])
/*<358>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 359), ('param3', 32)])
/*<359>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 18), ('next', 360), ('param3', 32)])
/*<360>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 826), ('param3', 32)])
/*<826>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 30), ('next', 822), ('param3', 47)])
/*<822>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 5), ('next', 621), ('param3', 33)])
/*<621>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5121), ('param2', -256), ('next', 361), ('param3', 13)])
/*<361>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 5), ('next', 828), ('param3', 16)])
/*<828>*/ 	set_camera(31, 0)
/*<827>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 30), ('next', 362), ('param3', 48)])
/*<362>*/ 	set_camera(11, 0)
/*<365>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 4), ('param2', 356), ('next', 363), ('param3', 15)])
/*<363>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Du hast mir diesen Brief geschrieben,\noder?")
/*<366>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 20), ('next', 364), ('param3', 16)])
/*<364>*/ 	printf(/* textboxtype: 1, unk: 0 */ "J-j-ja...")
/*<622>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1281), ('param2', -256), ('next', 367), ('param3', 13)])
/*<367>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 5), ('next', 368), ('param3', 16)])
/*<368>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1400\x09Hihihi.\nEs war ein sehr schöner Brief.\nVielen Dank.")
/*<370>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 20), ('next', 369), ('param3', 16)])
/*<369>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x500\x11Ach was... So toll... war er gar nicht...")
/*<371>*/ 	set_camera(12, 0)
/*<375>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1301), ('param2', 3072), ('next', 373), ('param3', 13)])
/*<373>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Und... Öh... Was sagst du?")
/*<376>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 5), ('next', 374), ('param3', 16)])
/*<374>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5131), ('param2', -256), ('next', 372), ('param3', 13)])
/*<372>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1400\x12Also...\nIch...")
/*<377>*/ 	set_camera(13, 0)
/*<623>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5121), ('param2', 256), ('next', 380), ('param3', 13)])
/*<380>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 5), ('param2', 274), ('next', 601), ('param3', 15)])
/*<601>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 20), ('next', 381), ('param3', 16)])
/*<381>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1288), ('param2', 3328), ('next', 378), ('param3', 13)])
/*<378>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x500\x2519Bitte!\nBitte sei meine Freundin!\nSag ja!")
/*<382>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1281), ('param2', 256), ('next', 602), ('param3', 13)])
/*<602>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 20), ('next', 551), ('param3', 50)])
/*<551>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4609), ('param2', 3074), ('next', 379), ('param3', 13)])
/*<379>*/ 	printf(/* textboxtype: 1, unk: 2 */ "Warte!")
/*<383>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 18), ('next', 384), ('param3', 17)])
/*<384>*/ 	set_camera(14, 0)
/*<385>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 386), ('param3', 6)])
/*<386>*/ 	set_camera(19, 0)
/*<388>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4625), ('param2', 3072), ('next', 387), ('param3', 13)])
/*<387>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Bitte nimm mich!\nWerde meine Freundin!")
/*<391>*/ 	set_camera(15, 0)
/*<648>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4609), ('param2', 256), ('next', 624), ('param3', 13)])
/*<624>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1281), ('param2', -256), ('next', 603), ('param3', 13)])
/*<603>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 99), ('next', 389), ('param3', 50)])
/*<389>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1306), ('param2', 6912), ('next', 390), ('param3', 13)])
/*<390>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x500\x1B09Was zum...\nWas redest du da?!?")
/*<604>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 99), ('next', 392), ('param3', 50)])
/*<392>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5140), ('param2', 2304), ('next', 393), ('param3', 13)])
/*<393>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Äh...\x0E\x01\x09\x04\x1400\x900 Wenn das so ist... Dann...\nDann wähle ich Cuco...")
/*<649>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 99), ('next', 650), ('param3', 50)])
/*<650>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x515\xC10Aha! Wusste ich es doch!\nSie hat nur Augen für mich...")
/*<394>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 20), ('next', 629), ('param3', 17)])
/*<629>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x511\x1D1DWie? Was? Ich fasse es nicht!")
/*<630>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1281), ('param2', 0), ('next', 620), ('param3', 13)])
/*<620>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 8), ('param2', 274), ('next', 395), ('param3', 15)])
/*<395>*/ 	set_camera(14, 0)
/*<628>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 18), ('next', 397), ('param3', 17)])
/*<397>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 6), ('param2', 18), ('next', 396), ('param3', 14)])
/*<396>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 605), ('param3', 6)])
/*<605>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 99), ('next', 398), ('param3', 50)])
/*<398>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1201\xFF00Wirklich?\nBin ich wirklich gut genug für dich?")
/*<606>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 18), ('next', 399), ('param3', 50)])
/*<399>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5140), ('param2', 2323), ('next', 400), ('param3', 13)])
/*<400>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Oh ja!\n\x0E\x01\x09\x04\x1400\x900Ich bin so glücklich!\nDanke!")
/*<632>*/ 	set_camera(16, 0)
/*<636>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5121), ('param2', 256), ('next', 635), ('param3', 13)])
/*<635>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1306), ('param2', 7936), ('next', 631), ('param3', 13)])
/*<631>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x500\x1D17Das kann doch nicht...")
/*<634>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1293), ('param2', 7936), ('next', 633), ('param3', 13)])
/*<633>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 7), ('param2', 5), ('next', 639), ('param3', 14)])
/*<639>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 638), ('param3', 6)])
/*<638>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 11), ('param2', 261), ('next', 637), ('param3', 15)])
/*<637>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x500\x18Wäääääääääääääääääääh!!!")
/*<626>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 99), ('next', 625), ('param3', 50)])
/*<625>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 5), ('next', 407), ('param3', 17)])
/*<407>*/ 	set_camera(17, 0)
/*<619>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1293), ('param2', 1024), ('next', 618), ('param3', 13)])
/*<618>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 10), ('param2', 5), ('next', 552), ('param3', 14)])
/*<552>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4625), ('param2', 1024), ('next', 401), ('param3', 13)])
/*<401>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1200\x01Link!")
/*<402>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 100), ('next', 403), ('param3', 16)])
/*<403>*/ 	set_camera(18, 0)
/*<643>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4616), ('param2', 1024), ('next', 640), ('param3', 13)])
/*<640>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Als du mir von dem Brief erzählt hast,\nhabe ich endlich verstanden...\n\n\nIch habe endlich erkannt, dass ich sie\nliebe.\n\n\n\x0E\x01\x09\x04\x1209\xC00Ich wollte nicht, dass ein anderer sie\nmir wegnimmt.\n\n\n\x0E\x01\x09\x04\x1201\x400Hättest du mir nicht von diesem Brief\nerzählt, hätte ich das vielleicht nie\nbemerkt.\n\n\x0E\x01\x09\x04\x1208\x0BIch kann dir gar nicht genug danken!")
/*<651>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 641), ('param3', 42)])
/*<641>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 642), ('param3', 43)])
/*<642>*/ 	set_camera(20, 0)
/*<404>*/ 	story_flags[561 /* us: 805A9B19 0x04, jp: 805ACD99 0x04 */] = true;
/*<405>*/ 	story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */] = true;
/*<659>*/ 	story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
/*<355>*/ 	story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */] = true;
/*<356>*/ 	story_flags[560 /* us: 805A9B19 0x02, jp: 805ACD99 0x02 */] = true;
/*<553>*/ 	story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
/*<699>*/ 	story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */] = true;
/*<627>*/ 	loadzone_temp_flags[21 /* 0x3 20 */] = false;
/*<406>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', 793), ('param3', 42)])
/*<793>*/ 	loadzone_temp_flags[20 /* 0x3 10 */] = true;
          }

          void entrypoint_115_01() {
          	start()
/*<  4>*/ 	set_camera(2, 0)
/*<  3>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 3), ('param2', 100), ('next', 1), ('param3', 15)])
/*<  1>*/ 	set_camera(1, 0)
/*<  2>*/ 	story_flags[203 /* us: 805A9AEF 0x20, jp: 805ACD6F 0x20 */] = true;
/*<644>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = false;
/*<645>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = false;
          }

          void entrypoint_115_19() {
/*<100>*/ 	start()
/*<684>*/ 	switch (story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */]) {
          	  case 0:
/*<101>*/ 		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          		  case 0:
/*<537>*/ 			switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<540>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\x1F1BSeit der Sache mit dem Brief schlafe\nich schlecht und habe ständig\nAlpträume.\n\nIst dieses Bett verflucht?\nIst das etwa <b<Bados>> Fluch?\nHilf mir, Link!")
          			  case 1:
/*<538>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\x1F17Ich werde nicht vergessen, was du mir\nangetan hast, Link.\n\n\nSeit der Sache mit dem Brief schlafe\nich schlecht und habe ständig\nAlpträume.\n\nWas geschieht hier?\nIst dieses Bett verflucht?\nIst das etwa <b<Bados>> Fluch?\n\n\x0E\x01\x09\x04\x1C\x1A18Du musst mir helfen, Link!")
/*<539>*/ 				loadzone_temp_flags[0 /* 0x1 01 */] = true;
          			}
          		  case 1:
/*<569>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 27), ('param2', 7936), ('next', 102), ('param3', 13)])
/*<102>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x17Es ist aus... Alles ist aus...\n\n\n\n\x0E\x01\x09\x04\x1C\x1F00Was ist, Link?\nWillst du dich über mein Leid lustig\nmachen? Lass mich in Ruhe!")
          		}
          	  case 1:
/*<825>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 685), ('param3', 31)])
/*<685>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\x1F17Was willst du noch, Link?\nDu hast mich tief verletzt...\n\n\n\x0E\x01\x09\x04\x1C\x1F00Ich kenne diesen Verrückten vom Klo\nnicht, aber dass du ihm den Brief\ngegeben hast, war einfach ein Schock.\n\nWie konntest du nur?!?")
          	}
          }

