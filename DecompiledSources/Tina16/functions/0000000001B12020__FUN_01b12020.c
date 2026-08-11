/* Ghidra address: 01b12020 */
/* Ghidra symbol: FUN_01b12020 */


undefined8 FUN_01b12020(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

