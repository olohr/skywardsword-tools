          void entrypoint_400_13() {
/*< 33>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_65() {
/*<161>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Hemos llegado a las <b<minas de Lanayru>>.\n\n\n\nAhora es posible rastrear la ubicación\ndel umbral del juicio que conduce a la\nllama sagrada.")
/*<163>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_30() {
/*<234>*/ 	start()
/*<235>*/ 	printf(/* textboxtype: 1, unk: 0 */ "¿Quieres trabajar aquí?\nPues empieza quitándote ese gorro\ny poniéndote un casco como es debido.")
/*<244>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_14() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Por esa puerta entran y salen las\nvagonetas. No te quedes ahí parado\no te atropellarán. Vamos, ¡apártate!")
/*< 71>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_66() {
/*<164>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Hemos llegado al <b<desierto de Lanayru>>.\n\n\n\nAhora es posible rastrear la ubicación\ndel umbral del juicio que conduce a la\nllama sagrada.")
/*<166>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_31() {
/*<236>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_15() {
/*< 37>*/ 	start()
/*<304>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<305>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_38:
/*< 38>*/ 			printf(/* textboxtype: 1, unk: 0 */ "...")
          		  case 1:
/*<342>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				flw_307:
/*<307>*/ 				printf(/* textboxtype: 1, unk: 0 */ "...")
          			  case 1:
/*<306>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 307), ('param3', 31)])
          				goto flw_307
          			}
          		}
          	  case 1:
          		goto flw_38
          	}
          }

          void entrypoint_400_67() {
/*<167>*/ 	start()
/*<168>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Hemos llegado al <b<Templo del Tiempo>>.\n\n\n\nAhora es posible rastrear la ubicación\ndel umbral del juicio que conduce a la\nllama sagrada.")
/*<169>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_32() {
/*<238>*/ 	start()
/*<239>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Últimamente se ven por aquí unos\nmonstruos muy sospechosos...\nSi deciden atacarnos, será\nnuestro fin...")
/*<245>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_16() {
/*< 39>*/ 	start()
/*<  9>*/ 	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          	  case 0:
/*<308>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<309>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_12:
/*< 12>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¿Todavía andas por aquí? Te dije que\ntuvieras cuidado, ¡pero no tanto!")
          			  case 1:
/*<310>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¿Buscas a un dragón?\n\n\n\n<b<\x0E\x01\x09\x04\x1303\x00>>Si el que te interesa es el <b<dragón del\ntrueno>>, te diré que está al sur de las\n<b<cuevas de Lanayru>>. Es el único dragón\nque conozco.")
/*<341>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_12
          		}
          	  case 1:
/*<  5>*/ 		switch (story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */]) {
          		  case 0:
          			flw_10:
/*< 10>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Listo, ahora podrá <r<agarrar objetos con\nlas mandíbulas>>. No está nada mal, ¿eh?\n\n\nBueno, pues adiós y gracias. Y ve con\nmucho cuidado, este lugar está lleno\nde peligros.")
/*< 77>*/ 			scene_flags[7 'Lanayru Desert'][5 /* 0x1 20 */] = true;
/*<280>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          		  case 1:
/*<  6>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<274>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1303\x00¡Me has salvado!")
/*<275>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 276), ('param3', 47)])
/*<276>*/ 				set_camera(6, 0)
/*<278>*/ 				OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 27), ('param2', 356), ('next', 277), ('param3', 15)])
/*<277>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 279), ('param3', 17)])
/*<279>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 7), ('param3', 48)])
/*<  7>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1303\x00Un poco más y me dejan sin batería\npara siempre...\n\n\nPara darte las gracias,\x0E\x01\x04\x02\x1E voy a hacerle\nunos arreglos a ese <y<escarabajo>>\nque tienes.\n\n\x0E\x01\x09\x04\x1303\x00A ver, trae para acá...")
/*< 91>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 281), ('param3', 33)])
/*<281>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', 8), ('param3', 42)])
/*<  8>*/ 				give_item(75 0x4B);
/*< 11>*/ 				story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */] = true;
          				goto flw_10
          			  case 1:
/*<  4>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¡A... ayudaaa!\n")
/*< 76>*/ 				scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
/*<228>*/ 				scene_flags[7 'Lanayru Desert'][28 /* 0x2 10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_400_50() {
/*< 58>*/ 	start()
/*<142>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*< 59>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00\x0E\x01\x12\x04\x00\x0BAmo, aviso importante: hemos llegado\na las <b<minas de Lanayru>>.")
          }

          void entrypoint_400_68() {
/*<170>*/ 	start()
/*<172>*/ 	set_camera(-1, 0)
/*<171>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Felicidades, \x0E\x01\x12\x04\x00\x04amo Link.")
/*<173>*/ 	printf(/* textboxtype: 2, unk: 0 */ "El \x0E\x01\x12\x04\x00\x01amo ha superado el juicio.\nSu espíritu ha madurado y ahora puede\ndirigirse tras la llama que ha de\nfortalecer su espada.")
/*<175>*/ 	set_camera(3, 0)
/*<174>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Las <y<zarpas >>son una de las reliquias\nlegadas por la Diosa.\n\n\nAl lanzarlas, permiten desplazarse\nvolando hasta <r<dianas >>o <r<muros de\nhiedra>>.")
/*<177>*/ 	set_camera(-1, 0)
/*<176>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Confirmo que la llama está oculta\nen algún rincón de este desierto.\nUn lugar que mi \x0E\x01\x12\x04\x00\x01amo no ha pisado\ntodavía.")
          }

          void entrypoint_400_33() {
/*<240>*/ 	start()
/*<241>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_17() {
/*< 40>*/ 	start()
/*<125>*/ 	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          	  case 0:
/*<216>*/ 		switch (scene_flags[89 /* 0xA 02 */]) {
          		  case 0:
/*<218>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x16\x2007¡Ahora ya puedo entrar e investigar\nhasta hartarme! \x0E\x01\x09\x04\x00\x2000Y luego tengo que\nir sin falta a la tierra del presidio.")
          		  case 1:
/*<126>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\x1B09¿Pero qué...? ¿Cómo has conseguido\nentrar?\n\n\n\x0E\x01\x09\x04\x15\x1B00¡Así que había un pasadizo secreto!\nIncreíble... Por favor, ¡dime dónde\nestá!\n\n\x0E\x01\x09\x04\x08\x2100Ya estaba a punto de darme por\nvencido cuando de pronto se oyó\nese ruido... Y ahora veo el camino\nlibre.\n\x0E\x01\x09\x04\x16\x2007¡En fin, ya puedo entrar e investigar\nhasta hartarme! \x0E\x01\x09\x04\x00\x2000Y luego tengo que\nir sin falta a la tierra del presidio.")
/*<217>*/ 			scene_flags[7 'Lanayru Desert'][89 /* 0xA 02 */] = true;
          		}
          	  case 1:
/*<150>*/ 		switch (scene_flags[73 /* 0x8 02 */]) {
          		  case 0:
/*<152>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x16\x2007¡Sabe Goron que me muero por saber\nqué hay ahí dentro!... Ah, ¿no habrá\nningún otro camino por el que entrar?")
          		  case 1:
/*< 41>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02¡Otra vez nos encontramos!\nQuizá no deba decirlo, pero estás \nen todas partes, muchacho.\n\n\x0E\x01\x09\x04\x17\x2008Bah, ahora no es momento de hablar\nde eso... ¡He hecho el descubrimiento\ndel siglo!\n\n\x0E\x01\x09\x04\x00\x2000Este lugar es conocido como el <b<Templo\ndel Tiempo>>, un sitio de lo más sagrado\ny venerado.\n\n\x0E\x01\x09\x04\x00\x190A¡Y aquí me he topado con <r<dos nativas \nde la legendaria >><r<isla de la Diosa>>, nada\nmenos!\n\n\x0E\x01\x09\x04\x00\x1900Sus ropas eran idénticas a las que se\ndescriben en los antiguos manuscritos,\ny se parecían un poco a ti.\n\n\x0E\x01\x09\x04\x08\x2105Las vi pasar por esa misma puerta.\nTraté de seguirlas, pero... \n\n\n\x0E\x01\x09\x04\x15\x1B00De repente hubo una gran explosión\ny la puerta del templo quedó hecha\npedazos, como puedes ver.\n\n\x0E\x01\x09\x04\x16\x2007Ahora no hay forma de pasar al otro\nlado... ¡Por Goron, qué rabia!")
/*<151>*/ 			scene_flags[7 'Lanayru Desert'][73 /* 0x8 02 */] = true;
          		}
          	}
          }

          void entrypoint_400_51() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Confirmo que se ha producido un\ncambio en el equilibrio del\nespacio-tiempo en este lugar.\n\nGolpear la roca azul ha provocado\nun retroceso temporal que solo afecta\na la zona circundante, <pling>cuyo aspecto\nactual es <r<el que tenía en el pasado>>.")
          }

          void entrypoint_400_69() {
/*<207>*/ 	start()
/*<208>*/ 	printf(/* textboxtype: 8, unk: 0 */ "¡Tomemos más medidas para\nevitar accidentes laborales!\n- El capataz")
          }

          void entrypoint_400_34() {
/*<242>*/ 	start()
/*<243>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Si te interesan los cronolitos, deberías\nvisitar la <b<refinería de Lanayru >>algún\ndía.")
/*<246>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_52() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Confirmo la presencia de otras <b<fuentes\nde alimentación >>similares en las\ninmediaciones.\n\nEs posible usar el <pling><r<rastreador >>para\naveriguar su ubicación.")
/*<220>*/ 	story_flags[107 /* us: 805A9AE1 0x01, jp: 805ACD61 0x01 */] = true;
/*<291>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 3), ('next', 268), ('param3', 56)])
/*<268>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_400_35() {
/*<247>*/ 	start()
/*<248>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_19() {
/*< 42>*/ 	start()
/*<311>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<312>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_43:
/*< 43>*/ 			printf(/* textboxtype: 1, unk: 0 */ "...")
          		  case 1:
/*<344>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_43
          			  case 1:
/*<313>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 43), ('param3', 31)])
          				goto flw_43
          			}
          		}
          	  case 1:
          		goto flw_43
          	}
          }

          void entrypoint_400_53() {
/*< 92>*/ 	start()
/*<113>*/ 	story_flags[109 /* us: 805A9AE1 0x04, jp: 805ACD61 0x04 */] = true;
/*<114>*/ 	printf(/* textboxtype: 2, unk: 0 */ "")
/*<159>*/ 	set_camera(1, 0)
/*<160>*/ 	printf(/* textboxtype: 2, unk: 0 */ "")
/*<178>*/ 	set_camera(-1, 0)
/*<179>*/ 	printf(/* textboxtype: 2, unk: 0 */ "")
          }

          void entrypoint_400_70() {
/*<209>*/ 	start()
/*<210>*/ 	printf(/* textboxtype: 8, unk: 0 */ "Objetivo del mes:\n150 contenedores\n- El capataz")
          }

          void entrypoint_400_36() {
/*<249>*/ 	start()
/*<250>*/ 	printf(/* textboxtype: 1, unk: 0 */ "El mineral cronolítico es la fuente de\nenergía gracias a la cual funcionamos\nnosotros y todas estas máquinas.")
/*<259>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
/*< 72>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_54() {
/*<100>*/ 	start()
/*<205>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<206>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2F08\x709¡Oooh, Link!\n¡Has entrado en la morada\ndel dragón!\x0E\x01\x04\x02T\n\n\x0E\x01\x09\x04\x2F01\x805\x0E\x01\x08\x02\x2CDMmm, qué rabia...\x0E\x01\x04\x02Z\n\n\n\n\x0E\x01\x09\x04\x2F0F\x706\x0E\x01\x08\x02\x2CDTe me has adelantado...")
          		flw_149:
/*<149>*/ 		scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
          	  case 1:
/*<109>*/ 		switch (scene_flags[75 /* 0x8 08 */]) {
          		  case 0:
/*<111>*/ 			printf(/* textboxtype: 1, unk: 0 */ "He encontrado la senda que lleva a\nla morada del <r<\x0E\x01\x09\x04\x2F08\xD0Adragón del trueno>>.\nPero...\x0E\x01\x04\x02- \x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F0D\x800es demasiado estrecha y no\nquepo en ella.\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F08\x700Tanto esfuerzo para nada...")
          			goto flw_149
          		  case 1:
/*<112>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 105), ('param3', 31)])
/*<105>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<272>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2F08\xD02Vaya por Goron, ¡pero si es\nLink!")
/*<273>*/ 				set_camera(5, 0)
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Oye, ¿has encontrado ya la <b<llama\nsagrada>> de la que hablamos?\n\n\nNo me lo he podido quitar de la cabeza\ndesde que me hablaste de ello... Dime,\n¿qué ha pasado al final?\n\n\x0E\x01\x09\x04\x2F08\x407.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14 ¡Vaya! Después de tantas aventuras,\n¡al final has logrado encontrarla!\n\n\nEstá claro que eres alguien\nespecial, Link.")
/*<355>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2F08\xD0ABueno, ya es hora de que te cuente lo\nque he descubierto sobre la leyenda de\nlos tres dragones.~~~\n\n¡Hay muchos secretos escondidos bajo\nlas arenas de este desierto!\n\n\nComo por ejemplo ese <r<pasadizo tan\nestrecho>><pling> por el que no quepo.\n\n\n\x0E\x01\x09\x04\x2F00\xD00Sospecho que lleva hasta el lugar donde\nmora el <r<dragón del trueno>>.\n\n\n\x0E\x01\x09\x04\x2F00\x800Estoy seguro de que todo esto guarda\nrelación con esos robots que hay por\naquí.~~~\n\n\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDEl <r<dragón del trueno>>, robots,\ncronolitos\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CD\x0E\x01\x08\x02\x2CD¡Qué aventura!")
/*<107>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xD00Por cierto, Link, tengo\nnoticias sobre la excavación que me\nfinanciaste.\x0E\x01\x04\x02\x14\n\n¡He encontrado todo un yacimiento de\ncronolitos! Ahora \x0E\x01\x09\x04\x2F00\xD01puedo devolverte tu\ninversión multiplicada por diez.")
/*<106>*/ 				rupees += 100;
          				flw_282:
/*<282>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 110), ('param3', 42)])
/*<110>*/ 				scene_flags[7 'Lanayru Desert'][75 /* 0x8 08 */] = true;
/*<269>*/ 				story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
/*<357>*/ 				story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<358>*/ 				story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<359>*/ 				story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          				goto flw_149
          			  case 1:
/*<270>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2F08\xD02Vaya por Goron, ¡pero si es\nLink!")
/*<271>*/ 				set_camera(5, 0)
/*<211>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Oye, ¿has encontrado ya la <b<llama\nsagrada>> de la que hablamos?\n\n\nNo me lo he podido quitar de la cabeza\ndesde que me hablaste de ello... Dime,\n¿qué ha pasado al final?\n\n\x0E\x01\x09\x04\x2F08\x407.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14 ¡Vaya! Después de tantas aventuras,\n¡al final has logrado encontrarla!\n\n\nEstá claro que eres alguien\nespecial, Link.")
/*<356>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2F08\xD0ABueno, ya es hora de que te cuente lo\nque he descubierto sobre la leyenda de\nlos tres dragones.~~~\n\n¡Hay muchos secretos escondidos bajo\nlas arenas de este desierto!\n\n\nComo por ejemplo ese <r<pasadizo tan\nestrecho>><pling> por el que no quepo.\n\n\n\x0E\x01\x09\x04\x2F00\xD00Sospecho que lleva hasta el lugar donde\nmora el <r<dragón del trueno>>.\n\n\n\x0E\x01\x09\x04\x2F00\x800Estoy seguro de que todo esto guarda\nrelación con esos robots que hay por\naquí.~~~\n\n\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDEl <r<dragón del trueno>>, robots,\ncronolitos\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CD\x0E\x01\x08\x02\x2CD¡Qué aventura!")
          				goto flw_282
          			}
          		}
          	}
          }

          void entrypoint_400_71() {
/*<213>*/ 	start()
/*<214>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Informe para el \x0E\x01\x12\x04\x00\x0Bamo.")
/*<295>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 296), ('param3', 30)])
/*<296>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Detecto que las claves de esta fuente\nde alimentación coinciden con las\nobtenidas en las otras tres que\nhemos activado anteriormente.\nProbablemente guarden alguna\nrelación.")
/*<297>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 34)])
          }

          void entrypoint_400_37() {
/*<251>*/ 	start()
/*<252>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_03() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_20() {
/*< 44>*/ 	start()
/*< 63>*/ 	switch (scene_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<314>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<315>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_66:
/*< 66>*/ 				printf(/* textboxtype: 1, unk: 0 */ "No se cansa uno de mirar el Templo\ndel Tiempo... ¡Qué prodigio!")
          			  case 1:
/*<316>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¿Buscas a un dragón?\n\n\n\n<b<\x0E\x01\x09\x04\x1303\x00>>Si el que te interesa es el <b<dragón del\ntrueno>>, te diré que está al sur de las\n<b<cuevas de Lanayru>>. Es el único dragón\nque conozco.")
/*<343>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_66
          		}
          	  case 1:
/*< 94>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*< 96>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Ay, qué miedo he pasado!\nMenos mal que has venido a salvarme.")
/*< 93>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 45), ('param3', 33)])
/*< 45>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x900Este es el <b<Templo del Tiempo>>, el\nlugar donde está el sagrado <b<Portal\ndel Tiempo>>, construido por la Diosa.\n\n\x0E\x01\x09\x04\x03\x900Justo hoy me ha tocado el turno de\nlimpieza. Si quieres ir al Portal del\nTiempo, está detrás de esa puerta.\n\n\x0E\x01\x09\x04\x03\x900¿Cómo? ¿Preguntas si no hay\notro modo de llegar?\n\n\n\x0E\x01\x09\x04\x03\x900Bueno... la <b<refinería de Lanayru >>y el\n<b<Templo del Tiempo>> están <r<conectados\nbajo tierra>>. ¡Y la refinería está aquí!")
/*<202>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 98), ('param3', 33)])
/*< 98>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 215), ('param3', 30)])
/*<215>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 90), ('param3', 6)])
/*< 90>*/ 			scene_flags[7 'Lanayru Desert'][3 /* 0x1 08 */] = true;
/*< 99>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 97), ('param3', 6)])
/*< 97>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¿Eh? Este mapa es un poco raro...\nEspera, voy a corregirlo.")
/*< 64>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 3), ('next', 197), ('param3', 30)])
/*<197>*/ 			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 9), ('param2', 356), ('next', 67), ('param3', 15)])
/*< 67>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 200), ('param3', 34)])
/*<200>*/ 			set_camera(4, 0)
/*<199>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 65), ('param3', 17)])
/*< 65>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x900La refinería de Lanayru está justo\nahí delante. ¡Ve con cuidado!")
/*<203>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 68), ('param3', 33)])
/*< 68>*/ 			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 6), ('param2', 0), ('next', 89), ('param3', 14)])
/*< 89>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 101), ('param3', 17)])
/*<101>*/ 			story_flags[129 /* us: 805A9AED 0x40, jp: 805ACD6D 0x40 */] = true;
/*<196>*/ 			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
/*<198>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 201), ('param3', 17)])
/*<201>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 204), ('param3', 42)])
/*<204>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', -1), ('param3', 33)])
          		  case 1:
/*< 95>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Ayudaaa!")
/*<127>*/ 			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
          		}
          	}
          }

          void entrypoint_400_55() {
/*<102>*/ 	start()
/*<283>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x01Amo, aviso importante: ha dejado\nde percibirse la presencia de <b<Zelda>>.")
/*<284>*/ 	set_camera(7, 0)
/*<285>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Su rastro se ha perdido por completo al\ndestruirse el portal. Confirmo que en\nestos momentos <pling><r<no es posible rastrear\nsu paradero>>.")
/*<286>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf(/* textboxtype: 2, unk: 0 */ "La persona que acompañaba a Zelda\ninstaba al \x0E\x01\x12\x04\x00\x01amo a ir a la tierra del\npresidio y hablar con la anciana...\n\nSegún mis datos, la anciana sigue\nen el <b<templo del presidio>>, por lo que\nsugiero que nos dirijamos allí.")
/*<104>*/ 	scene_flags[7 'Lanayru Desert'][57 /* 0x6 02 */] = true;
/*<219>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = false;
/*<287>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_400_72() {
/*<221>*/ 	start()
/*<222>*/ 	printf(/* textboxtype: 8, unk: 0 */ "Turnos de limpieza en el\nTemplo del Tiempo este mes\n- El capataz")
          }

          void entrypoint_400_38() {
/*<253>*/ 	start()
/*<254>*/ 	printf(/* textboxtype: 1, unk: 0 */ "No es habitual ver humanos por aquí.\n¿Acaso te dedicas a estudiar los\ncronolitos?")
/*<260>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_04() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
/*< 73>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_21() {
/*< 46>*/ 	start()
/*<317>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<318>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_47:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0 */ "...")
          		  case 1:
/*<346>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_47
          			  case 1:
/*<319>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 47), ('param3', 31)])
          				goto flw_47
          			}
          		}
          	  case 1:
          		goto flw_47
          	}
          }

          void entrypoint_400_56() {
/*<128>*/ 	start()
/*<129>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
          }

          void entrypoint_400_73() {
/*<223>*/ 	start()
/*<224>*/ 	printf(/* textboxtype: 8, unk: 0 */ "¡Por un Lanayru más verde,\nplantemos más árboles!\n- El capataz")
          }

          void entrypoint_400_39() {
/*<255>*/ 	start()
/*<256>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_05() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
          }

          void entrypoint_400_22() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[103 /* 0xD 80 */]) {
          	  case 0:
/*< 79>*/ 		switch (scene_flags[30 /* 0x2 40 */]) {
          		  case 0:
/*<320>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<321>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_81:
/*< 81>*/ 					switch (scene_flags[8 /* 0x0 01 */]) {
          					  case 0:
/*< 83>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Esto es la <b<refinería de Lanayru>>, donde\nse procesa el mineral cronolítico.\n\n\n\x0E\x01\x09\x04\x1303\x00Ah, no se cansa uno de admirar este\nprodigio de la tecnología...")
          					  case 1:
/*< 82>*/ 						printf(/* textboxtype: 1, unk: 0 */ "¿Has logrado introducir las claves?\nVaya, impresionante.\n\n\n\x0E\x01\x09\x04\x1303\x00Bueno, pues esto es la <b<refinería de\nLanayru>>, donde se procesa el mineral\ncronolítico.\n\n\x0E\x01\x09\x04\x1303\x00¡No me canso de admirar esta maravilla\nde la tecnología!")
/*< 84>*/ 						scene_flags[7 'Lanayru Desert'][8 /* 0x0 01 */] = true;
          						flw_85:
/*< 85>*/ 						scene_flags[7 'Lanayru Desert'][35 /* 0x5 08 */] = true;
          					}
          				  case 1:
/*<322>*/ 					printf(/* textboxtype: 1, unk: 0 */ "¿Buscas a un dragón?\n\n\n\n<b<\x0E\x01\x09\x04\x1303\x00>>Si el que te interesa es el <b<dragón del\ntrueno>>, te diré que está al sur de las\n<b<cuevas de Lanayru>>. Es el único dragón\nque conozco.")
/*<345>*/ 					story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          				}
          			  case 1:
          				goto flw_81
          			}
          		  case 1:
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¿Ya tienes las tres claves?\nPero solo con tenerlas no basta para\nabrir la puerta de la refinería...")
          			goto flw_85
          		}
          	  case 1:
