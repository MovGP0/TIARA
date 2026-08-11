/* Ghidra address: 0099db60 */
/* Ghidra symbol: FUN_0099db60 */


undefined8 FUN_0099db60(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

