/* Ghidra address: 0082e860 */
/* Ghidra symbol: FUN_0082e860 */


undefined8 FUN_0082e860(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