/*< 49>*/ 		printf(/* textboxtype: 1, unk: 0 */ "¿Quién eres?\n\n\n\n\x0E\x01\x09\x04\x1303\x00Esta es la fuente de alimentación\nde la entrada a la refinería de\nLanayru.\n\n<r<\x0E\x01\x09\x04\x1303\x00>>El mecanismo no se abre si no se \nintroducen antes las <r<tres claves\nde seguridad>>.")
/*< 86>*/ 		scene_flags[7 'Lanayru Desert'][34 /* 0x5 04 */] = true;
          	}
          }

          void entrypoint_400_57() {
/*<130>*/ 	start()
/*<131>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00El paso de los siglos las ha convertido\nen un lugar árido y seco.")
          }

          void entrypoint_400_74() {
/*<229>*/ 	start()
/*<230>*/ 	switch (scene_flags[11 /* 0x0 08 */]) {
          	  case 0:
          	  case 1:
/*< 62>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Calculo que han transcurrido varios\nsiglos desde que este artilugio funcionó\npor última vez. Me resulta imposible\ncomprender lo que está diciendo.")
/*<231>*/ 		scene_flags[7 'Lanayru Desert'][11 /* 0x0 08 */] = true;
          	}
          }

          void entrypoint_400_06() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
/*< 74>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_23() {
/*< 50>*/ 	start()
/*<323>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<324>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_51:
/*< 51>*/ 			printf(/* textboxtype: 1, unk: 0 */ "...")
          		  case 1:
