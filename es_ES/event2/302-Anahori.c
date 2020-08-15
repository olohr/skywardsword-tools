          void entrypoint_302_01() {
          	start()
/*< 19>*/ 	switch (context_related3(0)) {
          	  case 0:
/*< 82>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 3585), ('next', 16), ('param3', 13)])
/*< 16>*/ 		switch (story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */]) {
          		  case 0:
/*< 14>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Hola, tío!")
/*<156>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 53), ('param3', 13)])
          			flw_53:
/*< 53>*/ 			switch (context_related2(1)) {
          			  case 0:
/*< 84>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5640), ('next', 54), ('param3', 13)])
/*< 54>*/ 				printf(/* textboxtype: 1, unk: 0 */ "La cosa va de escarbar en busca\nde rupias hasta que te encuentres\nuna bomba y... ¡pum, se acabó!\nQué, ¿te hace... una partidita?\n\x0E\x01\x09\x04\x14\x1614Aunque ahora que me fijo... Estás\nbastante cascado, tío. Será mejor\nque vuelvas cuando andes mejor\nde salud.")
/*<118>*/ 				set_camera(5, 0)
/*<119>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Si quieres puedes sentarte\nahí a descansar.")
          			  case 1:
/*< 83>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 6), ('next', 1), ('param3', 13)])
/*<  1>*/ 				printf(/* textboxtype: 1, unk: 1 */ "¡Saca rupias hasta que el cuerpo\naguante! O hasta que salga la bomba,\nclaro... ¿Qué, juegas a <b<Hoyos y rupias>>?\n[1]Principiante[2]Intermedio[3]Experto[4-]Paso")
          				flw_85:
/*< 85>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 3), ('param3', 13)])
/*<  3>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					switch (temp_flags[14 /* 0x0 40 */]) {
          					  case 0:
          						flw_74:
/*< 74>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 87), ('param3', 12)])
/*< 87>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5638), ('next', 59), ('param3', 13)])
/*< 59>*/ 						printf(/* textboxtype: 1, unk: 1 */ "Cada partida cuesta <r<30 rupias>>.\n¿Qué me dices?\n\n[1]Vale[2-]Mejor no")
/*< 88>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 37), ('param3', 13)])
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*<110>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 30), ('next', 109), ('param3', 23)])
/*<109>*/ 							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 37)])) {
          							  case 0:
/*< 36>*/ 								rupees += -30;
/*< 90>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5400), ('next', 34), ('param3', 13)])
/*< 34>*/ 								printf(/* textboxtype: 1, unk: 0 */ "¡Pues nada, mucha suerte con esas\nrupias! ¡A ver qué tal lo haces!\n")
/*< 57>*/ 								temp_flags[14 /* 0x0 40 */] = true;
/*< 33>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 47), ('param3', 33)])
/*< 47>*/ 								changeScene(1, 0) // 
          							  case 1:
/*< 89>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4633), ('next', 35), ('param3', 13)])
/*< 35>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Tío, tienes menos rupias que el\nmoguma que vendió los guantes\npa comer. Consigue unas cuantas\ny vuelve entonces, anda.")
          							}
          						  case 1:
/*< 75>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 38), ('param3', 12)])
/*< 38>*/ 							printf(/* textboxtype: 1, unk: 1 */ "¿En qué nivel quieres jugar?\n[1]Principiante[2]Intermedio[3]Experto[4-]Paso")
          							goto flw_85
          						}
          					  case 1:
/*< 21>*/ 						printf(/* textboxtype: 1, unk: 0 */ "El nivel principiante tiene menos hoyos\ny es ideal para los más patosillos;\nes fácil y divertido.")
          						goto flw_74
          					}
          				  case 1:
/*< 62>*/ 					switch (temp_flags[15 /* 0x0 80 */]) {
          					  case 0:
          						flw_76:
/*< 76>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 91), ('param3', 12)])
/*< 91>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5638), ('next', 22), ('param3', 13)])
/*< 22>*/ 						printf(/* textboxtype: 1, unk: 1 */ "Son <r<50 rupias>> la partida.\n¿Qué, te animas?\n\n[1]Vale[2-]Mejor no")
/*< 92>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 31), ('param3', 13)])
/*< 31>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							switch (has_rupees(50)) {
          							  case 0:
/*< 30>*/ 								rupees += -50;
/*< 96>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5400), ('next', 27), ('param3', 13)])
/*< 27>*/ 								printf(/* textboxtype: 1, unk: 0 */ "¡Pues nada, mucha suerte con esas\nrupias! ¡A ver qué tal lo haces!\n")
/*< 60>*/ 								temp_flags[15 /* 0x0 80 */] = true;
/*< 26>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 45), ('param3', 33)])
/*< 45>*/ 								changeScene(2, 0) // 
          							  case 1:
/*< 95>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4633), ('next', 29), ('param3', 13)])
/*< 29>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Tío, tienes menos rupias que el\nmoguma que vendió los guantes\npa comer. Consigue unas cuantas\ny vuelve entonces, anda.")
          							}
          						  case 1:
/*< 77>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 32), ('param3', 12)])
/*< 32>*/ 							printf(/* textboxtype: 1, unk: 1 */ "¿En qué nivel quieres jugar?\n[1]Principiante[2]Intermedio[3]Experto[4-]Paso")
          							goto flw_85
          						}
          					  case 1:
/*< 63>*/ 						printf(/* textboxtype: 1, unk: 0 */ "En el nivel intermedio hay unos cuantos\nhoyos más. ¡Pero estate al loro con\nlas <y<pudrias>>!")
          						goto flw_76
          					}
          				  case 2:
/*< 64>*/ 					switch (temp_flags[16 /* 0x3 01 */]) {
          					  case 0:
          						flw_78:
/*< 78>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 93), ('param3', 12)])
/*< 93>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5638), ('next', 23), ('param3', 13)])
/*< 23>*/ 						printf(/* textboxtype: 1, unk: 1 */ "La partida cuesta <r<70 rupias>>.\n¿Qué, cómo lo ves?\n\n[1]Vale[2-]Mejor no")
/*< 94>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 24), ('param3', 13)])
/*< 24>*/ 						switch (choice(2)) {
          						  case 0:
/*<113>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 70), ('next', 112), ('param3', 23)])
/*<112>*/ 							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 39)])) {
          							  case 0:
/*< 15>*/ 								rupees += -70;
/*< 98>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5400), ('next', 6), ('param3', 13)])
/*<  6>*/ 								printf(/* textboxtype: 1, unk: 0 */ "¡Pues nada, mucha suerte con esas\nrupias! ¡A ver qué tal lo haces!\n")
/*< 61>*/ 								temp_flags[16 /* 0x3 01 */] = true;
/*<  4>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 46), ('param3', 33)])
/*< 46>*/ 								changeScene(3, 0) // 
          							  case 1:
/*< 97>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4633), ('next', 13), ('param3', 13)])
/*< 13>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Tío, tienes menos rupias que el\nmoguma que vendió los guantes\npa comer. Consigue unas cuantas\ny vuelve entonces, anda.")
          							}
          						  case 1:
/*< 79>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 25), ('param3', 12)])
/*< 25>*/ 							printf(/* textboxtype: 1, unk: 1 */ "¿En qué nivel quieres jugar?\n[1]Principiante[2]Intermedio[3]Experto[4-]Paso")
          							goto flw_85
          						}
          					  case 1:
/*< 65>*/ 						printf(/* textboxtype: 1, unk: 0 */ "En el nivel experto hay más bombas,\npero también las rupias son de mayor\nvalor. ¡No lo olvides, tío! ¡El que no\narriesga no gana!")
          						goto flw_78
          					}
          				  case 3:
/*< 86>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5379), ('next', 5), ('param3', 13)])
/*<  5>*/ 					printf(/* textboxtype: 1, unk: 0 */ "¡Aquí estaré si cambias de idea, tío!")
          				}
          			}
          		  case 1:
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 2 */ "Es tu primera vez, ¿que no? ¡Pues no\nveas qué orgullo tenerte aquí!")
/*<155>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 154), ('param3', 13)])
/*<154>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Yo soy el gran <b<Nabucco>>! ¡Y me encargo\nde todo este tinglado de <r<Hoyos y rupias>>!")
/*< 18>*/ 			story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */] = true;
          			goto flw_53
          		}
          	  case 1:
