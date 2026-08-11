/* Ghidra address: 01589040 */
/* Ghidra symbol: FUN_01589040 */


undefined1 FUN_01589040(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined1 **)(param_1 + 8);
}

