/* Ghidra address: 009ea070 */
/* Ghidra symbol: FUN_009ea070 */


undefined8 FUN_009ea070(longlong param_1,undefined8 param_2,int param_3)

{
  if ((param_3 < 0) || (*(int *)(param_1 + 0x38) <= param_3)) {
    FUN_009e7910(param_1,PTR_PTR_02004940,param_3);
  }
  FUN_00414b90(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)param_3 * 0x10));
  return param_2;
}

