/* Ghidra address: 00f35380 */
/* Ghidra symbol: FUN_00f35380 */


void FUN_00f35380(longlong *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3;
  *(undefined4 *)(param_1[1] + lVar1 * 0x10) = param_2;
  *(undefined4 *)(param_1[1] + 4 + lVar1 * 0x10) = param_4;
  FUN_00414ad0(param_1[1] + 8 + lVar1 * 0x10,param_5);
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  (**(code **)(*param_1 + 0x10))(param_1,param_4,1);
  (**(code **)(*param_1 + 0x18))(param_1,param_5,1);
  return;
}

