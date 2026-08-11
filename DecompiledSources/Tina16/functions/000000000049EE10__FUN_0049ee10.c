/* Ghidra address: 0049ee10 */
/* Ghidra symbol: FUN_0049ee10 */


longlong FUN_0049ee10(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_0049ed70(param_2,param_4);
  }
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_0049ed70(param_3,param_4);
  }
  if (lVar2 == 0) {
    lVar4 = param_3;
    if (lVar3 == 0) {
      lVar4 = 0;
    }
  }
  else {
    lVar4 = param_2;
    if ((lVar3 != 0) && (cVar1 = FUN_00411580(lVar2,lVar3), lVar4 = param_3, cVar1 != '\0')) {
      lVar4 = param_2;
    }
  }
  return lVar4;
}

