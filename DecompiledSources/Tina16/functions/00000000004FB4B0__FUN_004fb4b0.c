/* Ghidra address: 004fb4b0 */
/* Ghidra symbol: FUN_004fb4b0 */


undefined8 FUN_004fb4b0(longlong param_1,undefined8 param_2,uint param_3)

{
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  FUN_00414ad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_3 * 8));
  return param_2;
}

