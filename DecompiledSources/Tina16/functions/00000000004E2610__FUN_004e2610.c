/* Ghidra address: 004e2610 */
/* Ghidra symbol: FUN_004e2610 */


void FUN_004e2610(longlong *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3;
  *(undefined4 *)(param_1[1] + lVar1 * 0x10) = param_2;
  *(undefined4 *)(param_1[1] + 4 + lVar1 * 0x10) = param_4;
  FUN_0041b840(param_1[1] + 8 + lVar1 * 0x10,param_5);
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  (**(code **)(*param_1 + 0x10))(param_1,param_4,1);
  (**(code **)(*param_1 + 0x18))(param_1,param_5,1);
  return;
}

