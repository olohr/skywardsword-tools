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
/*< 32>*/ 					printf(/* textboxtype: 1, unk: 0 */ "¿Quieres disfrutar otra vez con\nLa vertiginosa montaña?\n¡Son solo 20 rupias la vuelta!\n[1]Vale[2-]Paso")
          					flw_2:
/*<  2>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_8:
/*<  8>*/ 						switch (has_rupees(20)) {
          						  case 0:
/*<  9>*/ 							rupees += -20;
/*< 56>*/ 							printf(/* textboxtype: 1, unk: 0 */ "¿Qué circuito quieres probar?\n[1]Principiante[2]Experto")
/*< 57>*/ 							switch (choice(2)) {
          							  case 0:
/*<113>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3332), ('next', 58), ('param3', 13)])
/*< 58>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Marchando un circuito para\nprincipiantes. ¡Suerte!")
/*< 61>*/ 								story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */] = false;
          								flw_15:
/*< 15>*/ 								switch (story_flags[503 /* us: 805A9B12 0x20, jp: 805ACD92 0x20 */]) {
          								  case 0:
/*< 41>*/ 									printf(/* textboxtype: 1, unk: 0 */ "Por cierto, ¿quieres que te vuelva\na contar cómo funciona?\n[1]Por favor[2-]No, gracias")
/*< 16>*/ 									switch (choice(2)) {
          									  case 0:
/*<111>*/ 										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3332), ('next', 42), ('param3', 13)])
/*< 42>*/ 										printf(/* textboxtype: 1, unk: 0 */ "Básicamente, el objetivo consiste en\nmontarte en esa vagoneta de ahí y\nllegar a la meta en el menor tiempo\nposible.\nSi inclinas el mando hacia un lado, la\nvagoneta se inclinará hacia ese mismo\nlado.\n\nSi empleas bien esta técnica, ¡podrás\ntomar las curvas a mucha más\nvelocidad!\n\n¡Pero como te despistes un momento\ndescarrilarás, así que ve con cuidado!\n\n\nPorque no creo que te apetezca\ncomprobar qué pasa cuando\ndescarrilas...")
          										flw_84:
/*< 84>*/ 										switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          										  case 0:
/*< 85>*/ 											switch (story_flags[687 /* us: 805A9B21 0x10, jp: 805ACDA1 0x10 */]) {
          											  case 0:
/*< 88>*/ 												printf(/* textboxtype: 1, unk: 0 */ "El mejor tiempo actual es:\n¡\x0E\x02\x03\x06\x00\x03Í:\x0E\x02\x03\x06\x00\x04\x2CD,\x0E\x02\x03\x06\x00\x05\x2CD!")
          												flw_101:
/*<101>*/ 												OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3330), ('next', 44), ('param3', 13)])
/*< 44>*/ 												printf(/* textboxtype: 1, unk: 0 */ "¡En marcha entonces!")
/*< 62>*/ 												story_flags[501 /* us: 805A9B12 0x08, jp: 805ACD92 0x08 */] = true;
/*<  3>*/ 												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 124), ('param3', 33)])
/*<124>*/ 												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          											  case 1:
          												goto flw_101
          											}
          										  case 1:
/*< 14>*/ 											switch (story_flags[500 /* us: 805A9B12 0x04, jp: 805ACD92 0x04 */]) {
          											  case 0:
/*< 43>*/ 												printf(/* textboxtype: 1, unk: 0 */ "Tu mejor tiempo hasta ahora es:\n¡\x0E\x02\x03\x06\x00\x00Í:\x0E\x02\x03\x06\x00\x01\x2CD,\x0E\x02\x03\x06\x00\x02\x2CD!")
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
/*< 59>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Marchando un circuito para expertos.\n¡Suerte!")
/*< 60>*/ 								story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */] = true;
          								goto flw_15
          							}
          						  case 1:
