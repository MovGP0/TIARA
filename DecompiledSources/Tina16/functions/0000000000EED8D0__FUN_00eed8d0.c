/* Ghidra address: 00eed8d0 */
/* Ghidra symbol: FUN_00eed8d0 */


undefined8 FUN_00eed8d0(longlong param_1,undefined8 param_2,uint param_3)

{
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  FUN_00414bf0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_3 * 8));
  return param_2;
}

