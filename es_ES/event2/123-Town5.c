          void entrypoint_123_06() {
/*< 54>*/ 	start()
/*< 47>*/ 	switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          	  case 0:
/*< 48>*/ 		switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          		  case 0:
/*<266>*/ 			switch (story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */]) {
          			  case 0:
/*< 74>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*< 75>*/ 					switch (story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */]) {
          					  case 0:
/*< 77>*/ 						switch (story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */]) {
          						  case 0:
/*< 82>*/ 							switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          							  case 0:
/*< 83>*/ 								switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          								  case 0:
/*< 84>*/ 									switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          									  case 0:
/*< 87>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07¡Hola, guapetón!\n¡Aquí estoy para guardarte lo que tú\nquieras! ¡Pide por esa boquita!\n[1]Por favor[2-]No, gracias")
          										flw_273:
/*<273>*/ 										entrypoint_112_06();
          									  case 1:
/*< 86>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x08¡Hola, guapetón! ¡Bienvenido!\n\n\n\n¡Aquí me tienes, dispuesta a guardarte\nlo que tú quieras!\n\n[1]Por favor[2-]No, gracias")
/*< 90>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_273
          									}
          								  case 1:
/*< 85>*/ 									switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          									  case 0:
/*< 89>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0EHola, Link. Dime...\n¿Quieres dejar algo en la consigna de\nuna chica que ha superado un amargo\ndesengaño y está cada día más guapa?\n[1]Esto... sí[2-]No, gracias")
          										flw_272:
/*<272>*/ 										entrypoint_112_06();
          									  case 1:
/*< 88>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Ah, hola, Link.\n\n\n\nPerdona por lo de la otra noche, me\ncomporté como una idiota...\n\n\nAunque ya lo tengo superado, no te\npreocupes. He tenido que darle muchas\nvueltas, pero ya está: fin de la historia.\n\nAdemás... las chicas nos ponemos\nmás guapas cuando nos rompen\nel corazón, ¿no lo sabías?\n\nA partir de ahora me pienso volver\ncada día más hermosa. Voy a ser\nun auténtico bombón, ya lo verás.\n\nÁndate con ojo, no vayas a lamentar\nluego la decisión que has tomado...\n\n\nEn fin, todo aclarado, ya está.\nA ver, ¿por dónde íbamos?...\nAh, sí. ¿Quieres que te guarde algo?\n[1]Por favor[2-]No, gracias")
/*< 91>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_272
          									}
          								}
          							  case 1:
/*<435>*/ 								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 81), ('param3', 31)])
/*< 81>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05¡Hola, guapetón!\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Mmm... Eh... Verás...\n¿<r<P>><r<or qué no te pasas esta noche\npor mi casa>>? Tengo que hablar\ncontigo de algo importante.\n\x0E\x01\x09\x04\x08\xA00Vivo justo al lado del bazar, no tiene\npérdida. Vas a venir, ¿verdad que sí?\n¡Allí te espero!")
          								flw_79:
/*< 79>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Y, ya que estamos... \n¿Quieres dejar aquí algún objeto?\n\n[1]Por favor[2-]No, gracias")
/*< 80>*/ 								story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */] = true;
/*<271>*/ 								entrypoint_112_06();
          							}
          						  case 1:
/*<280>*/ 							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 78), ('param3', 31)])
/*< 78>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05¡Hola, guapetón!\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Mmm... Eh... Verás...\n¿<r<P>><r<or qué no te pasas esta noche\npor mi casa>>? Tengo que hablar\ncontigo de algo importante.\n\x0E\x01\x09\x04\x08\xA00Vivo justo al lado del bazar, no tiene\npérdida. Vas a venir, ¿verdad que sí?\n¡Allí te espero!")
          							goto flw_79
          						}
          					  case 1:
          						flw_267:
/*<267>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07¡Hola, <r<guapetón>>!\n¡Te estaba esperando, ji, ji, ji!\n¿Qué me trae mi chico hoy?\n\nYo a ti te guardo lo que me pidas...\n¡Cosas de la alforja, quiero decir!\n\n[1]Por favor[2-]No, gracias")
          						flw_270:
/*<270>*/ 						entrypoint_112_06();
          					}
          				  case 1:
          					goto flw_267
          				}
          			  case 1:
/*<256>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 20480), ('next', 61), ('param3', 13)])
/*< 61>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x08¡Oh!...")
/*< 63>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA00¡Has... has venido a verme! No sabes\nlo mucho que significa para mí...\n\n[1]Ejem...[2]¡Cómo no!")
/*< 62>*/ 				switch (choice(2)) {
          				  case 0:
/*< 64>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\xF0A¡No me mires así que me voy a poner\ncolorada, <r<guapetón>>!")
          					flw_66:
/*< 66>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\xA00Últimamente no dejo de pensar en ti...\n¡Ando todo el día como embobada,\nel corazón me va a mil por hora y\nme dan hasta sofocos!\n¿Crees que...? ¿Dirías que esto es...?\n\n[1]Una gripe,\nseguro[2]Amor")
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 67>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\x120EVeo que hoy nos hemos levantado\nchistosillos, ¿eh? Ya te vale, guapetón.")
          						flw_70:
/*< 70>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\xA00¡Uy, que se me va la cabeza!...\nVenga, venga, ¡a trabajar!\n\n\n\x0E\x01\x09\x04\x0E\x1000A ver... ¿Qué te iba a decir yo?\nYa, sí... Iba a preguntarte si querrías\nentregarme algo tuyo y solo tuyo.\n[1]Por favor[2-]Mmm...")
/*< 71>*/ 						switch (choice(2)) {
          						  case 0:
/*< 73>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\x100F¿De verdad?\n¡Qué alegría me acabas de dar!...")
          							flw_72:
/*< 72>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\xF0A¡Ay! ¡Lo siento! Anda que yo también...\n¡Qué manera de decir las cosas! Si te\ndescuidas, el día menos pensado me\npongo a contarte intimidades y todo...\n\x0E\x01\x09\x04\x08\xA00¡Tengo que aprender a cerrar la boca!\nLo que quería decir es... nada, que si\nquieres que te guarde algo, <r<guapetón>>.\n[1]Por favor[2-]No, gracias")
/*<257>*/ 							story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */] = true;
          							goto flw_270
          						  case 1:
          							goto flw_72
          						}
          					  case 1:
