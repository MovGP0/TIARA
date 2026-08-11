/* Ghidra address: 00c4f320 */
/* Ghidra symbol: FUN_00c4f320 */


undefined8 FUN_00c4f320(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

