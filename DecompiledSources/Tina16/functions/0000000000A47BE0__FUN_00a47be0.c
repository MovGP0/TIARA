/* Ghidra address: 00a47be0 */
/* Ghidra symbol: FUN_00a47be0 */


void FUN_00a47be0(longlong *param_1,ulonglong *param_2,int param_3,int param_4,undefined8 *param_5,
                 undefined1 *param_6)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined1 *local_70;
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  undefined4 local_54 [2];
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = *param_2;
  local_38 = param_2[1];
  local_30 = param_2[2];
  local_48 = param_3;
  local_44 = param_4;
  iVar3 = (**(code **)(*param_1 + 0x18))(param_1);
  iVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((local_48 == 0) || (local_44 == 0)) {
    uVar1 = *param_5;
    *param_5 = 0;
    FUN_00410f20(uVar1);
    *param_6 = 1;
  }
  else if ((iVar3 == 1) || (iVar4 == 1)) {
    FUN_00a47800(auStack_98,local_48,local_44);
  }
  else {
    local_4c = FUN_00a2c480(local_40 & 0xff,local_40._4_4_,local_48 - iVar3);
    local_78 = &local_4c;
    local_70 = local_58;
    FUN_00a2c500(local_38 & 0xff,0,local_48,iVar3);
    local_54[0] = FUN_00a2c480(local_38._4_1_,local_30 & 0xffffffff,local_44 - iVar4);
    local_78 = local_54;
    local_70 = local_5c;
    FUN_00a2c500(local_30._4_1_,0,local_44,iVar4);
    lVar5 = (**(code **)(*param_1 + 0x20))(param_1);
    if (((lVar5 == 0) && ((char)local_38 != '\0')) && (local_30._4_1_ != '\0')) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    *param_6 = uVar2;
    FUN_00a478d0(auStack_98);
    FUN_00a47a40(auStack_98,iVar3,iVar4);
  }
  return;
}

