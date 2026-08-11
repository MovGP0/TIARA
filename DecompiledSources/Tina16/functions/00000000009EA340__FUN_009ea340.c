/* Ghidra address: 009ea340 */
/* Ghidra symbol: FUN_009ea340 */


void FUN_009ea340(longlong *param_1,int param_2,undefined8 param_3)

{
  if ((char)param_1[8] != '\0') {
    FUN_009e7910(param_1,PTR_PTR_02002fe8,0);
  }
  if ((param_2 < 0) || ((int)param_1[7] <= param_2)) {
    FUN_009e7910(param_1,PTR_PTR_02004940,param_2);
  }
  (**(code **)(*param_1 + 0x130))(param_1);
  FUN_00414b90(param_1[6] + (longlong)param_2 * 0x10,param_3);
  (**(code **)(*param_1 + 0x128))(param_1);
  return;
}

