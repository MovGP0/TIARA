/* Ghidra address: 00469bc0 */
/* Ghidra symbol: FUN_00469bc0 */


void FUN_00469bc0(short *param_1,short *param_2,int param_3)

{
  char cVar1;
  
  if (param_3 == 8) {
    if (*param_1 == 1) {
      if ((*param_2 != 1) && (cVar1 = FUN_00463f70(param_2), cVar1 == '\0')) {
        FUN_00461840(param_1,param_2);
        return;
      }
      FUN_00460950(param_1);
    }
    else {
      cVar1 = FUN_00463f70(param_1);
      if ((cVar1 != '\0') && (*param_2 == 1)) {
        FUN_00460950(param_1);
      }
    }
  }
  else if (param_3 == 9) {
    if (*param_1 == 1) {
      if ((*param_2 != 1) && (cVar1 = FUN_00463f70(param_2), cVar1 != '\0')) {
        FUN_00461840(param_1,param_2);
        return;
      }
      FUN_00460950(param_1);
    }
    else {
      cVar1 = FUN_00463f70(param_1);
      if ((cVar1 == '\0') && (*param_2 == 1)) {
        FUN_00460950(param_1);
      }
    }
  }
  else {
    FUN_00460950(param_1);
  }
  return;
}

