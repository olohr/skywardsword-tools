          void entrypoint_114_03() {
          	start()
/*< 48>*/ 	switch (story_flags[202 /* us: 805A9AEF 0x10, jp: 805ACD6F 0x10 */]) {
          	  case 0:
/*< 49>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x02Ah, Link...\n¿Qué tal? ¿Has encontrado alguna\npista sobre el paradero de Zelda?\n\n¡Tienes que traerla de vuelta! \n¡Ánimo, Link!")
          	  case 1:
/*< 12>*/ 		switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          		  case 0:
/*< 13>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09¡Prométeme que volverás con Zelda \nsana y salva, Link!")
          		  case 1:
/*< 53>*/ 			switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          			  case 0:
/*< 54>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x811No puedo creer que Zelda se haya caído\nde su neburí...\n\n\nCon lo buena jinete que es...\n\n\n\n\x0E\x01\x09\x04\x00\xE00Yo vuelo fatal en neburí, así que solo\npuedo rezar por que esté bien...")
          			  case 1:
/*<  7>*/ 				switch (scene_flags[40 /* 0x4 01 */]) {
          				  case 0:
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x811Vaya problema con tu neburí,\n¿no, Link?\x0E\x01\x04\x02\x19\nOjalá lo encuentres pronto\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í")
          				  case 1:
/*<  4>*/ 					switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          					  case 0:
/*<  5>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x708¿Qué te pasa? ¿Por qué estás\ntan nervioso, Link?\n\n\n\x0E\x01\x09\x04\x07\xC00¡¿Cómo?! ¿Que no encuentras a tu\nneburí por ningún sitio?...\x0E\x01\x04\x02\x19\n\n\nY dices que tampoco acude a tu\nllamada\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\x01\x800Mmm\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Eso significa que...\x0E\x01\x04\x02\x19\n\x0E\x01\x08\x02\xFFCDLo sabía...\n\n\n\x0E\x01\x09\x04\x08\x807¿Eh?\x0E\x01\x04\x02\x19 No... no, nada.\x0E\x01\x04\x02\x19\nSon cosas mías, \x0E\x01\x04\x02\x14nada importante.")
/*< 29>*/ 						scene_flags[0 'Skyloft'][40 /* 0x4 01 */] = true;
          					  case 1:
/*< 10>*/ 						switch (scene_flags[23 /* 0x3 80 */]) {
          						  case 0:
/*< 11>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Me tengo que quedar en la academia,\npero te deseo mucha suerte en el <r<torneo\nceleste>>.\n\n¡Te estaré animando desde aquí,\nLink!")
          						  case 1:
/*<  1>*/ 							switch (scene_flags[39 /* 0x5 80 */]) {
          							  case 0:
/*<  2>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x809Yo no soy como tú, Link...\nNo hago nada bien...\n\n\nAl menos, gracias a pequeños encargos\ncomo este puedo mejorar un poco\nmi técnica de <g<levantamiento >>de\njarrones y barriles con (A)...\n\x0E\x01\x09\x04\x07\xE00Además, también gano unas rupias,\nasí que no me puedo quejar.")
          							  case 1:
/*<  3>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Buenos días, Link.\n\n\n\nHoy es el gran día, ¡el <r<torneo celeste>>!\n\n\n\n\x0E\x01\x09\x04\x01\x800Ay, cómo me gustaría participar\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\nPero este año no he sacado suficiente\nnota y me tengo que quedar en la\nacademia.\n\x0E\x01\x09\x04\x07\x800Además, ahora tengo que llevar estos\n<r<barriles >>hasta el comedor...\n\n\n\x0E\x01\x09\x04\x01\x800Yo que soñaba con ver cómo dejabas\na todos atrás en el torneo...\n\n\n\x0E\x01\x09\x04\x07\xA00Bueno, no tiene solución...\x0E\x01\x04\x02\x14\nEsfuérzate mucho, ¿eh?\n¡Te deseo buena suerte!")
/*< 26>*/ 								scene_flags[0 'Skyloft'][39 /* 0x5 80 */] = true;
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_114_20() {
/*< 55>*/ 	start()
/*< 77>*/ 	switch (context_related2(0)) {
          	  case 0:
/*<107>*/ 		switch (scene_flags[31 /* 0x2 80 */]) {
          		  case 0:
          			flw_72:
/*< 72>*/ 			switch (story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */]) {
          			  case 0:
/*<117>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 84), ('param3', 12)])
/*< 84>*/ 				switch (temp_flags[6 /* 0x1 40 */]) {
          				  case 0:
/*< 85>*/ 					printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x02Qué... ¿quieres intentar otra ronda?\n¡Son solo<r< 20 rupias>>!\n[1]¡Claro![2]¿Cómo iba?[3-]Mejor no")
          					flw_74:
/*< 74>*/ 					switch (choice(3)) {
          					  case 0:
          						flw_67:
/*< 67>*/ 						switch (has_rupees(20)) {
          						  case 0:
/*< 68>*/ 							rupees += -20;
/*< 70>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xA0A¡Muy bien, vamos a empezar!\n¡Ánimo, Link!")
/*< 71>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          						  case 1:
          							flw_66:
/*< 66>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x811No puedes permitírtelo... Parece que\nhasta alguien como tú puede tener\nproblemas de dinero de vez en cuando.\n¿Eh, Link?...")
          						}
          					  case 1:
          						flw_63:
/*< 63>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x200Muy bien, voy a lanzarte calabazas\ndurante <r<90 segundos>>, ¿de acuerdo?\nCada acierto cuenta 10 puntos...\n\n\x0E\x01\x09\x04\x00\xA00Los aciertos consecutivos suman más\n puntos. ¡Trata de encadenar el mayor\nnúmero de dianas que puedas!")
/*< 69>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 64), ('param3', 12)])
/*< 64>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x200Bueno, supongo que jugar sin riesgo\nno tendría mucho interés para alguien\ncomo tú... ¿Te parecen bien 20 rupias?\n\n\x0E\x01\x09\x04\x08\xA00¡Así te lo tomas más en serio!\nBueno, ¿te interesa una sesión de tiro\npor <r<20 rupias>>?\n[1]Mmm, sí[2-]Mmm, no")
/*< 65>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_67
          						  case 1:
          							goto flw_66
          						}
          					  case 2:
/*< 75>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x811Vaya, supongo que estarás muy\nocupado...\n\n\nTu objetivo ahora mismo es rescatar a\nZelda y nada más, ¿verdad?...\n\x0E\x01\x04\x02\n Lo siento.")
          					}
          				  case 1:
/*< 73>*/ 					printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x02Oh, Link. ¿Qué tal?\n¿Te sientes en forma?\n\n\n¿Quieres probar una sesión de Tiro a la\ncalabaza?... ¡Solo pido <r<20 rupias>>!\n[1]¡Claro![2]¿Cómo era?[3-]Mejor no")
          					goto flw_74
          				}
          			  case 1:
/*<102>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 76), ('param3', 31)])
/*< 76>*/ 				story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */] = true;
/*< 56>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x202¡Oye, Link!\nHe estado pensando...\n\n\n¿Qué ejercicio te podría ayudar\na mantener la forma?...\nLo de hacer flexiones y esas cosas ya\nno tiene secretos para ti...\n\x0E\x01\x09\x04\x00\x207Oye, \x0E\x01\x04\x02\x1E¡qué buen arco llevas! Apuesto a\nque eres un tirador de primera, ¿eh?\n[1]Pues claro[2]No tanto")
/*< 58>*/ 				switch (choice(2)) {
          				  case 0:
/*< 57>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xAFF¡Eres increíble, Link!\n\n\n\n\x0E\x01\x09\x04\x01\x200Aunque hiciera tres mil flexiones\nal día, no conseguiría parecerme a ti.")
          					flw_59:
/*< 59>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xA00Ya sé, ¿por qué no me enseñas cómo\n manejas el arco?\n\n\nMira, voy a lanzar al aire unas cuantas\ncalabazas.\n\n\n\x0E\x01\x09\x04\x00\x200¡Trata de acertarles con un buen\nflechazo antes de que caigan!\n\n\n\x0E\x01\x09\x04\x07\xA00A mí también me vendrá bien lanzarte\nlas calabazas para hacer un poco de\nejercicio.\n\n¿Qué te parece la idea?\n[1]Brillante[2-]Mala")
/*< 61>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_63
          					  case 1:
/*< 62>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x811Vaya, supongo que estarás muy\nocupado...\n\n\nTu objetivo ahora mismo es rescatar a\nZelda y nada más, ¿verdad?...\n\x0E\x01\x04\x02\n Lo siento.")
          					}
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xA09¡No seas modesto!\nTe lo digo en serio...")
          					goto flw_59
          				}
          			}
          		  case 1:
/*<108>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<109>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x501¡Link!\nEs horrible, la isla de la Diosa ha\ndesaparecido, ¿lo has visto?\nNo entiendo nada de nada...\n\x0E\x01\x04\x02\n\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x09\x04\x00\x800Pero\x0E\x01\x06\x02\xFBCD\x0E\x01\x06\x02Í tú ya estás al tanto de todo,\n¿no, Link?\n\n\n\x0E\x01\x09\x04\x00\x200Todo esto es necesario para poder\nencontrar a Zelda, ¿no es así?\n\n\nEntendido. ¡Pase lo que pase, prometo\nque no me asustaré! Pero tienes que\nencontrar a Zelda como sea, ¿eh?")
/*<110>*/ 				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          			  case 1:
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 83>*/ 		temp_flags[6 /* 0x1 40 */] = true;
/*< 90>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 78), ('param3', 44)])
/*< 78>*/ 		switch (context_related4(0)) {
          		  case 0:
/*< 92>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 28), ('param2', 9472), ('next', 79), ('param3', 13)])
/*< 79>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x12La puntuación total es \x0E\x02\x03\x06\x00\x00Í...\n\n\n\nParece que hoy tienes un mal día,\nLink...\nLo siento, pero esta vez te quedas\nsin premio. \n\x0E\x01\x09\x04\x07\x200El truco está en seguir la trayectoria\nde la calabaza y anticiparse un poco\ncon el cursor al apuntar.\n\nYo creo que podrías llegar a los\n<r<150 puntos >>fácilmente...\n\n\n\x0E\x01\x09\x04\x01\xA00Oh, perdón... Ya sé que no te hace falta\nningún consejo... Tú tienes un talento\nnatural para estas cosas, no como yo.")
          			flw_86:
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xA00¡Ven a verme siempre que te apetezca\nponer a prueba tu técnica!")
          			flw_91:
/*< 91>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 103), ('param3', 45)])
/*<103>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          		  case 1:
/*< 93>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 29), ('param2', 9728), ('next', 80), ('param3', 13)])
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0B¡La puntuación total es \x0E\x02\x03\x06\x00\x00Í!\n¡Eres un experto, Link!\n\n\nUna técnica como la tuya no se ve todos\nlos días... ¡Qué increíble!\n\n\nMuy bien, la próxima vez trata de\nllegar a los <r<400 puntos>>.\n\n\n\x0E\x01\x09\x04\x07\xA00Ah, y como recompensa...\nToma, 50 rupias que he ahorrado\nhaciendo pequeños encargos para\nla señora del comedor.")
/*< 87>*/ 			rupees += 50;
          			goto flw_86
          		  case 2:
/*< 94>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 29), ('param2', 9728), ('next', 81), ('param3', 13)])
/*< 81>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0B¡La puntuación total es \x0E\x02\x03\x06\x00\x00Í!\n¡Impresionante, Link!\nDonde pones el ojo, pones la flecha.\n\nEres increíble, Link...\nSiempre superas cualquier reto que te\npongan por delante.\n\n\x0E\x01\x09\x04\x07\xA00Te mereces un buen premio. \n¡Toma, aquí tienes!")
/*<106>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 88), ('param3', 42)])
/*< 88>*/ 			give_item(62 0x3E);
/*<115>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xA00A ver si la próxima vez consigues\nbatir la marca de <r<600 puntos>>.\nEso es un reto hasta para ti, ¿eh?")
          			goto flw_91
          		  case 3:
/*< 95>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 30), ('param2', 9984), ('next', 97), ('param3', 13)])
/*< 97>*/ 			switch (story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */]) {
          			  case 0:
/*< 82>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0B¡¡La puntuación total es \x0E\x02\x03\x06\x00\x00Í!!\n¡Increíble! ¡Has pulverizado todos\nlos récords, Link!\n\n\x0E\x01\x09\x04\x07\xA00Eres el orgullo de nuestra academia,\nLink. \nToma, ¡te lo has ganado!")
/*<105>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 89), ('param3', 42)])
/*< 89>*/ 				give_item(64 0x40);
          				goto flw_91
          			  case 1:
/*< 96>*/ 				story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */] = true;
/*< 98>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0B¡¡La puntuación total es \x0E\x02\x03\x06\x00\x00Í!!\n¡Esto es sensacional! ¡Eres el mejor,\nLink!\n\nMe siento orgulloso de pertenecer\na la misma academia que un genio\ncomo tú.\n\n\x0E\x01\x09\x04\x07\xA00Toma, acepta esto como <r<prueba de\nnuestra amistad>>.")
/*<104>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 99), ('param3', 42)])
/*< 99>*/ 				give_item(94 0x5E);
          				goto flw_86
          			}
          		}
          	}
          }

          void entrypoint_114_04() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01\x0E\x01\x08\x02\x1CD¡Link!\x0E\x01\x0D\x02\x1906")
/*< 39>*/ 	set_camera(4, 0)
/*< 38>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', -1), ('next', 37), ('param3', 16)])
/*< 37>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x800\x0E\x01\x08\x02\xFFCDEste...\x0E\x01\x04\x02\x14 Verás...\n\n\n\n\x0E\x01\x09\x04\x07\x800Bueno, nada...\x0E\x01\x04\x02\x14\nDéjalo, no te preocupes.")
          }

          void entrypoint_114_05() {
/*< 32>*/ 	start()
/*< 41>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xA0BGracias, Link...\nTe debo una.\n\n\n\x0E\x01\x09\x04\x00\x209Dividiremos la paga por este trabajo\na partes iguales. Es lo justo... No es\nmucho, pero aquí tienes.")
/*< 43>*/ 		give_item(4 0x04);
/*<116>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 44), ('param3', 12)])
/*< 44>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Me tengo que quedar en la academia,\npero te deseo mucha suerte en el <r<torneo\nceleste>>.\n\n¡Te estaré animando desde aquí,\nLink!")
/*< 45>*/ 		scene_flags[0 'Skyloft'][23 /* 0x3 80 */] = true;
          	  case 1:
/*< 40>*/ 		switch (loadzone_temp_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x203Si no te importa, quisiera que le\nllevaras un <r<barril >>a la señora del\ncomedor.\n\nPuedes levantar el barril con (A) y,\nsi oprimes (A) otra vez, lo <g<dejarás\n>>en el suelo. Así de fácil.\n\n\x0E\x01\x09\x04\x01\x200Mientras estás agarrando el barril, \ntambién puedes <g<lanzarlo>> si <g<apuntas\ncon el control hacia arriba >>y lo <g<agitas>>.\n\nEn el caso de objetos pequeños, como\nun jarrón, puedes lanzarlos <g<rodando\n>>por el suelo <g<apuntando hacia abajo y\nagitando el control>>.\n\x0E\x01\x09\x04\xC07\x200Pero es mejor que no lo intentes,\nporque ese tipo de cosas se rompen\ncon facilidad...")
/*<114>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x200Si se te olvidan los controles, puedes\nvolver a consultarlos siempre que\nquieras <g<oprimiendo>> <g<(2)>>.\x0E\x01\x11\x02\x5CD\n\nAsí verás una lista de las acciones y los\ncontroles posibles en cada momento.\n¡Verás lo práctico que es!")
          		  case 1:
/*< 33>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Este, Link...\n¿Podrías ayudarme?\n[1]¡Claro![2-]Imposible")
/*< 34>*/ 			switch (choice(2)) {
          			  case 0:
/*< 35>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xA0B¡Gracias! Verás...")
/*<  9>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x203Si no te importa, quisiera que le\nllevaras un <r<barril >>a la señora del\ncomedor.\n\nPuedes levantar el barril con (A) y,\nsi oprimes (A) otra vez, lo <g<dejarás\n>>en el suelo. Así de fácil.\n\n\x0E\x01\x09\x04\x01\x200Mientras estás agarrando el barril, \ntambién puedes <g<lanzarlo>> si <g<apuntas\ncon el control hacia arriba >>y lo <g<agitas>>.\n\nEn el caso de objetos pequeños, como\nun jarrón, puedes lanzarlos <g<rodando\n>>por el suelo <g<apuntando hacia abajo y\nagitando el control>>.\n\x0E\x01\x09\x04\xC07\x200Pero es mejor que no lo intentes,\nporque ese tipo de cosas se rompen\ncon facilidad...")
/*<113>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x200Si se te olvidan los controles, puedes\nvolver a consultarlos siempre que\nquieras <g<oprimiendo>> <g<(2)>>.\x0E\x01\x11\x02\x5CD\n\nAsí verás una lista de las acciones y los\ncontroles posibles en cada momento.\n¡Verás lo práctico que es!")
/*<  8>*/ 				loadzone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 36>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x19Ya\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í claro, supongo que no tendrás\ntiempo con todo lo del torneo celeste...\n\n\nNo te preocupes y deja el barril en su\nsitio, ¿de acuerdo? Yo me encargaré.")
          			}
          		}
          	}
          }

          void entrypoint_114_01() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x201¡Link!")
/*< 23>*/ 	set_camera(1, 0)
/*< 18>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 2), ('param2', 100), ('next', 25), ('param3', 15)])
/*< 25>*/ 	set_camera(3, 0)
/*< 17>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 0), ('next', 22), ('param3', 14)])
/*< 22>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 20), ('param3', 16)])
/*< 20>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x1800¡Ese uniforme verde es impresionante!\nPareces un caballero hecho y derecho.")
/*<111>*/ 	set_camera(2, 0)
/*<112>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x200Me lo ha dicho el director... \nVas a salir en busca de Zelda, ¿no\nes así?\n\n\x0E\x01\x09\x04\x00\x1700Eres increíble... No como yo, que soy\nun cobarde y no sirvo para nada.\n\n\n\x0E\x01\n\x04\x05ÍBueno, toma. La he hecho para ti.\nNo es gran cosa, pero me ha costado\nbastante... Me haría mucha ilusión\nque la usaras.")
/*< 51>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 14), ('param2', 4096), ('next', 52), ('param3', 13)])
/*< 52>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 50), ('param3', 6)])
/*< 50>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 16), ('param3', 42)])
/*< 16>*/ 	give_item(112 0x70);
/*< 19>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Es una <r<alforja de aventurero>> y tiene\ncapacidad para llevar hasta <r<cuatro\n>>objetos.\n\nEn el bazar venden artículos de todo\ntipo que pueden serte útiles en tu viaje.\nYo que tú iría a ver si te interesa algo...\n\n\x0E\x01\x09\x04\x07\xA09Sobre todo, nunca salgas de casa sin\nun <y<escudo >>y alguna que otra <y<poción>>.")
/*< 24>*/ 	set_camera(2, 0)
/*< 21>*/ 	printf(/* textboxtype: 1, unk: 0 */ "¡Link! \n\x0E\x01\x09\x04\x01\xC00Tienes que encontrar a Zelda,\n¿prometido?")
/*<100>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = true;
/*<101>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = true;
/*< 47>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_114_02() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
          }