/*< 69>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\xF0D¡Ay! ¡Lo has dicho! ¡La palabra mágica!\nPero no lo grites a los cuatro vientos...\n¡Que me da mucho corte!...")
          						goto flw_70
          					}
          				  case 1:
/*< 65>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\xF0AMe haces tan feliz...\n¡que mi corazón va a explotar!")
          					goto flw_66
          				}
          			}
          		  case 1:
/*<264>*/ 			switch (story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */]) {
          			  case 0:
/*<265>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Hola, me alegro de verte otra vez\npor aquí. Ya sabes que guardamos\na buen recaudo todo tipo de cosas.\n\nDime, ¿quieres dejar algún objeto\nde tu alforja?\n[1]Por favor[2-]No, gracias")
          				flw_60:
/*< 60>*/ 				entrypoint_112_06();
          			  case 1:
/*< 55>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Hola.\nBienvenido a la consigna...\x0E\x01\x09\x04\x00\x05\n¡Oh!...")
/*<279>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 57), ('param3', 6)])
/*< 57>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Esto... eh...\nBien... bienvenido...\n\n[1]¿Qué te\npasa?[2]Te veo\ndistinta")
/*< 56>*/ 				switch (choice(2)) {
          				  case 0:
/*< 58>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\xF18Mmm... No... No pasa nada.")
          					flw_76:
/*< 76>*/ 					printf(/* textboxtype: 1, unk: 0 */ "No... no te equivoques, no tiene nada\nque ver con que me alegre de verte\nni nada...\n\nPero, si te paras a pensarlo, nos vemos\ncasi a diario... Es evidente que nuestra\nrelación no es solo de dependienta\ny cliente...\n\x0E\x01\x09\x04\x10\x1405Ay, no, bueno... No... no quería...\nNo me hagas caso, ¡qué cosas tengo!\n\n\nDisculpa... Olvida todo lo que acabo\nde decir, por favor, ¿vale?\n\n\n\x0E\x01\x09\x04\x07\x800Bu... bueno, a ver si me centro un poco,\nque se supone que estoy trabajando.\n¿Querías guardar o sacar algo?\n[1]Por favor[2-]No, gracias")
/*<269>*/ 					story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */] = true;
          					goto flw_60
          				  case 1:
/*< 59>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\xF18¿Eh? Qué... qué va, hombre...\nSerán imaginaciones tuyas...")
          					goto flw_76
          				}
          			}
          		}
          	  case 1:
/*<261>*/ 		switch (story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */]) {
          		  case 0:
/*<262>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Bienvenido a la consigna...\nVaya, otra vez por aquí...\nVoy a empezar a pensar mal, chico.\n\nEn fin, ¿qué se te ofrece?...\n¿Quieres dejar algo aquí?\n\n[1]Por favor[2-]No, gracias")
          			flw_263:
/*<263>*/ 			entrypoint_112_06();
          		  case 1:
/*< 50>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hola, bienvenido a la consigna.\nAh, eres tú otra vez...\n\n\nVienes mucho por aquí, ¿no?\n¡Últimamente eres mi mejor cliente!\n\n\n\n\x0E\x01\x09\x04\x00\x04Oye, espera un momento...\n\n\nNo... ¿no estarás...?\n\n\n\nNo me digas que vienes solo para verme\na mí, ¿verdad?\n[1]Para nada[2]Pues... sí")
/*< 49>*/ 			switch (choice(2)) {
          			  case 0:
/*< 51>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Ah... Vale, vale...\n\n\n\nQué... qué tontería, ¿verdad?\nNo sé ni por qué lo he dicho...\n¡Ahora pensarás que soy una creída!\n\n\x0E\x01\x09\x04\n\xC00No creas que me importa que no vengas\na verme a mí, claro que no...")
          				flw_53:
/*< 53>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x800Bueno, a ver si me centro un poco,\nque hay tarea por hacer...\nDime, ¿querías guardar o sacar algo?\n[1]Por favor[2-]No, gracias")
/*<268>*/ 				story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */] = true;
          				goto flw_263
          			  case 1:
/*< 52>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02¡¿Eh?! ¡¿En serio?!\n\n\n\n¡Anda ya, vete por ahí! ¡No te creas\nque a mí se me puede camelar con\npiropos baratos!...\n\n\x0E\x01\x09\x04\n\xC00Aunque... igual sí, no sé...\nA una también le gusta que le digan\ncosas bonitas de vez en cuando... \n")
          				goto flw_53
          			}
          		}
          	}
          }

          void entrypoint_123_07() {
/*< 93>*/ 	start()
/*< 92>*/ 	switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          	  case 0:
/*< 94>*/ 		switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          		  case 0:
/*< 95>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 96>*/ 				switch (story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */]) {
          				  case 0:
/*< 97>*/ 					switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          					  case 0:
/*< 98>*/ 						switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          						  case 0:
/*<105>*/ 							switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          							  case 0:
/*<106>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Me hace muy feliz que al final hayas\nlogrado ser sincero conmigo, en serio. \n¡Nos vemos luego en la consigna,\nguapetón!")
          							  case 1:
/*<109>*/ 								printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x0D¡Cariño! ¡Te dije que teníamos que\nmantener nuestra relación en\nsecreto! ¡No vengas tanto por aquí\nque al final mi padre se va a enterar!\nA ver, ¿qué quieres a estas horas?\n\n[1]Hablar\nun poco[2]Nada en\nespecial[3]Dejar\ncosas")
/*<110>*/ 								switch (choice(3)) {
          								  case 0:
/*<111>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x08Sí, yo también tengo un montón\nde cosas que quiero decirte, pero mi\npadre no nos quita el ojo de encima...\n¡Ya hablaremos en otro momento!")
          								  case 1:
/*<112>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA00¡No hace falta que te hagas siempre\nel duro, tesoro! Conmigo no tienes\npor qué aparentar nada... ¡Si a mí\nme gustas igualmente!")
          								  case 2:
/*<113>*/ 									printf(/* textboxtype: 1, unk: 0 */ "Pero cielo, para esas cosas tienes\nque venir a verme a la consigna,\ncuando sea de día... \n\n\x0E\x01\x09\x04\x0E\x1000¿O me estás tratando de decir\nque eso es lo que soy yo para ti?\n¿La chica de la consigna?")
          								}
          							}
          						  case 1:
/*<104>*/ 							switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          							  case 0:
/*<107>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x14Soy fuerte, pronto te habré olvidado.\nY ahora vete, déjame sola.\n")
          							  case 1:
/*<108>*/ 								switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          								  case 0:
/*<115>*/ 									switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          									  case 0:
/*<117>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x13No sé por qué será, pero últimamente\nmi padre está de muy buen humor...\n\n\n¿No se da cuenta de que su hija está\nsufriendo porque le han partido\nel corazón? Vaya un padre...")
          									  case 1:
/*<116>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x14Ya sé que lo tengo superado, pero...\nA veces, por las noches, la tristeza\nme ahoga. Supongo que un corazón\nroto tarda su tiempo en curarse.")
          									}
          								  case 1:
/*<114>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0EAy, Link...\nQuién me iba a decir a mí que duele\ntanto cuando te rompen el corazón...\x0E\x01\x09\x04\x00\x14")
          								}
          							}
          						}
          					  case 1:
/*<103>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 224), ('param3', 31)])
/*<224>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 225), ('param3', 47)])
/*<225>*/ 						OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 356), ('next', 230), ('param3', 15)])
/*<230>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 226), ('param3', 6)])
/*<226>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 227), ('param3', 17)])
/*<227>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 3840), ('next', 229), ('param3', 13)])
/*<229>*/ 						set_camera(12, 0)
/*<228>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 223), ('param3', 48)])
/*<223>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Link...\nHas venido a verme... Gracias.\n\n\n\x0E\x01\x09\x04\x0E\xF00La verdad es que hay una cosa\nque me muero por preguntarte.\n\n\nTú eres una persona de mente abierta,\n¿verdad? Creo que puedo ser sincera\ncontigo. Verás, te lo diré sin rodeos...")
/*<222>*/ 						set_camera(11, 0)
/*<297>*/ 						printf(/* textboxtype: 1, unk: 0 */ "¿Qué significo yo para ti?\n\n[1]Me gustas[2]Guardas\nmis cosas")
/*<296>*/ 						switch (choice(2)) {
          						  case 0:
/*<299>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\x100F¿En serio? ¡¿De verdad?!\n¡¿No me estarás mintiendo?!\n\n[1]En serio[2]Era broma")
/*<300>*/ 							switch (choice(2)) {
          							  case 0:
          								flw_302:
/*<302>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA08¡Ay, qué feliz me haces, cariño!\nPero me sigue pareciendo un sueño...\n¡Dímelo otra vez para que me lo crea!\n\n\x0E\x01\x09\x04\x0E\x1000¿De verdad, de verdad, de verdad\nque te gusto? ¿De verdad de la buena?\n\n[1]Que sí[2]La verdad\nes que no")
/*<304>*/ 								switch (choice(2)) {
          								  case 0:
/*<305>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\xF0ANo me estarás mintiendo, ¿verdad?\n¡No sé de qué locura sería capaz\nsi descubro que me mientes!\n[1]Que no,\nmujer[2]Sí, miento")
/*<312>*/ 									switch (choice(2)) {
          									  case 0:
          										flw_309:
/*<309>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA09¡Ay, qué alegría más grande!...\n¡Cómo te quiero, guapetón mío!\n¡Perdona por haber desconfiado de ti!")
/*<318>*/ 										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 317), ('param3', 6)])
/*<317>*/ 										set_camera(12, 0)
/*<321>*/ 										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 320), ('param3', 6)])
/*<320>*/ 										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 3840), ('next', 319), ('param3', 13)])
/*<319>*/ 										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 314), ('param3', 6)])
/*<314>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x13No te preocupes, lo entiendo. No pasa\nnada, en serio.\n\n\nTienes cosas mucho más importantes\nen las que pensar ahora mismo, lo sé.\n\n\n\x0E\x01\x09\x04\x0E\x1000Tienes por delante una complicada\nmisión, ¿verdad que sí?\n\n\n\x0E\x01\x09\x04\x0D\xF00Lo sé porque vienes mucho a mi tienda\na dejar cosas, y suelen ser siempre\npertrechos de batalla.\n\nPor eso, a partir de ahora no pienso\nvolver a molestarte. Descuida. Seré\nla dependienta de la consigna y\ncuidaré de tus cosas, nada más.\n\x0E\x01\x09\x04\x0E\x1000Y cuando hayas acabado con lo que\nestás haciendo, iremos los dos\na hablar con mi padre.\n\n\x0E\x01\x09\x04\x0B\xD00¡Hasta entonces, mantendremos\nlo nuestro en secreto! ¡Ya nos\nveremos por la consigna, ji, ji, ji!")
/*<316>*/ 										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 315), ('param3', 43)])
/*<315>*/ 										story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */] = true;
          										flw_333:
/*<333>*/ 										story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */] = true;
/*<334>*/ 										loadzone_temp_flags[0 /* 0x1 01 */] = true;
/*<335>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          									  case 1:
          										flw_310:
/*<310>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\x1214Entiendo...\nSi eso es lo que piensas...\n\n\nSiento haberte hecho perder el tiempo\ncon todo esto.")
/*<329>*/ 										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 328), ('param3', 6)])
/*<328>*/ 										set_camera(12, 0)
/*<331>*/ 										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 3840), ('next', 330), ('param3', 13)])
/*<330>*/ 										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 332), ('param3', 6)])
/*<332>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x13No, por favor...\nNo necesito tu compasión.\n\n\nEstoy bien. Soy más fuerte de lo que\ncrees. No tardaré mucho en olvidarte\ny superar todo esto...\n\n\x0E\x01\x09\x04\x14\xD00La próxima vez que nos veamos,\nte recibiré como a cualquier otro\ncliente...")
/*<323>*/ 										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 324), ('param3', 32)])
/*<324>*/ 										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 322), ('param3', 6)])
/*<322>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 101), ('next', 325), ('param3', 17)])
/*<325>*/ 										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 5120), ('next', 326), ('param3', 13)])
/*<326>*/ 										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 327), ('param3', 6)])
/*<327>*/ 										printf(/* textboxtype: 1, unk: 0 */ "Pero esta noche quiero estar sola.\n\n\n\nAdiós... guapetón.")
          										goto flw_333
          									}
          								  case 1:
          									flw_307:
/*<307>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\x120APe... pero...\n\n\n\n\x0E\x01\x09\x04\x0E\x1000¿No te gusto y para ti soy solo una\nsimple dependienta? ¿En serio?\n¿Es eso lo que sientes?\n[1]Sí que me\ngustas[2]Exacto")
/*<311>*/ 									switch (choice(2)) {
          									  case 0:
          										goto flw_309
          									  case 1:
          										goto flw_310
          									}
          								}
          							  case 1:
          								flw_303:
/*<303>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\x120F¿En serio? ¿Entonces no significo nada\npara ti? Mmm...\n\n\n\x0E\x01\x09\x04\x0E\x1000¡Ah! ¡Ya sé lo que pasa aquí!\n\n\n\nTe estás haciendo el duro para ocultar\ntus verdaderos sentimientos, ¿a que sí?\n\n[1]Me has\ncalado[2]Qué va")
/*<306>*/ 								switch (choice(2)) {
          								  case 0:
/*<308>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA08¡Ay!... Pe... pero... ¿Entonces te gusto\no no te gusto? ¡Aclárate de una vez!\n[1]Sí me\ngustas[2]No me\ngustas")
/*<313>*/ 									switch (choice(2)) {
          									  case 0:
          										goto flw_309
          									  case 1:
          										goto flw_310
          									}
          								  case 1:
          									goto flw_307
          								}
          							}
          						  case 1:
/*<298>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\x1210¿Y eso?...\n¿Pe... pero, entonces...?\n\n\n\x0E\x01\x09\x04\x0D\xF00A lo mejor es que no he formulado\nbien la pregunta...\n\n\n\x0E\x01\x09\x04\x0E\x1000A ver, cómo lo digo... Veamos,\n¿qué soy yo para ti?\n\n[1]Mi\namorcito[2]La de la\nconsigna")
/*<301>*/ 							switch (choice(2)) {
          							  case 0:
          								goto flw_302
          							  case 1:
          								goto flw_303
          							}
          						}
          					}
          				  case 1:
