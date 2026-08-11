/* Ghidra address: 00745e70 */
/* Ghidra symbol: FUN_00745e70 */


void FUN_00745e70(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  param_2 = param_2 + 1;
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x10) + 0x10) + -1;
  if (param_2 <= iVar3) {
    iVar3 = (iVar3 - param_2) + 1;
    do {
      iVar2 = 0;
      iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b0) + 0x10) + 0x10);
      if (-1 < iVar4 + -1) {
        do {
          lVar1 = FUN_00747010(*(undefined8 *)(param_1 + 0x4c0),param_2,iVar2);
          if (((lVar1 != 0) && (*(int *)(lVar1 + 0x20) == param_2)) &&
             (*(int *)(lVar1 + 0x24) == iVar2)) {
            FUN_00747640(lVar1,*(int *)(lVar1 + 0x20) + -1);
          }
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      param_2 = param_2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

