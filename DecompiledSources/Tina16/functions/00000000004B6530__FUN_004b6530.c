/* Ghidra address: 004b6530 */
/* Ghidra symbol: FUN_004b6530 */


void FUN_004b6530(longlong *param_1,uint param_2,undefined8 param_3)

{
  if ((char)param_1[9] != '\0') {
    FUN_004b3510(param_1,PTR_PTR_02002fe8,0);
  }
  if (*(uint *)(param_1 + 8) <= param_2) {
    FUN_004b3510(param_1,PTR_PTR_02004940,param_2);
  }
  (**(code **)(*param_1 + 0x130))(param_1);
  FUN_00414ad0(param_1[7] + (longlong)(int)param_2 * 0x10,param_3);
  (**(code **)(*param_1 + 0x128))(param_1);
  return;
}

