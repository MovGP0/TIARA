/* Ghidra address: 01ca9830 */
/* Ghidra symbol: FUN_01ca9830 */


undefined8 FUN_01ca9830(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

