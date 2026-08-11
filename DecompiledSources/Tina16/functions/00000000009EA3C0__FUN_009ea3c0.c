/* Ghidra address: 009ea3c0 */
/* Ghidra symbol: FUN_009ea3c0 */


void FUN_009ea3c0(longlong *param_1,int param_2,undefined8 param_3)

{
  if ((param_2 < 0) || ((int)param_1[7] <= param_2)) {
    FUN_009e7910(param_1,PTR_PTR_02004940,param_2);
  }
  (**(code **)(*param_1 + 0x130))(param_1);
  *(undefined8 *)(param_1[6] + 8 + (longlong)param_2 * 0x10) = param_3;
  (**(code **)(*param_1 + 0x128))(param_1);
  return;
}