/*< 69>*/ 		story_flags[185 /* us: 805A9AE9 0x01, jp: 805ACD69 0x01 */] = true;
/*<106>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 72), ('param3', 44)])
/*< 72>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 20), ('param3', 12)])
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Esta vez has logrado encontrar\n<r<\x0E\x02\x03\x06\x00\x00Í \x0E\x03\x04\x02\x1CD>>.")
/*< 71>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 39), ('param3', 33)])
/*< 39>*/ 		switch (context_related3(2)) {
          		  case 0:
/*<104>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4628), ('next', 7), ('param3', 13)])
/*<  7>*/ 			switch (context_related3(3)) {
          			  case 0:
/*< 11>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¡¿Pero qué...?! ¿No has encontrado\nni una sola rupia? Anda que...")
          				flw_103:
/*<103>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 81), ('param3', 13)])
/*< 81>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 108), ('param3', 12)])
/*<108>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 50), ('param3', 45)])
/*< 50>*/ 				switch (story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */]) {
          				  case 0:
          					flw_55:
/*< 55>*/ 					switch (context_related2(1)) {
          					  case 0:
/*<105>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5640), ('next', 56), ('param3', 13)])
/*< 56>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Tío, tienes cara de estar reventado.\nRecupera corazones y vuelve a\nintentarlo en otro momento, ¿vale?")
/*<116>*/ 						set_camera(5, 0)
/*<117>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Si quieres puedes sentarte a descansar\nun rato allí.")
          					  case 1:
/*<  2>*/ 						printf(/* textboxtype: 1, unk: 1 */ "Creo que te vendría bien intentarlo\nde nuevo. ¿Qué, te ves con ánimo?\n[1]Principiante[2]Intermedio[3]Experto[4-]Paso")
          						goto flw_85
          					}
          				  case 1:
/*< 51>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Ahí va un consejito... <r<Si las rupias\nson de poco valor>>, no habrá muchos\n<r<hoyos contiguos con trampa>>, así que\npodrás relajarte, que se te ve tenso.\nSin embargo, cuanto <r<más valiosas\nsean las rupias>>, <r<más hoyos contiguos\ncon trampa >>habrá. Ahí sí que tienes\nque estar atento.\nPero como en el primer hoyo te\nencuentres una bomba...\x0E\x01\x04\x02\x14 ¡pum!\nA pasar el mal trago y a sacar\npecho, tío. ¡Y no te desesperes!")
/*< 52>*/ 					story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */] = true;
          					goto flw_55
          				}
          			  case 1:
