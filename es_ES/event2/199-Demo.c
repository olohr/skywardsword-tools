          void entrypoint_199_00() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 1 */ "¿A que me sienta bien?\x0E\x01\x04\x02\x1E\n\n[1] De\nmaravilla[2]Ejem...[3]Bonito\ndisfraz...")
/*<  2>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 37)])
          }

          void entrypoint_199_01() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 1 */ "¿Qué le habrá pasado?\nIgual se ha perdido, el pobre...\x0E\x01\x04\x02\x1E \n[1]Pienso \nganarte[2]¿Y mi\npelícaro?[3]Vaya pelos...")
/*<  8>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 37)])
          }

          void entrypoint_199_02() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 1, unk: 1 */ "El milagro que acabo de presenciar\nme anima a albergar esperanzas.\nTe lo ruego, Link... \x0E\x01\x04\x02\x1E\n[1]¡Confía en mí![2]Ni hablar[3]Menudo\nmarrón")
/*<  5>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 37)])
          }

          void entrypoint_199_71() {
/*< 12>*/ 	start()
/*< 13>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 14), ('param3', 58)])
/*< 14>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 4), ('next', 21), ('param3', 56)])
          	flw_21:
/*< 21>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_199_03() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x06\x02\xFECDsabes lo que nos toca hacer ahora...~~~\n¿verdad?\x0E\x01\x04\x02\x1E\n[1]Ni idea[2]Qué mal\nrollo...[3]Más o\nmenos")
/*< 11>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 37)])
          }

          void entrypoint_199_72() {
/*< 15>*/ 	start()
/*< 16>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 17), ('param3', 58)])
/*< 17>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 6), ('next', 21), ('param3', 56)])
          	goto flw_21
          }

          void entrypoint_199_73() {
/*< 18>*/ 	start()
/*< 19>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 20), ('param3', 58)])
/*< 20>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 8), ('next', 21), ('param3', 56)])
          	goto flw_21
          }