/*<102>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Hola, <r<guapetón>>. Estás en tu casa...\n\n\n\n¡Ay! ¡Me hace tan feliz que hayas\nvenido a verme!...")
          				}
          			  case 1:
/*<101>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x15¡Ah, hola!\nVeo que te has decidido a venir a\nverme a casa...\n\nNo estarás intentando decirme\nque soy alguien especial para\nti, ¿verdad?...")
          			}
          		  case 1:
/*<100>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x17Me da igual que tengas muchas ganas\nde verme, rico, en mi casa no pienso\nponerme a entretener a los clientes...\n¡Lo que me faltaba!\n\x0E\x01\x09\x04\x01\x800Igual estoy siendo un poco dura, pero...")
          		}
          	  case 1:
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Aaah... ¿Habrá algún hombre ahí\nfuera capaz de hacerme sentir que\nestoy viva? \n\nCómo me gustaría encontrar a alguien\ndel que poder enamorarme... ¡Ay!...\n\n\n\x0E\x01\x09\x04\x01\x800Oye, tú, chato...\n¿Quién te ha dicho a ti que puedes\nentrar en mi cuarto así por la cara?")
          	}
          }

          void entrypoint_123_08() {
/*<184>*/ 	start()
/*<188>*/ 	switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
          	  case 0:
/*<189>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xD02¡Muchas gracias, Link!\n\n\n\n\x0E\x01\x09\x04\n\x900La casa vuelve a estar como los chorros\ndel oro. ¡Da gusto estar aquí con todo\ntan limpito, oye!")
/*<195>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 190), ('param3', 33)])
          		flw_190:
/*<190>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x909Toma, te lo has ganado.\nAquí tienes, ¡<r<20 rupias>>, todas para ti!\x0E\x01\x09\x04\n\xD00")
/*<191>*/ 		give_item(4 0x04);
/*<428>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 192), ('param3', 12)])
/*<192>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x900Si la casa vuelve a ensuciarse puede\nque vuelva a requerir tus servicios...\n¡Pagando, claro!")
/*<430>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 429), ('param3', 12)])
/*<429>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\x900Ah, y una cosa más.\n¡No se lo digas a Coocker!\n\n\n\x0E\x01\x09\x04\x08\x900Se pondría hecho una furia si se\nentera de que malgasto el dinero en\nuna cosa así... Así que la boquita\ncerrada, ¿vale?")
/*<193>*/ 		story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */] = true;
/*<194>*/ 		loadzone_temp_flags[0 /* 0x1 01 */] = false;
/*<196>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
/*<199>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          	  case 1:
/*<185>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xD02¡Muchas gracias, Link!\n\n\n\n\x0E\x01\x09\x04\n\x900La casa vuelve a estar como los chorros\ndel oro. ¡Da gusto estar aquí con todo\ntan limpito, oye!")
/*<187>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 186), ('param3', 33)])
/*<186>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 198), ('param3', 43)])
/*<198>*/ 		story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */] = true;
/*<197>*/ 		story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = true;
          		goto flw_190
          	}
          }

          void entrypoint_123_09() {
/*<208>*/ 	start()
/*<201>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02¡Eres un encanto, Link!\nTe pagaré cuando hayas quitado\ntodo el polvo. Avísame, ¿vale?\n\n\x0E\x01\x09\x04\x01\x900¿O ya has terminado por hoy?\n\n[1]Va a ser\nque sí[2-]¡Sigo!")
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
/*<204>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nAnda, qué lástima...\nBueno, no pasa nada. Avísame si puedes\nvenir a ayudarme otra vez, ¿vale?")
/*<205>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 206), ('param3', 33)])
/*<206>*/ 		loadzone_temp_flags[0 /* 0x1 01 */] = false;
/*<207>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          	  case 1:
/*<203>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\x900Muy bien. Sigue así, que lo haces de\nmaravilla. Como verás, el <r<suelo >>está\ntotalmente cubierto de polvo...\n\nPero también las <r<ventanas>>, las\n<r<estanterías >>y las <r<camas>>, así que\nrepásalo todo muy bien y duro\ncon él.")
          	}
          }

          void entrypoint_123_10() {
/*<132>*/ 	start()
/*<437>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 139), ('param3', 17)])
/*<139>*/ 	set_camera(4, 0)
          	flw_219:
/*<219>*/ 	switch (loadzone_temp_flags[8 /* 0x0 01 */]) {
          	  case 0:
/*<220>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Espera, Link...\nTengo que darte la propina que te\nprometí. Pásate a por ella, anda.")
          	  case 1:
/*<133>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Ah, Link.\nVeo que no has terminado todavía.\n\n\n¿Quieres dejarlo por hoy?\n\n[1]Va a ser\nque sí[2-]¡Sigo!")
/*<134>*/ 		switch (choice(2)) {
          		  case 0:
/*<136>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nAnda, qué lástima...\nBueno, no pasa nada. Avísame si puedes\nvenir a ayudarme otra vez, ¿vale?")
/*<294>*/ 			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 356), ('next', 137), ('param3', 15)])
/*<137>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 138), ('param3', 33)])
/*<138>*/ 			loadzone_temp_flags[0 /* 0x1 01 */] = false;
/*<150>*/ 			story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          			flw_140:
/*<140>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          		  case 1:
/*<135>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\x900Muy bien. Sigue así, que lo haces de\nmaravilla. Como verás, el <r<suelo >>está\ntotalmente cubierto de polvo...\n\nPero también las <r<ventanas>>, las\n<r<estanterías >>y las <r<camas>>, así que\nrepásalo todo muy bien y duro\ncon él.")
/*<165>*/ 			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 356), ('next', 140), ('param3', 15)])
          			goto flw_140
          		}
          	}
          }

          void entrypoint_123_11() {
/*<141>*/ 	start()
/*<436>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 147), ('param3', 17)])
/*<147>*/ 	set_camera(4, 0)
/*<142>*/ 	switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          	  case 0:
          		flw_164:
/*<164>*/ 		switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
          			goto flw_219
          		  case 1:
/*<145>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Ah, Link.\n¿Ya te vas?\n\n\nSi ves a Coocker haciendo la ronda\npor ahí, dale un poco de conversación,\n¿quieres?")
/*<146>*/ 			loadzone_temp_flags[2 /* 0x1 04 */] = true;
/*<163>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          		}
          	  case 1:
/*<143>*/ 		switch (story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */]) {
          		  case 0:
/*<144>*/ 			story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = false;
          			goto flw_164
          		  case 1:
          			goto flw_164
          		}
          	}
          }

          void entrypoint_123_12() {
/*<214>*/ 	start()
/*<274>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 215), ('param3', 6)])
/*<215>*/ 	set_camera(10, 0)
/*<216>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xD08¡Válgame...! ¡Pero si no has dejado ni\nuna mota de polvo!... Muchas gracias,\nLink.\n\n\x0E\x01\x09\x04\n\x900¡Me has alegrado el día! Ven, que voy\na pagarte lo que te debo.")
/*<217>*/ 	loadzone_temp_flags[9 /* 0x0 02 */] = false;
/*<221>*/ 	loadzone_temp_flags[8 /* 0x0 01 */] = true;
/*<218>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_123_13() {
/*<399>*/ 	start()
/*<381>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1F0A\x309¡Te exijo que me pagues <r<30 rupias\n>>como compensación, niño!\nEran piezas de gran valor...\n¡Y no creas que te trato de timar!")
/*<382>*/ 	switch (random(4)) {
          	  case 0:
/*<383>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 24), ('next', 384), ('param3', 23)])
/*<384>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 174)])) {
          		  case 0:
          			flw_385:
/*<385>*/ 			rupees += -24;
          			flw_400:
/*<400>*/ 			entrypoint_123_14();
          		  case 1:
/*<386>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<406>*/ 			loadzone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_385
          		}
          	  case 1:
/*<387>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 26), ('next', 388), ('param3', 23)])
/*<388>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 176)])) {
          		  case 0:
          			flw_389:
/*<389>*/ 			rupees += -26;
          			goto flw_400
          		  case 1:
/*<390>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<407>*/ 			loadzone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_389
          		}
          	  case 2:
/*<391>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 29), ('next', 392), ('param3', 23)])
/*<392>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 178)])) {
          		  case 0:
          			flw_393:
/*<393>*/ 			rupees += -29;
          			goto flw_400
          		  case 1:
/*<394>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<408>*/ 			loadzone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_393
          		}
          	  case 3:
/*<395>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 38), ('next', 396), ('param3', 23)])
/*<396>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 180)])) {
          		  case 0:
          			flw_397:
/*<397>*/ 			rupees += -38;
          			goto flw_400
          		  case 1:
/*<398>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<409>*/ 			loadzone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_397
          		}
          	}
          }

          void entrypoint_123_14() {
/*<337>*/ 	start()
          	flw_246:
/*<246>*/ 	loadzone_temp_flags[1 /* 0x1 02 */] = false;
/*<247>*/ 	switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
          		flw_248:
/*<248>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          	  case 1:
/*<245>*/ 		loadzone_temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_248
          	}
          }

          void entrypoint_123_15() {
/*<360>*/ 	start()
/*<359>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1F0A\x309¡Me debes <r<20 rupias>>, que esto era muy,\nmuy valioso! ¡Y te aseguro que no te\nestoy intentando timar!")
/*<358>*/ 	switch (random(4)) {
          	  case 0:
/*<357>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 17), ('next', 356), ('param3', 23)])
/*<356>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 152)])) {
          		  case 0:
          			flw_355:
/*<355>*/ 			rupees += -17;
          			flw_342:
/*<342>*/ 			entrypoint_123_14();
          		  case 1:
/*<354>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<410>*/ 			loadzone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_355
          		}
          	  case 1:
/*<353>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 19), ('next', 352), ('param3', 23)])
/*<352>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 150)])) {
          		  case 0:
          			flw_351:
/*<351>*/ 			rupees += -19;
          			goto flw_342
          		  case 1:
/*<350>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<411>*/ 			loadzone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_351
          		}
          	  case 2:
/*<349>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 22), ('next', 348), ('param3', 23)])
/*<348>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 148)])) {
          		  case 0:
          			flw_347:
/*<347>*/ 			rupees += -22;
          			goto flw_342
          		  case 1:
/*<346>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<412>*/ 			loadzone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_347
          		}
          	  case 3:
/*<345>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 23), ('next', 344), ('param3', 23)])
/*<344>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 146)])) {
          		  case 0:
          			flw_343:
/*<343>*/ 			rupees += -23;
          			goto flw_342
          		  case 1:
/*<341>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<413>*/ 			loadzone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_343
          		}
          	}
          }

          void entrypoint_123_16() {
/*<379>*/ 	start()
/*<361>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1F0A\x309Me debes <r<20 rupias>>, niño, ¡que\nesas piezas eran muy caras!\n¡Y no me vengas con excusas!")
/*<362>*/ 	switch (random(4)) {
          	  case 0:
/*<363>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 7), ('next', 364), ('param3', 23)])
/*<364>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 162)])) {
          		  case 0:
          			flw_365:
/*<365>*/ 			rupees += -7;
          			flw_380:
/*<380>*/ 			entrypoint_123_14();
          		  case 1:
/*<366>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<414>*/ 			loadzone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_365
          		}
          	  case 1:
/*<367>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 8), ('next', 368), ('param3', 23)])
/*<368>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 164)])) {
          		  case 0:
          			flw_369:
/*<369>*/ 			rupees += -8;
          			goto flw_380
          		  case 1:
/*<370>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<415>*/ 			loadzone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_369
          		}
          	  case 2:
/*<371>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 11), ('next', 372), ('param3', 23)])
/*<372>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 166)])) {
          		  case 0:
          			flw_373:
/*<373>*/ 			rupees += -11;
          			goto flw_380
          		  case 1:
/*<374>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<416>*/ 			loadzone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_373
          		}
          	  case 3:
/*<375>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 13), ('next', 376), ('param3', 23)])
/*<376>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 168)])) {
          		  case 0:
          			flw_377:
/*<377>*/ 			rupees += -13;
          			goto flw_380
          		  case 1:
/*<378>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<417>*/ 			loadzone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_377
          		}
          	}
          }

          void entrypoint_123_00() {
          	start()
/*<  4>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<  5>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 49), ('param2', 1), ('next', 6), ('param3', 23)])
/*<  6>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 6)])) {
          		  case 0:
/*<  1>*/ 			switch (story_flags[574 /* us: 805A9B18 0x20, jp: 805ACD98 0x20 */]) {
          			  case 0:
/*<  7>*/ 				switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
          				  case 0:
/*< 44>*/ 					switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          					  case 0:
/*< 43>*/ 						switch (story_flags[580 /* us: 805A9B1B 0x08, jp: 805ACD9B 0x08 */]) {
          						  case 0:
          							flw_19:
/*< 19>*/ 							switch (story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */]) {
          							  case 0:
/*< 20>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hola, Link.\n\n\n\nSi la casa vuelve a llenárseme de polvo,\nno te preocupes que te aviso.\n")
          							  case 1:
/*<124>*/ 								switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          								  case 0:
/*<211>*/ 									switch (context_related2(0)) {
          									  case 0:
/*<213>*/ 										entrypoint_123_08();
          									  case 1:
/*<212>*/ 										entrypoint_123_09();
          									}
          								  case 1:
/*<123>*/ 									switch (loadzone_temp_flags[1 /* 0x1 02 */]) {
          									  case 0:
/*<125>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xD01¿Podrías limpiar esto un poco?\nHijo, es que no soporto limpiar,\nes superior a mí...\n\n\x0E\x01\x09\x04\n\x900Te pagaré por el trabajo, claro.\n\n[1]Trato\nhecho[2-]No, gracias")
          										flw_126:
/*<126>*/ 										switch (choice(2)) {
          										  case 0:
/*<128>*/ 											printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\xD07¡Estupendo! ¡Genial! Ya sabía yo que no\nme fallarías, Link.\n\n\n\x0E\x01\x09\x04\x01\xD00Intenta ponerte a ello cuanto antes,\n¿quieres? ¡Y gracias!")
/*<130>*/ 											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 149), ('param3', 33)])
/*<149>*/ 											story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = true;
/*<129>*/ 											loadzone_temp_flags[0 /* 0x1 01 */] = true;
          										  case 1:
/*<127>*/ 											printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x90AVaya, Link, ¡y yo\nque creía que me ibas a echar\nuna mano!...")
/*<131>*/ 											loadzone_temp_flags[1 /* 0x1 02 */] = true;
          										}
          									  case 1:
/*<276>*/ 										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 2304), ('next', 21), ('param3', 13)])
/*< 21>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hola, Link.\n\n\n\n\x0E\x01\x09\x04\x08\x900Tengo la casa hecha un asco\notra vez... ¿Podrías darle un repaso?\nTe pienso pagar, por supuesto.\n[1]Trato\nhecho[2-]No, gracias")
          										goto flw_126
          									}
          								}
          							}
          						  case 1:
/*<277>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2304), ('next', 45), ('param3', 13)])
/*< 45>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hola, Link.\n\n\n\n\x0E\x01\x09\x04\x08\x900Coocker está enfadado conmigo...\n\n\n\n\x0E\x01\x09\x04\n\x900Me ha dicho que no debería gastar\nel dinero en hacer que alguien\nme limpie la casa.\n\n\x0E\x01\x09\x04\x01\xC00(...)\n\n\n\n\x0E\x01\x09\x04\x08\xD09Pero... Yo no creo que esté mal pedirte\nque me eches una mano de vez\nen cuando. Hay confianza...\n\n\x0E\x01\x09\x04\x08\x900Así que tranquilo, siempre que se me\nacumule el polvo y tú tengas tiempo,\npásate por aquí.")
/*< 46>*/ 							story_flags[580 /* us: 805A9B1B 0x08, jp: 805ACD9B 0x08 */] = true;
          						}
          					  case 1:
          						goto flw_19
          					}
          				  case 1:
/*<438>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 120), ('param3', 31)])
/*<120>*/ 					switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          					  case 0:
/*<200>*/ 						switch (context_related2(0)) {
          						  case 0:
/*<210>*/ 							entrypoint_123_08();
          						  case 1:
/*<209>*/ 							entrypoint_123_09();
          						}
          					  case 1:
/*<  8>*/ 						switch (loadzone_temp_flags[1 /* 0x1 02 */]) {
          						  case 0:
/*< 15>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xD01¿Podrías limpiar esto un poco?\nHijo, es que no soporto limpiar,\nes superior a mí...\n\n\x0E\x01\x09\x04\n\x900Te pagaré por el trabajo, claro.\n\n[1]Trato\nhecho[2-]No, gracias")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*< 12>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\xD07¡Estupendo! ¡Genial! Ya sabía yo que no\nme fallarías, Link.\n\n\n\x0E\x01\x09\x04\x08\x904¿Dónde habré metido la escoba?\nNo me acuerdo ni de dónde la puse...\n\n\n\x0E\x01\x09\x04\x09\x900En fin, lo único que tienes que hacer\nes <r<quitar el polvo>>, no te pido más.\n\n\n\x0E\x01\x09\x04\x01\x900Me da igual cómo lo hagas, por mí\ncomo si te pones a soplar.\nLo importante es que <r<lo quites todo>>.\n\n\x0E\x01\x09\x04\x08\x902Intenta ponerte a ello cuanto antes,\n¿vale? ¡Y muchas gracias!")
/*<119>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 148), ('param3', 33)])
/*<148>*/ 								story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = true;
/*<  3>*/ 								loadzone_temp_flags[0 /* 0x1 01 */] = true;
          								flw_122:
/*<122>*/ 								switch (story_flags[574 /* us: 805A9B18 0x20, jp: 805ACD98 0x20 */]) {
          								  case 0:
          									flw_121:
/*<121>*/ 									loadzone_temp_flags[1 /* 0x1 02 */] = true;
          								  case 1:
/*<118>*/ 									story_flags[574 /* us: 805A9B18 0x20, jp: 805ACD98 0x20 */] = true;
          									goto flw_121
          								}
          							  case 1:
/*< 13>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x90AVaya, Link, ¡y yo\nque creía que me ibas a echar\nuna mano!...")
          								goto flw_122
          							}
          						  case 1:
/*< 14>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xD01Hola, Link.\n¿Cómo estás?\n\n\n\x0E\x01\x09\x04\x01\x900¿Te importaría hacer un poco de\nlimpieza por mí? ¡Limpiar no es lo mío,\nla verdad!...\n\n\x0E\x01\x09\x04\n\x900Te pienso pagar, por supuesto.\n\n[1]Trato\nhecho[2-]No, gracias")
          							goto flw_2
          						}
          					}
          				}
          			  case 1:
/*<  9>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 275), ('param3', 31)])
/*<275>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 2304), ('next', 11), ('param3', 13)])
/*< 11>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hola, Link.\n¿Cómo estás?\n\n\n\x0E\x01\x09\x04\x08\x900Me gustaría hablar contigo de una cosa.\nVerás, es que tengo la casa hasta arriba\nde porquería, está hecha una pocilga...\n\n\x0E\x01\x09\x04\x09\x900Coocker siempre está con que debería\nlimpiarla y tal... ¡pero es que\nme aburre muchísimo! Nunca me veo\ncon ganas de ponerme a ello.\n\x0E\x01\x09\x04\x08\x900Así que he pensando que igual a ti\nno te importaría limpiarla por mí.\nTe pagaré de mil amores, claro.\n[1]Trato\nhecho[2-]De eso\nnada")
          				goto flw_2
          			}
          		  case 1:
          			flw_17:
/*< 17>*/ 			switch (loadzone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 18>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Ya que sois compañeros de clase, a ver\nsi me cuidas bien a Coocker, ¿eh?\n\n\nNo se parece en nada a mí, así que\ntampoco debería preocuparme mucho.\n[1]Vaya casa...[2]Ejem...")
/*<166>*/ 				switch (choice(2)) {
          				  case 0:
/*<167>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x909Ya, bueno, es verdad...\n¿Cómo se ha podido ensuciar tanto?\n\n\n\x0E\x01\x09\x04\n\x90AMe da tanta pereza ponerme a\nlimpiar... Ojalá encontrase a alguien\nque me hiciera el favor de darle un\nbuen repaso al polvo por mí.")
          				  case 1:
/*<168>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x904¿Qué pasa?\nTienes cara de querer decirme algo...")
          				}
          			  case 1:
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xD01Hola, Link. ¿Cómo estás?\n\n\n\n\x0E\x01\x09\x04\n\x900A ver si algún día me cuentas qué tal\nle va a mi Coocker en la academia.")
/*< 16>*/ 				loadzone_temp_flags[1 /* 0x1 02 */] = true;
          			}
          		}
          	  case 1:
          		goto flw_17
          	}
          }

          void entrypoint_123_01() {
/*< 22>*/ 	start()
/*<295>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1014), ('next', 23), ('param3', 24)])
/*< 23>*/ 	printf(/* textboxtype: 1, unk: 1 */ "¡Ya hemos hablado mil veces de esto,\nmamá!")
/*<180>*/ 	set_camera(7, 0)
/*<282>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 24), ('param3', 6)])
/*< 24>*/ 	set_camera(1, 0)
/*<172>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 169), ('param3', 6)])
/*<169>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 24), ('param2', 100), ('next', 25), ('param3', 14)])
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 2 */ "Coocker, tranquilízate, por favor.\nTampoco hay que ponerse así...")
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 1 */ "¡Claro que me pongo así!\n\n\n\n¡Me he dado cuenta de que has estado\n<r<pagando a alguien>> para que limpie de\nvez en cuando!\n\n¡Ese dinero te lo doy para que vayas\na comprar el pan! Mamá, ¿tan difícil\nes de entender?...\n\n¡Como sigas despilfarrando así\nlas rupias no me llegará para \npagarme la academia de caballeros!\n\n¡No me busqué el trabajo de vigilante\nnocturno para que te gastes el dinero\nen vivir sin dar ni golpe!\n\n¡Que sea la última vez!... ¡Como no\ncambies de actitud, la vamos a tener!\n")
/*< 29>*/ 	story_flags[577 /* us: 805A9B1B 0x01, jp: 805ACD9B 0x01 */] = true;
/*<179>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 28), ('param3', 6)])
/*< 28>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 18), ('next', 286), ('param3', 32)])
/*<286>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 33), ('param3', 32)])
/*< 33>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 90), ('next', 32), ('param3', 6)])
/*< 32>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 25), ('param2', 274), ('next', 171), ('param3', 15)])
/*<171>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 100), ('next', 281), ('param3', 50)])
/*<281>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 283), ('param3', 17)])
/*<283>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 170), ('param3', 6)])
/*<170>*/ 	set_camera(2, 0)
/*<173>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4609), ('param2', 3072), ('next', 27), ('param3', 13)])
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Oh, hola, Link...\nEs un poco tarde, ¿no? ¿Qué pasa?")
/*<182>*/ 	set_camera(8, 0)
/*<183>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x120B\x1100Tú... no habrás escuchado nada, ¿no?\nNo, no creo que te hayas enterado...\n\n[1]¿De qué?[2]Se siente,\npero...")
/*<151>*/ 	switch (choice(2)) {
          	  case 0:
/*<152>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1201\x1100Nada... olvídalo.\n\n\n\n\x0E\x01\x09\x04\x1208\x400¡En fin, que me toca patrulla otra vez!\nTen mucho cuidado si vas a andar por\nla calle a estas horas, ¿entendido?")
          		flw_181:
/*<181>*/ 		set_camera(2, 0)
/*< 30>*/ 		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 26), ('param2', 18), ('next', 31), ('param3', 14)])
/*< 31>*/ 		story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */] = true;
/*< 34>*/ 		story_flags[578 /* us: 805A9B1B 0x02, jp: 805ACD9B 0x02 */] = true;
/*< 35>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          	  case 1:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1201\x1100¡Entonces lo has oído todo!\n\n\n\n\x0E\x01\x09\x04\x120F\x1100Es verdad... Estoy haciendo la ronda\nen el turno de noche para ganarme\nun dinerillo extra.\n\n\x0E\x01\x09\x04\x1208\x1100¡Y me da igual si no te parece bien!\nPuedes reírte todo lo que quieras...\n¡Pero no está nada bonito eso de\nescuchar conversaciones ajenas!\n\x0E\x01\x09\x04\x120C\xC00Tú tampoco puedes ir dando lecciones\na la gente, ¿sabes?... En fin, mejor\nhagamos como si nada de esto\nhubiera ocurrido, ¿de acuerdo?")
/*<154>*/ 		scene_flags[0 'Skyloft'][76 /* 0x8 10 */] = true;
          		goto flw_181
          	}
          }

          void entrypoint_123_02() {
/*< 36>*/ 	start()
/*<434>*/ 	switch (loadzone_temp_flags[16 /* 0x3 01 */]) {
          	  case 0:
/*<432>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x1100Mmm, ahora que lo pienso...\x0E\x01\x04\x02\x1E O son\nimaginaciones mías, o últimamente\ntodos los monstruos de Altárea han\ndesaparecido...\n\x0E\x01\x09\x04ÿ\xFF00¿Qué estará pasando? Todo esto es\nmuy raro... Bah, da igual, tampoco\nnos viene mal una noche tranquila\nde vez en cuando, ¿verdad?")
          	  case 1:
/*< 37>*/ 		switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */]) {
          			  case 0:
/*<178>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 1025), ('next', 41), ('param3', 13)])
/*< 41>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¡Hola, Link!\nLas calles son peligrosas de noche,\nándate con mil ojos.\n\n\x0E\x01\x09\x04\x11\xC09Ah, y sobre el asuntillo de mi madre...\n¡no se lo cuentes a nadie! ¿Estamos?")
          				flw_431:
/*<431>*/ 				switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          				  case 0:
/*<433>*/ 					loadzone_temp_flags[16 /* 0x3 01 */] = true;
          				  case 1:
          				}
          			  case 1:
