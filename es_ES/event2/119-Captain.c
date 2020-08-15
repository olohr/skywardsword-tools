          void entrypoint_119_10() {
/*<113>*/ 	start()
/*<120>*/ 	switch (loadzone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<112>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x17\x209\x0E\x01\x08\x02\x2CD¡Espléndido, voto a tal!")
/*<124>*/ 		set_camera(3, 0)
/*<125>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x17\x1A08¡Hay que poner toda la carne en\nel asador para hacerlo bien!\n\n\n\x0E\x01\x09\x04\x09\x200¿Quieres probar ahora\ncon el <g<golpe de gracia>>?\n\n[1]¡Claro![2-]Mejor no")
          	  case 1:
/*<121>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x1D04¿Qué te pasa, Link?\nNo pareces el mismo de siempre...")
/*<122>*/ 		set_camera(3, 0)
/*<123>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x1D01Mantente en el centro respecto a\ntus enemigos. Si no mueves <r<a la vez>> \nel mando y el Nunchuk <r<en horizontal>>,\nno ejecutarás el ataque circular.\n\x0E\x01\x09\x04\x09\x200¿Quieres volver a intentarlo?\n\n[1]Sí, venga[2-]Mejor no")
          	}
          }

          void entrypoint_119_11() {
/*<115>*/ 	start()
/*<111>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x200¡Magnífico! Se trata de cortar esos\ntroncos que te rodean sin moverte\ndel sitio, moviendo <r<a la vez >>el mando\ny el Nunchuk<r< >><g<en sentido horizontal>>.\n\x0E\x01\x09\x04\x09\x200¡Inténtalo, a ver cómo se te da!")
          }

          void entrypoint_119_12() {
/*<126>*/ 	start()
/*<127>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x1D03¡Así! Con el enemigo en tierra, mantén\npulsado (Z) para <r<fijarlo como objetivo>>\ny <r<mueve el mando y el Nunchuk a la vez\n>>hacia abajo para <g<rematarlo>>.\x0E\x01\x11\x02\x7CD\n\x0E\x01\x09\x04\x09\x1D00¡Pégale un tajo lateral a ese tronco\ny, cuando esté caído, prueba esta\ntécnica con él!")
          }

          void entrypoint_119_13() {
/*<128>*/ 	start()
/*<129>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x17\x1A09\x0E\x01\x08\x02\x1CD¡Brillante, voto a tal!")
/*<130>*/ 	set_camera(3, 0)
/*<131>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x19\x200El <g<golpe de gracia>> es una técnica muy\nefectiva para acabar con los enemigos\nque derribes con <r<ataques de >><r<escudo >>o\ncon <r<ataques circulares>>.\n\x0E\x01\x09\x04\x1C\x200No obstante, tus rivales tratarán de\nincorporarse enseguida, ¡así que\ntendrás tan solo unos instantes para\nmover el mando y el Nunchuk!")
          }

          void entrypoint_119_01() {
          	start()
/*< 68>*/ 	switch (loadzone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 70>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x1901¡Preséntale mis respetos al señor\nmesonero sin falta!")
          	  case 1:
/*< 53>*/ 		switch (story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */]) {
          		  case 0:
/*< 54>*/ 			switch (adventure_pouch_has(2 0x0002)) {
          			  case 0:
/*< 67>*/ 				switch (loadzone_temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
          					flw_57:
/*< 57>*/ 					entrypoint_119_03();
          				  case 1:
/*< 58>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03¡Voto a...! ¿Me has traído más sopa\nde calabaza caliente?...\nTiene una pinta exquisita...\n[1]Sírvase[2]Ejem...")
/*< 59>*/ 					switch (choice(2)) {
          					  case 0:
/*< 61>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x17\x1909¡¿Es para mí?! ¿Seguro?...\nDisculpa, he dado por hecho que era\npara mí.\n\nPero bueno, con la pinta que tiene...\n¡No le haré ascos, no!")
/*<138>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 20), ('next', 108), ('param3', 47)])
/*<108>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 62), ('param3', 33)])
/*< 62>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 119), ('param3', 33)])
/*<119>*/ 						OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 100), ('next', 99), ('param3', 15)])
/*< 99>*/ 						set_camera(10, 0)
/*<100>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 4629), ('next', 139), ('param3', 13)])
/*<139>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 20), ('next', 102), ('param3', 48)])
/*<102>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 96), ('next', 101), ('param3', 6)])
/*<101>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 5651), ('next', 103), ('param3', 13)])
/*<103>*/ 						printf(/* textboxtype: 1, unk: 0 */ "¡Qué cosa más sabrosa, pardiez!\x0E\x01\x05\x04\x1E\x00")
/*<104>*/ 						set_camera(11, 0)
/*< 63>*/ 						printf(/* textboxtype: 1, unk: 0 */ "¡Está riquísima!\n\n\n\n\x0E\x01\x09\x04\x17\x1900¡La sopa de calabaza que prepara\nese mesonero es lo mejor del mundo,\nno se cansa uno de tomarla!")
/*<154>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 144), ('param3', 47)])
/*<144>*/ 						set_camera(12, 0)
/*<143>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 155), ('param3', 33)])
/*<155>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 142), ('param3', 48)])
/*<142>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x200¡Gracias, Link!\n¡Ahí te va una pequeña muestra\nde gratitud!")
/*<105>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 64), ('param3', 42)])
/*< 64>*/ 						give_item(4 0x04);
/*< 71>*/ 						loadzone_temp_flags[1 /* 0x1 02 */] = true;
          					  case 1:
/*< 60>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x06\x02\xFCCD(...)\n(...)\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\x08\x1900¡Ja, ja, ja, ja!\n¡Es broma, hombre, es broma!")
/*< 65>*/ 						loadzone_temp_flags[2 /* 0x1 04 */] = true;
          					}
          				}
          			  case 1:
          				goto flw_57
          			}
          		  case 1:
/*< 33>*/ 			switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          			  case 0:
/*< 34>*/ 				switch (adventure_pouch_has(2 0x0002)) {
          				  case 0:
/*< 37>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x1901¡Muy buenas, Link!\n¡¿Estás practicando con la espada\ncomo es debido?!\n\n\x0E\x01\x09\x04\x00\x200¿Mmm?\n\n\n\n\x0E\x01\x09\x04\x00\x1909¡Voto a...! ¡¿Pues no es esa mi <r<sopa\nde calabaza >>favorita?!\n\n\n\x0E\x01\x09\x04\x00\x200Le había dejado encargado\nal mesonero que me la trajera...\n\n\n¡y resulta que te manda a ti cargado\ncon ella, pardiez! Porque esa sopa\nes para mí, ¿no?\n[1]¡Pues sí![2-]Pues... no")
/*< 41>*/ 					switch (choice(2)) {
          					  case 0:
/*< 42>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x17\x1909¡Hurra! ¡Mi ansiada sopa!...\n¡Rápido! ¡Tráela aquí! ¡VENGA!\n\n[1]De mil\namores[2-]Lo siento,\npero...")
/*< 44>*/ 						switch (choice(2)) {
          						  case 0:
/*<135>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 20), ('next', 107), ('param3', 47)])
/*<107>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 48), ('param3', 33)])
/*< 48>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 118), ('param3', 33)])
/*<118>*/ 							OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 100), ('next', 95), ('param3', 15)])
/*< 95>*/ 							set_camera(10, 0)
/*< 91>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 4629), ('next', 136), ('param3', 13)])
/*<136>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 20), ('next', 93), ('param3', 48)])
/*< 93>*/ 							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 96), ('next', 92), ('param3', 6)])
/*< 92>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 5655), ('next', 94), ('param3', 13)])
/*< 94>*/ 							printf(/* textboxtype: 1, unk: 0 */ "¡Qué cosa más sabrosa, pardiez!\x0E\x01\x05\x04\x1E\x00")
/*< 96>*/ 							set_camera(11, 0)
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x13¡Ah, es una auténtica delicia!\n\n\n\n\x0E\x01\x09\x04\x17\x1900¡A fe mía que la sopa de calabaza\ncalentita es el mejor invento de la\nhistoria de los inventos!\n")
/*<151>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 141), ('param3', 47)])
/*<141>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 145), ('param3', 33)])
/*<145>*/ 							set_camera(12, 0)
/*<152>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 140), ('param3', 48)])
/*<140>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x1900¡Buen trabajo, sí señor! ¡Preséntale mis\nrespetos al señor mesonero!")
/*< 51>*/ 							story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */] = true;
/*< 66>*/ 							loadzone_temp_flags[1 /* 0x1 02 */] = true;
/*<153>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          						  case 1:
/*< 47>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1D00¡¿Cómo?! ¡¡Voto a bríos!! \n¿Entonces no te ha mandado\nel mesonero que me la traigas? \n¿Acaso me tomas el pelo?\n\x0E\x01\x09\x04\x08\x1D00Pues si esta sopa no es para mí,\n¡ve a traerme la mía de inmediato!\n¡Ya estás tardando!\n\n¡Y más te vale que esté caliente!")
          						}
          					  case 1:
/*< 40>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\x1D00Ya veo, ya...\n¡¿Qué pretende el mesonero ese?!\n¡Le dejé muy claro que quería\nmi sopa sin tardanza!\n\x0E\x01\x09\x04\x08\x1D00¡Sin mi ración diaria de sopa, me pongo\nque me subo por las paredes!...\n")
          					}
          				  case 1:
/*< 35>*/ 					switch (adventure_pouch_has(3 0x0003)) {
          					  case 0:
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x1901¡Muy buenas, Link!\n¡¿Estás practicando con la espada\ncomo es debido?!\n\n\x0E\x01\x09\x04\x00\x200¿Mmm?\n\n\n\n\x0E\x01\x09\x04\x00\x1909¡Voto a...! ¡¿Pues no es esa mi <r<sopa\nde calabaza >>favorita?!\n\n\n\x0E\x01\x09\x04\x00\x200Le había dejado encargado\nal mesonero que me la trajera...\n\n\n¡y resulta que te manda a ti cargado\ncon ella, pardiez! Porque esa sopa\nes para mí, ¿no?\n[1]¡Pues sí![2-]Pues... no")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
/*< 43>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x17\x1909¡Hurra! ¡Mi ansiada sopa!...\n¡Rápido! ¡Tráela aquí! ¡VENGA!\n\n[1]De mil\namores[2-]Lo siento,\npero...")
/*< 45>*/ 							switch (choice(2)) {
          							  case 0:
/*<132>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 20), ('next', 106), ('param3', 47)])
/*<106>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 49), ('param3', 33)])
/*< 49>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 117), ('param3', 33)])
/*<117>*/ 								OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 100), ('next', 97), ('param3', 15)])
/*< 97>*/ 								set_camera(10, 0)
/*< 88>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 4629), ('next', 133), ('param3', 13)])
/*<133>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 20), ('next', 90), ('param3', 48)])
/*< 90>*/ 								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 96), ('next', 89), ('param3', 6)])
/*< 89>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4118), ('next', 147), ('param3', 13)])
/*<147>*/ 								set_camera(11, 0)
/*<146>*/ 								printf(/* textboxtype: 1, unk: 0 */ "¡Puaj! Qué asco, voto a tal...\x0E\x01\x04\x02\x14\n¡Esta sopa está helada!")
/*<148>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 149), ('param3', 47)])
/*<149>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 7424), ('next', 134), ('param3', 13)])
/*<134>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 98), ('param3', 33)])
/*< 98>*/ 								set_camera(12, 0)
/*<150>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 50), ('param3', 48)])
/*< 50>*/ 								printf(/* textboxtype: 1, unk: 0 */ "En esta vida hay dos cosas que no\nsoporto: ¡la sopa fría y las mujeres\naún más frías, pardiez!\n\n¡Tráeme más sopa, deprisa!\n¡Y esta vez que esté bien caliente,\ncomo es de ley!")
/*<137>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          							  case 1:
/*< 46>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1D00¡¿Cómo?! ¡¡Voto a bríos!! \n¿Entonces no te ha mandado\nel mesonero que me la traigas? \n¿Acaso me tomas el pelo?\n\x0E\x01\x09\x04\x08\x1D00Pues si esta sopa no es para mí,\n¡ve a traerme la mía de inmediato!\n¡Ya estás tardando!\n\n¡Y más te vale que esté caliente!")
          							}
          						  case 1:
/*< 38>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\x1D00Ya veo, ya...\n¡¿Qué pretende el mesonero ese?!\n¡Le dejé muy claro que quería\nmi sopa sin tardanza!\n\x0E\x01\x09\x04\x08\x1D00¡Sin mi ración diaria de sopa, me pongo\nque me subo por las paredes!...\n")
          						}
          					  case 1:
/*< 56>*/ 						entrypoint_119_03();
          					}
          				}
          			  case 1:
