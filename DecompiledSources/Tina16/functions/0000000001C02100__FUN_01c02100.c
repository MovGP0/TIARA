/* Ghidra address: 01c02100 */
/* Ghidra symbol: FUN_01c02100 */


void FUN_01c02100(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x4c4) != param_2) {
    *(int *)(param_1 + 0x4c4) = param_2;
    FUN_00654320(param_1,0);
  }
  return;
}

