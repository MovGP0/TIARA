/* Ghidra address: 00d3f8c0 */
/* Ghidra symbol: FUN_00d3f8c0 */


void FUN_00d3f8c0(undefined8 param_1,longlong *param_2,undefined8 param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = *param_4;
  local_30 = param_4[1];
  iVar2 = (**(code **)(*param_2 + 0x48))(param_2);
  uVar1 = (longlong)iVar2 / 3;
  uVar3 = (**(code **)(*param_2 + 0x60))(param_2,(longlong)iVar2 % 3 & 0xffffffff);
  iVar6 = (int)uVar1;
  FUN_004238d0(local_48,0,0,uVar3,iVar6);
  FUN_004238d0(local_58,local_38 & 0xffffffff,local_38._4_4_,local_30 & 0xffffffff,
               local_38._4_4_ + iVar6);
  uVar5 = FUN_00609e10(param_2);
  FUN_005fead0(param_3,local_58,uVar5,local_48);
  uVar3 = (**(code **)(*param_2 + 0x60))(param_2);
  iVar2 = (**(code **)(*param_2 + 0x48))(param_2);
  FUN_004238d0(local_48,0,uVar1 & 0xffffffff,uVar3,iVar2 - iVar6);
  FUN_004238d0(local_58,local_38 & 0xffffffff,local_38._4_4_ + iVar6,local_30 & 0xffffffff,
               local_30._4_4_ - iVar6);
  uVar5 = FUN_00609e10(param_2);
  FUN_005fead0(param_3,local_58,uVar5,local_48);
  iVar2 = (**(code **)(*param_2 + 0x48))(param_2);
  uVar3 = (**(code **)(*param_2 + 0x60))(param_2);
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2);
  FUN_004238d0(local_48,0,iVar2 - iVar6,uVar3,uVar4);
  FUN_004238d0(local_58,local_38 & 0xffffffff,local_30._4_4_ - iVar6,local_30 & 0xffffffff,
               local_30._4_4_);
  uVar5 = FUN_00609e10(param_2);
  FUN_005fead0(param_3,local_58,uVar5,local_48);
  return;
}

