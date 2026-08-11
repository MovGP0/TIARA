/* Ghidra address: 01a937f0 */
/* Ghidra symbol: FUN_01a937f0 */


undefined8 FUN_01a937f0(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

