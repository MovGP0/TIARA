/* Ghidra address: 00b0adf0 */
/* Ghidra symbol: FUN_00b0adf0 */


void FUN_00b0adf0(longlong param_1)

{
  if (*(int *)(param_1 + 0x4c0) < *(int *)(param_1 + 0x644)) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x618),0);
    FUN_0084e470(param_1,1,*(int *)(param_1 + 0x644) + -1,0);
    *(int *)(param_1 + 0x644) = *(int *)(param_1 + 0x644) + -1;
  }
  return;
}

