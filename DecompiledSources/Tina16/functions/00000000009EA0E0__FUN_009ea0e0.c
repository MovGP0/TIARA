/* Ghidra address: 009ea0e0 */
/* Ghidra symbol: FUN_009ea0e0 */


undefined8 FUN_009ea0e0(longlong param_1,int param_2)

{
  if ((param_2 < 0) || (*(int *)(param_1 + 0x38) <= param_2)) {
    FUN_009e7910(param_1,PTR_PTR_02004940,param_2);
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8 + (longlong)param_2 * 0x10);
}

