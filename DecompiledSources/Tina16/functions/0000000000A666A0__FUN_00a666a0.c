/* Ghidra address: 00a666a0 */
/* Ghidra symbol: FUN_00a666a0 */


void FUN_00a666a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0xb8) + -4);
  }
  if (iVar1 < *(int *)(param_1 + 0x8c)) {
    *(undefined2 *)(param_1 + 0x8a) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0x8a) =
         *(undefined2 *)
          (*(longlong *)(param_1 + 0xb8) + -2 + (longlong)*(int *)(param_1 + 0x8c) * 2);
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  }
  return;
}

