/* Ghidra address: 00f38d10 */
/* Ghidra symbol: FUN_00f38d10 */


undefined8 FUN_00f38d10(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

