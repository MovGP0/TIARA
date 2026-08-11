/* Ghidra address: 009e86d0 */
/* Ghidra symbol: FUN_009e86d0 */


void FUN_009e86d0(longlong *param_1,int param_2,int param_3)

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
    FUN_009e76c0(param_1);
    (**(code **)(*param_1 + 0x18))(param_1,&local_28,param_2);
    local_20 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
    (**(code **)(*param_1 + 0x98))(param_1,param_2);
    (**(code **)(*param_1 + 0xd0))(param_1,param_3,local_28,local_20);
    FUN_009e77f0(param_1);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00414520(&local_28);
  return;
}