/*<103>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3333), ('next', 40), ('param3', 13)])
/*< 40>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Por lo visto vamos un poquito justos\nde efectivo, ¿no? ¡Pues mucho me\ntemo que no puedo dejarte subir!\n\n¡Vuelve cuando tengas el zurrón\nun poco más abultado!")
          						}
          					  case 1:
/*<105>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3333), ('next', 34), ('param3', 13)])
/*< 34>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Bueno, otra vez será. ¡Hasta goron!")
          					}
          				  case 1:
/*< 33>*/ 					printf(/* textboxtype: 1, unk: 0 */ "¡Link!\n¡Has vuelto, amigo!\n\n\n¿Qué, te apetece dar un bonito paseo\nen La vertiginosa montaña rusa?\n¡Son solo 20 rupias la vuelta!\n[1]Vale[2-]Paso")
          					goto flw_2
          				}
          			  case 1:
/*< 21>*/ 				switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          				  case 0:
/*< 30>*/ 					printf(/* textboxtype: 1, unk: 0 */ "¿Entonces te ha picado el gusanillo?\n[1]Un poco[2-]Qué va")
          					flw_19:
/*< 19>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_110:
/*<110>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3332), ('next', 38), ('param3', 13)])
/*< 38>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Básicamente, el objetivo consiste en\nmontarte en esa vagoneta de ahí y\nllegar a la meta en el menor tiempo\nposible.\nSi inclinas el mando hacia un lado, la\nvagoneta se inclinará hacia ese mismo\nlado.\n\nSi empleas bien esta técnica, ¡podrás\ntomar las curvas a mucha más\nvelocidad!\n\n¡Pero como te despistes un momento\ndescarrilarás, así que ve con cuidado!\n\n\nPorque no creo que te apetezca\ncomprobar qué pasa cuando\ndescarrilas...")
/*< 11>*/ 						story_flags[274 /* us: 805A9AF8 0x10, jp: 805ACD78 0x10 */] = true;
/*< 71>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 55), ('param3', 12)])
/*< 55>*/ 						printf(/* textboxtype: 1, unk: 0 */ "¿Y bien? ¿Te apetece montar en La\nvertiginosa montaña rusa? Son tan solo\n20 rupias la vuelta. ¿Qué me dices?\n[1]Vale[2-]Paso")
/*< 22>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_8
          						  case 1:
/*<104>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3333), ('next', 37), ('param3', 13)])
/*< 37>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Una auténtica lástima, sí señor...\n¡Pero si hasta puedes ganar premios!\n\n\n¿Seguro que no quieres probar una vez\nal menos?\n[1]Bueeeno...[2-]Olvídame")
/*< 23>*/ 							switch (choice(2)) {
          							  case 0:
          								goto flw_8
          							  case 1:
/*<102>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3330), ('next', 39), ('param3', 13)])
/*< 39>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Pues nada, ¡hasta goron!")
          							}
          						}
          					  case 1:
/*<109>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3333), ('next', 36), ('param3', 13)])
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Pues no sé qué tiene de malo que te\nexplique al menos las normas...\n¡Ni que te vaya a comer o algo!")
/*< 20>*/ 						loadzone_temp_flags[0 /* 0x1 01 */] = true;
          					}
          				  case 1:
/*< 31>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Hombre, chaval. ¿Cómo tú por aquí?\n\n\n\nAunque bueno, ya que has hecho todo\nel camino para venir... ¿te apetece\nhacer algo muy divertido?\n[1]¡Claro![2-]No, gracias")
/*< 45>*/ 					switch (choice(2)) {
          					  case 0:
/*< 35>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Ya sabía yo que te iba a interesar.\n¡Abre bien esas orejotas puntiagudas!")
          						goto flw_110
          					  case 1:
/*< 46>*/ 						printf(/* textboxtype: 1, unk: 0 */ "¡Por Goron! ¡No me seas muermo!\n¡Al menos deja que te cuente de qué va!\n[1]Vale[2-]Paso")
          						goto flw_19
          					}
          				}
          			}
          		  case 1:
