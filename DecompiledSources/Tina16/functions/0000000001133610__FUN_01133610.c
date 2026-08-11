/* Ghidra address: 01133610 */
/* Ghidra symbol: FUN_01133610 */


undefined8 FUN_01133610(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

