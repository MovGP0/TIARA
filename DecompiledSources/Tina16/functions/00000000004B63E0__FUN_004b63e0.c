/* Ghidra address: 004b63e0 */
/* Ghidra symbol: FUN_004b63e0 */


void FUN_004b63e0(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  if ((char)param_1[9] != '\0') {
    FUN_004b3510(param_1,PTR_PTR_02002fe8,0);
  }
  if ((param_2 < 0) || ((int)param_1[8] < param_2)) {
    FUN_004b3510(param_1,PTR_PTR_02004940,param_2);
  }
  (**(code **)(*param_1 + 0x138))(param_1,param_2,param_3,param_4);
  return;
}