/*<348>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_51
          			  case 1:
/*<325>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 51), ('param3', 31)])
          				goto flw_51
          			}
          		}
          	  case 1:
          		goto flw_51
          	}
          }

          void entrypoint_400_58() {
/*<132>*/ 	start()
/*<133>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00Según mis cálculos, es muy posible\nque <b<Zelda >>se haya adentrado en esta\nárea.")
/*<267>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<266>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_400_40() {
/*<257>*/ 	start()
/*<258>*/ 	printf(/* textboxtype: 1, unk: 0 */ "¡Han atacado a mi compañero hace\nun rato! Me temo lo peor... Lo van a\ndesguazar vivo...")
/*<261>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_75() {
/*<288>*/ 	start()
/*<289>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 2), ('next', 290), ('param3', 40)])
/*<290>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', -1), ('param3', 6)])
          }

          void entrypoint_400_07() {
/*< 21>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_24() {
/*< 52>*/ 	start()
/*<186>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<326>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<327>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_187:
/*<187>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¿Has logrado introducir las claves?\nVaya, impresionante...")
          			  case 1:
/*<328>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¿Buscas a un dragón?\n\n\n\n<b<\x0E\x01\x09\x04\x1303\x00>>Si el que te interesa es el <b<dragón del\ntrueno>>, te diré que está al sur de las\n<b<cuevas de Lanayru>>. Es el único dragón\nque conozco.")
/*<347>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_187
          		}
          	  case 1:
/*<115>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*<116>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Aaah! ¡¿Pero qué haces?!\n\n\n\n\x0E\x01\x09\x04\x1303\x00Que sepas que las claves por sí solas\nno sirven de nada. Solo con saberlas\nno basta para abrir la puerta a la\nrefinería.")
          			flw_155:
/*<155>*/ 			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
/*<157>*/ 			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
          		  case 1:
/*<180>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*< 53>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¿Estás buscando las claves para entrar\nen la refinería de Lanayru?\n\n\n\x0E\x01\x09\x04\x1303\x00No me gusta nada tu aspecto...\nNo pienso enseñarte las claves,\n¡no señor! \x0E\x01\x09\x04\x1303\x00Y que no te vea tocar\neste mecanismo de aquí. \n¡Y mucho menos pincharlo con ese\nespadón que llevas!")
          				goto flw_155
          			  case 1:
/*<181>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Tienes un aspecto muy raro...\nNo me fío nada de ti.\n\n\n\x0E\x01\x09\x04\x1303\x00Más te vale no tocar este mecanismo\nde aquí. ¡Y mucho menos pincharlo!")
          				goto flw_155
          			}
          		}
          	}
          }

          void entrypoint_400_59() {
/*<134>*/ 	start()
/*<143>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<135>*/ 	printf(/* textboxtype: 2, unk: 0 */ "<b<\x0E\x01\x05\x04Z\x00>>Hemos llegado al <b<desierto de Lanayru>>.\nLa topografía del lugar ha sufrido\ngrandes cambios a causa de la\ndesertización.")
          }

          void entrypoint_400_76() {
/*<292>*/ 	start()
/*<293>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Hemos llegado al <b<Templo del Tiempo>>.\n\n\n\nAhora es posible rastrear la ubicación\ndel umbral del juicio que conduce a la\nllama sagrada.")
/*<294>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_08() {
/*< 23>*/ 	start()
/*<225>*/ 	switch (scene_flags[29 /* 0x2 20 */]) {
          	  case 0:
/*<226>*/ 		printf(/* textboxtype: 1, unk: 0 */ "No toques las rocas azuladas.\n¡Son demasiado peligrosas!\n¡Y hazte a un lado, que estamos\ntrabajando!")
          	  case 1:
/*< 24>*/ 		printf(/* textboxtype: 1, unk: 0 */ "¿De dónde saliste tú? Estamos\ntransportando mineral cronolítico\na la <b<refinería de Lanayru>>.\n\n\x0E\x01\x09\x04\x1303\x00Será mejor que no toques esa\nroca azulada, ¡es muy peligrosa!")
/*<227>*/ 		scene_flags[7 'Lanayru Desert'][29 /* 0x2 20 */] = true;
/*< 75>*/ 		scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          	}
          }

          void entrypoint_400_25() {
/*< 54>*/ 	start()
/*<329>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<330>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_55:
/*< 55>*/ 			printf(/* textboxtype: 1, unk: 0 */ "...")
          		  case 1:
/*<350>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_55
          			  case 1:
/*<331>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 55), ('param3', 31)])
          				goto flw_55
          			}
          		}
          	  case 1:
          		goto flw_55
          	}
          }

          void entrypoint_400_77() {
/*<298>*/ 	start()
/*<299>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BAmo Link...\nConfirmo que ya hemos obtenido\nlas tres claves que necesitamos.\n\nSugiero que nos dirijamos a la <r<fuente\nde alimentación >>que hay a la entrada\nde la <b<refinería de Lanayru>>.")
          }

          void entrypoint_400_09() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_26() {
/*< 56>*/ 	start()
/*<188>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<332>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<333>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_189:
/*<189>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¿Has descubierto las claves?\n¿De verdad? Impresionante...")
          			  case 1:
/*<334>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¿Buscas a un dragón?\n\n\n\n<b<\x0E\x01\x09\x04\x1303\x00>>Si el que te interesa es el <b<dragón del\ntrueno>>, te diré que está al sur de las\n<b<cuevas de Lanayru>>. Es el único dragón\nque conozco.")
/*<349>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_189
          		}
          	  case 1:
/*<117>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
          		  case 0:
/*<118>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Aaaah! ¡¿Pero qué haces?!\n\n\n\n\x0E\x01\x09\x04\x1303\x00Que sepas que las claves por sí solas\nno sirven de nada. Solo con saberlas\nno basta para abrir la puerta a la\nrefinería.")
          			flw_153:
/*<153>*/ 			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
/*<158>*/ 			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
          		  case 1:
/*<182>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*< 57>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¿Estás buscando las claves para\nentrar en la refinería de Lanayru?\n\n\n\x0E\x01\x09\x04\x1303\x00No me gusta nada tu aspecto...\nNo pienso enseñarte las claves,\n¡no señor! \x0E\x01\x09\x04\x1303\x00Y que no te vea tocar\neste mecanismo de aquí. \n¡Y mucho menos pincharlo con ese\nespadón que llevas!")
          				goto flw_153
          			  case 1:
/*<183>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Vaya aspecto tienes...\nNo pareces muy de fiar.\n\n\n\x0E\x01\x09\x04\x1303\x00Ni se te ocurra tocar este mecanismo\nde aquí. ¡Y mucho menos pincharlo!")
          				goto flw_153
          			}
          		}
          	}
          }

          void entrypoint_400_60() {
/*<136>*/ 	start()
/*<137>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00Confirmo la presencia de <r<arenas\nmovedizas >>en la zona. La probabilidad\nde caer en ellas sin darse cuenta supera\nel 30%.")
          }

          void entrypoint_400_78() {
/*<300>*/ 	start()
/*<301>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BAmo Link, mi análisis\nindica que, para activar este\n<r<dispositivo>>, hará falta algún tipo\nde fuente de energía eléctrica.")
          }

          void entrypoint_400_27() {
/*<119>*/ 	start()
/*<335>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<336>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_120:
/*<120>*/ 			printf(/* textboxtype: 1, unk: 0 */ "...")
          		  case 1:
/*<352>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_120
          			  case 1:
/*<337>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 120), ('param3', 31)])
          				goto flw_120
          			}
          		}
          	  case 1:
          		goto flw_120
          	}
          }

          void entrypoint_400_61() {
/*<138>*/ 	start()
/*<139>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00Sugiero consultar el mapa con \x0E\x02\x04\x02\x3CD <r<<pling> para\ncomprobar el terreno >>y minimizar los\nriesgos\x0E\x01\x11\x02\x3CD.")
          }

          void entrypoint_400_79() {
/*<302>*/ 	start()
/*<303>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BAmo Link, dispongo de\ninformación importante.\n\n\nLa topografía de esta zona apenas\ncoincide en un 35% con la de nuestro\nmapa.\n\nConsidero que las correcciones hechas\npor el robot corresponden <r<al estado\nde la zona en el pasado>>. La <pling>arena se\nlo ha tragado todo.")
          }

          void entrypoint_400_10() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Esta vagoneta se usa para transportar\nel mineral cronolítico. No se te ocurra\nsubirte, ¿me oyes?")
/*< 69>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_28() {
/*<121>*/ 	start()
/*<190>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<338>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<339>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_191:
/*<191>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¡¿Has descubierto las claves?!\nEsto sí que no me lo esperaba...")
          			  case 1:
/*<340>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¿Buscas a un dragón?\n\n\n\n<b<\x0E\x01\x09\x04\x1303\x00>>Si el que te interesa es el <b<dragón del\ntrueno>>, te diré que está al sur de las\n<b<cuevas de Lanayru>>. Es el único dragón\nque conozco.")
/*<351>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_191
          		}
          	  case 1:
/*<123>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*<124>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Aaah! ¡¿Pero qué haces?!\n\n\n\n\x0E\x01\x09\x04\x1303\x00Que sepas que las claves por sí solas\nno sirven de nada. Solo con saberlas\nno basta para abrir la puerta a la\nrefinería.")
          			flw_154:
/*<154>*/ 			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
/*<156>*/ 			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
          		  case 1:
/*<184>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<122>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¿Estás buscando las claves para\nentrar en la refinería de Lanayru?\n\n\n\x0E\x01\x09\x04\x1303\x00No me gusta nada tu aspecto...\nNo pienso enseñarte las claves,\n¡no señor! \x0E\x01\x09\x04\x1303\x00Y que no te vea tocar\neste mecanismo de aquí. \n¡Y mucho menos pincharlo con ese\nespadón que llevas!")
          				goto flw_154
          			  case 1:
/*<185>*/ 				printf(/* textboxtype: 1, unk: 0 */ "No me gusta tu aspecto...\nNo pareces muy de fiar.\n\n\n\x0E\x01\x09\x04\x1303\x00Ni se te ocurra tocar este mecanismo\nde aquí. ¡Y mucho menos pincharlo!")
          				goto flw_154
          			}
          		}
          	}
          }

          void entrypoint_400_62() {
/*<140>*/ 	start()
/*<141>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x05\x04Z\x00Según mis cálculos, <b<Zelda >>ha debido de\nabandonar la zona hace poco. Además,\nconfirmo que nos movemos sobre un\nterreno peligroso.\nSugiero ir en su busca cuanto antes\npara averiguar el motivo de sus \nacciones en <b<\x0E\x01\x05\x04Z\x00Eldin>>.")
          }

          void entrypoint_400_11() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_63() {
/*<144>*/ 	start()
/*<145>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Informe para el \x0E\x01\x12\x04\x00\x0Bamo.\n\n\n\nEn el emplazamiento actual \x0E\x01\x12\x04\x00\x02ya no nos\nhundimos en las arenas movedizas.\nSugiero confirmar la posición en\nel mapa.")
/*<192>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 261), ('next', 193), ('param3', 30)])
/*<193>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Detecto que justo por este punto pasa\nuna antigua calzada, pero actualmente\nno se ve al estar oculta por la arena\ndel desierto.\nEs posible avanzar por este camino\nsin miedo a las arenas movedizas.\n\n\nSugiero marcar en el mapa el trazado\nde dicha calzada.")
/*<212>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Aconsejo colocar <b<bastantes>> <pling>balizas\npara distinguir el camino fácilmente.")
/*<195>*/ 	story_flags[745 /* us: 805A9B29 0x02, jp: 805ACDA9 0x02 */] = true;
/*<194>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 34)])
          }

          void entrypoint_400_29() {
/*<232>*/ 	start()
/*<233>*/ 	printf(/* textboxtype: 1, unk: 0 */ "...")
          }

          void entrypoint_400_80() {
/*<353>*/ 	start()
/*<354>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Tanto en el desierto de Lanayru como\nen otras zonas es posible encontrar,\nen ocasiones, <b<plantas rodadoras>>.\n\nSe trata de un material muy útil,\ny atraparlo no resultará nada\ncomplicado si se dispone de un\n<r<cazamariposas>>.")
          }

          void entrypoint_400_12() {
/*< 31>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 1, unk: 0 */ "¡No tengo ganas de charlar!\nEste es un trabajo muy duro.\nHaz el favor de no molestar.")
/*< 70>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_64() {
/*<146>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x2F0C\xD01\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x2F00\x01Vaya... Por Goron, ¡pero\nsi ese que va por ahí es\nLink!\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CDUn momento, ¡espera!~~~\nTengo que hablar contigo.~~~\n\n\n\x0E\x01\x06\x02\x2CD\x0E\x01\x08\x02\x1CDSube un momento, por favor.")
/*<148>*/ 	scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
/*<262>*/ 	story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
/*<263>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<264>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<265>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

