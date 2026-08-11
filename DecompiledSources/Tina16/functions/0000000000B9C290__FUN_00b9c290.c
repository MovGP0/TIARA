/* Ghidra address: 00b9c290 */
/* Ghidra symbol: FUN_00b9c290 */


void FUN_00b9c290(longlong param_1,undefined2 param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x10)) {
    FUN_00b9c140(param_1);
  }
  lVar1 = FUN_00414de0(param_1 + 8);
  *(undefined2 *)(lVar1 + -2 + (longlong)*(int *)(param_1 + 0x10) * 2) = param_2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

