/* Ghidra address: 005c6760 */
/* Ghidra symbol: FUN_005c6760 */


undefined2 FUN_005c6760(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined2 **)(param_1 + 8);
}

