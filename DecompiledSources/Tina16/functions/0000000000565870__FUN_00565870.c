/* Ghidra address: 00565870 */
/* Ghidra symbol: FUN_00565870 */


undefined8 FUN_00565870(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

