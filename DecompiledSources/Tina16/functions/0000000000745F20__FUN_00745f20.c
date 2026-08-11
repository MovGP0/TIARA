/* Ghidra address: 00745f20 */
/* Ghidra symbol: FUN_00745f20 */


void FUN_00745f20(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x10) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      iVar1 = param_2 + 1;
      iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b0) + 0x10) + 0x10) + -1;
      if (iVar1 <= iVar5) {
        iVar5 = (iVar5 - iVar1) + 1;
        do {
          lVar2 = FUN_00747010(*(undefined8 *)(param_1 + 0x4c0),iVar3,iVar1);
          if (((lVar2 != 0) && (*(int *)(lVar2 + 0x20) == iVar3)) &&
             (*(int *)(lVar2 + 0x24) == iVar1)) {
            FUN_00747750(lVar2,*(int *)(lVar2 + 0x24) + -1);
          }
          iVar1 = iVar1 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

