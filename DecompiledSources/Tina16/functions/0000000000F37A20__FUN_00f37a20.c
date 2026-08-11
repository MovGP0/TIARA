/* Ghidra address: 00f37a20 */
/* Ghidra symbol: FUN_00f37a20 */


undefined8 FUN_00f37a20(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

