/* Ghidra address: 0099cf00 */
/* Ghidra symbol: FUN_0099cf00 */


undefined8 FUN_0099cf00(longlong param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 8);
}

