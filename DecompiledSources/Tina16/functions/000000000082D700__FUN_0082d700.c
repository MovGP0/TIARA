/* Ghidra address: 0082d700 */
/* Ghidra symbol: FUN_0082d700 */


undefined4 FUN_0082d700(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined4 **)(param_1 + 8);
}

