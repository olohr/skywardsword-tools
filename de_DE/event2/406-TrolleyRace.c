          void entrypoint_406_01() {
          	start()
/*< 26>*/ 	switch (story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */]) {
          	  case 0:
/*<100>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<108>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3330), ('next', 10), ('param3', 13)])
/*< 10>*/ 			switch (story_flags[274 /* us: 805A9AF8 0x10, jp: 805ACD78 0x10 */]) {
          			  case 0:
/*< 18>*/ 				story_flags[503 /* us: 805A9B12 0x20, jp: 805ACD92 0x20 */] = true;
/*< 70>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 24), ('param3', 12)])
/*< 24>*/ 				switch (loadzone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*< 32>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Möchtest du erneut am lustigen\nLoren-Lenken teilnehmen?\nEine Fahrt kostet 20 Rubine.\n[1]Ja[2-]Nein")
          					flw_2:
/*<  2>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_8:
/*<  8>*/ 						switch (has_rupees(20)) {
          						  case 0:
/*<  9>*/ 							rupees += -20;
/*< 56>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Welche Strecke darf's sein?\n[1]Anfänger[2]Experte")
/*< 57>*/ 							switch (choice(2)) {
          							  case 0:
/*<113>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3332), ('next', 58), ('param3', 13)])
/*< 58>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Die Strecke für Anfänger.\nKein Problem! Viel Glück!")
/*< 61>*/ 								story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */] = false;
          								flw_15:
/*< 15>*/ 								switch (story_flags[503 /* us: 805A9B12 0x20, jp: 805ACD92 0x20 */]) {
          								  case 0:
/*< 41>*/ 									printf(/* textboxtype: 1, unk: 0 */ "Soll ich dir noch einmal die Regeln\nerklären?\n[1]Ja, bitte.[2-]Nein, danke.")
/*< 16>*/ 									switch (choice(2)) {
          									  case 0:
/*<111>*/ 										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3332), ('next', 42), ('param3', 13)])
/*< 42>*/ 										printf(/* textboxtype: 1, unk: 0 */ "Versuche so schnell wie möglich\nzur Ziellinie zu gelangen. Neige\ndie Wii-Fernbedienung, um die\nBalance deiner Lore zu halten.\nNeigst du deine Lore in Kurven, nimmt\ndeine Geschwindigkeit zu! Pass aber\nauf, dass deine Lore nicht entgleist!")
          										flw_84:
/*< 84>*/ 										switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          										  case 0:
/*< 85>*/ 											switch (story_flags[687 /* us: 805A9B21 0x10, jp: 805ACDA1 0x10 */]) {
          											  case 0:
/*< 88>*/ 												printf(/* textboxtype: 1, unk: 0 */ "Deine aktuelle Bestzeit\nbeträgt \x0E\x02\x03\x06\x00\x03Í:\x0E\x02\x03\x06\x00\x04\x2CD.\x0E\x02\x03\x06\x00\x05\x2CD!")
          												flw_101:
/*<101>*/ 												OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3330), ('next', 44), ('param3', 13)])
/*< 44>*/ 												printf(/* textboxtype: 1, unk: 0 */ "Alles bereit zur Abfahrt!")
/*< 62>*/ 												story_flags[501 /* us: 805A9B12 0x08, jp: 805ACD92 0x08 */] = true;
/*<  3>*/ 												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 124), ('param3', 33)])
/*<124>*/ 												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          											  case 1:
          												goto flw_101
          											}
          										  case 1:
/*< 14>*/ 											switch (story_flags[500 /* us: 805A9B12 0x04, jp: 805ACD92 0x04 */]) {
          											  case 0:
/*< 43>*/ 												printf(/* textboxtype: 1, unk: 0 */ "Deine aktuelle Bestzeit\nbeträgt \x0E\x02\x03\x06\x00\x00Í:\x0E\x02\x03\x06\x00\x01\x2CD.\x0E\x02\x03\x06\x00\x02\x2CD!")
          												goto flw_101
          											  case 1:
          												goto flw_101
          											}
          										}
          									  case 1:
          										goto flw_84
          									}
          								  case 1:
          									goto flw_84
          								}
          							  case 1:
