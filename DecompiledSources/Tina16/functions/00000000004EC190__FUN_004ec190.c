/* Ghidra address: 004ec190 */
/* Ghidra symbol: FUN_004ec190 */


undefined8 FUN_004ec190(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

