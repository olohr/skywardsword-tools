          void entrypoint_350_00() {
          	start()
/*< 17>*/ 	set_camera(8, 0)
/*< 13>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 12>*/ 		printf(/* textboxtype: 1, unk: 2 */ "¡Todo listo, Link!\n¡Ánimo y a por todas!")
/*< 15>*/ 		set_camera(10, 0)
/*< 14>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 16), ('param3', 40)])
/*< 16>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          	  case 1:
/*<  1>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
          		  case 0:
/*< 19>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 31>*/ 				printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x04Amo Link, la recolección\nde <y<lágrimas >>ha fracasado.")
/*< 48>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 22), ('param3', 40)])
/*< 22>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*< 24>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 27>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 33>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 34>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 35>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 39>*/ 										printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x01Amo, existen dos tipos de <r<vigías\n>>que alertan a los <r<guardianes >>en cuanto\ndetectan la presencia de intrusos:\nlos <r<aéreos>> y los <r<terrestres>>.\nCada tipo presenta un comportamiento\ndiferente, por lo que se recomienda\nextremar las precauciones.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf(/* textboxtype: 2, unk: 2 */ "Esperaré a que el \x0E\x01\x12\x04\x00\x01amo regrese tras\nhaber obtenido todas las <y<lágrimas>>.")
          										flw_49:
/*< 49>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 30), ('param3', 40)])
/*< 30>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          									  case 1:
/*< 36>*/ 										printf(/* textboxtype: 2, unk: 2 */ "La posición de toda <y<lágrima >>obtenida\ncon anterioridad quedará <r<registrada\nen el mapa>>. Recomiendo explotar esta\nventaja al máximo plantando balizas.\nLas lágrimas no cambiarán nunca su\nubicación, por lo que conocerla con\nantelación supondrá una gran ayuda\npara superar el juicio.")
/*< 42>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_32
          									}
          								  case 1:
/*< 38>*/ 									printf(/* textboxtype: 2, unk: 2 */ "Aconsejo <r<reservar >>las <y<lágrimas\n>>más sencillas de encontrar\npara los momentos en los que\nel \x0E\x01\x12\x04\x00\x01amo haya sido descubierto.")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf(/* textboxtype: 2, unk: 2 */ "Calculo que la probabilidad de que\nel \x0E\x01\x12\x04\x00\x01amo no sea el elegido de\nla Diosa ha aumentado...\n\nTras varios intentos fallidos,\nsu alma se ha desestabilizado.\nSe recomienda un largo descanso\npara recuperar la concentración.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf(/* textboxtype: 2, unk: 2 */ "Hay que tener mucho cuidado con los\n<r<dos tipos de vigías >>que rondan en busca\nde posibles intrusos.\n\nLos <r<vigías aéreos >>no darán problemas\nmientras el \x0E\x01\x12\x04\x00\x02amo se mantenga alejado\nde las zonas bañadas por su luz.\n\nSin embargo, los <r<vigías terrestres>>\nlo perseguirán en cuanto detecten su\npresencia, por lo que recomiendo\n<r<extremar las precauciones>>.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf(/* textboxtype: 2, unk: 2 */ "La posición de las <y<lágrimas>>\nya obtenidas quedará <r<anotada\nen el mapa>>.\n\nDe partida, es recomendable centrar\nlos esfuerzos en localizar su ubicación.")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf(/* textboxtype: 2, unk: 2 */ "El espíritu del \x0E\x01\x12\x04\x00\x02amo se ha roto, pero\naun así puede volver a enfrentarse\nal juicio de la Diosa tantas veces\ncomo desee.\nSe recomienda <r<reservar >>las <y<lágrimas\n>>más sencillas de encontrar para los\nmomentos en los que el \x0E\x01\x12\x04\x00\x02amo sea\ndescubierto.\nEsperaré en el mundo exterior a que\nel \x0E\x01\x12\x04\x00\x02amo regrese tras conseguir las\n15 <y<lágrimas>>.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x04Amo Link.")
/*< 46>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 18), ('param3', 40)])
/*< 18>*/ 				printf(/* textboxtype: 2, unk: 2 */ "Cuando el \x0E\x01\x12\x04\x00\x02amo complete la\n<y<orquídea del espíritu >>con las 15\n<y<lágrimas>>, reforzará su espíritu\ny la Diosa le otorgará un poder.\nEsperaré el regreso del \x0E\x01\x12\x04\x00\x02amo en\nel mundo exterior.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x04Amo Link.")
/*<  4>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 2), ('param3', 40)])
/*<  2>*/ 			printf(/* textboxtype: 2, unk: 2 */ "Esta es la <b<Hypnea de Din>>, el tercer\njuicio, que pondrá a prueba el <r<poder>>\ndel \x0E\x01\x12\x04\x00\x02amo.\n\nPara hallar la última llama sagrada\nque fortalecerá la espada del \x0E\x01\x12\x04\x00\x02amo,\nes indispensable superar este último\njuicio.")
/*<  5>*/ 			set_camera(9, 0)
/*<  7>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 62), ('param2', 1), ('next', 11), ('param3', 40)])
/*< 11>*/ 			give_item(17 0x11);
/*<  8>*/ 			set_camera(8, 0)
/*<  9>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 6), ('param3', 40)])
/*<  6>*/ 			printf(/* textboxtype: 2, unk: 2 */ "Cuando se complete la <y<orquídea del\nespíritu>>, el \x0E\x01\x12\x04\x00\x02amo recibirá un <r<nuevo\npoder >>procedente de la Diosa.\n\n¿Hay alguna cosa que el \x0E\x01\x12\x04\x00\x02amo desee\npreguntar?\n[1]Sí[2-]No")
/*< 10>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf(/* textboxtype: 2, unk: 2 */ "¿Qué tipo de información\ndesea recibir el \x0E\x01\x12\x04\x00\x01amo?\n[1]Orquídea\ndel espíritu[2]Guardianes[3]Fluido\nhypneo[4-]Olvídalo")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 52>*/ 					printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x05Procedo con mi explicación, amo.\nRecomiendo prestar máxima\natención.\n\nPara completar la <y<orquídea del\nespíritu>>, es necesario encontrar\nlas <y<lágrimas de Din >>que hay\nesparcidas por este mundo.")
/*< 59>*/ 					set_camera(2, 0)
/*< 58>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 56), ('param3', 40)])
/*< 56>*/ 					printf(/* textboxtype: 2, unk: 2 */ "Aquel objeto brillante de allí...")
/*< 55>*/ 					set_camera(3, 0)
/*< 54>*/ 					printf(/* textboxtype: 2, unk: 2 */ "Es una de las <y<lágrimas de Din>>.\nEl \x0E\x01\x12\x04\x00\x01amo deberá reunir las <r<15\n>>para superar el juicio.")
/*< 57>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 53), ('param3', 40)])
/*< 53>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 77), ('param3', 6)])
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf(/* textboxtype: 2, unk: 2 */ "¿Alguna otra pregunta, \x0E\x01\x12\x04\x00\x01amo?\n\n\n[1]Orquídea\ndel espíritu[2]Guardianes[3]Fluido\nhypneo[4-]No, gracias")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x05Muy bien, amo. He aquí la información\nsolicitada.")
/*< 64>*/ 					set_camera(6, 0)
/*< 66>*/ 					printf(/* textboxtype: 2, unk: 2 */ "Nada más poner un pie fuera de este\ncírculo, los llamados <r<guardianes >>irán\nen pos del \x0E\x01\x12\x04\x00\x02amo.")
/*< 63>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf(/* textboxtype: 2, unk: 2 */ "Si el \x0E\x01\x12\x04\x00\x02amo recibe un solo golpe de los\n<r<guardianes>>, su espíritu se romperá\nen pedazos y el juicio fracasará.")
/*< 62>*/ 					set_camera(5, 0)
/*< 61>*/ 					printf(/* textboxtype: 2, unk: 2 */ "Para completar la <y<orquídea\ndel espíritu>>, es necesario\nrecoger todas las <y<lágrimas>>\nsin sufrir ningún daño.")
          					goto flw_77
          				  case 2:
/*< 68>*/ 					printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x05Muy bien, amo. He aquí la información\nsolicitada.")
/*< 67>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf(/* textboxtype: 2, unk: 2 */ "En este mundo existe una especie\nde líquido llamado <r<fluido hypneo>>.\n\n\nSi el \x0E\x01\x12\x04\x00\x01amo posa un pie sobre él, los\n<r<guardianes detectarán de inmediato\nsu presencia>>.\n\nPor lo tanto, aconsejo caminar con los\nojos bien abiertos.")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x05De acuerdo, amo.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf(/* textboxtype: 2, unk: 2 */ "Esperaré el regreso del \x0E\x01\x12\x04\x00\x02amo\nen el mundo exterior.")
/*< 73>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 75), ('param3', 40)])
/*< 75>*/ 					scene_flags[23 'Eldin: Silent Realm'][102 /* 0xD 40 */] = true;
/*< 74>*/ 					temp_flags[1 /* 0x1 02 */] = true;
/*< 76>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          				}
          			  case 1:
          				goto flw_70
          			}
          		}
          	}
          }

