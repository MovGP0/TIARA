/* Ghidra address: 00832450 */
/* Ghidra symbol: FUN_00832450 */


int FUN_00832450(longlong param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + -4);
  }
  iVar3 = FUN_008323e0(param_1,uVar2);
  if (iVar3 < param_2) {
    iVar6 = -1;
  }
  else {
    iVar5 = 0;
    iVar3 = 0;
    if (param_1 != 0) {
      iVar3 = *(int *)(param_1 + -4);
    }
    iVar4 = 1;
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = iVar5 + 1;
        cVar1 = FUN_008317e0(param_1,iVar4);
        if ((cVar1 != '\x03') && (param_2 = param_2 + -1, param_2 < 0)) {
          return iVar5;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
        iVar6 = iVar5;
      } while (iVar3 != 0);
    }
  }
  return iVar6;
}

