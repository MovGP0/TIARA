/* Ghidra address: 004f2430 */
/* Ghidra symbol: FUN_004f2430 */


undefined8 FUN_004f2430(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