/*<161>*/ 				switch (scene_flags[76 /* 0x8 10 */]) {
          				  case 0:
/*<176>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 4376), ('next', 39), ('param3', 13)])
/*< 39>*/ 					printf(/* textboxtype: 1, unk: 0 */ "¡Ah, qué vergüenza!... No tendrías que\nhaber visto semejante escenita.\n\n\n\x0E\x01\x09\x04\x0F\x1100Es humillante... pero lo hago por\nmi madre. Es un poco dejada y\nya no sé qué hacer con ella.\n\n\x0E\x01\x09\x04\x08\xC0BPero bueno, ya me las apañaré,\nno te preocupes por mí.\n\n\n\x0E\x01\x09\x04\x01\x1100Aunque aún no sé quién accedió\na limpiarle la casa a mi madre...\n\n\n\x0E\x01\x09\x04\x08\xC16Pche... ¿Pero qué se cree esa gente?\n¿Por qué no se ocupan de sus cosas\ny dejan a los demás en paz?")
/*< 40>*/ 					story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */] = true;
          				  case 1:
/*<177>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 1025), ('next', 162), ('param3', 13)])
/*<162>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Hola, Link.\n¡Tienes ante ti al protector de la paz\nde Altárea!\n\n\x0E\x01\x09\x04\x0C\x400¡Quiero que este sea el lugar más\nseguro del mundo y que todos podamos\nvivir en paz y armonía!\n\n\x0E\x01\x09\x04\x01\xC52Esto...\x0E\x01\x04\x02\x1E\n¿Por qué me miras así?")
          					goto flw_431
          				}
          			}
          		  case 1:
/*<159>*/ 			switch (loadzone_temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<175>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 1029), ('next', 160), ('param3', 13)])
/*<160>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¡Ay, Link, compañero!...\nAlgún día entenderás lo que significa\nser un caballero, ¡tú tranquilo!")
          				goto flw_431
          			  case 1:
/*<174>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 1025), ('next', 42), ('param3', 13)])
/*< 42>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¡Hola, Link!\n¡No es muy seguro salir de noche por\nahí, ándate con cuidado, compañero!\n\n\x0E\x01\x09\x04\x0B\x400Esta es mi ruta de patrulla. Me ocupo\nde hacer la ronda nocturna.\n\n\n\x0E\x01\x09\x04\x08\x404Al caer la noche, los monstruos salen\nde sus escondrijos y la zona se vuelve\nbastante peligrosa...\n\n¡Pero el deber de un caballero\nes proteger a los ciudadanos!\n\n[1]¡Eres un\ncrack![2]¿Y pagan\nbien?")
/*<155>*/ 				switch (choice(2)) {
          				  case 0:
/*<156>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\xC09¡¿Pero qué dices?! ¡Esta tarea\nrepresenta la esencia de lo que\nsignifica ser un aprendiz de\ncaballero!\nEsto no se hace para que te echen\nflores... Mírame a mí, por ejemplo.\nLo único que necesito es la sonrisa\nde la gente, así ya me siento pagado.\n\x0E\x01\x09\x04\x08\x400¡Eso es ser un verdadero caballero!\n\x0E\x01\x09\x04\x00\x05¡Algún día lo entenderás!")
          					flw_158:
/*<158>*/ 					loadzone_temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\xC17¡Pero bueno, Link!\n¿Tú por qué decidiste hacerte\ncaballero, si puede saberse?\n\n¿Para hacerte rico, acaso? \n¡Craso error! ¡El dinero puede ser\ntu perdición, compañero!\n\n\x0E\x01\x09\x04\x08\x405¡Mírame a mí! Las rupias me dan igual,\nme basta con ver feliz a la gente.\n¡De eso va este asunto de ser caballero!")
          					goto flw_158
          				}
          			}
          		}
          	}
          }

          void entrypoint_123_03() {
/*<251>*/ 	start()
/*<253>*/ 	switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<255>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 768), ('next', 254), ('param3', 13)])
/*<254>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09¡Pero bueno!... ¡Mira la que has liado!\n¡Te has cargado mis antigüedades!\n\n\n¡Haz el favor de tener más cuidado\ny no romperme cosas, niño! O si no...")
          	  case 1:
/*<252>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07¡Las antigüedades son mi pasión!\nTodo lo que hay en mi casa es\ntremendamente valioso...\n\n¡Así que procura no romper nada!")
          	}
          }

          void entrypoint_123_04() {
/*<231>*/ 	start()
/*<250>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 31), ('next', 278), ('param3', 32)])
/*<278>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 100), ('next', 249), ('param3', 50)])
/*<249>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 7945), ('param2', 768), ('next', 233), ('param3', 13)])
/*<233>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1F00\n¡¡¡SERÁS... CERNÍCALO!!!")
/*<241>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 100), ('next', 242), ('param3', 16)])
/*<242>*/ 	set_camera(3, 0)
/*<336>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 8), ('next', 232), ('param3', 24)])
/*<232>*/ 	switch (story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */]) {
          	  case 0:
/*<237>*/ 		switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*<239>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1F0A\x300¡Tú otra vez!\n¡¿Pero qué te he hecho yo para que\nme tengas tanta inquina, niño?!")
          			flw_401:
/*<401>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 1), ('next', 402), ('param3', 23)])
/*<402>*/ 			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 182)])) {
          			  case 0:
/*<244>*/ 				switch (random(3)) {
          				  case 0:
/*<338>*/ 					entrypoint_123_13();
          				  case 1:
/*<339>*/ 					entrypoint_123_15();
          				  case 2:
/*<340>*/ 					entrypoint_123_16();
          				}
          			  case 1:
/*<405>*/ 				switch (loadzone_temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<418>*/ 					printf(/* textboxtype: 1, unk: 0 */ "¡Y encima vas y no tienes ni una mísera\nrupia! ¡Es intolerable!\n\n\n¡No puedes ir por ahí rompiendo\nlas cosas de la gente y luego no\npagarles porque no llevas dinero!\n¡Anda, largo de aquí pero ya!")
          					goto flw_246
          				  case 1:
/*<403>*/ 					printf(/* textboxtype: 1, unk: 0 */ "¡¿Será posible?!... ¡Pero si no tienes ni\nuna mísera rupia, niño!\n\n\n¡¿Cómo puedes tener la cara dura \nde ir rompiendo las cosas a la gente\ny luego no tener dinero para pagar?! \n\nGrrr, es igual... ¡Largo de aquí,\nque no quiero ni verte!")
/*<404>*/ 					loadzone_temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_246
          				}
          			}
          		  case 1:
