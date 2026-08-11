/* Ghidra address: 01779ba0 */
/* Ghidra symbol: FUN_01779ba0 */


void FUN_01779ba0(longlong *param_1,undefined4 param_2,int param_3,undefined8 param_4,
                 undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3;
  *(undefined4 *)(param_1[1] + lVar1 * 0x18) = param_2;
  FUN_00414bf0(param_1[1] + 8 + lVar1 * 0x18,param_4);
  *(undefined8 *)(param_1[1] + 0x10 + lVar1 * 0x18) = param_5;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  (**(code **)(*param_1 + 0x10))(param_1,param_4,1);
  (**(code **)(*param_1 + 0x18))(param_1,param_5,1);
  return;
}