/*< 69>*/ 				entrypoint_119_03();
          			}
          		}
          	}
          }

          void entrypoint_119_02() {
/*< 24>*/ 	start()
/*< 30>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 11), ('next', 25), ('param3', 32)])
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xB0D\x02¡Voto a...! ¡Oye!\x0E\x01\x0D\x02\x1900 ¡Link!")
/*< 31>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 72), ('param3', 16)])
/*< 72>*/ 	set_camera(1, 0)
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x1D00¡No está permitido sacar las espadas\ndel gimnasio!\n\n\n¡¿En qué estabas pensando?! \n¿Crees que puedo dejarte pasear\ncon todo ese acero por Altárea?\n")
/*< 73>*/ 	set_camera(2, 0)
/*< 29>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 11), ('next', 32), ('param3', 33)])
/*< 32>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 11), ('next', 26), ('param3', 17)])
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05¿Cómo?\n\x0E\x01\x04\x02(¿Que no sabes dónde está tu pelícaro\n\x0E\x01\x04\x02(y pensabas ir a buscarlo?\n\nEntiendo cómo te sientes, pero...\n\x0E\x01\x09\x04\x09\xE00Altárea es un lugar muy tranquilo y\nsolo los caballeros pueden portar\nespadas. Así son las normas.\nSi piensas llevarte ese acero, al menos\ndemuéstrame que sabes cómo usarlo...\nDeberías practicar un poco dándole\nunos tajos a estos troncos, pardiez.\n¡No vaya a ser que luego te pongas\na soltar mandobles sin ton ni son en\nmitad de la calle, voto a tal!\n")
/*< 74>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 27), ('param3', 42)])
/*< 27>*/ 	story_flags[199 /* us: 805A9AEF 0x02, jp: 805ACD6F 0x02 */] = true;
/*< 75>*/ 	scene_flags[0 'Skyloft'][56 /* 0x6 01 */] = true;
          }

          void entrypoint_119_03() {
/*< 55>*/ 	start()
/*< 13>*/ 	switch (adventure_pouch_has(9 0x0009)) {
          	  case 0:
/*<156>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x05Ejem... ¿Quieres que te vuelva a\nexplicar las <r<claves de la defensa>>?\n\n[1]Práctica[2]Teoría[3-]No hace\nfalta")
/*< 19>*/ 			switch (choice(3)) {
          			  case 0:
/*< 20>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¿Quieres que te hable de la parte\n<r<práctica>>? Bien, con sumo gusto.\n¡Presta mucha atención!\n\n\x0E\x01\x09\x04\x19\x1D00Si respondes a un ataque enemigo\ncon un empellón de tu escudo en\nel momento oportuno, puedes\n<g<devolverle el golpe>>.\n\x0E\x01\x09\x04\x1C\x1D00Esta técnica, el <r<ataque de escudo>>,\npermite desestabilizar al enemigo,\nlo que te dará la oportunidad de\npillarle por sorpresa y contratacar.\n\x0E\x01\x09\x04\x0D\x200Es un método sumamente eficaz\ncontra enemigos que te lanzan\nobjetos o que no te dejan el más\nmínimo resquicio para atacarlos.")
          				flw_21:
/*< 21>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\x200En un combate real, para ejecutar\nuna maniobra de defensa eficaz, es\nclave tener una buena coordinación.\n¡Hay que dar con el momento justo!\n\x0E\x01\x09\x04\x08\x200¿Por qué no practicas un poco con\nese <r<tronco de >><r<entrenamiento>>?")
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1C\x200Basta con <g<agitar el Nunchuk >>para sacar\nel <r<escudo>>. ¡No es difícil de recordar,\nya lo ves!\n\n\x0E\x01\x09\x04\x0E\x200Cuando quieras apartar el escudo,\n<g<agita el mando para dar un espadazo\n>>o pulsa (A) para guardarlo y de paso\nenvainar tu acero.\n\x0E\x01\x09\x04\x08\x200Pero ándate con tiento: aunque te estés\nprotegiendo con el escudo, en cuanto\n<g<blandas la espada >><r<tu guardia quedará\nal descubierto>>.")
          				goto flw_21
          			  case 2:
/*<160>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x200Entiendo...\nEs muy loable intentar hacer las cosas\npor uno mismo. ¿Por qué no practicas\nun rato con ese tronco?")
          			}
          		  case 1:
/*< 22>*/ 			switch (scene_flags[59 /* 0x6 08 */]) {
          			  case 0:
/*< 14>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09¡Pardiez, Link!\n¡Menudo escudo te has agenciado!\n\n\n\x0E\x01\x09\x04\x19\x200Bien, ahora no queda sino enseñarte\nel <r<arte de la defensa>>. ¡Para empezar,\n<r<los conceptos básicos>>!")
          				flw_15:
/*< 15>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1C\x200Basta con <g<agitar el Nunchuk >>para sacar\nel <r<escudo>>. ¡No es difícil de recordar,\nya lo ves!\n\n\x0E\x01\x09\x04\x0E\x200Cuando quieras apartar el escudo,\n<g<agita el mando para dar un espadazo\n>>o pulsa (A) para guardarlo y de paso\nenvainar tu acero.\n\x0E\x01\x09\x04\x08\x200Pero ándate con tiento: aunque te estés\nprotegiendo con el escudo, en cuanto\n<g<blandas la espada >><r<tu guardia quedará\nal descubierto>>.")
/*< 16>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x1D00Vamos, prueba a ver qué tal se te da.")
/*< 23>*/ 				scene_flags[0 'Skyloft'][60 /* 0x6 10 */] = true;
          			  case 1:
/*<157>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x1D04Link...\nEl director me ha contado lo ocurrido.\nEstoy muy preocupado por Zelda...\n\nEjem, verás, no es que sepa yo gran\ncosa del asunto, pero hay algo que\nsí debo decirte.\n\nEsa espada que portas no es obra de\nartesanos de Altárea. Es una <r<ancestral\nreliquia divina>> reservada solo para\nel brazo del elegido.\nMe gustaría poder darte más\ninformación, pero es todo lo que sé.")
/*<159>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1D04Link, no puedo hacer\ngran cosa por ti, voto a bríos...\n\n\nAunque hay una última lección\n\x0E\x01\x09\x04\x19\x1D00que podría enseñarte... \n¡El <r<arte de la defensa>>!\n\n\x0E\x01\x09\x04\x00\x200¡Empecemos por los aspectos <r<básicos>>!")
          				goto flw_15
          			}
          		}
          	  case 1:
/*< 11>*/ 		switch (scene_flags[59 /* 0x6 08 */]) {
          		  case 0:
/*< 12>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x19\x1D01El arte del escudo es, en suma, el arte\nde la defensa. ¡Debes guardar\nperfecto equilibrio entre ataque\ny defensa para salir victorioso!\n\x0E\x01\x09\x04\x08\xE00Si tienes un <r<escudo>>, puedes pasarte por\naquí para practicar las técnicas de\nataque y defensa. En el <r<bazar>> siempre\ntienen alguno a la venta...\n\x0E\x01\x09\x04\x09\x1D00¡Si quieres conservar el pellejo, harías\nbien en seguir mis consejos, voto a tal!")
          		  case 1:
/*<  8>*/ 			switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          			  case 0:
/*<  9>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x1D04Link...\nEl director me ha contado lo ocurrido.\nEstoy muy preocupado por Zelda...\n\nEjem, verás, no es que sepa yo gran\ncosa del asunto, pero hay algo que\nsí debo decirte.\n\nEsa espada que portas no es obra de\nartesanos de Altárea. Es una <r<ancestral\nreliquia divina>> reservada solo para\nel brazo del elegido.\nMe gustaría poder darte más\ninformación, pero es todo lo que sé.")
/*<158>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1D00Link, tal y como vas no\npuedo hacer gran cosa por ti...\nPardiez, consigue primero un <r<escudo\n>>y vuelve a hablar conmigo.\n\x0E\x01\x09\x04\x19\x1D00¡Solo entonces podré enseñarte\nel <r<arte de la defensa>>! Es lo menos\nque puedo hacer por mi alumno antes\nde dejar que se vaya a la aventura.")
/*< 10>*/ 				scene_flags[0 'Skyloft'][59 /* 0x6 08 */] = true;
          			  case 1:
/*<  5>*/ 				switch (scene_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05¿Eh?\n¿Acaso quieres que te recuerde cómo\nse maneja una espada?\n[1]Por favor[2-]No hace\nfalta")
/*<  4>*/ 					switch (choice(2)) {
          					  case 0:
/*<  3>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x203¡El arte de la espada es bien sencillo!\nLo único que debes hacer para blandir\ntu acero es <r<agitar el mando>>.\n\nMueve el mando de arriba abajo para\nsoltar un <g<tajo vertical>>, o muévelo\nen horizontal para dar uno <g<lateral>>.\n\nPara asestar una <g<estocada>>, mueve\nel mando hacia delante, extendiendo\nel brazo.\n\n\x0E\x01\x09\x04\x17\x200Y por último, la técnica más potente...\n¡El <g<ataque circular>>! Para ejecutarlo,\nsolo hay que mover mando y Nunchuk\na la vez en la misma dirección.\n\x0E\x01\x09\x04\x18\x1D00Con estos tres movimientos te basta\ny te sobra para vértelas con quien sea.\nPero nunca has de olvidar cierta cosa\nesencial en esgrima...\n\x0E\x01\x09\x04\x00\x1D04Me refiero a <r<fijar objetivo >>con (Z).\n¡En cuanto veas un enemigo, pulsa (Z)\nlo más deprisa que puedas!\x0E\x01\x11\x02\x7CD\n")
          						flw_7:
/*<  7>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1C\x1D03¿Por qué no practicas un poco con esos\n<r<troncos>>? ¡No hay cosa igual para pulir\ntu técnica!\n\n\x0E\x01\x09\x04\x09\x200Si no sabes muy bien por dónde atacar\nal leño, prueba a soltar unos <g<tajos\nde prueba >>guiándote por los <r<surcos\n>>de la madera.\n\x0E\x01\x09\x04\x08\x200Si eres capaz de cortarlos todos,\nte enseñaré una <r<técnica secreta>>\nde lo más efectiva.")
          					  case 1:
/*<  2>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\x1A08Normal, a ti siempre se te ha dado\nmuy bien esto de la esgrima.\n\n\n\x0E\x01\x09\x04\x08\x200Pero nunca está de más practicar\nun poco para mejorar tus estocadas\ny afianzar tus conocimientos.\n\n\x0E\x01\x09\x04\x19\x1D00Sobre todo lo de <r<fijar el objetivo\n>>con (Z). ¡Eso es la base de la esgrima!\x0E\x01\x11\x02\x7CD")
          						goto flw_7
          					}
          				  case 1:
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03¡Hola, Link!\n\n\n\n\x0E\x01\x09\x04\x09\x200¿De modo que hoy se celebra el torneo\nceleste pero tú quieres ponerte a\nentrenar un rato de todas formas?\n¡Impresionante, pardiez!\nTengo una buena herreruza para ti en\nla sala de ahí atrás. Ve a cogerla, anda.\n\n\nVen a consultarme si hay algo que no\nentiendas sobre el uso de la espada.\n¡Estoy a tu entera disposición!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_119_04() {
/*< 76>*/ 	start()
/*< 84>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x201En ese tronco puedes practicar el <r<tajo\nvertical>>. Apunta con el mando hacia\narriba y haz un rápido movimiento\nhacia el frente para cortar el tronco.")
          }

          void entrypoint_119_05() {
/*< 80>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x19\x203En ese tronco puedes practicar\nel <r<tajo lateral>>. Sujeta el mando en\nposición horizontal y haz un rápido\nmovimiento de izquierda a derecha.")
          }

          void entrypoint_119_06() {
/*< 81>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1D\x202En ese tronco puedes practicar\nel <r<tajo diagonal>>. Haz un rápido \nmovimiento en diagonal con\nel mando para cortar el tronco.")
          }

          void entrypoint_119_07() {
/*< 82>*/ 	start()
/*< 87>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x203En ese tronco puedes practicar\nla <r<estocada>>. Haz un rápido movimiento\ncon el mando extendiendo el brazo\nhacia delante y pincharás con la punta.")
          }

          void entrypoint_119_08() {
/*< 83>*/ 	start()
/*<161>*/ 	switch (adventure_pouch_has(0 0x0000)) {
          	  case 0:
/*< 79>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x19\x202Con ese tronco puedes practicar\nla <r<defensa>>.\n\n\n\x0E\x01\x09\x04\x1C\x1D00Golpéalo con la espada y, después,\n<g<mueve el Nunchuk >>para realizar\nun <r<ataque de escudo >>cuando\nel tronco vuelva hacia ti.")
          	  case 1:
/*< 77>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<162>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x19\x1D02Con ese tronco de ahí podrás practicar\ntu <r<defensa>>, ¡así que procura agarrar\nbien el <r<escudo >>y no te descuides ni un\nsegundo si no quieres salir volando!")
          		  case 1:
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x19\x1D02En ese tronco de ahí puedes practicar\nla <r<defensa>>, pero como no llevas ningún\n<r<escudo >>equipado, más vale que no te\nacerques o te llevarás un buen viaje.")
          		}
          	}
          }

          void entrypoint_119_09() {
/*<109>*/ 	start()
/*<114>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\x213¡Soberbio, Link!")
/*<116>*/ 	set_camera(3, 0)
/*<110>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x1908Eres un espadachín de primera,\n¡como maestro tuyo me siento asaz\norgulloso, pardiez!\n\n\x0E\x01\x09\x04\x09\x200¿Te ves con arrestos para practicar\ntambién el <g<ataque circular>>?\n\n[1]¡Claro![2-]Mejor no")
          }

