          void entrypoint_004_106() {
/*< 29>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Si logras sacar todas las rupias en\nel juego <b<Agujeros y rupias >>de Nabucco,\nte puedes llevar un premio de lo\nmás inusual... O eso dicen.")
          }

          void entrypoint_004_107() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 56>*/ 		printf(/* textboxtype: 1, unk: 1 */ "En las entrañas de este volcán, bajo\nla misma tierra que pisas, viven los\n<b<mogmas>>, unos tipos obsesionados\ncon los tesoros.\nAunque, según dicen, últimamente\nse lo están tomando con mucha\nmás calma.")
          	  case 1:
          		flw_59:
/*< 59>*/ 		printf(/* textboxtype: 1, unk: 1 */ "Según dicen, en la <r<cima >>de este volcán\ntiene su morada un <r<dragón>>.\n\n\nAunque me parece que no estamos\nprecisamente en la <r<cima>>...")
/*< 60>*/ 		printf(/* textboxtype: 1, unk: 1 */ "¿Quieres que te lo cuente otra vez?\n\n[1]Sí[2-]No")
/*< 62>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_59
          		  case 1:
/*< 61>*/ 			printf(/* textboxtype: 1, unk: 1 */ "¿Ah, no?~~~ Bueno, tú sabrás...")
          		}
          	}
          }

          void entrypoint_004_014() {
/*<  9>*/ 	start()
/*< 12>*/ 	switch (is_adventure_pouch_full()) {
          	  case 0:
/*< 13>*/ 		switch (is_item_check_full()) {
          		  case 0:
/*< 11>*/ 			printf(/* textboxtype: 5, unk: 1 */ "En la alforja no te cabe nada más y\nla <r<consigna >>también está llena.\n\n\nEl objeto tiene que quedarse en el cofre.")
          		  case 1:
/*< 10>*/ 			printf(/* textboxtype: 5, unk: 1 */ "¡La alforja está llena, así que te guardarán\neste objeto en la <r<consigna>>!")
          		}
          	  case 1:
          	}
          }

          void entrypoint_004_108() {
/*< 31>*/ 	start()
/*< 51>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 30>*/ 		printf(/* textboxtype: 1, unk: 0 */ "El <r<dragón>> que habita en la cima del\nvolcán habla hasta con las paredes.\n\n\nSe dice que puede pasarse horas\ncharlando de tierras lejanas y\nparajes exóticos.")
          	  case 1:
          		flw_52:
/*< 52>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Según dicen, en la cima de este volcán\nvive un <r<dragón >>envuelto en llamas.\n\n\nY vive en un <r<lugar tan abrasador\n>>que casi nadie puede acercarse.")
/*< 53>*/ 		printf(/* textboxtype: 1, unk: 1 */ "¿Quieres que te lo cuente otra vez?\n\n[1]Sí[2-]No")
/*< 55>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_52
          		  case 1:
/*< 54>*/ 			printf(/* textboxtype: 1, unk: 1 */ "¿Ah, no?~~~ Bueno, tú sabrás...")
          		}
          	}
          }

          void entrypoint_004_015() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 1, unk: 2 */ "¡Eh! ¡Link!\nNo estarás pensando en irte de aquí \nahora, ¿verdad? ¡Ja!\n\n¡Los hombres de verdad no dejan\nlas cosas a medias!")
          }

          void entrypoint_004_109() {
/*< 33>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Me han dicho que si logras una\npuntuación alta en <b<La vertiginosa\nmontaña rusa>>, te dan una <y<pieza\nde corazón>>.")
          }

          void entrypoint_004_016() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 9, unk: 1 */ "\x0E\x01\x0F\x00¿Hasta cuándo quieres dormir?\x0F\x01\x0F\n\n[1]Hasta la\nmañana[2]Hasta la\nnoche[3-]Mejor no")
