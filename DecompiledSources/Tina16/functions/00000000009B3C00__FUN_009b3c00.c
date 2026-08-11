/* Ghidra address: 009b3c00 */
/* Ghidra symbol: FUN_009b3c00 */


undefined1 FUN_009b3c00(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined1 **)(param_1 + 8);
}

