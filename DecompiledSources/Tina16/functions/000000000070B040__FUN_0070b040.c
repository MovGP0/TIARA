/* Ghidra address: 0070b040 */
/* Ghidra symbol: FUN_0070b040 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0070b040(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,char param_6,char param_7,char param_8)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  uint7 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint local_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined1 local_94 [12];
  int local_88;
  int local_84 [8];
  uint local_64;
  undefined4 local_58;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar8 = (uint7)((ulonglong)param_4 >> 8) & 0xffffff;
  local_38 = *param_3;
  local_30 = param_3[1];
  FUN_0040d200(local_84 + 1,0x48,0);
  local_84[1] = 4;
  thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x78),0x120b,(longlong)(int)param_4,local_84 + 1);
  if (param_8 == '\0') {
    if (param_7 == '\0') {
      if (param_6 == '\0') {
        uVar7 = (undefined4)CONCAT71(uVar8,2);
      }
      else {
        uVar7 = (undefined4)CONCAT71(uVar8,3);
      }
    }
    else {
      uVar7 = (undefined4)CONCAT71(uVar8,4);
    }
  }
  else {
    uVar7 = (undefined4)CONCAT71(uVar8,2);
  }
  plVar3 = (longlong *)FUN_00777cd0();
  (**(code **)(*plVar3 + 0x138))(plVar3,local_94,uVar7);
  uVar4 = FUN_00777cd0();
  uVar5 = FUN_005ffa40(param_2);
  uVar9 = 0;
  FUN_00778dc0(uVar4,uVar5,local_94,&local_38,0,0);
  lVar6 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x78),0x1209,0,0);
  local_84[1] = 0x24;
  FUN_00423b10(&local_38,0xfffffffe,0xfffffffe);
  local_30 = CONCAT44(local_30._4_4_,(int)local_30 + -3);
  local_84[0] = 0;
  local_ac = 0x8024;
  local_38._0_4_ = (int)local_38 + 3;
  FUN_004238d0(&local_a4,0,0,0,uVar9 & 0xffffffff00000000);
  puVar10 = &local_a4;
  FUN_00785c70(param_1,param_2,local_94,param_5,puVar10,0x420);
  uVar7 = (undefined4)((ulonglong)puVar10 >> 0x20);
  iVar1 = FUN_004230a0(&local_a4);
  if ((local_64 & 1) == 1) {
    local_ac = 0x8026;
  }
  else if ((local_64 & 2) == 2) {
    local_ac = 0x8025;
  }
  if (lVar6 != 0) {
    iVar2 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x78),0x120b,(longlong)(int)param_4,
                               local_84 + 1);
    if ((iVar2 != 0) && ((local_64 & 0x800) == 0x800)) {
      thunk_FUN_0400423a(lVar6,local_84,&local_88);
      local_a4._0_4_ = (int)local_38;
      local_a4._4_4_ = local_38._4_4_;
      uStack_9c = local_30;
      iVar2 = FUN_004230c0(&local_38);
      uVar9 = (longlong)local_88 % 2 & 0xffffffff;
      iVar2 = (local_38._4_4_ + iVar2 / 2) - local_88 / 2;
      local_a4 = CONCAT44(iVar2,(int)local_a4);
      uStack_9c = CONCAT44(iVar2 + local_88,(undefined4)uStack_9c);
      if ((local_ac & 2) == 2) {
        iVar1 = (((int)local_30 - iVar1) - local_84[0]) + -10;
        local_a4 = CONCAT44(iVar2,iVar1);
        if (iVar1 < (int)local_38) {
          local_a4 = CONCAT44(iVar2,(int)local_38);
          local_38._0_4_ = (int)local_38 + local_84[0] + 10;
        }
      }
      else if ((local_ac & 1) == 1) {
        iVar2 = FUN_004230a0(&local_38,uVar9);
        iVar1 = iVar1 + local_84[0] + 10;
        uVar9 = (longlong)iVar1 % 2 & 0xffffffff;
        iVar1 = ((int)local_38 + iVar2 / 2) - iVar1 / 2;
        local_a4 = CONCAT44(local_a4._4_4_,iVar1);
        if (iVar1 < (int)local_38) {
          local_a4 = CONCAT44(local_a4._4_4_,(int)local_38);
          local_38._0_4_ = (int)local_38 + local_84[0] + 10;
        }
        else {
          local_38._0_4_ = iVar1 + local_84[0] + 10;
        }
      }
      else {
        local_38._0_4_ = (int)local_38 + local_84[0] + 10;
      }
      uVar4 = FUN_005ffa40(param_2,uVar9);
      thunk_FUN_04153868(lVar6,local_58,uVar4,local_a4 & 0xffffffff,CONCAT44(uVar7,local_a4._4_4_),1
                        );
    }
  }
  if (local_84[0] == 0) {
    local_38._0_4_ = (int)local_38 + 2;
  }
  FUN_00785c70(param_1,param_2,local_94,param_5,&local_38,local_ac);
  return;
}

