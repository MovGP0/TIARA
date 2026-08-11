/* Ghidra address: 01959a80 */
/* Ghidra symbol: FUN_01959a80 */


void FUN_01959a80(longlong param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                 longlong param_6,byte param_7,char param_8,char param_9)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 in_R10;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  uint *local_78;
  uint local_70;
  undefined1 local_68;
  int local_50;
  int local_4c;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  local_50 = (int)param_2;
  local_4c = param_3;
  uVar3 = FUN_0040c770(*(double *)(param_6 + 0x18) * *(double *)(param_1 + 0xb0));
  bVar1 = *(byte *)(param_6 + 0x14);
  if (bVar1 < 8) {
    uVar4 = (int)CONCAT71((int7)((ulonglong)param_6 >> 8),1) << (bVar1 & 0x1f);
    uVar6 = (ulonglong)CONCAT31((int3)(uVar4 >> 8),(uVar4 & 0x21) != 0);
  }
  else {
    uVar6 = 0;
  }
  if ((char)uVar6 != '\0') {
    if (param_7 < 8) {
      bVar13 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (param_7 & 0x1f) & 0xcU) != 0;
    }
    else {
      bVar13 = false;
    }
    if (bVar13) {
      in_R10 = 0;
      local_50 = local_50 + (int)(uVar3 * (param_8 == '\0')) / 2;
      uVar2 = (longlong)(int)(uVar3 * (param_9 == '\0')) / 2;
      uVar6 = uVar2 & 0xffffffff;
      param_4 = param_4 - (int)uVar2;
    }
    else {
      in_R10 = 0;
      local_4c = local_4c + (int)(uVar3 * (param_8 == '\0')) / 2;
      uVar2 = (longlong)(int)(uVar3 * (param_9 == '\0')) / 2;
      uVar6 = uVar2 & 0xffffffff;
      param_5 = param_5 - (int)uVar2;
    }
  }
  if (bVar1 == 0) {
    local_38 = 0;
    local_34 = *(undefined4 *)(param_6 + 0x10);
    local_30 = 0;
    local_78 = (uint *)0x0;
    lVar7 = thunk_FUN_04164f7c(0x10100,uVar3,&local_38,0);
    if (lVar7 == 0) {
      local_78 = (uint *)CONCAT44(local_78._4_4_,param_5);
      FUN_01959760(param_1,local_50,local_4c,param_4);
    }
    else {
      uVar8 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x88));
      uVar8 = thunk_FUN_041a19a1(uVar8,lVar7);
      local_78 = (uint *)CONCAT44(local_78._4_4_,param_5);
      FUN_01959760(param_1,local_50,local_4c,param_4);
      uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x88));
      thunk_FUN_041a19a1(uVar9,uVar8);
      thunk_FUN_0416f828(lVar7);
    }
  }
  else if (bVar1 == 5) {
    uVar4 = uVar3;
    if (param_8 == '\0') {
      uVar4 = 0;
    }
    uVar11 = uVar3;
    if (param_9 == '\0') {
      uVar11 = 0;
    }
    if (param_7 < 8) {
      bVar13 = ((int)CONCAT71((int7)((ulonglong)in_R10 >> 8),1) << (param_7 & 0x1f) & 5U) != 0;
    }
    else {
      bVar13 = false;
    }
    uVar10 = -uVar4;
    uVar12 = -uVar11;
    if (bVar13) {
      uVar10 = uVar4;
      uVar12 = uVar11;
      uVar4 = -uVar4;
      uVar11 = -uVar11;
    }
    if (local_50 == param_4) {
      local_78 = (uint *)CONCAT44(local_78._4_4_,param_5 - uVar11);
      FUN_01959760(param_1,local_50 - uVar3,local_4c + uVar4,param_4 - uVar3);
    }
    else {
      local_78 = (uint *)CONCAT44(local_78._4_4_,param_5 - uVar3);
      FUN_01959760(param_1,local_50 + uVar4,local_4c - uVar3,param_4 - uVar11);
    }
    FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x78),
                 *(undefined4 *)(param_6 + 0x10));
    if (local_50 == param_4) {
      local_78 = (uint *)CONCAT44(local_78._4_4_,param_5 - uVar12);
      FUN_01959760(param_1,local_50 + uVar3,local_4c + uVar10,param_4 + uVar3);
    }
    else {
      local_78 = (uint *)CONCAT44(local_78._4_4_,param_5 + uVar3);
      FUN_01959760(param_1,local_50 + uVar10,local_4c + uVar3,param_4 - uVar12);
    }
  }
  else {
    if (bVar1 < 8) {
      bVar13 = ((int)CONCAT71((int7)(uVar6 >> 8),1) << (bVar1 & 0x1f) & 0xc0U) != 0;
    }
    else {
      bVar13 = false;
    }
    local_70 = uVar3;
    if (bVar13) {
      local_38 = 0;
      local_34 = *(undefined4 *)(param_6 + 0x10);
      local_30 = 0;
      uVar5 = 0x10007;
      if ((int)uVar3 < 2) {
        local_40 = 1;
        local_3c = 1;
        uVar5 = 0x10207;
      }
      else if (bVar1 == 7) {
        uVar5 = 0x10207;
        local_40 = uVar3;
        local_3c = uVar3;
      }
      else {
        local_40 = 0;
        local_3c = uVar3 * 2;
      }
      local_78 = &local_40;
      lVar7 = thunk_FUN_04164f7c(uVar5,uVar3,&local_38,2);
      if (lVar7 == 0) {
        local_78 = (uint *)CONCAT44(local_78._4_4_,param_5);
        local_68 = *(char *)(param_6 + 0x14) == '\x06';
        FUN_019597b0(auStack_98,local_50,local_4c,param_4);
      }
      else {
        uVar8 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x88));
        uVar8 = thunk_FUN_041a19a1(uVar8,lVar7);
        local_78 = (uint *)CONCAT44(local_78._4_4_,param_5);
        FUN_01959760(param_1,local_50,local_4c,param_4);
        uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x88));
        thunk_FUN_041a19a1(uVar9,uVar8);
        thunk_FUN_0416f828(lVar7);
      }
    }
    else {
      local_78 = (uint *)CONCAT44(local_78._4_4_,param_5);
      FUN_01959600(param_1,local_50,local_4c,param_4);
    }
  }
  return;
}

