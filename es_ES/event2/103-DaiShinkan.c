          void entrypoint_103_01() {
          	start()
/*< 77>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*< 78>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05¿Sigues sin poder sentir la presencia\nde tu pelícaro?\n\n\nSerena tu espíritu, concéntrate e\ninténtalo de nuevo. Seguro que\nfunciona.")
          	  case 1:
/*<  1>*/ 		switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          		  case 0:
/*<  3>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01¡Oh, Link!\n¿Has encontrado ya a tu pelícaro?\n\n\n\x0E\x01\x04\x02(¿Cómo? ¿Que <b<Malton >>qué?\nMmm, ese granuja no sale de una\ny ya está metido en otra... ")
/*< 79>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 71), ('param3', 32)])
/*< 71>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', -1), ('next', 72), ('param3', 16)])
/*< 72>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 73), ('param3', 17)])
/*< 73>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Director...\nSi todo esto es obra suya, entonces\ntampoco es tan grave la cosa, ¿no?\nRetrasemos el torneo y listos.\nAunque tenga que esperar un par\nde horas, no está en situación de\nquejarse. Quien siembra vientos,\nrecoge tempestades... ")
/*< 74>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 75), ('param3', 16)])
/*< 75>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Cierto, cierto. Ya lo has oído,\nLink.\n\n\nPuedes ir a buscar a tu pelícaro\ntranquilamente, no te preocupes\npor nada. ")
/*< 76>*/ 			scene_flags[0 'Skyloft'][92 /* 0xA 10 */] = true;
          		  case 1:
/*<  2>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Yo me encargaré de explicárselo\ntodo al maestro <b<Asteus>>...\n~~~Link, ve a decirle que\nse pase por mi despacho.\nY de paso puedes aprovechar para\npreguntar por tu pelícaro. Todos\ndeben de estar ya en la gran plaza,\nte los encontrarás de camino.")
          		}
          	}
          }

          void entrypoint_103_02() {
/*< 13>*/ 	start()
/*< 14>*/ 	scene_flags[0 'Skyloft'][5 /* 0x1 20 */] = true;
/*< 15>*/ 	scene_flags[0 'Skyloft'][6 /* 0x1 40 */] = true;
/*< 16>*/ 	scene_flags[0 'Skyloft'][1 /* 0x1 02 */] = true;
/*< 42>*/ 	scene_flags[0 'Skyloft'][67 /* 0x9 08 */] = true;
          }

          void entrypoint_103_03() {
/*< 67>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Todo esto que está pasando resulta\ndifícil de creer... Yo tampoco sé muy\nbien qué pensar.\n\nPero me pregunto qué sucederá si\nhaces lo que ella te sugiere.")
          }

          void entrypoint_103_06() {
/*< 17>*/ 	start()
/*< 63>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*< 82>*/ 		switch (loadzone_temp_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			flw_84:
/*< 84>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Estoy convencido de que \nencontrarás a Zelda. Seguro que sí.\n\n\n¡Confío en ti, Link!")
/*< 83>*/ 			loadzone_temp_flags[19 /* 0x3 08 */] = true;
          		  case 1:
/*< 64>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02¡Link!\n\n\n\nLa Diosa...\x0E\x01\x04\x02\x1E ¡La isla y la Diosa\nhan desaparecido!\n[1]En realidad...[2]Ejem...")
/*< 66>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_65:
/*< 65>*/ 				printf(/* textboxtype: 1, unk: 0 */ "No hace falta que digas nada,\nLink.\n\n\n<y+<A un sinfín de adversidades deberá\nhacer frente la Diosa, y solo tras\nsuperarlas todas podrá volver a\nalzarse.>>\nEsas eran las últimas palabras de la\n<r<leyenda>>...\x0E\x01\x04\x02\x14 Ahora, por fin, entiendo\nsu significado.\n\nEstoy en lo cierto, ¿verdad? El peligro\nha pasado y mi hija...\x0E\x01\x04\x02\x14 mi pequeña\nZelda...\x0E\x01\x04\x02\n se encuentra por fin a salvo,\n¿no es así?\n[1]Lo siento...[2]No")
/*< 98>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_99:
/*< 99>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Entiendo... En fin, no tiene sentido\ndarle más vueltas al asunto.\n\n\nLo único que te pido es que te esfuerces\nal máximo, muchacho.")
          					goto flw_84
          				  case 1:
          					goto flw_99
          				}
          			  case 1:
          				goto flw_65
          			}
          		}
          	  case 1:
/*< 96>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*< 97>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Es extraño, me ha parecido oír un\nfuerte ruido procedente del exterior...\nPero habrán sido imaginaciones mías,\nsupongo.\nEn fin, eso ahora es lo de menos.\nEl destino de Zelda está en tus manos.\nSé prudente, muchacho.")
          		  case 1:
/*< 87>*/ 			switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          			  case 0:
/*< 88>*/ 				switch (loadzone_temp_flags[19 /* 0x3 08 */]) {
          				  case 0:
/*< 91>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Recuerdo haber visto esa gema en\nalguna parte... Pero ahora no me\nviene a la cabeza dónde. \n\n¿Y si vas a preguntarle al vidente?\nÉl te sabrá orientar, créeme.")
          				  case 1:
/*< 89>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Mmm, Link.\n¿Cómo va la cosa?\n\n\n¿Eh? ¿Que tienes que colocar la\n<r<gema de la ordalía >>en cierto sitio?\nMmm, ahora que lo dices...\n\nMe suena haber visto esa gema\nincrustada en algún lugar, sí...")
/*< 90>*/ 					loadzone_temp_flags[19 /* 0x3 08 */] = true;
          				}
          			  case 1:
/*< 80>*/ 				switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          				  case 0:
/*< 81>*/ 					printf(/* textboxtype: 1, unk: 0 */ "¿Que has conseguido aplacar la ira\nde Narisha y te ha dado información\nsobre la Trifuerza?\n\nMuchacho, eres increíble... \nJamás pensé que pudieras llegar\ntan lejos.\n\nPero aún te queda un largo trecho\npor recorrer antes de concluir con\ntu misión. ¡Ánimo! ¡No desfallezcas!")
          				  case 1:
/*< 60>*/ 					switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          					  case 0:
/*< 62>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 2), ('next', 61), ('param3', 13)])
/*< 61>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Mmm, pobre Narisha...\nEl tirabuzón aéreo es una técnica\npeligrosa, úsala con mucha cabeza.")
          					  case 1:
/*< 34>*/ 						switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          						  case 0:
/*< 59>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 4), ('next', 31), ('param3', 13)])
/*< 31>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Habla con el maestro <b<Buhel>>, su cuarto\nestá aquí al lado. Él podrá darte más\ndetalles acerca de Narisha.")
          						  case 1:
/*< 85>*/ 							switch (story_flags[327 /* us: 805A9AFF 0x20, jp: 805ACD7F 0x20 */]) {
          							  case 0:
/*< 86>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Me pregunto si no habrá alguien\nque pueda decirnos algo sobre la\nTrifuerza.\n\nMmm... De ser así, no creo que puedas\nencontrarlo aquí en Altárea, la verdad.\nNadie sabría de cosas tan antiguas.")
          							  case 1:
/*< 20>*/ 								switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          								  case 0:
/*< 35>*/ 									OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 58), ('param3', 31)])
/*< 58>*/ 									OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 2), ('next', 21), ('param3', 13)])
/*< 21>*/ 									printf(/* textboxtype: 1, unk: 0 */ "Oh, Link. ¿Qué tal?\nDime, ¿has encontrado alguna\npista sobre el paradero de Zelda?\n\nMmm\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í\nNo importa. Mantenme al corriente\nsi averiguas algo, ¿de acuerdo? ")
/*< 69>*/ 									OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 40), ('next', 22), ('param3', 6)])
/*< 22>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x06\x02\xFECD¿Cómo?...\x0E\x01\x06\x02Í ¿Que no puedes decirme\nnada? Ya veo, te gustaría contármelo\npero no puedes\x0E\x01\x06\x02\xFECD...")
/*< 70>*/ 									OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 37), ('param3', 6)])
/*< 37>*/ 									printf(/* textboxtype: 1, unk: 0 */ "A decir verdad, he estado pensando\nmucho sobre todo este asunto,\nLink...\n\nTe enfrentas a un terrible destino, \nluchas por rescatar a Zelda... y lo estás\nhaciendo todo tú solo. Me encantaría\npoder ayudarte.\nTiene que haber algo que este pobre\nviejo pueda hacer por ti\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í Algún modo\nde ayudarte en tu arduo periplo...\n\nCreo que ya lo tengo. ¡Puedo poner\nmis conocimientos a tu servicio!\n\n\nSi tienes cualquier pregunta que ataña\na Altárea, solo tienes que decírmelo.\n[1]Pues...[2]Mmm, nada")
/*< 23>*/ 									switch (choice(2)) {
          									  case 0:
          										flw_25:
/*< 25>*/ 										printf(/* textboxtype: 1, unk: 0 */ "¿Cómo? ¿Que si sé algo acerca de la\n<y+<Trifuerza>>\x0E\x01\x06\x02\xFECD\x0E\x01\x06\x02Í?...\n\n\n¿Dónde has oído tú ese nombre?\n\n\n\nMmm, la legendaria Trifuerza aparece\nmencionada a menudo en manuscritos\nantiguos.\n\nPero nadie sabe a ciencia cierta su\nparadero.")
/*< 26>*/ 										printf(/* textboxtype: 1, unk: 0 */ "Lo siento... Por más que me jacte\nde mis conocimientos, incluso yo\ntengo mis límites.")
/*< 32>*/ 										story_flags[327 /* us: 805A9AFF 0x20, jp: 805ACD7F 0x20 */] = true;
          									  case 1:
/*< 24>*/ 										printf(/* textboxtype: 1, unk: 0 */ "Mmm, ¿quieres decir que no necesitas\nlos conocimientos de este pobre viejo?\n\n\nHarías bien en prestar oídos a la voz\nde la experiencia, muchacho.\nSi necesitas ayuda, estaré aquí.")
          										goto flw_25
          									}
          								  case 1:
/*< 19>*/ 									switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          									  case 0:
/*< 57>*/ 										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 5), ('next', 18), ('param3', 13)])
/*< 18>*/ 										printf(/* textboxtype: 1, unk: 0 */ "¡Link, tú eres mi única\nesperanza!\n\n\nTe lo suplico, tienes que dar con Zelda.\n¡Encuéntrala y tráela de vuelta, por\nfavor!")
          									  case 1:
/*< 11>*/ 										switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          										  case 0:
/*< 56>*/ 											OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 1), ('next', 12), ('param3', 13)])
/*< 12>*/ 											printf(/* textboxtype: 1, unk: 0 */ "Cuando las grandes hojas de viento\napunten hacia la torre de la luz, se\nabrirá el camino hacia el cantar\nlegendario.\nLink, este cantar se ha\ntransmitido de una generación a otra\nentre las gentes de Altárea desde la\nnoche de los tiempos.\nPor lo tanto, las <r<dos hojas >>de las que\nhabla deben de hallarse en la misma\nAltárea, creo yo.\n\nEspero que esta información te haya\nservido de algo.")
          										  case 1:
/*< 50>*/ 											switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          											  case 0:
/*< 36>*/ 												OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 55), ('param3', 31)])
/*< 55>*/ 												OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 3), ('next', 92), ('param3', 13)])
/*< 92>*/ 												printf(/* textboxtype: 1, unk: 0 */ "¡Oh, Link, estás de vuelta!\nY veo que sigues de una pieza...\nNo sabes cómo me alegro.\n\nDime, ¿qué tal va todo? ¿Has podido\nencontrar alguna pista fiable sobre\nel paradero de Zelda?")
/*< 94>*/ 												set_camera(10, 0)
/*< 93>*/ 												printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Mmm, entiendo\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\nAh, Zelda, Zelda... pobre hija mía...\n\n\nEjem, disculpa, no me hagas caso.\nSupongo que todo esto tampoco es\nnada fácil para ti...")
/*< 95>*/ 												set_camera(-1, 0)
/*<  4>*/ 												printf(/* textboxtype: 1, unk: 0 */ "¿Cómo dices?...\x0E\x01\x04\x02(\n¿La letra de la canción que cantó\nZelda el día de la ceremonia?\n\n¡Ejem! No es que yo sea muy buen\ncantante que digamos...\n[1]Solo\nla letra[2]A cantar")
/*<  5>*/ 												switch (choice(2)) {
          												  case 0:
/*<  7>*/ 													printf(/* textboxtype: 1, unk: 0 */ "Uf, menos mal... Me habías asustado.\nSi te vale solo con la letra, te la puedo\nrecitar sin problema.\n\nVeamos, dice así...")
          													flw_8:
/*<  8>*/ 													printf(/* textboxtype: 1, unk: 0 */ "<y+<\x0E\x01\x06\x02\xFCCD<y+<Joven que portas la luz\nque unirá el cielo y la tierra,\ny al que guía la sierva\nelegida por la Diosa...<y+<>>\x0E\x01\x06\x02Í\n\nY continúa así...\n\n\n<y+<\x0E\x01\x06\x02\xFCCDSi hacia la torre iluminada\ndos hojas de viento logras orientar,\nse abrirá ante ti la senda\ny encontrarás el cantar.\x0E\x01\x06\x02Í>>")
/*<  9>*/ 													printf(/* textboxtype: 1, unk: 0 */ "Esta es la letra completa...\n\n\n\nLo de la <r<torre iluminada >>hace\nreferencia a la torre de la luz\nde la gran plaza. En cuanto a\nlas grandes hojas de viento\x0E\x01\x06\x02\xFECD...\n¿Querrá decir que al apuntar\ncon dos hojas en dirección a la\ntorre de la luz sucederá algo en\nparticular\x0E\x01\x06\x02\xFECD?...\x0E\x01\x06\x02Í\nMmm, <r<dos grandes hojas de viento>>...\x0E\x01\x06\x02\xFECD")
/*< 10>*/ 													story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */] = true;
/*<100>*/ 													story_flags[142 /* us: 805A9AEE 0x01, jp: 805ACD6E 0x01 */] = true;
          												  case 1:
/*<  6>*/ 													printf(/* textboxtype: 1, unk: 0 */ "Déjate de bromas, ¿quieres?\n¡Para cantos estoy yo ahora!\nBueno, lo que es la letra sí que\nme la sé.\nVeamos, decía así...")
          													goto flw_8
          												}
          											  case 1:
/*< 52>*/ 												switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          												  case 0:
/*< 51>*/ 													printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02¡Oh, Link! ¿Qué tal?\n¿Has logrado dar con Zelda?\n\n\nSiento mucho cargarte con una tarea\ntan pesada... Pero prefiero que nadie\nmás se entere de lo ocurrido. Menudo\nrevuelo se armaría...\nSí, mejor que no sepan nada...\nLo siento mucho, pero tú eres el único\nen quien puedo confiar.")
          												  case 1:
/*< 53>*/ 													printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01El <r<maestro de esgrima >>también está\npreocupado por tu partida. Él ha sido\ntu guía desde niño en el camino de la \nespada...\n¿Por qué no te pasas por el gimnasio\na despedirte antes de marcharte?\nSeguro que tiene algún buen consejo\npara ti.\nLink, dejo el destino de\nZelda en tus manos. ¡Suerte!")
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
          	}
          }

          void entrypoint_103_07() {
/*< 27>*/ 	start()
/*< 54>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 2), ('next', 28), ('param3', 13)])
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0 */ "¡Espera, Link!")
/*< 43>*/ 	set_camera(1, 0)
/*< 44>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 100), ('next', 29), ('param3', 15)])
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Acabo de acordarme de algo. Es una\npista que puede serte útil.\n\n\nSupongo que habrás oído hablar de\n<b<Narisha>>, el <r<gran espíritu de los cielos\n>>que protege Altárea desde antiguo.\n\n\x0E\x01\n\x04\x02ÍDicen que no hay nada que Narisha\nno sepa, su sabiduría es tan vasta\ncomo el mismo cielo.\n\nSi le preguntas sobre la <y+<Trifuerza>>,\na buen seguro podrá guiarte.\n[1]¿Dónde está?[2]¿Lo sabe\ntodo?")
/*< 38>*/ 	switch (choice(2)) {
          	  case 0:
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Mmm... Pues a decir verdad...")
          		flw_45:
/*< 45>*/ 		set_camera(3, 0)
/*< 30>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Tú también habrás reparado en ese\n<r<cúmulo gigantesco >>que se ve en el\ncielo últimamente, supongo.\n\nSe dice que el mismísimo Narisha se\noculta en su interior.")
/*< 46>*/ 		set_camera(4, 0)
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Quería saber si el rumor era cierto\no no, así que encargué al maestro\n<b<Buhel>> que investigara la nube.\n\nPero con todo el lío de Zelda, aún\nno ha tenido tiempo de presentarme\nel informe. \n\nLo mejor será que vayas a preguntarle\nsobre Narisha directamente al maestro\n<b<Buhel>>.")
/*< 33>*/ 		story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */] = true;
/*< 47>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          	  case 1:
/*< 40>*/ 		printf(/* textboxtype: 1, unk: 0 */ "En efecto, es una enciclopedia\nviviente. Pero...")
          		goto flw_45
          	}
          }

          void entrypoint_103_08() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x17¿Qué haces? ¡Rápido, lánzate y llama\na tu pelícaro! ¡Los demás ya han salido!")
          }