/*<  8>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Te estás quedando sin blanca.\nDas bastante pena, tío.")
          				goto flw_103
          			  case 2:
/*< 43>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Solo has perdido un poco. Eso es mala\nsuerte y nada más.")
          				flw_102:
/*<102>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 80), ('param3', 13)])
/*< 80>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 107), ('param3', 12)])
/*<107>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 55), ('param3', 45)])
          				goto flw_55
          			}
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Ni pa ti ni pa mí. Te has quedado igual.")
          			goto flw_102
          		  case 2:
/*< 44>*/ 			switch (context_related2(4)) {
          			  case 0:
/*<100>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 4363), ('next', 10), ('param3', 13)])
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Bueno, un pellizquillo no está mal.\nEstarás contento, ¿no?")
          				goto flw_102
          			  case 1:
/*<101>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 4364), ('next', 40), ('param3', 13)])
/*< 40>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¡Menudo pastizal has ganado!\n¡Enhorabuena, tío!")
          				goto flw_102
          			}
          		}
          	  case 2:
/*<111>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 73), ('param3', 44)])
/*< 73>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 159), ('param3', 12)])
/*<159>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Esta vez has logrado encontrar...")
/*< 70>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 99), ('param3', 33)])
/*< 99>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 6415), ('next', 41), ('param3', 13)])
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0 */ "¡Impresionante! ¡Has encontrado todas\nlas rupias! Toma, esto es para ti, te lo\nhas ganado.")
/*< 42>*/ 		give_item(64 0x40);
          		goto flw_102
          	}
          }

          void entrypoint_302_02() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 7, unk: 0 */ "Estimado cliente, gracias por\njugar a <r<Hoyos y rupias>>.\nPermítame darle un consejito\nde los buenos.\n<r<Si las rupias son de poco valor>>,\nno habrá demasiados <r<hoyos\ncontiguos con trampa>>, así que\nrelájese, fuera tensiones.\nNo obstante, cuanto <r<más valga\nla rupia>>, <r<más hoyos contiguos\ncon trampa>> habrá. Ahí sí que\ndebe estar atento. ¡Adiós!")
          }

          void entrypoint_302_03() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf(/* textboxtype: 1, unk: 1 */ "Se te está acabando el tiempo, tío...\nYo de ti empezaba a meterle un poco\nde caña, en serio.")
          }

          void entrypoint_302_04() {
/*< 68>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 1 */ "¡Se te ha agotado el tiempo! Mira que\nme dan rabia estas cosas... No te lo\npuedes tomar con TANTA calma, tío.")
          }

          void entrypoint_302_05() {
/*<114>*/ 	start()
/*<115>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x08\xA04Ah, ya veo, vas a descansar\nun ratito, ¿no?\n\n\nPues ya que estás, podríamos mantener\ntú y yo una buena charla de colegas,\n¿no te parece?\n[1]Vale[2-]Paso")
/*<120>*/ 	switch (choice(2)) {
          	  case 0:
/*<122>*/ 		printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x0F\x110C¡Mooola! A ver, a ver. ¿Quieres\npreguntarme algo?\n\x0E\x01\x09\x04\x08\xAFF[1]¿Quién\neres?[2]¿Levitas?[3]¿Aquí llega\nel sol?[4-]Olvídalo\x0E\x01\x09\x04\x13\x16FF")
          		flw_123:
/*<123>*/ 		switch (choice(4)) {
          		  case 0:
/*<125>*/ 			switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA04¡Yo soy el gran <b<Nabucco>>! ¡El encargado\nde <r<Hoyos y rupias>>! Vamos, que aquí\nmando yo.\n\n\x0E\x01\x09\x04\x09\xB09Pero me gustan los ambientes\ninformales, así que tutéame\ntodo lo que quieras, tío.")
          				flw_128:
/*<128>*/ 				printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x13\x1806¿Más preguntas?[1]¿Quién\neres?[2]¿Levitas?[3]¿Aquí llega\nel sol?[4-]Pues no")
          				goto flw_123
          			  case 1:
/*<158>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA04¿Que quién soy? Verás, ¡yo soy el gran\n<b<Nabucco>>! ¡El encargado de <r<Hoyos y\nrupias>>! Vamos, que aquí mando yo.\n\nPero me gustan los ambientes\ninformales, así que tutéame\ntodo lo que quieras, \x0E\x01\x09\x04\x0D\xF01tío.\n\n\x0E\x01\x09\x04\x08\xA09Monté todo esto de <b<Hoyos y rupias\n>>porque siempre he adorado ver sonreír\na mis colegas cuando amasan enormes\nfortunas.\n\x0E\x01\x09\x04\x10\x1319Pero todos los <b<mogumas >>dicen que está\ntirado encontrar las rupias y que pasan\nde jugar...\n\n\x0E\x01\x09\x04\x08\xAFFPor eso me encantaría que te\nconvirtieses en cliente habitual,\n¡sería lo más flipante que me\nhaya pasado jamás!")
          					flw_124:
/*<124>*/ 					loadzone_temp_flags[0 /* 0x1 01 */] = true;
          					goto flw_128
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA04¿Que quién soy? Verás, ¡yo soy el gran\n<b<Nabucco>>! ¡El encargado de <r<Hoyos y\nrupias>>! Vamos, que aquí mando yo.\n\nPero me gustan los ambientes\ninformales, así que tutéame\ntodo lo que quieras, \x0E\x01\x09\x04\x0D\xF01tío.\n\n\x0E\x01\x09\x04\x08\xA09Monté todo esto de <b<Hoyos y rupias\n>>porque siempre he adorado ver sonreír\na mis colegas cuando amasan enormes\nfortunas.\n\x0E\x01\x09\x04\x10\x1319Pero últimamente toda la zona se está\nplagando de horribles bicharracos\nrojos que campan a sus anchas y ningún\n<b<moguma >>se atreve a venir por aquí.\n\x0E\x01\x09\x04\x08\xAFFNo te imaginas lo que agradecería que\nalguien les reventase sus <r<torretas >>con\nun buen <pling>¡bum! y se fuesen a patadas de\naquí de una vez por todas.")
          					goto flw_124
          				}
          			}
          		  case 1:
/*<130>*/ 			switch (loadzone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*<131>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA05No, qué va, no levito. Lo que pasa es\nque así los clientes pueden contemplar\nmis pedazo de <r<jamones musculados>>,\nque son bien chulos.")
          				goto flw_128
          			  case 1:
/*<151>*/ 				set_camera(1, 0)
/*<148>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\x1605Je, je, je... Qué va, no levito.\n¡Me apoyo sobre la colita!")
/*<152>*/ 				set_camera(2, 0)
/*<149>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nY supongo que ya habrás observado\nlos pedazo de <r<jamones musculados>>\nque la Diosa me ha dado, ¿no?")
/*<153>*/ 				set_camera(-1, 0)
/*<150>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xAFFReconozco que me encanta que mis\nclientes los admiren. Por eso me apoyo\nen la cola. ¡Es toda una estrategia\ncomercial!")
/*<129>*/ 				loadzone_temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_128
          			}
          		  case 2:
/*<133>*/ 			switch (loadzone_temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<135>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA09Qué va, aquí no entra el sol ni aunque\nlo invites. ¡Las llevo por ir a la última!")
          				goto flw_128
          			  case 1:
/*<145>*/ 				set_camera(3, 0)
/*<134>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\x160A¿Lo dices por las gafas? Je, je, je. Son\nde mentirijilla. ¡Me las pongo porque\nme hacen parecer más interesante\nincluso de lo que soy!")
/*<146>*/ 				set_camera(4, 0)
/*<143>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x14\xE0B¿Y del <r<bigotillo>> qué me dices?\nTan lustroso y rizadito.\n¡Me lo cuido mogollón!")
/*<147>*/ 				set_camera(-1, 0)
/*<144>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xAFFPero vamos, que todo esto es puro\nmarketing. ¡Mis clientes se merecen\nque los reciba de la mejor forma\nposible!")
/*<132>*/ 				loadzone_temp_flags[2 /* 0x1 04 */] = true;
          				goto flw_128
          			}
          		  case 3:
/*<137>*/ 			switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<138>*/ 				switch (loadzone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<136>*/ 					switch (loadzone_temp_flags[2 /* 0x1 04 */]) {
          					  case 0:
/*<140>*/ 						switch (scene_flags[39 /* 0x5 80 */]) {
          						  case 0:
          							flw_139:
/*<139>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x1319¿Nada de nada? Pues sí que... Bueno,\nda igual. Tómatelo con calma y si eso\néchate una partidita a <b<Hoyos y rupias\n>>algún siglo de estos.")
          						  case 1:
/*<141>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x1319¿Nada de nada? Bah, tranquilo...\n\x0E\x01\x09\x04\x0D\x100CDe todas formas, muchas gracias\npor la charleta. Y como me has\ncaído bien, voy a contarte una cosita.\n\x0E\x01\x09\x04\x08\xA04¿Ves esas piedras tan relucientes\ncolgando de las paredes? ¿Las ves,\neh, las ves?\n\nPues son <r<rupias en bruto>>. De ahí que\nhaya tantas rupias en esta zona.\n¡Prueba a darles un buen <r<viaje>>, igual\n<r<se rompen y saltan>> de donde están!<pling>")
/*<142>*/ 							scene_flags[4 'Eldin Volcano'][39 /* 0x5 80 */] = true;
          						}
          					  case 1:
          						goto flw_139
          					}
          				  case 1:
          					goto flw_139
          				}
          			  case 1:
          				goto flw_139
          			}
          		}
          	  case 1:
/*<121>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x1319Qué chasco, tú. En fin, cuando hayas\ndescansado, igual estás de humor para\njugar a <b<Hoyos y rupias>>.")
          	}
          }

