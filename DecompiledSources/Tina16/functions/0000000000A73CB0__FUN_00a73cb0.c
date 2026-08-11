/* Ghidra address: 00a73cb0 */
/* Ghidra symbol: FUN_00a73cb0 */


void FUN_00a73cb0(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10) + -1;
  if (param_2 <= iVar4) {
    iVar4 = (iVar4 - param_2) + 1;
    do {
      lVar2 = FUN_00a78410(*(undefined8 *)(param_1 + 0x18),param_2);
      iVar1 = *(int *)(lVar2 + 0xc);
      if (param_4 < iVar1) {
        if (iVar1 < param_4 + param_5) {
          iVar3 = (param_4 + param_5) - iVar1;
        }
        *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + iVar3;
        *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + iVar3;
      }
      param_2 = param_2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = 0;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10) + -1;
  if (param_3 <= iVar3) {
    iVar3 = (iVar3 - param_3) + 1;
    do {
      lVar2 = FUN_00a78410(*(undefined8 *)(param_1 + 0x20),param_3);
      iVar1 = *(int *)(lVar2 + 0xc);
      if (param_4 < iVar1) {
        if (iVar1 < param_4 + param_5) {
          iVar4 = (param_4 + param_5) - iVar1;
        }
        *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + iVar4;
        *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + iVar4;
      }
      param_3 = param_3 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

