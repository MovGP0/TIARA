/* Ghidra address: 009a2840 */
/* Ghidra symbol: FUN_009a2840 */


undefined8 FUN_009a2840(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

