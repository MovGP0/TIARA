/* Ghidra address: 004ff190 */
/* Ghidra symbol: FUN_004ff190 */


undefined4 FUN_004ff190(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined4 **)(param_1 + 8);
}

