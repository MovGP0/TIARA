/* Ghidra address: 019b62c0 */
/* Ghidra symbol: FUN_019b62c0 */


void FUN_019b62c0(undefined2 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 1;
  for (; (iVar1 <= param_2 / 500 && (param_1 != (undefined2 *)0x0));
      param_1 = *(undefined2 **)(param_1 + 0x1f8)) {
    iVar1 = iVar1 + 1;
  }
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = (short)((longlong)param_2 % 500);
    FUN_019b6320(param_1 + 0x1f8);
  }
  return;
}