/*< 50>*/ 	switch (choice(3)) {
          	  case 0:
          	  case 1:
          	  case 2:
          	}
          }

          void entrypoint_004_110() {
/*< 35>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Me he enterado de que un <r<dragón\n>>gigantesco, al que le gusta poner\na prueba a la gente, vive en algún\nrincón de este desierto.\nTambién me han dicho que si haces\nun buen papel en el desafío que te\npropone, el dragón te regala un\n<r<escudo increíblemente robusto>>.")
          }

          void entrypoint_004_017() {
/*< 65>*/ 	start()
/*< 66>*/ 	printf(/* textboxtype: 2, unk: 1 */ "¿Quiere mi \x0E\x01\x12\x04\x00\x01amo aterrizar aquí?\n[1]Sí[2-]No")
/*< 67>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_111() {
/*< 37>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Me han contado un truco buenísimo\npara cazar insectos. Consiste en\nacercarse a ellos sigilosamente\ncon un <r<cazamariposas grande>>.")
          }

          void entrypoint_004_018() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 2, unk: 1 */ "Aviso para mi \x0E\x01\x12\x04\x00\x0Bamo:\n\n\n\nDetecto que se están produciendo\n<r<alteraciones>> estructurales en el bosque\nde Farone. En este momento no es\nposible acceder a él.")
          }

          void entrypoint_004_001() {
          	start()
/*<  2>*/ 	printf(/* textboxtype: 9, unk: 0 */ "\x0E\x01\x0F\x00Está cerrada con <y<llave>>.\x0F\x01\x0F")
          }

          void entrypoint_004_112() {
/*< 39>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Según dicen, entre los tesoros sellados\nque se liberan cuando los <b<cubos divinos\n>>se elevan hacia el cielo, hay a veces\n<y<piezas de corazón>>.")
          }

          void entrypoint_004_019() {
/*< 70>*/ 	start()
/*< 71>*/ 	switch (story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */]) {
          	  case 0:
/*< 72>*/ 		printf(/* textboxtype: 2, unk: 1 */ "Para elegir el lugar en el que se desee\naterrizar, basta con apuntar al mismo\ncon \x0E\x02\x04\x02\x18CD y confirmar la elección con (A).")
          	  case 1:
/*< 73>*/ 		printf(/* textboxtype: 2, unk: 1 */ "Aviso para mi \x0E\x01\x12\x04\x00\x0Bamo:\n\n\n\nEs posible descender a las <pling>tierras\ninferiores por los lugares señalizados\nespecíficamente con una <b<estatua>>.\n\nBasta con apuntar con \x0E\x02\x04\x02\x18CD al lugar al\nque se quiera descender y confirmar\nla elección con (A).")
/*< 74>*/ 		story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */] = true;
          	}
          }

          void entrypoint_004_002() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 9, unk: 0 */ "\x0E\x01\x0F\x00El letrero está hecho pedazos,\nes imposible leer lo que dice.\x0F\x01\x0F")
          }

          void entrypoint_004_113() {
/*< 41>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Dicen que si dibujas dinero en los\nmuros misteriosos, puedes llevarte\nmuchas rupias fácilmente.")
          }

          void entrypoint_004_003() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 9, unk: 0 */ "\x0E\x01\x0F\x00Desde aquí es imposible leer\nlo que dice el letrero.\x0F\x01\x0F")
          }

          void entrypoint_004_114() {
/*< 43>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Dicen que de los champiñones\nchispeantes se obtienen unas <y<esporas\nchispeantes>> que tienen un curioso\nefecto sobre insectos y monstruos.")
          }

          void entrypoint_004_115() {
/*< 45>*/ 	start()
/*< 44>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Dicen que si dibujas un círculo en los\nmuros misteriosos, aparece algo\ncon forma circular.")
          }

          void entrypoint_004_004() {
/*< 46>*/ 	start()
/*< 47>*/ 	printf(/* textboxtype: 9, unk: 0 */ "\x0E\x01\x0F\x00La puerta está cerrada\na cal y canto.\x0F\x01\x0F")
          }

          void entrypoint_004_116() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Según dicen, si dibujas tres triángulos\nen los muros misteriosos, aparecerán\n<y<hadas>>.")
          }

          void entrypoint_004_117() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf(/* textboxtype: 1, unk: 1 */ "Según dicen, hay una <y<pieza de corazón>>\noculta en algún lugar por aquí cerca.")
/*< 77>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 78>*/ 		printf(/* textboxtype: 1, unk: 1 */ "Aunque me parece que tú ya la tienes...")
          	  case 1:
/*< 79>*/ 		printf(/* textboxtype: 1, unk: 1 */ "Pero parece ser que para llegar hasta\nese lugar hay que ser capaz de escarbar\ncomo un auténtico <b<mogma>>.")
          	}
          }

          void entrypoint_004_100() {
/*< 17>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 1, unk: 0 */ "¡Boooooing!")
          }

          void entrypoint_004_008() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 2, unk: 2 */ "¿Quiere el \x0E\x01\x12\x04\x00\x01amo salir de Hypnea?\n[1]Sí[2-]No")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_101() {
/*< 19>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Te puedes llevar un premio de gran\nvalor si consigues cortar el bambú\n<r<más de 28 veces >>en el juego\n<b<Mil pedazos de bambú>>.\nEl récord lo ostenta cierta persona\nque logró cortarlo en 43 trozos.\nO eso dice él...")
          }

          void entrypoint_004_102() {
/*< 21>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Puedes ganar insectos poco comunes\nsi completas el nivel experto de\n<b<Atrápame esos insectos >>en menos\nde <r<2 minutos>>.")
          }

          void entrypoint_004_103() {
/*< 23>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Las <r<mariposas>> sienten una especial\natracción por nosotras, las <b<piedras\nchismosas>>.\n\nSi tuviera que elegir un <r<sonido>> para\nexpresar mi júbilo al verlas reunidas\nen torno a mí, sería \"¡boooooing!\".")
          }

          void entrypoint_004_104() {
/*< 25>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Dicen que si dibujas una flecha\nen los muros misteriosos, aparece\nun objeto de forma similar.")
          }

          void entrypoint_004_105() {
/*< 27>*/ 	start()
/*< 42>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Según dicen, si dibujas la forma\ndel amor en los muros misteriosos\nuna sensación de bienestar te recorrerá\nel cuerpo.")
          }

