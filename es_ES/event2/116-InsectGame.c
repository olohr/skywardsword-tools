          void entrypoint_116_01() {
          	start()
/*< 13>*/ 	switch (context_related4(1)) {
          	  case 0:
/*< 24>*/ 		switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          		  case 0:
/*< 25>*/ 			switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          			  case 0:
          				flw_5:
/*<  5>*/ 				switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          				  case 0:
/*< 57>*/ 					OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 115), ('param3', 12)])
/*<115>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 71), ('param2', 1), ('next', 114), ('param3', 23)])
/*<114>*/ 					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 64)])) {
          					  case 0:
/*<  4>*/ 						printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x01¿Preparado para cazar insectos?\n¡Seguro que al final te acaban gustando\ntanto como a mí!\n\nEl nivel para principiantes cuesta\n<r<20 rupias>>, y el nivel para expertos\ncuesta <r<50 rupias>>. ¿Por cuál te decides?\n\n[1]Principiante[2]Experto[3-]Paso")
          						flw_1:
/*<  1>*/ 						switch (choice(3)) {
          						  case 0:
/*<102>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 96>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 98>*/ 									rupees += -20;
/*< 91>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x100Voy a cronometrarte y, si logras un\ntiempo decente, ¡te daré un premio!\n\n\n\x0E\x01\x09\x04\x00\x100En el nivel para principiantes debes\ncazar un ejemplar de cada uno de los\n5 tipos de insectos que se te indiquen.\n¡Ya puedes ir tomando posiciones!")
/*< 75>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = false;
/*<  2>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          								  case 1:
/*< 97>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x315A ver cómo te lo digo... No tienes\nsuficiente dinero. Y por muy alumno\nque seas de la academia de caballeros,\naquí no se hacen descuentos.")
          								}
          							  case 1:
          								flw_104:
/*<104>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x813Deberías tomarte el tema de los\ninsectos un poco más en serio, ¿no?\n¿Adónde crees que vas con tan pocos\n<r<corazones>>?\n\x0E\x01\x09\x04\x00\x100Anda, vuelve por aquí cuando estés\nun poco mejor de salud.")
          							}
          						  case 1:
/*<103>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 93>*/ 								switch (has_rupees(50)) {
          								  case 0:
/*< 95>*/ 									rupees += -50;
/*< 92>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x100Voy a cronometrarte y, si logras un\ntiempo decente, ¡te daré un premio!\n\n\n\x0E\x01\x09\x04\x00\x100En el nivel para expertos debes cazar\nun total de diez ejemplares de los 8\ntipos de insectos que se te indiquen.\n¡Ya puedes ir tomando posiciones!")
/*< 76>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = true;
/*< 12>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', -1), ('param3', 33)])
          								  case 1:
/*< 94>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x315A ver cómo te lo digo... No tienes\nsuficiente dinero. Y por muy alumno\nque seas de la academia de caballeros,\naquí no se hacen descuentos.")
          								}
          							  case 1:
          								goto flw_104
          							}
          						  case 2:
/*<  3>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x513No, si ya decía yo que a ti lo de los\ninsectos ni te va ni te viene.")
          						}
          					  case 1:
/*<116>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x13\x80A¡¿Pero qué me dices?! ¿No tienes\n<y<cazamariposas>>? ¡Eso sí que no me\nlo esperaba!\n\n\x0E\x01\x09\x04\x00\x500¿Cómo es posible que la caza de\ninsectos, tan en boga últimamente,\nno haya llamado tu atención? Das\nun poco de pena, la verdad.\n\x0E\x01\x09\x04\x03\x100En fin, en la <r<tienda de Terry >>podrás\ncomprarte un cazamariposas...\n¡Ya estás tardando!")
          					}
          				  case 1:
/*< 56>*/ 					OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 7), ('param3', 12)])
/*<  7>*/ 					story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
/*< 49>*/ 					story_flags[286 /* us: 805A9AFA 0x01, jp: 805ACD7A 0x01 */] = true;
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01¡Hola, Link!\nQué casualidad encontrarte\npor aquí, ¿no?\n\n\x0E\x01\x09\x04\x12\x600A mí me envolvió una nube gordísima\ny acabé aterrizando en este lugar...\n\n\n\x0E\x01\x09\x04\x00\x100Al principio no sabía qué hacer, ¡pero\nluego llegué a la conclusión de que esta\nisla es el hábitat perfecto para los\ninsectos!\n\x0E\x01\x09\x04\x03\x104Por tanto he decidido juntar montones\nde insectos en la isla y dedicarme\na cazarlos, ¿qué te parece?\n\n\x0E\x01\x09\x04\x00\x100Así que ya sabes, si en cualquier\nmomento te sientes con ganas de cazar\ninsectos, solo tienes que decírmelo.\n¡Suelto unos cuantos y ya está!")
/*<112>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 71), ('param2', 1), ('next', 111), ('param3', 23)])
/*<111>*/ 					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 62)])) {
          					  case 0:
/*<110>*/ 						printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x100He pensado que lo mejor es tener dos\nniveles: uno para <r<principiantes>>, fácil y\ndivertido; y otro para <r<expertos>>, para\nauténticos amantes de los insectos.\n\x0E\x01\x09\x04\x03\x100A ti veo que no te apasionan los bichos,\nasí que te haré una buena oferta y\npodrás jugar al principiante por <r<20\nrupias >>y al experto por <r<50 rupias>>.\n[1]Principiante[2]Experto[3-]Paso")
          						goto flw_1
          					  case 1:
/*<113>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x13\x80A¡¿Pero qué me dices?! ¿No tienes\n<y<cazamariposas>>? ¡Eso sí que no me\nlo esperaba!\n\n\x0E\x01\x09\x04\x00\x500¿Cómo es posible que la caza de\ninsectos, tan en boga últimamente,\nno haya llamado tu atención? Das\nun poco de pena, la verdad.\n\x0E\x01\x09\x04\x03\x100En fin, en la <r<tienda de Terry >>podrás\ncomprarte un cazamariposas...\n¡Ya estás tardando!")
          					}
          				}
          			  case 1:
/*< 26>*/ 				switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          				  case 0:
/*< 42>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Je, je, je. ¿Has venido a recuperar\nel <b<escarabero rex>>?\n[1]¡Claro![2-]Pues no")
          					flw_50:
/*< 50>*/ 					switch (choice(2)) {
          					  case 0:
/*< 58>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 36), ('param3', 12)])
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Esto es un negocio, al fin y al cabo,\nasí que tienes que darme <r<10 rupias>>.\n\n[1]¡Toma![2-]Ni en broma")
/*< 53>*/ 						switch (choice(2)) {
          						  case 0:
/*< 38>*/ 							switch (has_rupees(10)) {
          							  case 0:
/*<105>*/ 								switch (context_related2(0)) {
          								  case 0:
/*<118>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 71), ('param2', 1), ('next', 117), ('param3', 23)])
/*<117>*/ 									switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 66)])) {
          									  case 0:
/*< 40>*/ 										rupees += -10;
/*< 41>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x04\x100Las reglas son que debes cazar 10\ninsectos del tipo que yo elija.\n\n\n\x0E\x01\x09\x04\x03\x100Voy a cronometrarte, y tendrás que\natrapar esos 10 insectos <r<en menos\nde 3 minutos>>.\n\n\x0E\x01\x09\x04\x00\x100Si lo consigues, te devolveré\nel <b<escarabero rex>>.\n\n\n¡Ya puedes ir tomando posiciones!")
/*< 37>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', -1), ('param3', 33)])
          									  case 1:
/*<119>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x13\x807¡Pero bueno! ¿Todavía no tienes un\n<y<cazamariposas>>? Pues no sé cómo\nquieres jugar sin uno...\n\n\x0E\x01\x09\x04\x04\x100¡Vuelve cuando te lo hayas comprado!")
          									}
          								  case 1:
/*<106>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x813Deberías tomarte el tema de los\ninsectos un poco más en serio, ¿no?\n¿Adónde crees que vas con tan pocos\n<r<corazones>>?\n\x0E\x01\x09\x04\x00\x100Anda, vuelve por aquí cuando estés\nun poco mejor de salud.")
          								}
          							  case 1:
/*< 39>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x315A ver cómo te lo digo... No tienes\nsuficiente dinero. Y por muy alumno\nque seas de la academia de caballeros,\naquí no se hacen descuentos.")
          							}
          						  case 1:
          							flw_52:
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x305¿Te has propuesto formar parte\nde mi colección?\n\n\n\x0E\x01\x09\x04\x00\x100¡Lo digo porque te veo muy <r<mosqueado>>!\nJe, je, je, je...\x0E\x01\x09\x04\x00\x04")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 31>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 28), ('param3', 31)])
/*< 28>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Je, je, je... ¡Muy buenas,\nLink! ¿Cómo te va?\n\n\n\x0E\x01\x09\x04\x00\x100¿Cómo? ¿Que tengo una sonrisa de\noreja a oreja? ¡Sí, supongo que sí!\n\n\n¿Y sabes por qué? Pues porque he\nencontrado un insecto supercurioso.\n[1]¡Cuéntamelo![2]¿Y a mí qué?")
/*< 29>*/ 					switch (choice(2)) {
          					  case 0:
/*< 27>*/ 						story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */] = true;
/*< 32>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x100¿Entonces te lo cuento? Je, je, je...\n\n\n\nAllá va...\x0E\x01\x04\x02\x1E \x0E\x01\x09\x04\x13\x100¡He encontrado el legendario\n<b<escarabero rex>>!\n\n\n\x0E\x01\x09\x04\x03\x100¡Las probabilidades de ver uno de estos\nson tan pequeñas que es un milagro!\n¡No puedo dejar de sonreír! ¡Hasta me\nduele la cara y todo!")
/*< 54>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x800¡¿Que qué?! ¿Que este insecto es de\nTerry? ¿Terry el de la tienda esa\nque va volando por ahí?\n[1]Devuélveselo[2]Pobrecito, ¿no?")
/*< 33>*/ 						switch (choice(2)) {
          						  case 0:
/*< 35>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x800¿Crees que me vas a engañar con un\ntruco tan sucio? ¡Eres pérfido!\n\n\n\x0E\x01\x09\x04\x13\x100¡El insecto es mío, lo he encontrado yo!\n¡No pienso dárselo a nadie!")
          							flw_51:
/*< 51>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x06\x02\xFDCD(...)\x0E\x01\x06\x02Í\nSupongo que no está bien apropiarse\nde lo que no es mío.\n\n\x0E\x01\x09\x04\x12\x100El problema es que no puedo dártelo\ny ya está. No soy capaz, va contra mi\nnaturaleza, qué le vamos a hacer...\n\n\x0E\x01\x09\x04\x00\x500¡Pero se me acaba de ocurrir una idea!\n\n\n\n\x0E\x01\x09\x04\x00\x100Si consigues un tiempo que a mi\nparecer te convierta en el mejor\ncazador de insectos de la historia,\n¡entonces te daré el insecto!\n\x0E\x01\x09\x04\x03\x100¿Trato hecho? ¿Te atreves a aceptar\nel desafío?\n[1]De acuerdo[2-]Ahora no")
          							goto flw_50
          						  case 1:
/*< 34>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x500¿Tienes idea de lo que vale\neste insecto?\n\n\n\x0E\x01\x09\x04\x00\x100¡Con solo tenerlo, mi prestigio dentro\ndel mundo de la caza de insectos subirá\ncomo la espuma!")
          							goto flw_51
          						}
          					  case 1:
/*< 30>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x515Jamás pensé que me dirías algo\nasí... Eres pérfido como un vulgar\ncomebichos...")
          					}
          				}
          			}
          		  case 1:
          			goto flw_5
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05¿No quieres seguir cazando insectos?\nVenga ya, que no estoy para bromas.\n¿Lo dices en serio?\n[1]Sí[2-]No")
/*< 17>*/ 		switch (choice(2)) {
          		  case 0:
/*< 14>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x500Entonces no estabas de broma...\nSupongo que no aprecias la belleza\nde los insectos como yo. ¡Seguro que\na ti te da por otra cosa!")
/*< 18>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', -1), ('param3', 33)])
          		  case 1:
/*< 16>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Claro que sí! En esta vida no hay\nnada como cazar insectos, ¡es lo\nmás fantástico del mundo!")
          		}
          	  case 2:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x500Mmm... Estamos un poco lentos hoy,\n¿no?\n\n\n\x0E\x01\x09\x04\x00\x100Vamos, ¡que se te ha agotado el tiempo\ny ni siquiera has terminado!")
/*< 23>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', -1), ('param3', 33)])
          	  case 3:
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x13\x1000¡Oye, oye! ¿Es que acaso no sabes nada\nsobre los insectos?\n\n\n\x0E\x01\x09\x04\x03\x100Aunque pueda parecerlo, muchos no\nson inofensivos. Por eso he parado\nel juego, ¡he visto que te estaban\nponiendo en aprietos!")
/*<100>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', -1), ('param3', 33)])
          	}
          }

          void entrypoint_116_02() {
/*<  8>*/ 	start()
/*<128>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 61), ('param3', 42)])
/*< 61>*/ 	switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          	  case 0:
          		flw_9:
/*<  9>*/ 		switch (context_related4(0)) {
          		  case 0:
/*< 20>*/ 			switch (context_related4(2)) {
          			  case 0:
/*< 44>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 10), ('param3', 44)])
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x107¡Está bien, se acabó! Mmm...\nLos dos sabemos que lo puedes\nhacer muchísimo mejor.\n\n\x0E\x01\x09\x04\x00\x100¡Plantéate hacerlo en <r<menos de 5\nminutos >>la próxima vez que juegues!\n\n\n\x0E\x01\x09\x04\x03\x100Por cierto, por la noche me dedico a\ncomprar insectos en la academia, así\nque ya sabes... ¡Pásate por mi cuarto\ncuando quieras!")
/*< 45>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 45)])
          			  case 1:
/*< 21>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x500Es una pena que no sepas apreciar\nla belleza y el encanto de los insectos.\n\n\n\x0E\x01\x09\x04\x00\x100¡Pero pásate por aquí cuando quieras,\nsiempre serás bienvenido!")
          			  case 2:
/*< 22>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x100Lo siento, pero aquí no se devuelve\nel dinero. \x0E\x01\x09\x04\x00\x100¡Mejor suerte la próxima\nvez! ¡Ja, ja, ja, ja!")
          			  case 3:
/*<101>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Ja, ja, ja, ja... ¡Estabas tan acelerado\ncazando insectos que se te ha olvidado\nque tu salud estaba flaqueando!\n\n\x0E\x01\x09\x04\x00\x500Pero lo siento, no se devuelve el dinero.\nVuelve por aquí cuando te encuentres\nun poco mejor de salud, ¿vale?")
          			}
          		  case 1:
/*< 79>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 77), ('param3', 44)])
/*< 77>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 78>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x104¡Se acabó! Bueno, no está mal,\nlo reconozco.\n\n\n\x0E\x01\x09\x04\x00\x100Pero si sabes dónde viven los insectos,\nirás más rápido y terminarás antes.\nLa próxima vez intenta hacerlo en\n<r<menos de 3 minutos>>, ¿de acuerdo?")
/*< 59>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 120), ('param3', 12)])
/*<120>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x100Bah, esto es calderilla. Toma,\n<r<80 rupias>>.")
/*< 81>*/ 				rupees += 80;
/*< 80>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 45)])
          			  case 1:
/*< 11>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04¡Se acabó! Supongo que no debería\nsorprenderme que consigas un tiempo\nasí.\n\n\x0E\x01\x09\x04\x00\x100Por si no lo sabías, hay insectos que\npueden vivir en distintas zonas, y en\nunas te resultará más difícil atraparlos\nque en otras. ¡Hay que saber buscar!")
/*<122>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 121), ('param3', 12)])
/*<121>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x100La próxima vez deberías intentar\nhacerlo en <r<menos de 3 minutos>>.\nEn todo caso, ahí va mi calderilla:\n<r<30 rupias>>.")
/*< 55>*/ 				rupees += 30;
/*< 46>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 45)])
          			}
          		  case 2:
/*< 88>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 87), ('param3', 44)])
/*< 87>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 83>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x811¡Se acabó! ¡Hala! ¡Has sido muy rápido!\n\n\n\n\x0E\x01\x09\x04\x00\x100¡Puede que seas el mejor cazador de\ninsectos mundial! Después de mí, claro.\nPero la próxima vez intenta hacerlo en\n<r<menos de 2 minutos>>, ¿vale?\nTe daré como premio una cosa que te\nvuelve loco... ¡<r<5 insectos>>, claro que sí!")
/*< 82>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 129), ('param3', 45)])
/*<129>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<108>*/ 				give_item(23 0x17);
/*<130>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<125>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04ÿ\xFF00Cuídalos bien, por lo que más quieras...")
          			  case 1:
/*< 60>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x11¡Se acabó! ¡Esto se te da de maravilla!\n¡Lo tuyo es talento natural!\n\n\n\x0E\x01\x09\x04\x12\x500Aun así, no eres lo bastante bueno\ncomo para que te dé ningún insecto\nde mi querida colección, lo siento.")
/*<124>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 123), ('param3', 12)])
/*<123>*/ 				printf(/* textboxtype: 1, unk: 0 */ "La próxima vez intenta hacerlo\nen <r<menos de 2 minutos>>, ¿vale?\n\n\nEso sí, ¡esta vez te has ganado\n<r<50 rupias>>! ¡Que las disfrutes!")
/*< 86>*/ 				rupees += 50;
/*< 47>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 45)])
          			}
          		  case 3:
/*< 90>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 89), ('param3', 44)])
/*< 89>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 84>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x13\x811¡Se acabó! ¡Hala, has logrado un tiempo\nincreíble!\n\n\n\x0E\x01\x09\x04\x00\x100No tengo más remedio que reconocer\nque eres un cazador de insectos de\nprimera, sí señor.\n\n\x0E\x01\x09\x04\x04\x100Aquí tienes tu premio: ¡<r<5 insectos>>!\nSorprendido, ¿eh? ¡Y además son\nde los difíciles de encontrar!")
/*< 85>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 131), ('param3', 45)])
/*<131>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<109>*/ 				give_item(24 0x18);
/*<133>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<126>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04ÿ\xFF00Cuídalos bien, por lo que más quieras...")
          			  case 1:
/*< 43>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x811¡Se acabó! ¡Impresionante! ¡A esto\nllamo yo una buena caza!\n\n\n\x0E\x01\x09\x04\x12\x100Pero no te olvides de que estás\nen el nivel para principiantes.\n\n\n\x0E\x01\x09\x04\x00\x100La próxima vez deberías probar el nivel\npara expertos. ¡Si lo haces bien, igual\nconsigues sumar <r<5>> de mis <r<insectos>>\nfavoritos a tu palmarés!")
/*< 48>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 132), ('param3', 45)])
/*<132>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<107>*/ 				give_item(22 0x16);
/*<134>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04ÿ\xFF00Cuídalos bien, por lo que más quieras...")
          			}
          		}
          	  case 1:
/*< 62>*/ 		switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          		  case 0:
/*< 63>*/ 			switch (context_related4(0)) {
          			  case 0:
/*< 73>*/ 				switch (context_related3(0)) {
          				  case 0:
          					flw_65:
/*< 65>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 64), ('param3', 44)])
          					flw_64:
/*< 64>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x13Qué pena... ¡no lo has logrado!\n\n\n\n\x0E\x01\x09\x04\x12\x500Sintiéndolo mucho, no puedo\ndevolverte el <b<escarabero rex>>.\n\n\n\x0E\x01\x09\x04\x00\x100Vamos, que o terminas en menos\nde 3 minutos o nada. ¡Venga,\nsorpréndeme!")
/*< 66>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 45)])
          				  case 1:
          					goto flw_64
          				  case 2:
          					goto flw_64
          				}
          			  case 1:
          				goto flw_65
          			  case 2:
          				flw_72:
/*< 72>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 71), ('param3', 44)])
/*< 71>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¡Listo, ya está! \x0E\x01\x09\x04\x00\x04¡Bravo! ¡Bravo!\n¡Ni en mil años habría pensado\nque romperías el récord casi sin\ndespeinarte!")
/*< 67>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x500Lo prometido es deuda... Aquí tienes\nel <b<escarabero rex>>.\n\n\n\x0E\x01\x09\x04\x00\x100Asumo con caballerosidad mi derrota.\nLo mejor que puedo hacer es callarme.\nEn boca cerrada no entran <r<moscas>>...\n\x0E\x01\x09\x04\x03\x100Je, je, je. Si es que tengo un gracejo...")
/*< 68>*/ 				story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */] = true;
/*< 69>*/ 				give_item(159 0x9F);
/*< 74>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x04\x500No te olvides de decirle a Terry que\nsiento haberle causado tantas\nmolestias, ¿de acuerdo?")
/*< 70>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 45)])
          			  case 3:
          				goto flw_72
          			}
          		  case 1:
          			goto flw_9
          		}
          	}
          }

