/* Ghidra address: 01815030 */
/* Ghidra symbol: FUN_01815030 */


void FUN_01815030(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0x7fffffff;
  iVar5 = 1;
  iVar2 = FUN_004b2060();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = FUN_004b2070(param_2,iVar4);
      iVar1 = *(int *)(lVar3 + 0x18);
      if (iVar1 < iVar6) {
        iVar6 = iVar1;
      }
      if (iVar5 < iVar1) {
        iVar5 = iVar1;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (iVar6 < 2) {
    *(int *)(param_1 + 0x18) = iVar5 + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  return;
}