/*<240>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1F09\x300¡Cómo se puede ser tan torpe!\nMira que cargarte mis antigüedades...")
          			goto flw_401
          		}
          	  case 1:
/*<238>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1F09\x300¡Mira la que me has liado!\n¡Te has cargado mis antigüedades!\n\n\n¡Exijo que me pagues todito todo lo que\nhas roto!\n\n\n\x0E\x01\x09\x04\x1F0B\x700A ver, eso era muy caro...\n¡Con <r<unas >><r<20 rupias >>estaremos en paz!\n\n\n\x0E\x01\x09\x04\x1F01\x305¡Y no me pongas esa cara!\n¡¿Insinúas que estoy aprovechando\npara inflar el precio?!\n\n\x0E\x01\x09\x04\x1F09\x309¡Serás impertinente!\nYo sé lo que valen mis piezas\nde colección mejor que nadie.\n\n¡Y tú me vas a pagar hasta la última\nrupia! ¿Has entendido?")
/*<419>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 1), ('next', 420), ('param3', 23)])
/*<420>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 186)])) {
          		  case 0:
/*<423>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 18), ('next', 424), ('param3', 23)])
/*<424>*/ 			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 188)])) {
          			  case 0:
          				flw_425:
/*<425>*/ 				rupees += -18;
/*<234>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1F0A\x300¡Como esto se repita pienso tomar\nmedidas! ¡Estás avisado!")
          				flw_235:
/*<235>*/ 				story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */] = true;
/*<236>*/ 				loadzone_temp_flags[0 /* 0x1 01 */] = true;
/*<243>*/ 				loadzone_temp_flags[1 /* 0x1 02 */] = false;
          				goto flw_248
          			  case 1:
/*<426>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¡Pero si ni siquiera tienes bastante\npara pagarme! ¡Qué disparate!...\n\n\nEntonces basta con que me des lo\nque lleves encima. ¡Y la próxima\nvez ten más cuidado!")
/*<427>*/ 				loadzone_temp_flags[2 /* 0x1 04 */] = true;
          				goto flw_425
          			}
          		  case 1:
/*<421>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡¿Será posible?!... ¡Pero si no tienes ni\nuna mísera rupia, niño!\n\n\n¡¿Cómo puedes tener la cara dura \nde ir rompiendo las cosas a la gente\ny luego no tener dinero para pagar?! \n\nGrrr, es igual... ¡Largo de aquí,\nque no quiero ni verte!")
/*<422>*/ 			loadzone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_235
          		}
          	}
          }

          void entrypoint_123_05() {
/*<258>*/ 	start()
/*<284>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 43), ('next', 292), ('param3', 32)])
/*<292>*/ 	set_camera(13, 0)
/*<291>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 100), ('next', 287), ('param3', 14)])
/*<287>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 43), ('param2', 99), ('next', 259), ('param3', 50)])
/*<259>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
/*<290>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 43), ('next', 288), ('param3', 17)])
/*<288>*/ 	set_camera(6, 0)
/*<285>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 43), ('next', 293), ('param3', 33)])
/*<293>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 103), ('next', 289), ('param3', 24)])
/*<289>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 260), ('param3', 6)])
/*<260>*/ 	changeScene(0, 0) // 
          }

