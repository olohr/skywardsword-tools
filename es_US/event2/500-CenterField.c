          void entrypoint_500_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04C\x4500¡¿Pero qué...?! ¡No puede ser!\n¡Hemos fallado! Si no apuntamos\nbien, estamos perdiendo el tiempo.\n\n\x0E\x01\x09\x04A\x4000Bueno, tendré que cargar otra\nbomba. Mientras esperas a mi señal,\n¡ataca a ese monstruo!")
          }

          void entrypoint_500_37() {
/*< 49>*/ 	start()
/*< 61>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<435>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*<436>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Creo que seguiré investigando un poco\nmás acerca de las estatuas.")
          		  case 1:
/*<427>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xB07Según he leído en unos viejos escritos,\nmás allá de los cielos existe un lugar\nconocido como la <r<isla de la Diosa>>.\n\nY, por lo visto, estas antiguas estatuas\nde piedra permitían viajar hasta allí.\n\n\nEsta, en concreto, parece distinta a\nlas demás. Si no me equivoco, debe\nde ser la que <r<activa >>al resto.\n\n\x0E\x01\x09\x04\x16\x1900Puede que parezca un cuento de hadas,\npero yo creo que es verdad.\n\n\n\x0E\x01\x09\x04\x00\xB04Si no lo fuera, ¿por qué razón hay\ntantas estatuas como esta repartidas\npor todo el mundo?\n")
          			flw_62:
/*< 62>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x18\x1700Tienes curiosidad, ¿verdad?\n¿Quieres que te cuente más?\n[1]Sí[2-]No")
/*<423>*/ 			switch (choice(2)) {
          			  case 0:
/*<424>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\x1902¡Vaya! ¿Tú también eres un aficionado\na las antiguas leyendas?\n\n\n\x0E\x01\x09\x04\x16\xB00Bien, pues escucha con atención.\n\n\n\nSe cuenta que los habitantes de la isla\nde la Diosa montan sobre unas enormes\nbestias aladas que jamás se han visto\nen esta tierra.\n\x0E\x01\x09\x04\x00\x1E00La paz reina en toda la isla y sus\nhabitantes adoran con fervor\na la Diosa.\n\n\x0E\x01\x09\x04\x00\xB00Dicen, además, que su civilización es\nmucho más avanzada que la nuestra.")
/*<426>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xB00¡Pero espera, que me he reservado\nlo mejor para el final!\n\n\n\x0E\x01\x09\x04\x1F\x1E00Como la isla es creación de la Diosa,\nestá llena de maravillas con las que\nsolo podemos soñar en esta parte del\nmundo.\n\x0E\x01\x09\x04\x00\x1908¡Todos los edificios son de oro!\n¡El agua sagrada brota sin cesar de\nsus manantiales y otorga la eterna\njuventud!\n\x0E\x01\x09\x04\x00\xB00¡Los árboles dan frutos capaces de\ncurar enfermedades, las calabazas\nde los huertos nunca se pudren, y\nlas flores jamás pierden su color!\n\x0E\x01\x09\x04\x17\x1900Y por si fuera poco, el clima siempre es\nagradable. Nadie pasa frío ni calor.\n¡Es como si vivieran en una primavera\neterna!\n\x0E\x01\x09\x04\x00\xB05\x0E\x01\x08\x02\x1CD¡¿No te parece increíble?!\n\n\n\n\x0E\x01\x09\x04!\x1806\x0E\x01\x08\x02\x2CD¿Quieres que te cuente\naún más cosas?\n\n\n\x0E\x01\x08\x02\x1CD¿Qué me dices?\n[1]Sí[2-]No")
/*<434>*/ 				scene_flags[10 'Sealed Grounds'][109 /* 0xC 20 */] = true;
/*<430>*/ 				switch (choice(2)) {
          				  case 0:
/*<428>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04'\x1956¡Por Goron! Ya veo que la historia de\nla isla de la Diosa te ha impresionado...\nSin embargo, me temo que vamos a\ntener que dejarlo por hoy.\n\x0E\x01\x09\x04\x16\x1E00Me gustaría contarte más cosas, pero\npara eso tengo que seguir investigando.\n\n\n\x0E\x01\x09\x04\x00\xB00Ya volveremos a hablar la próxima vez\nque nos encontremos.")
          					flw_433:
/*<433>*/ 					switch (scene_flags[14 /* 0x0 40 */]) {
          					  case 0:
          					  case 1:
/*< 60>*/ 						scene_flags[10 'Sealed Grounds'][14 /* 0x0 40 */] = true;
/*<579>*/ 						scene_flags[10 'Sealed Grounds'][35 /* 0x5 08 */] = true;
/*<343>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          					}
          				  case 1:
/*<429>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x16\x1E56Entiendo. Bueno, cuando quieras\nsaber algo más, ya sabes dónde estoy.")
          					goto flw_433
          				}
          			  case 1:
/*<425>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x16\x1E56Entiendo. Bueno, cuando quieras\nsaber algo más, ya sabes dónde estoy.")
          				goto flw_433
          			}
          		}
          	  case 1:
/*< 55>*/ 		switch (scene_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<341>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x08¡Gracias por ayudarme!")
/*<334>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 340), ('param3', 47)])
/*<340>*/ 			set_camera(49, 0)
/*<338>*/ 			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 12), ('param2', 256), ('next', 339), ('param3', 15)])
/*<339>*/ 			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 13), ('param2', 356), ('next', 335), ('param3', 15)])
/*<335>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 58), ('param3', 48)])
/*< 58>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xB0A¿Qué eran esos monstruos rojos?\nJamás pensé que me encontraría\ncon algo así en este bosque...\n\n\x0E\x01\x09\x04\x16\x1E00Por cierto, eres el segundo de tu\nespecie con el que me topo hoy.\nÚltimamente me pasan unas cosas\nmuy raras...\n\x0E\x01\x09\x04\x00\xB00Pero bueno, supongo que debo darte las\ngracias por lo de los monstruos, así que\ncompartiré contigo cierta información\na modo de recompensa.")
/*< 57>*/ 			set_camera(13, 0)
/*<437>*/ 			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 19), ('param2', 356), ('next', 65), ('param3', 15)])
/*< 65>*/ 			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 6), ('param2', 256), ('next', 56), ('param3', 15)])
/*< 56>*/ 			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 6), ('param2', 0), ('next', 260), ('param3', 14)])
/*<260>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 342), ('param3', 17)])
/*<342>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 0), ('next', 365), ('param3', 17)])
/*<365>*/ 			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 16), ('param2', 256), ('next', 59), ('param3', 15)])
/*< 59>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xB01Me llamo <b<Marcogoro>>, y soy un goron\nque se dedica principalmente a\ninvestigar el pasado.\n\n\x0E\x01\x09\x04\x00\x1700Según he leído en unos viejos escritos,\nmás allá de los cielos existe un lugar\nconocido como la <r<isla de la Diosa>>.\n\n\x0E\x01\x09\x04\x00\xB00Por lo visto, estas <b<antiguas estatuas>>\nde piedra marcaban los lugares desde\nlos que se podía <r<ascender al cielo>>... y\ntambién los puntos de aterrizaje.\n<pling>Te aconsejo que <r<examines todas las que\nencuentres>>. ¡Cuantas más referencias\ntengas en el mapa, más sencillo te\nresultará viajar!\nDicen que esta estatua, en concreto,\nes especial porque es la que <r<despertará>>\na las demás de su letargo.\n\n\x0E\x01\x09\x04\x16\x1907Puede que parezca un cuento de hadas,\npero yo creo que es verdad.\n\n\nSi no lo fuera, ¿por qué razón hay\ntantas estatuas como esta repartidas\npor todo el mundo?")
          			goto flw_62
          		  case 1:
/*<336>*/ 			switch (scene_flags[94 /* 0xA 40 */]) {
          			  case 0:
/*<337>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xB52¡Po... por Goron!")
          			  case 1:
/*<258>*/ 				set_camera(37, 0)
/*<465>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 24), ('next', 50), ('param3', 32)])
/*< 50>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1800\xB52¡Déjenme tranquilo! ¡Largo!")
/*<259>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          			}
          		}
          	}
          }

          void entrypoint_500_54() {
/*<215>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x042\x00\x0E\x01\x12\x04\x00\x04Amo Link...")
          }

          void entrypoint_500_71() {
/*<438>*/ 	start()
/*<439>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\x1B09\x0E\x01\x08\x02\x1CD¡Uaaah!")
          }

          void entrypoint_500_03() {
/*<  4>*/ 	start()
/*<568>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 62), ('param2', 16384), ('next', 5), ('param3', 13)])
/*<  5>*/ 	printf(/* textboxtype: 1, unk: 0 */ "¡Esta vez, tú eres la carga!\n¡Te ayudaré a salir disparado,\npero no puedo garantizarte que\ntodo esto vaya a funcionar!")
          }

          void entrypoint_500_55() {
/*<210>*/ 	start()
/*<211>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04K\x00Nos encontramos en las <b<tierras\ninferiores>>, un lugar que, para los\nhabitantes de Neburia, existe solo\nen las leyendas.")
          }

          void entrypoint_500_72() {
/*<442>*/ 	start()
/*<443>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 40), ('next', 445), ('param3', 32)])
/*<445>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 453), ('param3', 40)])
/*<453>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 444), ('param3', 6)])
/*<444>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2800\x04\x0E\x01\x08\x02\x1CD¡Eeeh! ¡Aquí, Link!")
/*<454>*/ 	set_camera(51, 0)
/*<458>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 40), ('param2', 100), ('next', 446), ('param3', 16)])
/*<446>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x07\x04\x2800\x0FJe, je, je... ¡abre bien los ojos y\nsorpréndete con el arma secreta\ndel asombroso Vilán!")
/*<455>*/ 	set_camera(56, 0)
/*<459>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10304), ('param2', 16909), ('next', 447), ('param3', 13)])
/*<447>*/ 	printf(/* textboxtype: 1, unk: 1 */ "Te presento... ¡la <r<supercatapulta>>!")
/*<460>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10305), ('param2', 17152), ('next', 448), ('param3', 13)])
/*<448>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x2800\x18Te has quedado sin habla, ¿eh?\n¡No te imaginas cuánto me ha\ncostado construir esta maravilla!")
/*<462>*/ 	printf(/* textboxtype: 1, unk: 1 */ "¡Contémplala en todo su esplendor!")
/*<456>*/ 	set_camera(48, 0)
/*<463>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x2840\x4300Quité de en medio todos los obstáculos\ny planté los raíles para poder moverla.\n¡Y lo hice solo, nada menos!\n\n¡Hasta yo me sorprendo conmigo\nmismo!\x0E\x01\x04\x02\x1E Sabía que mi talento era\ninconmensurable, pero tanto...\n\n\x0E\x01\x09\x04\x2841\x4000Con esta máquina vamos a hacer\npedazos a esa bestia, ¡ya lo verás!")
/*<464>*/ 	set_camera(32, 0)
/*<449>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x2804\x4000¡Un buen bombazo dejará a ese\nmonstruo atontado un rato!")
/*<461>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10304), ('param2', 16896), ('next', 450), ('param3', 13)])
/*<450>*/ 	printf(/* textboxtype: 1, unk: 1 */ "Pero hay un pequeño problema.\nSe ha despertado un poco antes de\nlo que esperaba...")
/*<451>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x2841\x4000¡Y aún me quedan unos ajustes por\nhacerle a mi catapulta!\n\n\nTe avisaré en cuanto esté lista,\n¿de acuerdo? Mientras tanto,\n¡ataca al monstruo!")
/*<457>*/ 	set_camera(57, 0)
/*<452>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_500_04() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
          }

          void entrypoint_500_56() {
/*<214>*/ 	start()
/*<212>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04K\x00Esta zona en concreto es conocida\ncomo la <b<tierra del presidio>>.")
          }

          void entrypoint_500_73() {
/*<479>*/ 	start()
/*<477>*/ 	printf(/* textboxtype: 1, unk: 2 */ "\x0E\x01\x06\x02\xFDCDJoven...\n\n\n\n\x0E\x01\x06\x02\xFDCDEl hijo del destino caído del cielo...")
          }

          void entrypoint_500_05() {
/*<  8>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0FLo sabía... El sello se ha roto.\n\n\n\nPero será mejor que dejemos las\nexplicaciones para más tarde.\n¡Ahora tienes que evitar que\nescape del agujero!\nSea como sea, ¡no permitas que\nse acerque al templo!")
          }

          void entrypoint_500_22() {
/*< 26>*/ 	start()
/*< 81>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 80), ('param3', 32)])
/*< 80>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 99), ('next', 27), ('param3', 16)])
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x160D¡Ahora, Link!\x0E\x01\x04\x02\x1E\n\n\n\n¡Golpea el pilar con el <r<rayo celestial>>!\n\n\n\n\x0E\x01\x09\x04\x11\x1700¡Rápido!")
          }

          void entrypoint_500_57() {
/*<413>*/ 	start()
/*<370>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 23), ('param2', 356), ('next', 310), ('param3', 15)])
/*<310>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 40), ('next', 311), ('param3', 32)])
/*<311>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 40), ('param2', 100), ('next', 484), ('param3', 17)])
/*<484>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 40), ('next', 509), ('param3', 17)])
/*<509>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<510>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 511), ('param3', 6)])
/*<511>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*<515>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 512), ('param3', 6)])
/*<512>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<513>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 60), ('next', 375), ('param3', 6)])
/*<375>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<514>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 517), ('param3', 6)])
/*<517>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10302), ('param2', 17664), ('next', 485), ('param3', 13)])
/*<485>*/ 	set_camera(52, 0)
/*<376>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x2800S¡Uaaah!\x0E\x01\x05\x04\x1E\x00")
/*<254>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x2800\x4000Parece que ese sello va a romperse\nen cualquier momento...\x0E\x01\x05\x04\x1E\x00")
/*<255>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x283E\x400F¡Tranquilo, que no cunda el pánico!\n\n\n\n\x0E\x01\x09\x04\x2841\x00¡Todavía tenemos mi <r<supercatapulta>>!\n¡Y ya has visto lo que es capaz de hacer!")
/*<256>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x2800\x00¡Mientras cuente con un arma así,\nla palabra derrota no forma parte\nde mi diccionario!\n\n\x0E\x01\x09\x04\x2800\x200¡Es mi destino, y pienso grabarlo con\nletras de oro en los anales de la\nhistoria!")
/*<257>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x2800\x200Link, intenta no estorbar.\n¡Tengo una misión que cumplir!")
/*<516>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*<371>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<522>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<566>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<567>*/ 	story_flags[176 /* us: 805A9AE2 0x80, jp: 805ACD62 0x80 */] = true;
/*<312>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 419), ('param3', 42)])
/*<419>*/ 	story_flags[483 /* us: 805A9B10 0x02, jp: 805ACD90 0x02 */] = true;
          }

          void entrypoint_500_74() {
/*<480>*/ 	start()
/*<478>*/ 	printf(/* textboxtype: 1, unk: 2 */ "\x0E\x01\x06\x02\xFDCDEleva la espada de la Diosa hacia\nel cielo...\n\n\n~~~\x0E\x01\x06\x02\xFDCDY libera su poder para extirpar el mal\nque nos acecha.")
          }

          void entrypoint_500_40() {
/*< 51>*/ 	start()
/*< 85>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 84), ('param3', 32)])
/*< 84>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3592), ('param2', 2829), ('next', 86), ('param3', 13)])
/*< 86>*/ 	set_camera(15, 0)
/*< 52>*/ 	printf(/* textboxtype: 1, unk: 0 */ "¡Link, el monstruo lleva\nincrustado en la cabeza el <r<pilar\ndel sello>>!\n\n\x0E\x01\x09\x04\xE00\x13¡Usa la espada para empujarlo\nhasta el fondo!")
/*< 87>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_500_58() {
/*<216>*/ 	start()
/*<213>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04K\x00Aconsejo prudencia, \x0E\x01\x12\x04\x00\x0Bamo.")
          }

          void entrypoint_500_23() {
/*<475>*/ 	start()
/*<481>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Tengo información importante, \x0E\x01\x12\x04\x00\x01amo.")
/*<482>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Por las marcas que muestra, infiero\nque la puerta se ha abierto hace\npoco, pero una intensa energía la\nmantiene sellada.")
          }

          void entrypoint_500_75() {
/*<497>*/ 	start()
/*<498>*/ 	story_flags[790 /* us: 805A9B2C 0x40, jp: 805ACDAC 0x40 */] = true;
/*<520>*/ 	scene_flags[10 'Sealed Grounds'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_500_41() {
/*< 76>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00&¡Bien hecho, Link!\nMe debes una, ¿eh?\n\n\n¡Y ahora hay que activar ese Portal del\nTiempo o como se llame! ¡Yo me voy\nadelantando!")
          }

          void entrypoint_500_24() {
/*<137>*/ 	start()
/*<547>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<548>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Tengo información, \x0E\x01\x12\x04\x00\x0Bamo. El monstruo\nlleva el <r<pilar del sello >>clavado en la\ncabeza.\n\nEs imperativo volver a encerrar a la\nbestia antes de abandonar la zona.")
          	  case 1:
/*<139>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<140>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<141>*/ 				printf(/* textboxtype: 2, unk: 0 */ "Tengo información,\x0E\x01\x12\x04\x00\x0B amo. La prioridad\nen este momento es volver a apresar al\nmonstruo en el sello.\n\nMientras este objetivo no se cumpla,\nel \x0E\x01\x12\x04\x00\x02amo no podrá abandonar la zona.")
          			  case 1:
/*<142>*/ 				printf(/* textboxtype: 2, unk: 0 */ "Tengo información, \x0E\x01\x12\x04\x00\x0Bamo. El monstruo\nlleva el <r<pilar del sello >>clavado en la\ncabeza.\n\nEs imperativo volver a encerrar a la\nbestia antes de abandonar la zona.")
          			}
          		  case 1:
/*<138>*/ 			printf(/* textboxtype: 2, unk: 0 */ "")
          		}
          	}
          }

          void entrypoint_500_59() {
/*<217>*/ 	start()
/*<218>*/ 	printf(/* textboxtype: 1, unk: 2 */ "\x0E\x01\x09\x04>\x4515\x0E\x01\x08\x02\x1CD¡Aaaah!\n\n\n\n\x0E\x01\x09\x04\x00\x4000¡Oh, no! ¡El camino ha quedado\nbloqueado tras el temblor y ya no\npuedo llegar a las bombas!\n¡¿Qué hago?!\n\x0E\x01\x08\x02\x1CD¡Oh!")
          }

          void entrypoint_500_76() {
/*<506>*/ 	start()
/*<466>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x13\x1907¡¿Co... cómo has hecho eso?!\n¿Ha sido magia?\n\n\n\x0E\x01\x09\x04\x17\x1B08¡La estatua ha reaccionado cuando\nte has acercado a ella! ¡Es increíble!")
          }

          void entrypoint_500_08() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04D\x4300Le hemos dado, sí, pero un poco\na destiempo... ¡Creo que hemos\ntardado demasiado!\n\n\x0E\x01\x09\x04\x00\x4000Bueno, habrá que cargar otra\nbomba. Mientras esperas a mi señal,\n¡ataca a ese monstruo!")
          }

          void entrypoint_500_25() {
/*< 35>*/ 	start()
/*<525>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 70>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 38>*/ 	scene_flags[10 'Sealed Grounds'][10 /* 0x0 04 */] = true;
/*< 41>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<582>*/ 	story_flags[852 /* us: 805A9B34 0x04, jp: 805ACDB4 0x04 */] = true;
          }

          void entrypoint_500_42() {
/*< 77>*/ 	start()
/*< 75>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04 \x3010Arf, aaarf... Link, creí\nque esta vez no lo contábamos,\n¡pero al final todo ha salido bien!\n\n\x0E\x01\x09\x04B\x200Yo voy hacia el templo. ¡Nos vemos allí!")
          }

          void entrypoint_500_77() {
/*<507>*/ 	start()
/*<508>*/ 	printf(/* textboxtype: 1, unk: 2 */ "\x0E\x01\x09\x04>\x4026¡Date prisa, Link!\n¡Tienes que <r<subir hasta aquí >>por el\nlateral del templo!")
          }

          void entrypoint_500_09() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 1, unk: 2 */ "\x0E\x01\x09\x04 \x403C¡Bien, ya estás subido en la <b<catapulta>>!\n¡Apunta hacia el pilar que lleva el\nmonstruo en la cabeza y vuela!")
          }

          void entrypoint_500_26() {
/*< 36>*/ 	start()
/*<526>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 48>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 39>*/ 	scene_flags[10 'Sealed Grounds'][11 /* 0x0 08 */] = true;
/*< 42>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<583>*/ 	story_flags[853 /* us: 805A9B34 0x08, jp: 805ACDB4 0x08 */] = true;
          }

          void entrypoint_500_43() {
/*<131>*/ 	start()
/*<405>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 369), ('param3', 32)])
/*<369>*/ 	set_camera(59, 0)
/*<401>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 22), ('param2', 260), ('next', 403), ('param3', 15)])
/*<403>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1042), ('param2', 4352), ('next', 402), ('param3', 13)])
/*<402>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 22), ('param2', 4), ('next', 483), ('param3', 14)])
/*<483>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 4), ('next', 404), ('param3', 17)])
/*<404>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 521), ('param3', 17)])
/*<521>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<133>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<262>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1086), ('param2', 16447), ('next', 132), ('param3', 13)])
/*<132>*/ 	printf(/* textboxtype: 1, unk: 1 */ "¡Link! ¡Es horrible, es\nhorrible! ¡El monstruo está a punto\nde despertarse otra vez!")
/*<263>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1089), ('param2', 16384), ('next', 136), ('param3', 13)])
/*<136>*/ 	printf(/* textboxtype: 1, unk: 1 */ "¡Ah, espera un momento! Tengo que\nprepararlo todo.")
/*<135>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 22), ('param2', 772), ('next', 420), ('param3', 14)])
/*<420>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<134>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<418>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_60() {
/*<219>*/ 	start()
/*<372>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 40), ('next', 222), ('param3', 32)])
/*<222>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2800\x04\x0E\x01\x08\x02\x1CD¡Eeeh! ¡Aquí, Link!")
/*<293>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 294), ('param3', 40)])
/*<294>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 229), ('param3', 6)])
/*<229>*/ 	set_camera(31, 0)
/*<231>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 40), ('param2', 100), ('next', 295), ('param3', 16)])
/*<295>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 20), ('param2', 356), ('next', 223), ('param3', 15)])
/*<223>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x07\x04\x2800\x0FJe, je, je... ¡abre bien los ojos y\nsorpréndete con el arma secreta\ndel asombroso Vilán!")
/*<230>*/ 	set_camera(32, 0)
/*<344>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10304), ('param2', 16896), ('next', 224), ('param3', 13)])
/*<224>*/ 	printf(/* textboxtype: 1, unk: 1 */ "Te presento... ¡la <r<supercatapulta>>!")
/*<345>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10302), ('param2', 512), ('next', 225), ('param3', 13)])
/*<225>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x2800\x18Te has quedado sin habla, ¿eh?\n¡No te imaginas cuánto me ha\ncostado construir esta maravilla!")
/*<361>*/ 	printf(/* textboxtype: 1, unk: 1 */ "¡Contémplala en todo su esplendor!")
/*<232>*/ 	set_camera(33, 0)
/*<362>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x2840\x4300Quité de en medio todos los obstáculos\ny planté los raíles para poder moverla.\n¡Y lo hice solo, nada menos!\n\n¡Hasta yo me sorprendo conmigo\nmismo!\x0E\x01\x04\x02\x1E Sabía que mi talento era\ninconmensurable, pero tanto...\n\n\x0E\x01\x09\x04\x2841\x4000Con esta máquina vamos a hacer\npedazos a esa bestia, ¡ya lo verás!")
/*<233>*/ 	set_camera(32, 0)
/*<226>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x2804\x4000¡Un buen bombazo dejará a ese\nmonstruo atontado un rato!")
/*<368>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10304), ('param2', 16896), ('next', 227), ('param3', 13)])
/*<227>*/ 	printf(/* textboxtype: 1, unk: 1 */ "Pero hay un pequeño problema.\nSe ha despertado un poco antes de\nlo que esperaba...")
/*<228>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x2841\x4000¡Y aún me quedan unos ajustes por\nhacerle a mi catapulta!\n\n\nTe avisaré en cuanto esté lista,\n¿de acuerdo? Mientras tanto,\n¡ataca al monstruo!")
/*<296>*/ 	set_camera(45, 0)
/*<240>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_500_78() {
/*<580>*/ 	start()
/*<581>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BAmo, tengo información importante.\nLa prioridad actual es encerrar al\nmonstruo en el sello. Esta tarea no\npuede postergarse.")
          }

          void entrypoint_500_27() {
/*< 37>*/ 	start()
/*<527>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 69>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 40>*/ 	scene_flags[10 'Sealed Grounds'][12 /* 0x0 10 */] = true;
/*< 43>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<584>*/ 	story_flags[854 /* us: 805A9B34 0x10, jp: 805ACDB4 0x10 */] = true;
          }

          void entrypoint_500_61() {
/*<220>*/ 	start()
/*<243>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 40), ('next', 244), ('param3', 32)])
/*<244>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 40), ('param2', 100), ('next', 245), ('param3', 16)])
/*<245>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2800\x04\x0E\x01\x08\x02\x1CD¡Eeeh! ¡Aquí, Link!")
/*<246>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 297), ('param3', 40)])
/*<297>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 501), ('param3', 6)])
/*<501>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 298), ('param3', 47)])
/*<298>*/ 	set_camera(36, 0)
/*<503>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 30), ('param2', 356), ('next', 502), ('param3', 15)])
/*<502>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 247), ('param3', 48)])
/*<247>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x07\x04\x2800\x0FJe, je, je... ¡abre bien los ojos y\nsorpréndete con el arma secreta\ndel asombroso Vilán!")
/*<299>*/ 	set_camera(46, 0)
/*<300>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 346), ('param3', 6)])
/*<346>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10304), ('param2', 16909), ('next', 248), ('param3', 13)])
/*<248>*/ 	printf(/* textboxtype: 1, unk: 1 */ "Te presento... ¡la <r<supercatapulta>>!")
/*<474>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 29), ('param2', 356), ('next', 347), ('param3', 15)])
/*<347>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10305), ('param2', 17152), ('next', 249), ('param3', 13)])
/*<249>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x2800\x18Te has quedado sin habla, ¿eh?\n¡No te imaginas cuánto me ha\ncostado construir esta maravilla!")
/*<363>*/ 	printf(/* textboxtype: 1, unk: 1 */ "¡Contémplala en todo su esplendor!")
/*<301>*/ 	set_camera(47, 0)
/*<364>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x2840\x4300Quité de en medio todos los obstáculos\ny planté los raíles para poder moverla.\n¡Y lo hice solo, nada menos!\n\n¡Hasta yo me sorprendo conmigo\nmismo!\x0E\x01\x04\x02\x1E Sabía que mi talento era\ninconmensurable, pero tanto...\n\n\x0E\x01\x09\x04\x2841\x4000Con esta máquina vamos a hacer\npedazos a esa bestia, ¡ya lo verás!")
/*<367>*/ 	set_camera(32, 0)
/*<250>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x2804\x4000¡Un buen bombazo dejará a ese\nmonstruo atontado un rato!")
/*<348>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10304), ('param2', 16896), ('next', 251), ('param3', 13)])
/*<251>*/ 	printf(/* textboxtype: 1, unk: 1 */ "Pero hay un pequeño problema.\nSe ha despertado un poco antes de\nlo que esperaba...")
/*<252>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x2841\x4000¡Y aún me quedan unos ajustes por\nhacerle a mi catapulta!\n\n\nTe avisaré en cuanto esté lista,\n¿de acuerdo? Mientras tanto,\n¡ataca al monstruo!")
/*<302>*/ 	set_camera(50, 0)
/*<253>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_500_44() {
/*<354>*/ 	start()
/*<356>*/ 	switch (scene_flags[6 /* 0x1 40 */]) {
          	  case 0:
/*<358>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x17\x1B08¡La estatua ha reaccionado!\n¡Tú sabes algo, seguro!")
          	  case 1:
/*<355>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\x1B05\x0E\x01\x08\x02\x1CD¡Por Goron!")
/*<357>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x13\x1909¡Eres una caja de sorpresas!\n\n\n\n\x0E\x01\x09\x04\x17\x1B08¡¿Cómo has hecho eso?! ¡La estatua\nha reaccionado! Tú sabes algo que no\nme has contado, ¿verdad? Confiesa...")
/*<359>*/ 		scene_flags[10 'Sealed Grounds'][6 /* 0x1 40 */] = true;
          	}
          }

          void entrypoint_500_45() {
/*< 89>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00&¡¿Y ahora le han salido brazos?!\n¡Lo que faltaba!\n\n\nMejor. ¡Así quedará más claro el\nincreíble poder de mi supercatapulta!\n\n\n\x0E\x01\x09\x04B\x4000Te haré una señal en cuanto lo tenga\ntodo listo. Mientras tanto, ¡ataca\na ese monstruo!")
          }

          void entrypoint_500_28() {
/*<160>*/ 	start()
/*<553>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<554>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Tengo información importante para\nel\x0E\x01\x12\x04\x00\x0B amo. La bestia ha vuelto a despertar,\npor lo que en este momento no es\nposible escapar.")
          	  case 1:
/*<161>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<162>*/ 			printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BAmo, un aviso importante: la prioridad\nen este momento es volver a encerrar\na la bestia en el sello.\n\nEl \x0E\x01\x12\x04\x00\x02amo no podrá abandonar esta zona\nhasta haber cumplido la misión.")
          		  case 1:
/*<163>*/ 			printf(/* textboxtype: 2, unk: 0 */ "Tengo información importante para\nel\x0E\x01\x12\x04\x00\x0B amo. La bestia ha vuelto a despertar,\npor lo que en este momento no es\nposible escapar.")
          		}
          	}
          }

          void entrypoint_500_62() {
/*<221>*/ 	start()
/*<234>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
/*<303>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 307), ('param3', 40)])
/*<307>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 305), ('param3', 6)])
/*<305>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 40), ('next', 349), ('param3', 32)])
/*<349>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 40), ('param2', 100), ('next', 306), ('param3', 16)])
/*<306>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 40), ('param2', 100), ('next', 304), ('param3', 17)])
/*<304>*/ 	set_camera(31, 0)
/*<308>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 20), ('param2', 356), ('next', 238), ('param3', 15)])
/*<238>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 350), ('param3', 6)])
/*<350>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10305), ('param2', 17152), ('next', 235), ('param3', 13)])
/*<235>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x2800\x4000Parece que ese sello va a romperse\nen cualquier momento...\x0E\x01\x05\x04\x1E\x00")
/*<241>*/ 	set_camera(32, 0)
/*<351>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10304), ('param2', 16896), ('next', 236), ('param3', 13)])
/*<236>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x283E\x400F¡Tranquilo, que no cunda el pánico!\n\n\n\n\x0E\x01\x09\x04\x2841\x00¡Todavía tenemos mi <r<supercatapulta>>!\n¡Y ya has visto lo que es capaz de hacer!")
/*<237>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x2800\x00¡Mientras cuente con un arma así,\nla palabra derrota no forma parte\nde mi diccionario!\n\n\x0E\x01\x09\x04\x2800\x200¡Es mi destino, y pienso grabarlo con\nletras de oro en los anales de la\nhistoria!")
/*<352>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10305), ('param2', 17152), ('next', 242), ('param3', 13)])
/*<242>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x2800\x200Link, intenta no estorbar.\n¡Tengo una misión que cumplir!")
/*<309>*/ 	set_camera(45, 0)
/*<239>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_500_11() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 2, unk: 0 */ "")
          }

          void entrypoint_500_29() {
/*< 72>*/ 	start()
/*<538>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 2), ('next', 100), ('param3', 46)])
/*<100>*/ 	switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          	  case 0:
/*<528>*/ 		switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          		  case 0:
/*<530>*/ 			switch (scene_flags[43 /* 0x4 08 */]) {
          			  case 0:
/*<534>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x4026¡Oye, Link, ya no nos\nquedan más bombas!\n\n\n\x0E\x01\x09\x04 \x4000¡Vas a tener que lanzarte directamente\nsobre su cabeza! ¡Deprisa, súbete!")
          			  case 1:
/*<532>*/ 				switch (loadzone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<533>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00&¡Usa mi <r<supercatapulta >>cuando quieras!\n\n\n\n¡Para preparar el disparo, oprime (^)!\x0E\x01\x11\x02\x8CD\n\n\n\nPuedes mover la catapulta con \x0E\x02\x04\x02\xECD\ny apuntar con el <r<control>>. Luego solo\nhay que lanzar la bomba y... ¡catapum!")
          				  case 1:
/*<531>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x4226¡Por lo visto, mi <r<supercatapulta >>vuelve\na ser necesaria!\n\n\nSeguro que no hace falta que lo repita,\npero cuando la tenga a punto te haré\nuna señal con (^).\x0E\x01\x11\x02\x8CD\n\n\x0E\x01\x09\x04B\x4000¡Entre los dos destruiremos\na este monstruo, ya verás!")
          				}
          			}
          		  case 1:
/*<529>*/ 			switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          			  case 0:
/*<536>*/ 				switch (loadzone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<537>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00&¡Usa mi <r<supercatapulta >>cuando quieras!\n\n\n\n¡Para preparar el disparo, oprime (^)!\x0E\x01\x11\x02\x8CD\n\n\n\nPuedes mover la catapulta con \x0E\x02\x04\x02\xECD\ny apuntar con el <r<control>>. Luego solo\nhay que lanzar la bomba y... ¡catapum!")
          				  case 1:
/*<535>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x04\x4100¡Por fin ha llegado el momento de\ndemostrar las virtudes de mi\n<r<supercatapulta >>secreta!\n\n\x0E\x01\x09\x04\x00\x300En cuanto esté lista, ¡te haré una\nseñal con (^)! \x0E\x01\x09\x04\x00\x4000Mientras tanto,\n¡ataca a ese monstruo!\x0E\x01\x11\x02\x8CD")
          				}
          			  case 1:
/*< 78>*/ 				switch (scene_flags[71 /* 0x9 80 */]) {
          				  case 0:
/*<193>*/ 					switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          					  case 0:
/*<261>*/ 						scene_flags[10 'Sealed Grounds'][97 /* 0xD 02 */] = true;
/*<561>*/ 						switch (story_flags[490 /* us: 805A9B13 0x01, jp: 805ACD93 0x01 */]) {
          						  case 0:
/*<564>*/ 							switch (story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */]) {
          							  case 0:
          								flw_194:
/*<194>*/ 								printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00&¿Y bien? ¿Adónde te mando?\n\n\n\n[1]Juegos del\ncielo[2]Juegos de\ntierras inferiores[3-]Olvídalo")
/*<195>*/ 								switch (choice(3)) {
          								  case 0:
/*<586>*/ 									switch (story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */]) {
          									  case 0:
/*<196>*/ 										printf(/* textboxtype: 1, unk: 1 */ "¿A la zona de juegos del cielo?\n¿A qué lugar exactamente?\n\n[1]Isla\nFortuna[2]Insectia[3]Otro")
/*<571>*/ 										switch (choice(3)) {
          										  case 0:
          											flw_209:
/*<209>*/ 											loadzone_temp_flags[1 /* 0x1 02 */] = true;
          											flw_204:
/*<204>*/ 											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 199), ('param3', 42)])
/*<199>*/ 											printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04B\x342¡De acuerdo, adelante! ¡Agárrate bien!")
          										  case 1:
          											flw_202:
/*<202>*/ 											loadzone_temp_flags[2 /* 0x1 04 */] = true;
          											goto flw_204
          										  case 2:
/*<197>*/ 											printf(/* textboxtype: 1, unk: 1 */ "¿A qué quieres jugar?\n[1]Mil pedazos\nde bambú[2]Tiro a la\ncalabaza[3-]Olvídalo")
/*<572>*/ 											switch (choice(3)) {
          											  case 0:
          												flw_203:
/*<203>*/ 												loadzone_temp_flags[3 /* 0x1 08 */] = true;
          												goto flw_204
          											  case 1:
/*<205>*/ 												loadzone_temp_flags[4 /* 0x1 10 */] = true;
          												goto flw_204
          											  case 2:
          												flw_200:
/*<200>*/ 												printf(/* textboxtype: 1, unk: 0 */ "Si cambias de opinión, ¡ya sabes dónde\nestoy!")
          											}
          										}
          									  case 1:
/*<585>*/ 										printf(/* textboxtype: 1, unk: 1 */ "¿A la zona de juegos del cielo?\n¿A qué lugar exactamente?\n[1]Isla\nFortuna[2]Insectia[3]Isla Bambú[4-]Olvídalo")
/*<587>*/ 										switch (choice(4)) {
          										  case 0:
          											goto flw_209
          										  case 1:
          											goto flw_202
          										  case 2:
          											goto flw_203
          										  case 3:
          											goto flw_200
          										}
          									}
          								  case 1:
/*<198>*/ 									printf(/* textboxtype: 1, unk: 1 */ "Así que a la zona de juegos de las\ntierras inferiores... ¿A qué lugar\nexactamente?\n[1]Duelo\natronador[2]Agujeros\ny rupias[3]Montaña\nrusa[4-]Olvídalo")
/*<201>*/ 									switch (choice(4)) {
          									  case 0:
/*<206>*/ 										loadzone_temp_flags[5 /* 0x1 20 */] = true;
          										goto flw_204
          									  case 1:
/*<207>*/ 										loadzone_temp_flags[6 /* 0x1 40 */] = true;
          										goto flw_204
          									  case 2:
/*<208>*/ 										loadzone_temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_204
          									  case 3:
          										goto flw_200
          									}
          								  case 2:
          									goto flw_200
          								}
          							  case 1:
/*<563>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04¡Hola, Link!\n\n\n\n¡El gran Vilán ha venido a ayudarte!\nSeguro que no te viene mal, ¿verdad?")
/*<562>*/ 								story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */] = true;
/*<577>*/ 								switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
          								  case 0:
          									goto flw_194
          								  case 1:
/*<578>*/ 									printf(/* textboxtype: 1, unk: 0 */ "Puedes usar la catapulta para llegar\nvolando a otros lugares.")
          									flw_575:
/*<575>*/ 									printf(/* textboxtype: 1, unk: 0 */ "¿Adónde te gustaría ir? Seguro que\nte diviertes mucho viajando así.\n\n\n¡Tiene que haber muchos sitios que\nno hayas explorado aún!")
/*<576>*/ 									story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */] = true;
          									goto flw_194
          								}
          							}
          						  case 1:
