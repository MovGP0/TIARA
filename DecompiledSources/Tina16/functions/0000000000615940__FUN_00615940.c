/* Ghidra address: 00615940 */
/* Ghidra symbol: FUN_00615940 */


undefined8 FUN_00615940(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

