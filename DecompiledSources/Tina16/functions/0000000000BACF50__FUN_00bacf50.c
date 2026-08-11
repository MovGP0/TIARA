/* Ghidra address: 00bacf50 */
/* Ghidra symbol: FUN_00bacf50 */


undefined8 FUN_00bacf50(undefined8 param_1,longlong param_2)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 1;
  while( true ) {
    iVar3 = 0;
    if (param_2 != 0) {
      iVar3 = *(int *)(param_2 + -4);
    }
    if ((iVar3 < iVar6) || (*(short *)(param_2 + -2 + (longlong)iVar6 * 2) == 0xd)) break;
    iVar6 = iVar6 + 1;
  }
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + -4);
  }
  if (iVar3 < iVar6) {
    FUN_00414ad0(param_1,param_2);
  }
  else {
    iVar6 = 0;
    if (param_2 != 0) {
      iVar6 = *(int *)(param_2 + -4);
    }
    FUN_004169f0(param_1,iVar6);
    iVar5 = 1;
    bVar4 = 0;
    iVar3 = 1;
    if (0 < iVar6) {
      do {
        sVar1 = *(short *)(param_2 + -2 + (longlong)iVar3 * 2);
        if (sVar1 == 0xd) {
          bVar4 = 1;
          lVar2 = FUN_00414de0(param_1);
          *(undefined2 *)(lVar2 + -2 + (longlong)iVar5 * 2) = 10;
          iVar5 = iVar5 + 1;
        }
        else if ((bool)(bVar4 & sVar1 == 10)) {
          if (sVar1 == 10) {
            bVar4 = 0;
          }
        }
        else {
          bVar4 = 0;
          lVar2 = FUN_00414de0(param_1);
          *(short *)(lVar2 + -2 + (longlong)iVar5 * 2) = sVar1;
          iVar5 = iVar5 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_004169f0(param_1,iVar5 + -1);
  }
  return param_1;
}

