          void entrypoint_006_004() {
/*<  6>*/ 	start()
/*< 26>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 25>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 27>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 30>*/ 				printf(/* textboxtype: 2, unk: 0 */ "Felicito al \x0E\x01\x12\x04\x00\x02amo por haber conseguido\nlas tres estrofas del <b<Cantar del Héroe>>.\n\n\nSugiero regresar al interior del cúmulo\na visitar al gran <b<Narisha >>con el fin de\ncompletar el cantar.")
/*< 33>*/ 				story_flags[465 /* us: 805A9B0F 0x04, jp: 805ACD8F 0x04 */] = true;
          			  case 1:
/*< 29>*/ 				printf(/* textboxtype: 2, unk: 0 */ "Felicito al \x0E\x01\x12\x04\x00\x02amo por haber conseguido la\nsegunda estrofa del Cantar del Héroe.\nLa última que queda le aguarda en el\n<b<desierto de Lanayru>>.")
          			}
          		  case 1:
/*< 28>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 32>*/ 				printf(/* textboxtype: 2, unk: 0 */ "Felicito al \x0E\x01\x12\x04\x00\x02amo por haber conseguido la\nsegunda estrofa del Cantar del Héroe.\nLa última que queda le aguarda en el\n<b<bosque de Farone>>.")
          			  case 1:
/*< 31>*/ 				printf(/* textboxtype: 2, unk: 0 */ "El \x0E\x01\x12\x04\x00\x01amo ha aprendido una de las\nestrofas del <b<Cantar del Héroe>>.\n\n\nPara aprender las dos que faltan,\nrecomiendo visitar a los dragones\nde las otras dos regiones.")
          			}
          		}
          	  case 1:
/*< 34>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 41>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 43>*/ 				printf(/* textboxtype: 2, unk: 0 */ "Felicito al \x0E\x01\x12\x04\x00\x02amo por haber conseguido la\nsegunda estrofa del Cantar del Héroe.\nLa última que queda le aguarda en el\n<b<volcán de Eldin>>.")
          				flw_40:
/*< 40>*/ 				story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
          			  case 1:
/*< 35>*/ 				printf(/* textboxtype: 2, unk: 0 */ "El \x0E\x01\x12\x04\x00\x01amo ha aprendido una de las\nestrofas del <b<Cantar del Héroe>>.\n\n\nPara aprender las dos que faltan,\nrecomiendo visitar a los dragones\nde las otras dos regiones.")
          				goto flw_40
          			}
          		  case 1:
/*< 36>*/ 			printf(/* textboxtype: 2, unk: 0 */ "El \x0E\x01\x12\x04\x00\x01amo ha aprendido una de las\nestrofas del <b<Cantar del Héroe>>.\n\n\nPara aprender las dos que faltan,\nrecomiendo visitar a los dragones\nde las otras dos regiones.")
          			goto flw_40
          		}
          	}
          }

          void entrypoint_006_005() {
/*< 20>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Informo al \x0E\x01\x12\x04\x00\x0Bamo de que ha obtenido el\nmapa de este lugar. Para consultarlo,\nbasta con pulsar \x0E\x02\x04\x02\x3CD.\x0E\x01\x11\x02\x3CD\n\nEl mapa permite ver la ubicación y el\nestado de puertas, llaves, ~~~cofres de\ntesoros, etc.,~~~ así como la de ciertos\npuntos de interés marcados con \x0E\x02\x04\x02\x19CD.\nPero advierto al \x0E\x01\x12\x04\x00\x0Bamo de que <r<no es\nposible colocar balizas >>en espacios\ncerrados como este.")
/*< 22>*/ 	story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          }

          void entrypoint_006_006() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BAmo Link, detecto la\npresencia de un umbral del juicio\nen esta zona.\n\nSugiero emplear el <r<rastreador >>para\nlocalizar su ubicación exacta y usar la\nestrofa «<b<Valor de Farore>>» para abrir el\ncamino a seguir.")
