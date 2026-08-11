/* Ghidra address: 01b15530 */
/* Ghidra symbol: FUN_01b15530 */


void FUN_01b15530(longlong *param_1,undefined4 param_2,int param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_3;
  *(undefined4 *)(param_1[1] + lVar2 * 0x20) = param_2;
  FUN_00414ad0(param_1[1] + 8 + lVar2 * 0x20,param_4);
  puVar1 = (undefined8 *)(param_1[1] + 0x10 + lVar2 * 0x20);
  *puVar1 = *param_5;
  puVar1[1] = param_5[1];
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  (**(code **)(*param_1 + 0x10))(param_1,param_4,1);
  (**(code **)(*param_1 + 0x18))(param_1,param_5,1);
  return;
}

