/* Ghidra address: 009a8610 */
/* Ghidra symbol: FUN_009a8610 */


void FUN_009a8610(longlong *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3;
  *(undefined4 *)(param_1[1] + lVar1 * 0x18) = param_2;
  *(undefined4 *)(param_1[1] + 4 + lVar1 * 0x18) = param_4;
  FUN_00417c40(param_1[1] + 8 + lVar1 * 0x18,param_5,&DAT_009427f8);
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  (**(code **)(*param_1 + 0x10))(param_1,param_4,1);
  (**(code **)(*param_1 + 0x18))(param_1,param_5,1);
  return;
}

