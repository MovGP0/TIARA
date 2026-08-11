/* Ghidra address: 005a7b70 */
/* Ghidra symbol: FUN_005a7b70 */


undefined8 FUN_005a7b70(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

