/* Ghidra address: 01d6a080 */
/* Ghidra symbol: FUN_01d6a080 */


undefined8 FUN_01d6a080(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

