/* Ghidra address: 004f5b30 */
/* Ghidra symbol: FUN_004f5b30 */


undefined8 FUN_004f5b30(longlong param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 8);
}

