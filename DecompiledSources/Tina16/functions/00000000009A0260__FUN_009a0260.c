/* Ghidra address: 009a0260 */
/* Ghidra symbol: FUN_009a0260 */


undefined8 FUN_009a0260(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