/*<125>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 63), ('param3', 46)])
/*< 63>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 3), ('next', 47), ('param3', 44)])
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Se acabó!")
/*< 83>*/ 			switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          			  case 0:
/*< 82>*/ 				switch (story_flags[687 /* us: 805A9B21 0x10, jp: 805ACDA1 0x10 */]) {
          				  case 0:
          					flw_12:
/*< 12>*/ 					switch (context_related2(0)) {
          					  case 0:
/*<114>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 3847), ('next', 48), ('param3', 13)])
/*< 48>*/ 						printf(/* textboxtype: 1, unk: 0 */ "¡Por Goron! ¡Un nuevo récord!")
          						flw_4:
/*<  4>*/ 						switch (context_related4(0)) {
          						  case 0:
/*< 65>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 3590), ('next', 51), ('param3', 13)])
/*< 51>*/ 							printf(/* textboxtype: 1, unk: 0 */ "¡¿Me estás tomando el pelo o qué?!\n¡¿Pero cómo se puede ir tan lento?!\n\n\nMuchacho, con ese tiempo lo único\nque puedo darte es la espalda.\nEspero que lo entiendas.")
          							flw_68:
/*< 68>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -256), ('next', 80), ('param3', 13)])
/*< 80>*/ 							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          							  case 0:
/*< 81>*/ 								story_flags[687 /* us: 805A9B21 0x10, jp: 805ACDA1 0x10 */] = true;
          								flw_64:
/*< 64>*/ 								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 3), ('next', 50), ('param3', 45)])
/*< 50>*/ 								printf(/* textboxtype: 1, unk: 0 */ "¡Vuelve por aquí siempre que quieras!")
/*< 25>*/ 								loadzone_temp_flags[1 /* 0x1 02 */] = true;
          							  case 1:
/*< 13>*/ 								story_flags[500 /* us: 805A9B12 0x04, jp: 805ACD92 0x04 */] = true;
          								goto flw_64
          							}
          						  case 1:
/*< 69>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 3589), ('next', 72), ('param3', 13)])
/*< 72>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 52), ('param3', 12)])
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Estoy seguro de que puedes hacerlo\nbastante mejor. Tienes que aprender\na inclinar un poco más la vagoneta,\n¿de acuerdo?\n¡Aun así, esto es para ti!")
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
/*< 53>*/ 								printf(/* textboxtype: 1, unk: 0 */ "No está mal del todo, pero... ¡anda que\nno te queda para ser tan rápido como\nyo!\n\nToma, esto es para ti.\n¡Te lo has ganado!")
/*<  6>*/ 								give_item(63 0x3F);
          								goto flw_68
          							  case 1:
/*<131>*/ 								printf(/* textboxtype: 1, unk: 0 */ "No ha estado mal del todo. ¡Pero aún\ntienes que mejorar mucho para\nponerte a mi nivel!\n\nAnda, toma 50 rupias, no es demasiado,\npero algo es algo, ¿no?")
/*< 86>*/ 								OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 130), ('param3', 12)])
/*<130>*/ 								rupees += 50;
          								goto flw_68
          							}
          						  case 3:
/*< 67>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 12), ('param2', 4104), ('next', 54), ('param3', 13)])
/*< 54>*/ 							printf(/* textboxtype: 1, unk: 0 */ "¡Pero qué ven mis goron! ¡Increíble!\n¡Alucinante! ¡Eres más rápido que yo!")
/*< 75>*/ 							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          							  case 0:
/*< 78>*/ 								switch (story_flags[667 /* us: 805A9B1E 0x02, jp: 805ACD9E 0x02 */]) {
          								  case 0:
/*<122>*/ 									printf(/* textboxtype: 1, unk: 0 */ "¡Voy a darte un premio muy especial!")
/*< 76>*/ 									give_item(64 0x40);
          									goto flw_68
          								  case 1:
/*<121>*/ 									printf(/* textboxtype: 1, unk: 0 */ "¡Tengo un tesoro para ti que encontré\nen esta isla!")
/*< 77>*/ 									give_item(94 0x5E);
/*< 79>*/ 									story_flags[667 /* us: 805A9B1E 0x02, jp: 805ACD9E 0x02 */] = true;
          									goto flw_68
          								}
          							  case 1:
/*<123>*/ 								printf(/* textboxtype: 1, unk: 0 */ "¡Esto es para ti! ¡Es una rupia que he\ncuidado con todo el cariño del mundo!")
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
/*< 49>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Puf, menudo trompazo, amigo... ¡Pero\npor lo menos puedes contarlo! Y ya\nsabes, siempre que quieras darte una\nvueltecita, aquí me tienes.")
/*<129>*/ 			loadzone_temp_flags[1 /* 0x1 02 */] = true;
          		  case 3:
/*<126>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 107), ('param3', 46)])
/*<107>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3333), ('next', 99), ('param3', 13)])
/*< 99>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Se acabó el tiempo. ¡Seguro que\nla próxima es la buena!")
/*<128>*/ 			loadzone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	  case 1:
/*< 29>*/ 		switch (story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */]) {
          		  case 0:
/*<115>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3330), ('next', 28), ('param3', 13)])
/*< 28>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡No veas cómo te lo pasas subido a una\nde esas cosas! ¡Un día de estos me\nmolaría echar una carrerita!")
          		  case 1:
/*<116>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3330), ('next', 1), ('param3', 13)])
/*<  1>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Te encuentras en la antigua estación\nde vagonetas de la mina.\n\n\n¡Y todo funciona como el primer día!\nMóntate en una si quieres dar una\nvueltecita por los alrededores. Mira,\nen aquella pared pone cómo se utilizan.\nPero no te voy a mentir, es un poco\npeligroso. ¡Así que mejor léete bien\nlo que pone ahí antes de subirte!")
/*< 27>*/ 			story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */] = true;
          		}
          	}
          }

          void entrypoint_406_02() {
/*< 89>*/ 	start()
/*< 94>*/ 	switch (story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */]) {
          	  case 0:
/*<117>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3330), ('next', 93), ('param3', 13)])
/*< 93>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Llevo aquí solo la tira de años...\n\n\n\nY me monto en las vagonetas todos\nlos días, ¡pero nunca jamás me aburro!")
          		flw_97:
/*< 97>*/ 		story_flags[741 /* us: 805A9B26 0x20, jp: 805ACDA6 0x20 */] = true;
          	  case 1:
/*<119>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3334), ('next', 92), ('param3', 13)])
/*< 92>*/ 		printf(/* textboxtype: 1, unk: 0 */ "¡Ese asiento es mío, por Goron!\n¡No me lo ensucies!")
          		goto flw_97
          	}
          }

          void entrypoint_406_03() {
/*< 90>*/ 	start()
/*< 95>*/ 	switch (story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */]) {
          	  case 0:
/*<118>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3330), ('next', 91), ('param3', 13)])
/*< 91>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Llevo aquí ni se sabe cuánto tiempo,\npero eres mi primer visitante.\n\n\n¿Podrías arreglarlo para que viniera\nmás gente por aquí? Es que a veces\nme siento un poco solo...")
          		flw_98:
/*< 98>*/ 		story_flags[742 /* us: 805A9B26 0x40, jp: 805ACDA6 0x40 */] = true;
          	  case 1:
/*<120>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3334), ('next', 96), ('param3', 13)])
/*< 96>*/ 		printf(/* textboxtype: 1, unk: 0 */ "¡Ese asiento es mío, por Goron!\n¡No me lo ensucies!")
          		goto flw_98
          	}
          }

