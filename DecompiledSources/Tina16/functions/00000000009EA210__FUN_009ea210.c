/* Ghidra address: 009ea210 */
/* Ghidra symbol: FUN_009ea210 */


void FUN_009ea210(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  if ((char)param_1[8] != '\0') {
    FUN_009e7910(param_1,PTR_PTR_02002fe8,0);
  }
  if ((param_2 < 0) || ((int)param_1[7] < param_2)) {
    FUN_009e7910(param_1,PTR_PTR_02004940,param_2);
  }
  (**(code **)(*param_1 + 0x138))(param_1,param_2,param_3,param_4);
  return;
}

