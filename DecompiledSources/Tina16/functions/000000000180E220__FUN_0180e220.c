/* Ghidra address: 0180e220 */
/* Ghidra symbol: FUN_0180e220 */


void FUN_0180e220(longlong *param_1,undefined8 *param_2,undefined4 param_3,char param_4,char param_5
                 )

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  char local_5d;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = *param_2;
  local_30 = param_2[1];
  local_68 = param_1;
  local_5d = param_4;
  FUN_005fdab0(param_1[0x10],param_3);
  FUN_005fdcb0(local_68[0x10],0);
  FUN_005fd4e0(local_68[0xf],param_3);
  FUN_005fd670(local_68[0xf],0);
  FUN_005fd6d0(local_68[0xf],1);
  local_5c = (int)local_30 - (int)local_38;
  iVar2 = local_30._4_4_ - local_38._4_4_;
  uVar3 = 0;
  uVar4 = 0;
  if (local_5c % 2 == 0) {
    uVar3 = 0xffffffff;
  }
  if (iVar2 % 2 == 0) {
    uVar4 = 0xffffffff;
  }
  iVar1 = FUN_0040c770((double)(local_5c / 2) * 0.5,(longlong)local_5c % 2 & 0xffffffff);
  local_5c = local_5c + iVar1 * -2;
  local_5c = local_5c - local_5c % 2;
  iVar6 = (int)((longlong)local_5c / 2);
  iVar5 = iVar2 / 2 -
          (int)((longlong)
                ((ulonglong)(uint)(iVar6 >> 0x1f) << 0x20 | (longlong)local_5c / 2 & 0xffffffffU) /
               2);
  iVar2 = iVar1;
  if (local_5d == '\0') {
    iVar2 = iVar5;
    iVar5 = iVar1;
  }
  local_38 = CONCAT44(local_38._4_4_ + iVar5,(int)local_38 + iVar2);
  local_30 = CONCAT44(local_30._4_4_ - iVar5,(int)local_30 - iVar2);
  if (local_5d == '\0') {
    FUN_00423b50(&local_38,0,uVar4);
    iVar2 = iVar6;
    if (param_5 != '\0') {
      FUN_0180e210(auStack_88,&local_38,&local_30);
      iVar2 = -iVar6;
    }
    local_58 = FUN_00423990(local_38 & 0xffffffff,local_38._4_4_);
    local_50 = FUN_00423990(local_38 & 0xffffffff,local_38._4_4_ + local_5c);
    local_48 = FUN_00423990((int)local_38 + iVar2,local_38._4_4_ + iVar6);
    local_40 = FUN_00423990(local_38 & 0xffffffff,local_38._4_4_);
    (**(code **)(*local_68 + 0xd8))(local_68,&local_58,3);
  }
  else {
    FUN_00423b50(&local_38,uVar3,0);
    iVar2 = iVar6;
    if (param_5 != '\0') {
      FUN_0180e210(auStack_88,(longlong)&local_38 + 4,(longlong)&local_30 + 4);
      iVar2 = -iVar6;
    }
    local_58 = FUN_00423990(local_38 & 0xffffffff,local_38._4_4_);
    local_50 = FUN_00423990((int)local_38 + iVar6,local_38._4_4_ + iVar2);
    local_48 = FUN_00423990((int)local_38 + local_5c,local_38._4_4_);
    local_40 = FUN_00423990(local_38 & 0xffffffff,local_38._4_4_);
    (**(code **)(*local_68 + 0xd8))(local_68,&local_58,3);
  }
  return;
}

