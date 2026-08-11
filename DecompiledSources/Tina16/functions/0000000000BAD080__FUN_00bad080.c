/* Ghidra address: 00bad080 */
/* Ghidra symbol: FUN_00bad080 */


undefined8 FUN_00bad080(undefined8 param_1,longlong param_2)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 1;
  while( true ) {
    iVar3 = 0;
    if (param_2 != 0) {
      iVar3 = *(int *)(param_2 + -4);
    }
    if ((iVar3 < iVar5) || (*(short *)(param_2 + -2 + (longlong)iVar5 * 2) == 10)) break;
    iVar5 = iVar5 + 1;
  }
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + -4);
  }
  if (iVar3 < iVar5) {
    FUN_00414ad0(param_1,param_2);
  }
  else {
    iVar5 = 0;
    if (param_2 != 0) {
      iVar5 = *(int *)(param_2 + -4);
    }
    FUN_004169f0(param_1,iVar5 * 2);
    iVar4 = 1;
    iVar3 = 1;
    if (0 < iVar5) {
      do {
        sVar1 = *(short *)(param_2 + -2 + (longlong)iVar3 * 2);
        if (sVar1 == 10) {
          lVar2 = FUN_00414de0(param_1);
          *(undefined2 *)(lVar2 + -2 + (longlong)iVar4 * 2) = 0xd;
          lVar2 = FUN_00414de0(param_1);
          *(undefined2 *)(lVar2 + -2 + (longlong)(iVar4 + 1) * 2) = 10;
          iVar4 = iVar4 + 2;
        }
        else {
          lVar2 = FUN_00414de0(param_1);
          *(short *)(lVar2 + -2 + (longlong)iVar4 * 2) = sVar1;
          iVar4 = iVar4 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_004169f0(param_1,iVar4 + -1);
  }
  return param_1;
}

