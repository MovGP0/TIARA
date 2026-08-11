/* Ghidra address: 017894a0 */
/* Ghidra symbol: FUN_017894a0 */


undefined4 FUN_017894a0(longlong param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 4);
}

