/* Ghidra address: 00eb2f50 */
/* Ghidra symbol: FUN_00eb2f50 */


undefined8 FUN_00eb2f50(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

