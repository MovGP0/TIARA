/* Ghidra address: 00f8e800 */
/* Ghidra symbol: FUN_00f8e800 */


undefined8 FUN_00f8e800(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x34d8) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x34d8),iVar2);
      if (*(int *)(lVar1 + 0x10) == param_2) {
        FUN_00414ad0(param_1 + 0x34e8,*(undefined8 *)(param_1 + 0x34e0));
        FUN_00414ad0(param_1 + 0x34e0,*(undefined8 *)(lVar1 + 8));
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

