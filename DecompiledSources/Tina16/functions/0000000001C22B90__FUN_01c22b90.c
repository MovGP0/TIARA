/* Ghidra address: 01c22b90 */
/* Ghidra symbol: FUN_01c22b90 */


void FUN_01c22b90(undefined8 *param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  local_38._0_4_ = (int)uVar1;
  local_30._0_4_ = (int)uVar2;
  if (((int)local_38 < (int)local_30) &&
     (local_38._4_4_ = (int)((ulonglong)uVar1 >> 0x20),
     local_30._4_4_ = (int)((ulonglong)uVar2 >> 0x20), local_38._4_4_ < local_30._4_4_)) {
    local_38 = uVar1;
    local_30 = uVar2;
    FUN_005fdab0(param_4[0x10],param_3);
    FUN_005fdcb0(param_4[0x10],0);
    (**(code **)(*param_4 + 0xb8))(param_4,&local_38);
    local_38._4_4_ = local_38._4_4_ + 1;
    local_30 = CONCAT44(local_30._4_4_ + -1,(int)local_30 + -1);
    local_38._0_4_ = (int)local_38 + 1;
    (**(code **)(*param_4 + 0xb8))(param_4,&local_38);
    local_38 = CONCAT44(local_38._4_4_ + -1,(int)local_38 + -1);
    FUN_005fdab0(param_4[0x10],param_2);
    (**(code **)(*param_4 + 0xb8))(param_4,&local_38);
  }
  return;
}

