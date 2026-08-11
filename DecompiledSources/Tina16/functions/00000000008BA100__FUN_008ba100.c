/* Ghidra address: 008ba100 */
/* Ghidra symbol: FUN_008ba100 */


undefined8 FUN_008ba100(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

