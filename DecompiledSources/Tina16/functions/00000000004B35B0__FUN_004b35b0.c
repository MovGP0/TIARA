/* Ghidra address: 004b35b0 */
/* Ghidra symbol: FUN_004b35b0 */


void FUN_004b35b0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_28 = 0;
  FUN_004b3260(param_1);
  (**(code **)(*param_1 + 0x18))(param_1,&local_28,param_2);
  local_20 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
  (**(code **)(*param_1 + 0x18))(param_1,&local_38,param_3);
  (**(code **)(*param_1 + 0x40))(param_1,param_2,local_38);
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_3);
  (**(code **)(*param_1 + 0x48))(param_1,param_2,uVar1);
  (**(code **)(*param_1 + 0x40))(param_1,param_3,local_28);
  (**(code **)(*param_1 + 0x48))(param_1,param_3,local_20);
  FUN_004b3390(param_1);
  FUN_00414480(&local_38);
  FUN_00414480(&local_28);
  return;
}