/*<573>*/ 							switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
          							  case 0:
          								goto flw_194
          							  case 1:
/*<574>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Oye, Link, ¿sabes que\npuedes usar la catapulta para llegar\nvolando a otros lugares?")
          								goto flw_575
          							}
          						}
          					  case 1:
/*< 79>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Así que te diriges al bosque de Farone,\n¿verdad?\n\n\n¡Pues puedo usar mi <r<supercatapulta\n>>para mandarte allí rápidamente!\n[1]Gracias[2-]Olvídalo")
/*< 93>*/ 						switch (choice(2)) {
          						  case 0:
/*< 95>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00B¡Déjaselo al gran Vilán!")
/*< 92>*/ 							loadzone_temp_flags[0 /* 0x1 01 */] = true;
/*< 96>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          						  case 1:
/*< 94>*/ 							printf(/* textboxtype: 1, unk: 0 */ "¡Si cambias de idea, ya sabes dónde\nestoy!")
          						}
          					}
          				  case 1:
/*<188>*/ 					switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
          					  case 0:
/*<187>*/ 						switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          						  case 0:
          							flw_190:
/*<190>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00&¡Perfecto! El gran Vilán ha vuelto\na solucionarlo todo. ¡Ya puedes\nencerrar de nuevo a ese monstruo!")
          						  case 1:
/*<192>*/ 							switch (scene_flags[19 /* 0x3 08 */]) {
          							  case 0:
          								goto flw_190
          							  case 1:
/*<320>*/ 								switch (scene_flags[43 /* 0x4 08 */]) {
          								  case 0:
/*<324>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x4026¡Oye, Link, ya no nos\nquedan más bombas!\n\n\n\x0E\x01\x09\x04 \x4000¡Vas a tener que lanzarte directamente\nsobre su cabeza! ¡Deprisa, súbete!")
          								  case 1:
/*<322>*/ 									switch (loadzone_temp_flags[11 /* 0x0 08 */]) {
          									  case 0:
/*<323>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00&¡Usa mi <r<supercatapulta >>cuando quieras!\n\n\n\n¡Para preparar el disparo, oprime (^)!\x0E\x01\x11\x02\x8CD\n\n\n\nPuedes mover la catapulta con \x0E\x02\x04\x02\xECD\ny apuntar con el <r<control>>. Luego solo\nhay que lanzar la bomba y... ¡catapum!")
          									  case 1:
/*<321>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x4226¡Por lo visto, mi <r<supercatapulta >>vuelve\na ser necesaria!\n\n\nSeguro que no hace falta que lo repita,\npero cuando la tenga a punto te haré\nuna señal con (^).\x0E\x01\x11\x02\x8CD\n\n\x0E\x01\x09\x04B\x4000¡Entre los dos destruiremos\na este monstruo, ya verás!")
          									}
          								}
          							}
          						}
          					  case 1:
/*<186>*/ 						switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
          						  case 0:
          							flw_189:
/*<189>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00&¡Todo ha sido gracias a mí!\x0E\x01\x04\x02\x1E ¡Ahora ya\npuedes encerrar de nuevo al monstruo!\n\n\nLa última vez golpeaste el pilar con el\nrayo de luz de tu espada, ¿no?")
          						  case 1:
/*<191>*/ 							switch (scene_flags[18 /* 0x3 04 */]) {
          							  case 0:
          								goto flw_189
          							  case 1:
/*<318>*/ 								switch (loadzone_temp_flags[11 /* 0x0 08 */]) {
          								  case 0:
/*<319>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00&¡Usa mi <r<supercatapulta >>cuando quieras!\n\n\n\n¡Para preparar el disparo, oprime (^)!\x0E\x01\x11\x02\x8CD\n\n\n\nPuedes mover la catapulta con \x0E\x02\x04\x02\xECD\ny apuntar con el <r<control>>. Luego solo\nhay que lanzar la bomba y... ¡catapum!")
          								  case 1:
/*< 73>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x04\x4100¡Por fin ha llegado el momento de\ndemostrar las virtudes de mi\n<r<supercatapulta >>secreta!\n\n\x0E\x01\x09\x04\x00\x300En cuanto esté lista, ¡te haré una\nseñal con (^)! \x0E\x01\x09\x04\x00\x4000Mientras tanto,\n¡ataca a ese monstruo!\x0E\x01\x11\x02\x8CD")
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	  case 1:
/*<101>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00&¡La anciana dice que es posible que ese\nmonstruo despierte de nuevo!\n\n\n\x0E\x01\x09\x04\x00\x4200Como soy muy precavido, he inventado\nun arma secreta para enfrentarme a él.\n\n\n\x0E\x01\x09\x04\x00\x0F¡Todavía no está lista, pero puedes\napostar tu espada a que será algo\nimpresionante!")
          	}
          }

          void entrypoint_500_46() {
/*< 90>*/ 	start()
/*< 91>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00&¡Viene hacia aquí! ¡Vamos, bestia\nrepugnante, ven aquí! ¡Te vas a enterar\nde quién soy yo!\n\n\x0E\x01\x09\x04\x04\x4000¡Link, usaremos el mismo\ntruco de antes!, ¿de acuerdo?")
          }

          void entrypoint_500_63() {
/*<377>*/ 	start()
/*<406>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 392), ('param3', 32)])
/*<392>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 24), ('param2', 260), ('next', 382), ('param3', 15)])
/*<382>*/ 	set_camera(54, 0)
/*<408>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 4), ('next', 394), ('param3', 17)])
/*<394>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1042), ('param2', 4352), ('next', 393), ('param3', 13)])
/*<393>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 24), ('param2', 4), ('next', 395), ('param3', 14)])
/*<395>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 524), ('param3', 16)])
/*<524>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<380>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<381>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1086), ('param2', 16447), ('next', 379), ('param3', 13)])
/*<379>*/ 	printf(/* textboxtype: 1, unk: 1 */ "¡Link! ¡Es horrible, es\nhorrible! ¡El monstruo está a punto\nde despertarse otra vez!")
/*<383>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1089), ('param2', 16384), ('next', 385), ('param3', 13)])
/*<385>*/ 	printf(/* textboxtype: 1, unk: 1 */ "¡Ah, espera un momento! Tengo que\nprepararlo todo.")
/*<384>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 24), ('param2', 772), ('next', 422), ('param3', 14)])
/*<422>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<415>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<416>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_47() {
/*<154>*/ 	start()
/*<539>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<541>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 6157), ('next', 540), ('param3', 13)])
/*<540>*/ 		printf(/* textboxtype: 1, unk: 0 */ "¡Link, el monstruo lleva\nincrustado en la cabeza el <r<pilar\ndel sello>>!\n\n\x0E\x01\x09\x04\xE00\x13¡Usa la espada para empujarlo\nhasta el fondo!")
          	  case 1:
/*<156>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<157>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<159>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x160D¡Ahora, Link!\x0E\x01\x04\x02\x1E\n\n\n\n¡Golpea el pilar con el <r<rayo celestial>>!\n\n\n\n\x0E\x01\x09\x04\x11\x1700¡Rápido!")
          			  case 1:
/*<374>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 6157), ('next', 158), ('param3', 13)])
/*<158>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¡Link, el monstruo lleva\nincrustado en la cabeza el <r<pilar\ndel sello>>!\n\n\x0E\x01\x09\x04\xE00\x13¡Usa la espada para empujarlo\nhasta el fondo!")
          			}
          		  case 1:
/*<155>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x170F¡Deprisa, Link!\nBaja al centro del valle y comprueba\nsi el pilar del sello sigue intacto.\n\n\x0E\x01\x09\x04\x14\xB00Este temblor no presagia nada bueno.\n¡Debemos asegurarnos de que el\nmonstruo no haya despertado!")
          		}
          	}
          }

          void entrypoint_500_64() {
/*<265>*/ 	start()
/*<276>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<282>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 281), ('param3', 40)])
/*<281>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 60), ('next', 273), ('param3', 6)])
/*<273>*/ 	set_camera(40, 0)
/*<289>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 18), ('param2', 356), ('next', 270), ('param3', 15)])
/*<270>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 500), ('param3', 32)])
/*<500>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 4), ('next', 268), ('param3', 17)])
/*<268>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 8), ('param2', 260), ('next', 271), ('param3', 15)])
/*<271>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 269), ('param3', 32)])
/*<269>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 17), ('param2', 270), ('next', 504), ('param3', 15)])
/*<504>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 288), ('param3', 17)])
/*<288>*/ 	set_camera(41, 0)
/*<275>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3585), ('param2', 256), ('next', 272), ('param3', 13)])
/*<272>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1077), ('param2', 13824), ('next', 290), ('param3', 13)])
/*<290>*/ 	set_camera(42, 0)
/*<274>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<286>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1082), ('param2', 15360), ('next', 267), ('param3', 13)])
/*<267>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x4000¡¿Pe... pero qué pasa?!\n¿Por qué tiembla todo?")
/*<291>*/ 	set_camera(24, 0)
/*<287>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1079), ('param2', 14592), ('next', 283), ('param3', 13)])
/*<283>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x4001¡Un terremoto! ¡Sálvese quien pueda!")
/*<279>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<278>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*<277>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<280>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3600), ('param2', 5632), ('next', 353), ('param3', 13)])
/*<353>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3584), ('param2', 5632), ('next', 499), ('param3', 13)])
/*<499>*/ 	set_camera(43, 0)
/*<266>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\x10¡Vamos, tienes que darte prisa,\nLink! Ve a comprobar si\nel <r<pilar del sello>> que hay en el fondo\ndel valle sigue intacto.")
/*<284>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\x1653Debemos asegurarnos de que el\nmonstruo no haya despertado.\n¡No pierdas más tiempo!")
/*<292>*/ 	set_camera(44, 0)
/*<505>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 17), ('param2', 270), ('next', 285), ('param3', 15)])
/*<285>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_500_30() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0FLo sabía... El sello se ha roto.\n\n\n\nPero será mejor que dejemos las\nexplicaciones para más tarde.\n¡Ahora tienes que evitar que\nescape del agujero!\nSea como sea, ¡no permitas que\nse acerque al templo!")
          }

          void entrypoint_500_48() {
/*<164>*/ 	start()
/*<552>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<551>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x180F¡Link, hay que evitar\nque esa bestia rompa el sello!\n\n\n¡Su poder está aumentando, así que\nve con cuidado!")
          	  case 1:
/*<165>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<167>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x180DSabes cómo asegurar el sello del\nmonstruo, ¿verdad?\n\n\nSolo tienes que descargar el <r<rayo\ncelestial >>sobre el pilar.\x0E\x01\x04\x02\x1E ¡Ánimo, sé\nque lo conseguirás!")
          		  case 1:
/*<166>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x180F¡Link, hay que evitar\nque esa bestia rompa el sello!\n\n\n¡Su poder está aumentando, así que\nve con cuidado!")
          		}
          	}
          }

          void entrypoint_500_65() {
/*<328>*/ 	start()
/*<330>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04C\x4553\x0E\x01\x08\x02\x1CD¡Uaaah! \x0E\x01\x04\x02\n¡Y ahora vuela!\n\n\n\n\x0E\x01\x09\x04B\x4026Creo que va directo hacia el templo...\n¡No pienso permitírselo!\n\n\n\x0E\x01\x04\x02\x08¡Te voy a borrar del mapa, bestia!")
          }

          void entrypoint_500_13() {
/*<476>*/ 	start()
/*<491>*/ 	printf(/* textboxtype: 2, unk: 1 */ "Tengo información para el \x0E\x01\x12\x04\x00\x0Bamo.\nAl usar el rayo celestial, he detectado\ncambios en esta zona.")
/*<495>*/ 	printf(/* textboxtype: 2, unk: 1 */ "Además, percibo un aura similar\na la del manto del \x0E\x01\x12\x04\x00\x02amo en esta zona.\nDeduzco que podría pertenecer\na Zelda.\nConfirmo la posibilidad de guiar al\n\x0E\x01\x12\x04\x00\x02amo hasta el origen de la señal\nmediante la función de <pling><r<rastreo>>.\n\n¿Necesita el \x0E\x01\x12\x04\x00\x01amo una explicación más\ndetallada?\n[1]Sí[2-]No")
/*<569>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<492>*/ 	switch (choice(2)) {
          	  case 0:
/*<493>*/ 		printf(/* textboxtype: 2, unk: 1 */ "\x0E\x01\x12\x04\x00\x05Muy bien, amo.\n\n\n\nLa función de rastreo permite al \x0E\x01\x12\x04\x00\x0Camo\nbuscar un objetivo determinado usando\nla punta de la espada como brújula.\n\nCuanto más cerca se halle el origen\nde la señal, <r<mayor será la reacción>> de\nla espada, que se manifestará a través\nde sonido y vibración.\nLa dirección del objetivo que emite\nla señal se mostrará en la pantalla\ncon un <r<cursor>>.")
          		flw_570:
/*<570>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 496), ('param3', 56)])
/*<496>*/ 		printf(/* textboxtype: 2, unk: 1 */ "Basta con mantener oprimido (C),\nseleccionar a Zelda como objetivo del\nrastreo y seguir la dirección que\nmarca el cursor.\x0E\x01\x11\x02\x6CD")
/*<565>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*<494>*/ 		printf(/* textboxtype: 2, unk: 1 */ "Entendido, \x0E\x01\x12\x04\x00\x0Bamo.")
          		goto flw_570
          	}
          }

          void entrypoint_500_31() {
/*<143>*/ 	start()
/*<544>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<546>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 6157), ('next', 545), ('param3', 13)])
/*<545>*/ 		printf(/* textboxtype: 1, unk: 0 */ "¡Link, el monstruo lleva\nincrustado en la cabeza el <r<pilar\ndel sello>>!\n\n\x0E\x01\x09\x04\xE00\x13¡Usa la espada para empujarlo\nhasta el fondo!")
          	  case 1:
/*<145>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<146>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<148>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x160D¡Ahora, Link!\x0E\x01\x04\x02\x1E\n\n\n\n¡Golpea el pilar con el <r<rayo celestial>>!\n\n\n\n\x0E\x01\x09\x04\x11\x1700¡Rápido!")
          			  case 1:
/*<373>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 6157), ('next', 147), ('param3', 13)])
/*<147>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¡Link, el monstruo lleva\nincrustado en la cabeza el <r<pilar\ndel sello>>!\n\n\x0E\x01\x09\x04\xE00\x13¡Usa la espada para empujarlo\nhasta el fondo!")
          			}
          		  case 1:
/*<144>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x170F¡Deprisa, Link!\nBaja al centro del valle y comprueba\nsi el pilar del sello sigue intacto.\n\n\x0E\x01\x09\x04\x14\xB00Este temblor no presagia nada bueno.\n¡Debemos asegurarnos de que el\nmonstruo no haya despertado!")
          		}
          	}
          }

          void entrypoint_500_49() {
/*<168>*/ 	start()
/*<549>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<550>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x180F¡Link, hay que evitar\nque esa bestia rompa el sello!\n\n\n¡Su poder está aumentando, así que\nve con cuidado!")
          	  case 1:
/*<169>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<171>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x180DSabes cómo asegurar el sello del\nmonstruo, ¿verdad?\n\n\nSolo tienes que descargar el <r<rayo\ncelestial >>sobre el pilar.\x0E\x01\x04\x02\x1E ¡Ánimo, sé\nque lo conseguirás!")
          		  case 1:
/*<170>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x180F¡Link, hay que evitar\nque esa bestia rompa el sello!\n\n\n¡Su poder está aumentando, así que\nve con cuidado!")
          		}
          	}
          }

          void entrypoint_500_66() {
/*<329>*/ 	start()
/*<331>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04A\x4043¿Eso es todo? Pensaba que ese\nmonstruo era mucho más fuerte.\n¡Y todo gracias a la catapulta!\n\n¡Vamos, ahora te toca a ti!")
          }

          void entrypoint_500_14() {
/*<440>*/ 	start()
/*<441>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Tengo datos importantes para el \x0E\x01\x12\x04\x00\x0Bamo.\n\n\n\nPara recibir información detallada\nsobre un objetivo, en primer lugar\nhay que <g<seleccionarlo >>oprimiendo (Z).\x0E\x01\x11\x02\x7CD\n\nUna vez <r<fijado el objetivo>> con (Z), solo\nhay que oprimir (v) y apareceré para\nfacilitar al \x0E\x01\x12\x04\x00\x01amo la información que\nhaya solicitado.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          }

          void entrypoint_500_32() {
/*< 25>*/ 	start()
/*<542>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<543>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x001¡Aaaah!")
          	  case 1:
/*<149>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<150>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<151>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x000¡Da... date prisa! ¡Tienes que\nproteger el sello tal y como dice\nla anciana!\n\nLo único que tienes que hacer\nes golpear el pilar con la luz de\ntu espada, ¿no?")
          			  case 1:
/*<153>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x001¡Aaaah!")
          			}
          		  case 1:
/*<152>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x15¡¿Pe... pero qué pasa?!\n¿Por qué tiembla todo?\n\n\n¡Un terremoto! ¡Sálvese quien pueda!")
          		}
          	}
          }

          void entrypoint_500_67() {
/*<332>*/ 	start()
/*<333>*/ 	printf(/* textboxtype: 1, unk: 2 */ "\x0E\x01\x09\x04\x00&¡Oye, Link, la catapulta\nya está lista!\n\n\nEn cuanto necesites que te ayude,\n¡oprime (^) para avisarme!\x0E\x01\x11\x02\x8CD")
          }

          void entrypoint_500_33() {
/*< 47>*/ 	start()
/*<313>*/ 	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          	  case 0:
/*<325>*/ 		switch (scene_flags[106 /* 0xC 04 */]) {
          		  case 0:
/*<314>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x04\x202Te lo demostraré, Link...\x0E\x01\x04\x02\x1E\nPienso hacer todo lo posible con tal\nde ayudar a Zelda.")
          		  case 1:
/*<326>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Ah, oye, Link...\nLo he estado pensando mucho y...\n\n\nPuede que la anciana tenga razón.\nQuizá haya algo que solamente yo\nsea capaz de hacer.\n\nEstá claro que no tengo tus habilidades\npara el combate, pero...\n\n\n\x0E\x01\x09\x04@\x4200¡Haré todo lo que esté en mi mano para\nayudar a Zelda!\n\n\n¡Te lo demostraré!")
/*<327>*/ 			scene_flags[10 'Sealed Grounds'][106 /* 0xC 04 */] = true;
          		}
          	  case 1:
/*<315>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*<316>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00-Soy...\x0E\x01\x04\x02\x1E soy...\x0E\x01\x04\x02\x1E un inútil\x0E\x01\x04\x02\x1E.\x0E\x01\x04\x02\x1E.\x0E\x01\x04\x02\x1E.")
          		  case 1:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00=\x0E\x01\x08\x02\x1CD¡Noooooo!\n\n\n\n\x0E\x01\x09\x04\x00\x3A00\x0E\x01\x08\x02\x1CD\x0E\x01\x08\x02\x1CD¡No he podido hacer nada!\n\n\n\n\x0E\x01\x09\x04\x00\x4000\x0E\x01\x08\x02\x1CD\x0E\x01\x08\x02\x2CD¡Nada de nada!")
/*<317>*/ 			scene_flags[10 'Sealed Grounds'][105 /* 0xC 02 */] = true;
          		}
          	}
          }

          void entrypoint_500_50() {
/*<172>*/ 	start()
/*<559>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<560>*/ 		printf(/* textboxtype: 2, unk: 0 */ "El destino del \x0E\x01\x12\x04\x00\x01amo es detener al\nmonstruo. Hasta entonces, no será\nposible salir de aquí.")
          	  case 1:
/*<173>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<174>*/ 			printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BAmo, un aviso importante: la prioridad\nen este momento es volver a encerrar\na la bestia en el sello.\n\nEl \x0E\x01\x12\x04\x00\x02amo no podrá abandonar esta zona\nhasta haber cumplido la misión.")
          		  case 1:
/*<175>*/ 			printf(/* textboxtype: 2, unk: 0 */ "El destino del \x0E\x01\x12\x04\x00\x01amo es detener al\nmonstruo. Hasta entonces, no será\nposible salir de aquí.")
          		}
          	}
          }

          void entrypoint_500_68() {
/*<378>*/ 	start()
/*<488>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 489), ('param3', 6)])
/*<489>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 407), ('param3', 47)])
/*<407>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 400), ('param3', 32)])
/*<400>*/ 	set_camera(55, 0)
/*<487>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 29), ('param2', 356), ('next', 396), ('param3', 15)])
/*<396>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 25), ('param2', 260), ('next', 486), ('param3', 15)])
/*<486>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 4), ('next', 490), ('param3', 17)])
/*<490>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 398), ('param3', 48)])
/*<398>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1042), ('param2', 4352), ('next', 397), ('param3', 13)])
/*<397>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 25), ('param2', 4), ('next', 399), ('param3', 14)])
/*<399>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 523), ('param3', 16)])
/*<523>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<387>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<388>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1086), ('param2', 16447), ('next', 386), ('param3', 13)])
/*<386>*/ 	printf(/* textboxtype: 1, unk: 1 */ "¡Link! ¡Es horrible, es\nhorrible! ¡El monstruo está a punto\nde despertarse otra vez!")
/*<389>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1089), ('param2', 16384), ('next', 391), ('param3', 13)])
/*<391>*/ 	printf(/* textboxtype: 1, unk: 1 */ "¡Ah, espera un momento! Tengo que\nprepararlo todo.")
/*<390>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 25), ('param2', 772), ('next', 421), ('param3', 14)])
/*<421>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<414>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<417>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_34() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf(/* textboxtype: 1, unk: 2 */ "\x0E\x01\x09\x04\x00&¡Llegarás volando al bosque de Farone!\n\x0E\x01\x05\x04\n\x00")
/*< 99>*/ 	printf(/* textboxtype: 1, unk: 2 */ "¡Ve con cuidado!\x0E\x01\x05\x04\x1E\x00")
          }

          void entrypoint_500_51() {
/*<176>*/ 	start()
/*<557>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<558>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x180F¡Link, debes volver a\nencerrar a ese monstruo en su sello!\n\n\n¡Su poder está aumentando, así que\naproxímate con cuidado!")
          	  case 1:
/*<177>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<179>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x180DEs horrible... Esa bestia ha vuelto\na romper el sello...\n\n\nTú sabes cómo asegurarlo, ¿verdad?\nVamos, confío plenamente en ti.")
          		  case 1:
/*<178>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x180F¡Link, debes volver a\nencerrar a ese monstruo en su sello!\n\n\n¡Su poder está aumentando, así que\naproxímate con cuidado!")
          		}
          	}
          }

          void entrypoint_500_69() {
/*<409>*/ 	start()
/*<410>*/ 	printf(/* textboxtype: 1, unk: 2 */ "¡Bien! ¡Ahora me toca a mí!")
/*<411>*/ 	printf(/* textboxtype: 1, unk: 2 */ "Mueve la catapulta con \x0E\x02\x04\x02\xECD y apunta al\nobjetivo con el <r<control>>.\n\n\nDespués solo tienes que lanzarle una\nbomba con (A) y lo dejarás aturdido...\n¡Aprovecha la ocasión para atacarlo!")
/*<412>*/ 	printf(/* textboxtype: 1, unk: 2 */ "Si olvidas cómo manejar la <b<catapulta>>,\n¡oprime (2) para pedir ayuda!\x0E\x01\x11\x02\x5CD")
          }

          void entrypoint_500_17() {
/*<473>*/ 	start()
/*< 19>*/ 	set_camera(16, 0)
/*<102>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 3330), ('next', 17), ('param3', 13)])
/*< 17>*/ 	printf(/* textboxtype: 1, unk: 0 */ "A ver si lo he entendido...\n\n\n\n¿Así que al final de este camino hay\nun <r<templo >>donde vive una anciana\nque sabe dónde está <b<Zelda>>?")
/*< 20>*/ 	set_camera(17, 0)
/*<104>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Ajá... En fin, lo has hecho muy bien,\nLink. Pero ya puedes irte\na jugar, si quieres. A partir de\naquí me encargaré yo.\n\x0E\x01\x09\x04\x0D\xB41¡El gran <b<Vilán>> se pondrá manos\na la obra y encontrará a <b<Zelda>>!")
/*<103>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 24), ('param2', 5632), ('next', 18), ('param3', 13)])
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Cuando la rescate, regresará\nconmigo a Neburia...\x0E\x01\x04\x02\x1E")
/*<106>*/ 	set_camera(18, 0)
/*<107>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0C¡Y entonces pediré su mano, y ella\naceptará y viviremos felices para\nsiempre!")
/*<108>*/ 	set_camera(19, 0)
/*<112>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3), ('param2', 512), ('next', 113), ('param3', 13)])
/*<113>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0DTú no te preocupes y déjalo todo\nen mis manos.")
/*<109>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 105), ('param3', 6)])
/*<105>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Ahora debo encontrar a esa anciana\nde la que me hablaste.")
/*< 21>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 5), ('param2', 1024), ('next', 22), ('param3', 14)])
/*< 22>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x08\x02\x1CD¡Pórtate bien!\x0E\x01\x04\x02-\n\x0E\x01\x08\x02\xFFCD¡Adiós, Link!")
/*<110>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 8), ('param2', 256), ('next', 111), ('param3', 15)])
/*<111>*/ 	set_camera(20, 0)
/*<114>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_500_35() {
/*< 54>*/ 	start()
/*<360>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3600), ('param2', 5632), ('next', 53), ('param3', 13)])
/*< 53>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00T\x0E\x01\x06\x02\x1CD¡Aaah!~~~\n<r<\x0E\x01\x06\x02ÍEs...\x0E\x01\x04\x02\n\x0E\x01\x06\x02\xFECD el fin...>>\x0E\x01\x05\x04(\x00")
          }

          void entrypoint_500_52() {
/*<180>*/ 	start()
/*<555>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<556>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x180F¡Link, debes volver a\nencerrar a ese monstruo en su sello!\n\n\n¡Su poder está aumentando, así que\naproxímate con cuidado!")
          	  case 1:
/*<181>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<183>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x180DEs horrible... Esa bestia ha vuelto\na romper el sello...\n\n\nTú sabes cómo asegurarlo, ¿verdad?\nVamos, confío plenamente en ti.")
          		  case 1:
/*<182>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x180F¡Link, debes volver a\nencerrar a ese monstruo en su sello!\n\n\n¡Su poder está aumentando, así que\naproxímate con cuidado!")
          		}
          	}
          }

          void entrypoint_500_18() {
/*<519>*/ 	start()
/*< 66>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<117>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 116), ('param3', 40)])
/*<116>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 60), ('next', 44), ('param3', 6)])
/*< 44>*/ 	set_camera(21, 0)
/*<467>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 28), ('param2', 356), ('next', 30), ('param3', 15)])
/*< 30>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 28), ('param3', 32)])
/*< 28>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 8), ('param2', 260), ('next', 31), ('param3', 15)])
/*< 31>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 29), ('param3', 32)])
/*< 29>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 7), ('param2', 270), ('next', 120), ('param3', 15)])
/*<120>*/ 	set_camera(25, 0)
/*< 33>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 34), ('param3', 17)])
/*< 34>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1077), ('param2', 13824), ('next', 32), ('param3', 13)])
/*< 32>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 470), ('param3', 17)])
/*<470>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 469), ('param3', 6)])
/*<469>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<518>*/ 	set_camera(26, 0)
/*<129>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1082), ('param2', 15381), ('next', 472), ('param3', 13)])
/*<472>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 471), ('param3', 6)])
/*<471>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3605), ('param2', 2319), ('next', 24), ('param3', 13)])
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x4000¡¿Pe... pero qué pasa?!\n¿Por qué tiembla todo?")
/*<121>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 130), ('param3', 6)])
/*<130>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1079), ('param2', 14592), ('next', 468), ('param3', 13)])
/*<468>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 119), ('param3', 6)])
/*<119>*/ 	set_camera(24, 0)
/*<118>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x4001¡Un terremoto! ¡Sálvese quien pueda!")
/*< 45>*/ 	set_camera(27, 0)
/*< 71>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*< 68>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*< 67>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<115>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3600), ('param2', 5632), ('next', 125), ('param3', 13)])
/*<125>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 14), ('next', 128), ('param3', 17)])
/*<128>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3600), ('param2', 5632), ('next', 23), ('param3', 13)])
/*< 23>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\x10¡Vamos, tienes que darte prisa,\nLink! Ve a comprobar si\nel <r<pilar del sello>> que hay en el fondo\ndel valle sigue intacto.")
/*<123>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 28), ('param2', 356), ('next', 122), ('param3', 15)])
/*<122>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\xE00\x1653Debemos asegurarnos de que el\nmonstruo no haya despertado.\n¡No pierdas más tiempo!")
/*<126>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 124), ('param3', 6)])
/*<124>*/ 	set_camera(28, 0)
/*<264>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 17), ('param2', 270), ('next', 366), ('param3', 15)])
/*<366>*/ 	scene_flags[10 'Sealed Grounds'][107 /* 0xC 08 */] = true;
/*<127>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_500_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04B\x4300¿Qué me dices de la potencia de mi\nsupercatapulta? ¿No te parece\nincreíble, fascinante y soberbia?\n\n\x0E\x01\x09\x04>\x4000Bueno, voy a cargar la próxima bomba.\nMientras esperas a mi señal,\n¡ataca a ese monstruo!")
          }

          void entrypoint_500_36() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Puede que este sujeto sepa algo más\nsobre el monstruo que nos ha atacado.\nRecomiendo prestarle ayuda.")
          }

          void entrypoint_500_53() {
/*<184>*/ 	start()
/*<185>*/ 	printf(/* textboxtype: 1, unk: 2 */ "\x0E\x01\x09\x04\x00&¡Oye, Link, la catapulta\nya está lista!\n\n\nSi esa cosa intenta escalar el muro,\npuedo lanzarle una bomba para\ndetenerla.\n\nEn cuanto necesites que te ayude,\n¡oprime (^) para avisarme!\x0E\x01\x11\x02\x8CD")
          }

          void entrypoint_500_70() {
/*<431>*/ 	start()
/*<432>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x01Amo, no abrir el <b<manto sagrado >>antes\nde aterrizar puede acarrear graves\nconsecuencias.\n\nEl \x0E\x01\x12\x04\x00\x02amo puede oprimir (B) para abrirlo,\naunque si se le olvida lo haré yo en\nsu lugar.\x0E\x01\x11\x02\x1CD")
          }

