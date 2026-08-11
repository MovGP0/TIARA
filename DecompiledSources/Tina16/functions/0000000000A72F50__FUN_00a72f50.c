/* Ghidra address: 00a72f50 */
/* Ghidra symbol: FUN_00a72f50 */


void FUN_00a72f50(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  if ((0 < *(int *)(param_2 + 0x10)) && (iVar2 = *(int *)(param_2 + 0x10) + -1, -1 < iVar2)) {
    do {
      lVar1 = FUN_00a78430(param_2,iVar2);
      if (*(int *)(param_1 + 0x18) != *(int *)(*(longlong *)(lVar1 + 8) + 0x18)) {
        return;
      }
      lVar1 = FUN_00a78430(param_2,iVar2);
      *(undefined4 *)(*(longlong *)(lVar1 + 8) + 0x2c) = param_3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}