/*< 42>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_006_007() {
/*< 37>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Aviso para el \x0E\x01\x12\x04\x00\x0Bamo: ha cesado la\nactividad volcánica. Ahora ya es\nposible volver a surcar los cielos.")
/*< 39>*/ 	entrypoint_006_04();
          }

          void entrypoint_006_008() {
/*< 45>*/ 	start()
/*< 47>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 3), ('next', 48), ('param3', 32)])
/*< 48>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 99), ('next', 49), ('param3', 16)])
/*< 49>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BAmo Link, detecto la\npresencia de un umbral del juicio\nen esta zona.\n\nSugiero emplear el <r<rastreador >>para\nlocalizar su ubicación exacta y usar la\nestrofa «<b<Valor de Farore>>» para abrir el\ncamino a seguir.")
/*< 52>*/ 	story_flags[121 /* us: 805A9AEA 0x40, jp: 805ACD6A 0x40 */] = true;
/*< 46>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*< 50>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 51), ('param3', 36)])
/*< 51>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 15), ('next', -1), ('param3', 42)])
          }

          void entrypoint_006_001() {
/*< 10>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Tras vencer en el torneo celeste, el\n\x0E\x01\x12\x04\x00\x02amo estaba dando un paseo con <b<Zelda\n>>cuando se topó con una tormenta que\nhizo que Zelda cayera nubes abajo.\nEl \x0E\x01\x12\x04\x00\x01amo tomó posesión de la <y<espada\ndivina >>y, gracias a la <y<litografía>>, erigió\nuna <r<columna de luz >>que conduce hasta\nlas tierras inferiores.")
          }

          void entrypoint_006_002() {
          	start()
/*< 44>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<  2>*/ 	switch (story_flags[93 /* us: 805A9AF1 0x04, jp: 805ACD71 0x04 */]) {
          	  case 0:
/*< 12>*/ 		switch (story_flags[97 /* us: 805A9AF1 0x40, jp: 805ACD71 0x40 */]) {
          		  case 0:
/*< 14>*/ 			switch (story_flags[98 /* us: 805A9AF1 0x80, jp: 805ACD71 0x80 */]) {
          			  case 0:
/*< 15>*/ 				printf(/* textboxtype: 2, unk: 0 */ "Al clavar la espada en el centro del\nremanso de paz se abrirá la puerta\nal último juicio del espíritu.")
/*< 19>*/ 				story_flags[99 /* us: 805A9AF0 0x01, jp: 805ACD70 0x01 */] = true;
          			  case 1:
/*< 13>*/ 				printf(/* textboxtype: 2, unk: 0 */ "Al clavar la espada en el centro del\nremanso de paz se abrirá la puerta\na un nuevo juicio del espíritu.")
/*< 18>*/ 				story_flags[98 /* us: 805A9AF1 0x80, jp: 805ACD71 0x80 */] = true;
          			}
          		  case 1:
/*< 11>*/ 			printf(/* textboxtype: 2, unk: 0 */ "Al clavar la espada en el centro del\nremanso de paz se abrirá la puerta\na un nuevo juicio del espíritu.")
/*< 17>*/ 			story_flags[97 /* us: 805A9AF1 0x40, jp: 805ACD71 0x40 */] = true;
          		}
          	  case 1:
/*<  1>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Confirmo la aparición de un remanso\nde paz como reacción a la estrofa que\nacaba de interpretar el \x0E\x01\x12\x04\x00\x01amo, «Valor de\nFarore».\nLas probabilidades de que se trate\ndel umbral del juicio anunciado por\nla efigie de la Diosa en la isla de los\ncantares son del 90%.\nSugiero al \x0E\x01\x12\x04\x00\x01amo que se posicione en\nel centro del remanso de paz y clave\nsu espada en la tierra.")
/*< 16>*/ 		story_flags[93 /* us: 805A9AF1 0x04, jp: 805ACD71 0x04 */] = true;
          	}
          }

          void entrypoint_006_003() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 2, unk: 0 */ "")
/*<  5>*/ 	story_flags[358 /* us: 805A9B00 0x10, jp: 805ACD80 0x10 */] = true;
/*<  7>*/ 	story_flags[570 /* us: 805A9B18 0x02, jp: 805ACD98 0x02 */] = true;
/*<  8>*/ 	story_flags[571 /* us: 805A9B18 0x04, jp: 805ACD98 0x04 */] = true;
          }

