/* Ghidra address: 00c831c0 */
/* Ghidra symbol: FUN_00c831c0 */


undefined8 FUN_00c831c0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  FUN_00414480(param_2);
  iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar2);
      if (*(int *)(lVar1 + 0x50) == param_3) {
        FUN_00414ad0(param_2,*(undefined8 *)(lVar1 + 0x30));
        return param_2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_2;
}

