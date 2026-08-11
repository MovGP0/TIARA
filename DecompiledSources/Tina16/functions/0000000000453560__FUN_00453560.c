/* Ghidra address: 00453560 */
/* Ghidra symbol: FUN_00453560 */


longlong FUN_00453560(longlong param_1,undefined2 param_2)

{
  longlong lVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  iVar2 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 8) + -4);
  }
  if (iVar2 < *(int *)(param_1 + 0x10)) {
    FUN_00454310(param_1);
  }
  lVar1 = FUN_00414de0(param_1 + 8);
  *(undefined2 *)(lVar1 + (longlong)(*(int *)(param_1 + 0x10) + -1) * 2) = param_2;
  return param_1;
}