/*<112>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3332), ('next', 59), ('param3', 13)])
/*< 59>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Die Strecke für Experten?\nWie du willst. Viel Glück!")
/*< 60>*/ 								story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */] = true;
          								goto flw_15
          							}
          						  case 1:
/*<103>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3333), ('next', 40), ('param3', 13)])
/*< 40>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Du bist pleite, stimmt's?\nSo ein Pech aber auch...\n\n\nBesorge dir ein paar Rubine und komm\nanschließend wieder.")
          						}
          					  case 1:
/*<105>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3333), ('next', 34), ('param3', 13)])
/*< 34>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Na gut.\nWir sehen uns!")
          					}
          				  case 1:
/*< 33>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Link!\nDa bist du ja wieder!\n\n\nMöchtest du für 20 Rubine eine Runde\nlustiges Loren- Lenken genießen?\n[1]Ja![2-]Nein.")
          					goto flw_2
          				}
          			  case 1:
/*< 21>*/ 				switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          				  case 0:
/*< 30>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Na, habe ich dich etwa neugierig\ngemacht?\n[1]Sicher![2-]Nicht\nwirklich...")
          					flw_19:
/*< 19>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_110:
/*<110>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3332), ('next', 38), ('param3', 13)])
/*< 38>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Versuche so schnell wie möglich\nzur Ziellinie zu gelangen. Neige\ndie Wii-Fernbedienung, um die\nBalance deiner Lore zu halten.\nNeigst du deine Lore in Kurven, nimmt\ndeine Geschwindigkeit zu! Pass aber\nauf, dass deine Lore nicht entgleist!")
/*< 11>*/ 						story_flags[274 /* us: 805A9AF8 0x10, jp: 805ACD78 0x10 */] = true;
/*< 71>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 55), ('param3', 12)])
/*< 55>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Lust auf lustiges Loren-Lenken?\nNur 20 Rubine pro Fahrt.\n[1]Gerne![2-]Nein.")
/*< 22>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_8
          						  case 1:
/*<104>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3333), ('next', 37), ('param3', 13)])
/*< 37>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Jammerschade... Wo es doch sooo\netwas Schönes zu gewinnen gibt...\n\n\nBist du sicher, dass du nicht eine Fahrt\nwagen möchtest?\n[1]Na gut.[2-]Lass mich\nin Ruhe!")
/*< 23>*/ 							switch (choice(2)) {
          							  case 0:
          								goto flw_8
          							  case 1:
/*<102>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3330), ('next', 39), ('param3', 13)])
/*< 39>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Na gut.\nWir sehen uns!")
          							}
          						}
          					  case 1:
/*<109>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3333), ('next', 36), ('param3', 13)])
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Ich versteh dich nicht. Es kann doch\nnicht schaden, wenn ich dir die Regeln\nerkläre!")
/*< 20>*/ 						loadzone_temp_flags[0 /* 0x1 01 */] = true;
          					}
          				  case 1:
/*< 31>*/ 					printf(/* textboxtype: 1, unk: 0 */ "He ho, du da!\nWas machst du denn hier?\n\n\nNun, wenn du schon mal hier bist,\nwie wäre es mit ein wenig Spaß?\n[1]Spaß?[2-]Kein\nInteresse.")
/*< 45>*/ 					switch (choice(2)) {
          					  case 0:
/*< 35>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Wusste ich doch, dass ich deine\nNeugierde wecken kann.\nDann lass mich mal erklären...")
          						goto flw_110
          					  case 1:
/*< 46>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Du bist vielleicht ein Langweiler!\nHör mir doch erst mal zu!\n[1]Na gut...[2-]Nö!")
          						goto flw_19
          					}
          				}
          			}
          		  case 1:
/*<125>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 63), ('param3', 46)])
/*< 63>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 3), ('next', 47), ('param3', 44)])
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Du hast das Ziel erreicht!")
/*< 83>*/ 			switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          			  case 0:
/*< 82>*/ 				switch (story_flags[687 /* us: 805A9B21 0x10, jp: 805ACDA1 0x10 */]) {
          				  case 0:
          					flw_12:
/*< 12>*/ 					switch (context_related2(0)) {
          					  case 0:
/*<114>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 3847), ('next', 48), ('param3', 13)])
/*< 48>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Neue Bestzeit!\nFantastisch!")
          						flw_4:
/*<  4>*/ 						switch (context_related4(0)) {
          						  case 0:
/*< 65>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 3590), ('next', 51), ('param3', 13)])
/*< 51>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Das kann nicht dein Ernst gewesen\nsein! Selbst Schnecken sind schneller!\n\n\nFür diese Leistung kann ich dir keinen\nPreis geben, tut mir wirklich leid.")
          							flw_68:
/*< 68>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -256), ('next', 80), ('param3', 13)])
/*< 80>*/ 							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          							  case 0:
/*< 81>*/ 								story_flags[687 /* us: 805A9B21 0x10, jp: 805ACDA1 0x10 */] = true;
          								flw_64:
/*< 64>*/ 								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 3), ('next', 50), ('param3', 45)])
/*< 50>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Schau jederzeit wieder vorbei, wenn du\neine wilde Fahrt in einer Lore erleben\nmöchtest!")
/*< 25>*/ 								loadzone_temp_flags[1 /* 0x1 02 */] = true;
          							  case 1:
/*< 13>*/ 								story_flags[500 /* us: 805A9B12 0x04, jp: 805ACD92 0x04 */] = true;
          								goto flw_64
          							}
          						  case 1:
/*< 69>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 3589), ('next', 72), ('param3', 13)])
/*< 72>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 52), ('param3', 12)])
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Das kannst du bestimmt besser.\nZeige mehr Körpereinsatz und neige\ndie Lore häufiger.\n\nNichtsdestotrotz hast du dir eine kleine\nBelohnung verdient. Hier, bitte schön.")
/*< 73>*/ 							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          							  case 0:
          								flw_5:
/*<  5>*/ 								give_item(4 0x04);
          								goto flw_68
          							  case 1:
          								goto flw_5
          							}
          						  case 2:
/*< 66>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 3847), ('next', 74), ('param3', 13)])
/*< 74>*/ 							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          							  case 0:
/*< 53>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Nicht schlecht, nicht schlecht. Aber\nnoch lange nicht so schnell wie ich!\nHier, nimm dies als Belohnung!")
/*<  6>*/ 								give_item(63 0x3F);
          								goto flw_68
          							  case 1:
/*<131>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Keine schlechte Zeit. Aber du warst\nbei weitem nicht so schnell wie ich!\nHier hast du 50 Rubine.")
/*< 86>*/ 								OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 130), ('param3', 12)])
/*<130>*/ 								rupees += 50;
          								goto flw_68
          							}
          						  case 3:
/*< 67>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 12), ('param2', 4104), ('next', 54), ('param3', 13)])
/*< 54>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Hui! Einfach super! Spitzenmäßig!\nSelbst ich hätte das nicht geschafft!")
/*< 75>*/ 							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          							  case 0:
/*< 78>*/ 								switch (story_flags[667 /* us: 805A9B1E 0x02, jp: 805ACD9E 0x02 */]) {
          								  case 0:
/*<122>*/ 									printf(/* textboxtype: 1, unk: 0 */ "Ich habe einen ganz besonderen Preis\nfür dich!")
/*< 76>*/ 									give_item(64 0x40);
          									goto flw_68
          								  case 1:
/*<121>*/ 									printf(/* textboxtype: 1, unk: 0 */ "Für dich habe ich etwas ganz\nBesonderes! Einen Schatz,\nder von dieser Insel stammt!")
/*< 77>*/ 									give_item(94 0x5E);
/*< 79>*/ 									story_flags[667 /* us: 805A9B1E 0x02, jp: 805ACD9E 0x02 */] = true;
          									goto flw_68
          								}
          							  case 1:
/*<123>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Du bekommst einen Rubin, den ich wie\nmeinen Augapfel gehütet habe!")
/*< 87>*/ 								OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 7), ('param3', 12)])
/*<  7>*/ 								give_item(32 0x20);
          								goto flw_68
          							}
          						}
          					  case 1:
          						goto flw_4
          					}
          				  case 1:
          					goto flw_4
          				}
          			  case 1:
/*< 17>*/ 				switch (story_flags[500 /* us: 805A9B12 0x04, jp: 805ACD92 0x04 */]) {
          				  case 0:
          					goto flw_12
          				  case 1:
          					goto flw_4
          				}
          			}
          		  case 2:
/*<127>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 106), ('param3', 46)])
/*<106>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3333), ('next', 49), ('param3', 13)])
/*< 49>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Hoppla! Da hat es dich wohl von\nden Schienen gehauen! Versuch\ndein Glück ruhig noch einmal.")
/*<129>*/ 			loadzone_temp_flags[1 /* 0x1 02 */] = true;
          		  case 3:
/*<126>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 107), ('param3', 46)])
/*<107>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3333), ('next', 99), ('param3', 13)])
/*< 99>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Die Zeit ist um!\nVersuch's ruhig noch einmal!")
/*<128>*/ 			loadzone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	  case 1:
/*< 29>*/ 		switch (story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */]) {
          		  case 0:
/*<115>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3330), ('next', 28), ('param3', 13)])
/*< 28>*/ 			printf(/* textboxtype: 1, unk: 0 */ "In den Loren zu fahren macht so viel\nSpaß! Eines Tages will ich das auch\nmal machen!")
          		  case 1:
/*<116>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3330), ('next', 1), ('param3', 13)])
/*<  1>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Dieser Ort war einst eine Art Bahnhof\nfür Loren.\n\n\nDie Loren sind noch gut in Schuss.\nKlettere hinein und fahre über die\nInsel. An der Wand dort drüben wird\nerklärt, wie du Loren steuern kannst.\nAber Vorsicht, dies ist nicht ganz\nungefährlich! Lies dir die Anleitung\nsorgfältig durch!")
/*< 27>*/ 			story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */] = true;
          		}
          	}
          }

          void entrypoint_406_02() {
/*< 89>*/ 	start()
/*< 94>*/ 	switch (story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */]) {
          	  case 0:
/*<117>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3330), ('next', 93), ('param3', 13)])
/*< 93>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Ich lebe schon seit Jahren hier ganz \nallein... Doch Dank meiner Loren wird\nmir nie langweilig!")
          		flw_97:
/*< 97>*/ 		story_flags[741 /* us: 805A9B26 0x20, jp: 805ACDA6 0x20 */] = true;
          	  case 1:
/*<119>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3334), ('next', 92), ('param3', 13)])
/*< 92>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Das ist mein Platz!\nGeh runter, aber sofort!")
          		goto flw_97
          	}
          }

          void entrypoint_406_03() {
/*< 90>*/ 	start()
/*< 95>*/ 	switch (story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */]) {
          	  case 0:
/*<118>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3330), ('next', 91), ('param3', 13)])
/*< 91>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Ich stehe jeden Tag hier, doch du bist\nmein einziger Besucher.\n\n\nKannst du nicht ein wenig die\nWerbetrommel für mich rühren?\nIch bin so einsam...")
          		flw_98:
/*< 98>*/ 		story_flags[742 /* us: 805A9B26 0x40, jp: 805ACDA6 0x40 */] = true;
          	  case 1:
/*<120>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3334), ('next', 96), ('param3', 13)])
/*< 96>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Das ist mein Platz!\nGeh runter, aber sofort!")
          		goto flw_98
          	}
          }

