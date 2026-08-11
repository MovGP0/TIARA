/* Ghidra address: 005c5af0 */
/* Ghidra symbol: FUN_005c5af0 */


undefined2 FUN_005c5af0(longlong param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  return *(undefined2 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 2);
}

