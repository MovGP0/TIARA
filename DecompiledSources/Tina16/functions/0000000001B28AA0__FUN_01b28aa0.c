/* Ghidra address: 01b28aa0 */
/* Ghidra symbol: FUN_01b28aa0 */


undefined8 FUN_01b28aa0(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

