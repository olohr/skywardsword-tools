          void entrypoint_006_800() {
          	start()
/*<  1>*/ 	printf("Current Session Play Time: _____<r<_____________<r<____________\n>>Total Play Time: _____<r<_____________<r<____________>>\nNo further information.")
          }

          void entrypoint_006_801() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("_____\nYou called for me, Master?\n[1]______[2]______[3]_________________")
/*<  4>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 0)])) {
          	  case 0:
/*<  6>*/ 		printf("_____\nYes, Master. What information do\nyou seek?\n[1]______[2]______[3]_________________")
/*<  7>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 4)])) {
          		  case 0:
          			flw_8:
/*<  8>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', -1), ('next', -1), ('param3', 7)])
          		  case 1:
          			goto flw_8
          		  case 2:
          			goto flw_8
          		  case 3:
          		}
          	  case 1:
          		flw_5:
/*<  5>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', -1), ('next', -1), ('param3', 7)])
          	  case 2:
          		goto flw_5
          	  case 3:
          	}
          }

