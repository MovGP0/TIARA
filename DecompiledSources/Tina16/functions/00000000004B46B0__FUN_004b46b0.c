/* Ghidra address: 004b46b0 */
/* Ghidra symbol: FUN_004b46b0 */


void FUN_004b46b0(longlong *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_28 = 0;
  puVar1 = auStack_58;
  if (param_2 != param_3) {
    FUN_004b3260(param_1);
    (**(code **)(*param_1 + 0x18))(param_1,&local_28,param_2);
    local_20 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
    (**(code **)(*param_1 + 0x48))(param_1,param_2,0);
    (**(code **)(*param_1 + 0x98))(param_1,param_2);
    (**(code **)(*param_1 + 0xd0))(param_1,param_3,local_28,local_20);
    FUN_004b3390(param_1);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00414480(&local_28);
  return;
}

