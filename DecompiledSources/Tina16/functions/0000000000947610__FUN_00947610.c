/* Ghidra address: 00947610 */
/* Ghidra symbol: FUN_00947610 */


undefined8 FUN_00947610(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = *(uint *)(param_2 + -4) >> 1;
  }
  for (iVar2 = 1; iVar2 <= (int)uVar3; iVar2 = iVar2 + 1) {
    cVar1 = FUN_008ff300(*(undefined2 *)(param_2 + -2 + (longlong)iVar2 * 2));
    if (cVar1 == '\0') break;
  }
  if ((int)uVar3 < iVar2) {
    FUN_00414520(param_1);
  }
  else {
    while( true ) {
      cVar1 = FUN_008ff300(*(undefined2 *)(param_2 + -2 + (longlong)(int)uVar3 * 2));
      if (cVar1 == '\0') break;
      uVar3 = uVar3 - 1;
    }
    FUN_00416430(param_1,param_2,iVar2,(uVar3 - iVar2) + 1);
  }
  return param_1;
}

