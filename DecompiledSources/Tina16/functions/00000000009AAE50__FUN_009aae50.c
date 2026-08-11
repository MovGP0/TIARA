/* Ghidra address: 009aae50 */
/* Ghidra symbol: FUN_009aae50 */


undefined8 FUN_009aae50(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

