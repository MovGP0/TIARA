/* Ghidra address: 0161c160 */
/* Ghidra symbol: FUN_0161c160 */


undefined8 FUN_0161c160(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined1 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  *param_3 = 0;
  *param_4 = 0;
  cVar1 = FUN_0161bb80(param_1);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_0161be50(param_1,param_2,param_3,1);
    if ((*param_3 == 0) || (*(int *)(*param_3 + 0x5c8) == 1)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    *param_4 = uVar4;
    if ((lVar2 == 0) || (*(char *)(lVar2 + 0x28) != 'o')) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

