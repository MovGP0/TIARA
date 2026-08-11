/* Ghidra address: 014dd6c0 */
/* Ghidra symbol: FUN_014dd6c0 */


longlong *
FUN_014dd6c0(longlong *param_1,short *param_2,longlong param_3,undefined8 param_4,int *param_5,
            undefined8 param_6)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *local_1e0;
  int local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158 [256];
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong local_40 [2];
  
  local_1c0 = 0;
  local_1c8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_190 = 0;
  local_198 = 0;
  local_180 = 0;
  local_188 = 0;
  local_170 = 0;
  local_178 = 0;
  local_160 = 0;
  local_168 = 0;
  local_50[0] = 0;
  local_58 = 0;
  iVar1 = *param_5;
  iVar6 = *param_5;
  iVar3 = *param_5;
  *param_5 = *param_5 + 3;
  local_1e0 = (longlong *)FUN_014db750(0x42);
  FUN_017bf050(local_1e0,0,param_2);
  *(bool *)((longlong)local_1e0 + 0x531) = *param_2 == 0x58;
  (**(code **)(*local_1e0 + 0x208))(local_1e0,0,iVar1,0);
  FUN_0043f750(&local_58,iVar1);
  FUN_00416ba0(local_50,L"InternalNode_",local_58);
  FUN_00416910(local_158,local_50[0],0xff);
  (**(code **)(*local_1e0 + 0x238))(local_1e0,0,local_158);
  (**(code **)(*local_1e0 + 0x208))(local_1e0,1,0,0);
  FUN_0043f750(&local_168,0);
  FUN_00416ba0(&local_160,L"InternalNode_",local_168);
  FUN_00416910(local_158,local_160,0xff);
  (**(code **)(*local_1e0 + 0x238))(local_1e0,1,local_158);
  (**(code **)(*local_1e0 + 0x208))(local_1e0,2,iVar6 + 1,0);
  FUN_0043f750(&local_178,iVar6 + 1);
  FUN_00416ba0(&local_170,L"InternalNode_",local_178);
  FUN_00416910(local_158,local_170,0xff);
  (**(code **)(*local_1e0 + 0x238))(local_1e0,2,local_158);
  (**(code **)(*local_1e0 + 0x208))(local_1e0,3,iVar3 + 2,0);
  FUN_0043f750(&local_188,iVar3 + 2);
  FUN_00416ba0(&local_180,L"InternalNode_",local_188);
  FUN_00416910(local_158,local_180,0xff);
  (**(code **)(*local_1e0 + 0x238))(local_1e0,3,local_158);
  uVar2 = (**(code **)(*local_1e0 + 0x2c8))(local_1e0);
  lVar4 = FUN_00409570(uVar2);
  local_1e0[0x18] = lVar4;
  FUN_01d38290(local_1e0,1);
  (**(code **)(*local_1e0 + 0x2d0))(local_1e0,0,local_40);
  FUN_00409a70(PTR_DAT_020048e0,*(undefined8 *)(*(longlong *)(local_40[0] + 0x26) + 9),
               *(undefined2 *)(*(longlong *)(local_40[0] + 0x26) + 0x23));
  (**(code **)(*param_1 + 0x20))(param_1,local_1e0);
  iVar3 = *(int *)(param_3 + 0x10) / 2;
  local_1d0 = 0;
  iVar6 = iVar3;
  if (iVar3 - 1U < 0x80000000) {
    do {
      local_1e0 = (longlong *)FUN_014db750(0x41);
      FUN_017bf050(local_1e0,0,param_2);
      *(bool *)((longlong)local_1e0 + 0x531) = *param_2 == 0x58;
      uVar5 = FUN_01d347d0(param_3,local_1d0 * 2);
      FUN_014dbb80(local_1e0,0,uVar5,param_6);
      uVar5 = FUN_01d347d0(param_3,local_1d0 * 2 + 1);
      FUN_014dbb80(local_1e0,1,uVar5,param_6);
      if (local_1d0 == 0) {
        (**(code **)(*local_1e0 + 0x208))(local_1e0,2,iVar1,0);
        FUN_0043f750(&local_198,iVar1);
        FUN_00416ba0(&local_190,L"InternalNode_",local_198);
        FUN_00416910(local_158,local_190,0xff);
        (**(code **)(*local_1e0 + 0x238))(local_1e0,2,local_158);
      }
      else {
        (**(code **)(*local_1e0 + 0x208))(local_1e0,2,*param_5,0);
        FUN_0043f750(&local_1a8,*param_5);
        FUN_00416ba0(&local_1a0,L"InternalNode_",local_1a8);
        FUN_00416910(local_158,local_1a0,0xff);
        (**(code **)(*local_1e0 + 0x238))(local_1e0,2,local_158);
        *param_5 = *param_5 + 1;
      }
      if (local_1d0 == iVar3 + -1) {
        (**(code **)(*local_1e0 + 0x208))(local_1e0,3,0,0);
        FUN_0043f750(&local_1b8,0);
        FUN_00416ba0(&local_1b0,L"InternalNode_",local_1b8);
        FUN_00416910(local_158,local_1b0,0xff);
        (**(code **)(*local_1e0 + 0x238))(local_1e0,3,local_158);
      }
      else {
        (**(code **)(*local_1e0 + 0x208))(local_1e0,3,*param_5,0);
        FUN_0043f750(&local_1c8,*param_5);
        FUN_00416ba0(&local_1c0,L"InternalNode_",local_1c8);
        FUN_00416910(local_158,local_1c0,0xff);
        (**(code **)(*local_1e0 + 0x238))(local_1e0,3,local_158);
      }
      uVar2 = (**(code **)(*local_1e0 + 0x2c8))(local_1e0);
      lVar4 = FUN_00409570(uVar2);
      local_1e0[0x18] = lVar4;
      FUN_01d38290(local_1e0,1);
      (**(code **)(*param_1 + 0x20))(param_1);
      local_1d0 = local_1d0 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_014dd5b0(param_1,local_1e0,param_4,iVar3);
  FUN_00414560(&local_1c8,0xe);
  FUN_00414560(&local_58,2);
  return local_1e0;
}

