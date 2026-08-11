/* Ghidra address: 00f7f400 */
/* Ghidra symbol: FUN_00f7f400 */


void FUN_00f7f400(longlong param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
  }
  if (iVar1 < *(int *)(param_1 + 0x30)) {
    *(undefined2 *)(param_1 + 0x38) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0x38) =
         *(undefined2 *)
          (*(longlong *)(param_1 + 0x18) + -2 + (longlong)*(int *)(param_1 + 0x30) * 2);
  }
  return;
}

