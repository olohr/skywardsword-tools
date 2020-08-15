          void entrypoint_450_00() {
          	start()
/*< 16>*/ 	set_camera(8, 0)
/*<  9>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 2 */ "Da sind wir, Link!\nAlso los, auf geht's!")
/*< 12>*/ 		set_camera(10, 0)
/*< 11>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 13), ('param3', 40)])
/*< 13>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*< 19>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 31>*/ 				printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x04Gebieter, Link.\nIch stelle fest, dass die Sammlung\nder <y<Tränen >>nicht erfolgreich war.")
/*< 48>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 22), ('param3', 40)])
/*< 22>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*< 24>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 27>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 33>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 34>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 35>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 39>*/ 										printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x01Gebieter, neben den <r<Hütern>>,\ndie dich angreifen, gibt es noch die\n<r<Wächter>>, und zwar die <r<des Landes\nund des Himmels>>.\nPass gut auf, denn beide verhalten sich\nunterschiedlich.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf(/* textboxtype: 2, unk: 2 */ "Sammle alle <y<Tränen>>. Ich warte hier auf\ndeine Rückkehr.")
          										flw_49:
/*< 49>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 30), ('param3', 40)])
/*< 30>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          									  case 1:
/*< 36>*/ 										printf(/* textboxtype: 2, unk: 2 */ "Die Orte, an denen du <y<Tränen>> gefunden\nhast, sind <r<auf der Karte markiert>>.\nMach dir dies und die Signallichter\nzunutze.\nDie Orte, an denen die 15 Tränen\nruhen, verändern sich nicht. Wenn du\ndir ansiehst, wo die Tränen zu finden\nsind, kannst du die Prüfung bestehen.")
/*< 42>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_32
          									}
          								  case 1:
/*< 38>*/ 									printf(/* textboxtype: 2, unk: 2 */ "Du solltest dir eine Taktik überlegen,\netwa die <r<einfach zu findenden >><y<Tränen\n>>bis zum Schluss <r<aufzubewahren>>...")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x01Gebieter, die Chance erhöht sich, dass\ndu nicht der Auserwählte bist...\n\n\nDie vielen Versuche haben Unordnung\nin deine Seele gebracht. Ich empfehle\ndir, dich ein wenig auszuruhen, bevor\ndu es erneut versuchst.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf(/* textboxtype: 2, unk: 2 */ "<r<Zwei Arten von Wächtern >>beschützen\ndiesen Ort vor Eindringlingen.\n\n\nPass auf, nicht in den Lichtkegel der\n<r<Wächter des Himmels>> zu treten, dann\ngeschieht dir nichts...\n\nWenn du allerdings den <r<Wächtern des\nLandes >>zu nahe kommst, werden sie\ndich verfolgen, \x0E\x01\x12\x04\x00\x02Gebieter...\n<r<Achte>> daher gut auf deine Bewegungen.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf(/* textboxtype: 2, unk: 2 */ "Die Orte, an denen du bereits <y<Tränen\n>>gefunden hast, sind <r<auf der Karte\nmarkiert>>.\n\nIch empfehle dir, die Orte aller 15\n<y<Tränen>> auf der Karte zu markieren. ")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x02Gebieter, du kannst die Prüfung der\nGöttin so lange ablegen, bis du dich\nihrer würdig erwiesen hast.\n\nDu solltest dir eine Taktik überlegen,\netwa die einfach zu findenden <y<Tränen\n>>für den Fall <r<aufzusparen>>, dass du\nentdeckt wirst.\nSammle 15 <y<Tränen>> und kehre in die\näußere Welt zurück. Ich werde dort\nauf dich warten.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x04Gebieter, Link.")
/*< 46>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 18), ('param3', 40)])
/*< 18>*/ 				printf(/* textboxtype: 2, unk: 2 */ "Wenn du das <y<Seelengefäß>> mit 15\n<y<Tränen >>gefüllt hast, \x0E\x01\x12\x04\x00\x02Gebieter,\nwird deine Seele wachsen, und die\nGöttin wird dich stärken.\nIch werde in der äußeren Welt auf dich\nwarten, \x0E\x01\x12\x04\x00\x02Gebieter.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  7>*/ 			printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x04Gebieter, Link.")
/*< 15>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 14), ('param3', 40)])
/*< 14>*/ 			printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x02Gebieter, in diese Welt kann ich dir\nnicht folgen, da sie in deiner Seele\nselbst existiert, doch ich kann zu dir\nsprechen.\nNur Auserwählten gewährt die Göttin\nZutritt zu diesem Ort, der <b<Sairen>>.\n\n\nAn diesem Ort, <b<Nayrus Sairen>>, wird\ndeine <r<Weisheit>> auf die Probe gestellt.\n\n\nUm die heilige Flamme, deren Kraft\ndas Schwert stärkt, zu erhalten, musst\ndu diese Prüfung bestehen. Nur so wird\ndeine Seele wachsen, \x0E\x01\x12\x04\x00\x02Gebieter.")
/*< 17>*/ 			set_camera(9, 0)
/*<  6>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 62), ('param2', 1), ('next', 2), ('param3', 40)])
/*<  2>*/ 			give_item(17 0x11);
/*<  5>*/ 			set_camera(8, 0)
/*<  4>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 8), ('param3', 40)])
/*<  8>*/ 			printf(/* textboxtype: 2, unk: 2 */ "Bringe das <y<Seelengefäß>> zurück, wenn\nes gefüllt ist, und deine Seele wird\nwachsen, \x0E\x01\x12\x04\x00\x02Gebieter. Als Lohn wird dich\ndie Göttin mit <r<neuer Kraft>> beschenken.\nHast du noch Fragen an mich?\n[1]Ja![2-]Nein, ich\nbin bereit.")
/*<  3>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf(/* textboxtype: 2, unk: 2 */ "Welche Erklärung möchtest du hören?\n\n[1]Seelengefäß[2]Hüter[3]Alatrauma[4-]Keine")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x05Gebieter, höre meine Antwort...\n\n\n\nFülle das <y<Seelengefäß>>, indem du\n<y<Nayrus Tränen >>aufsammelst.")
/*< 52>*/ 					set_camera(2, 0)
/*< 53>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 55), ('param3', 40)])
/*< 55>*/ 					printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x02Gebieter, was dort funkelt...")
/*< 56>*/ 					set_camera(3, 0)
/*< 59>*/ 					printf(/* textboxtype: 2, unk: 0 */ "Dies ist eine von <y<Nayrus Tränen>>.\nSammle <r<15>> von ihnen.")
/*< 54>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 57), ('param3', 40)])
/*< 57>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 77), ('param3', 6)])
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf(/* textboxtype: 2, unk: 2 */ "Willst du sonst noch etwas wissen?\n\n\n[1]Seelengefäß[2]Hüter[3]Alatrauma[4-]Nein")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x05Gebieter, höre meine Antwort...")
/*< 61>*/ 					set_camera(6, 0)
/*< 64>*/ 					printf(/* textboxtype: 2, unk: 2 */ "Solltest du auch nur einen Schritt vom\nrechten Weg abkommen, werden dich\ndie <r<Hüter>> verfolgen, \x0E\x01\x12\x04\x00\x02Gebieter.")
/*< 62>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf(/* textboxtype: 2, unk: 2 */ "Ein einziger Treffer der <r<Hüter>> wird\ndeine Seele aus der Fassung bringen,\nund deine Prüfung wird zu Ende sein,\n\x0E\x01\x12\x04\x00\x02Gebieter.")
/*< 63>*/ 					set_camera(5, 0)
/*< 66>*/ 					printf(/* textboxtype: 2, unk: 2 */ "Sammle die <y<Tränen>>, ohne dich\nangreifen zu lassen, und fülle das\n<y<Seelengefäß>>.")
          					goto flw_77
          				  case 2:
/*< 67>*/ 					printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x05Gebieter, höre meine Antwort...")
/*< 68>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf(/* textboxtype: 2, unk: 2 */ "Über die ganze Gegend sind glitzernde\nFlächen verstreut, die <r<Alatraumata\n>>genannt werden...\n\nTrittst du auf sie, so <r<werden dich die\nHüter sofort entdecken>>. Pass also auf,\nwohin du deine Schritte setzt.")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf(/* textboxtype: 2, unk: 2 */ "Nun gut, mein \x0E\x01\x12\x04\x00\x05Gebieter.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf(/* textboxtype: 2, unk: 2 */ "Ich werde hier in dieser Welt auf deine\nRückkehr warten, \x0E\x01\x12\x04\x00\x02Gebieter.")
/*< 73>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 75), ('param3', 40)])
/*< 75>*/ 					scene_flags[24 'Lanayru: Silent Realm'][101 /* 0xD 20 */] = true;
/*< 76>*/ 					temp_flags[1 /* 0x1 02 */] = true;
/*< 74>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          				}
          			  case 1:
          				goto flw_70
          			}
          		}
          	}
          }

