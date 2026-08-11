/* Ghidra address: 007a3790 */
/* Ghidra symbol: FUN_007a3790 */


undefined8 FUN_007a3790(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

