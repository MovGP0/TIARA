/* Ghidra address: 00827a10 */
/* Ghidra symbol: FUN_00827a10 */


int FUN_00827a10(longlong param_1,byte param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  byte local_res10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  ulonglong local_88;
  undefined1 *local_80;
  longlong *local_78;
  longlong local_70;
  undefined8 local_68;
  byte local_5d;
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined4 local_3c;
  int local_38;
  int local_34;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_80 = auStack_d8;
  local_res10 = param_2;
  if ((param_2 == 2) && (*(byte *)(param_1 + 0x2c) < 3)) {
    local_res10 = 0;
  }
  local_88 = (ulonglong)local_res10;
  local_34 = *(int *)(param_1 + 0x18 + local_88 * 4);
  if (local_34 != -1) {
    return local_34;
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8));
  iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8));
  if (iVar2 == 0 && iVar3 == 0) {
    return local_34;
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8));
  local_38 = iVar2 / (int)(uint)*(byte *)(param_1 + 0x2c);
  local_3c = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))
                       (*(longlong **)(param_1 + 8),
                        (longlong)iVar2 % (longlong)(int)(uint)*(byte *)(param_1 + 0x2c) &
                        0xffffffff);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    if (DAT_01e17888 == 0) {
      DAT_01e17888 = FUN_00827500(&DAT_00826c78,1);
    }
    uVar5 = FUN_00827600(DAT_01e17888,local_38,local_3c);
    *(undefined8 *)(param_1 + 0x10) = uVar5;
  }
  local_30 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  (**(code **)(*local_30 + 0x88))(local_30,local_38);
  (**(code **)(*local_30 + 0x70))(local_30,local_3c);
  local_b8 = local_3c;
  FUN_004238d0(local_4c,0,0,local_38);
  lVar6 = FUN_00609e10(local_30);
  FUN_005fdab0(*(undefined8 *)(lVar6 + 0x80),0xff00000f);
  uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8));
  uVar5 = FUN_00608880(uVar5);
  (**(code **)(*local_30 + 0x78))(local_30,uVar5);
  local_5d = local_res10;
  if (*(char *)(param_1 + 0x2c) <= (char)local_res10) {
    local_5d = 0;
  }
  local_b8 = local_3c;
  FUN_004238d0(local_5c,(uint)local_5d * local_38,0,(local_5d + 1) * local_38);
  if (local_res10 != 0) {
    if (local_res10 == 1) {
      local_28 = (longlong *)0x0;
      local_20 = (longlong *)0x0;
      local_28 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      (**(code **)(*local_20 + 0x10))(local_20,*(undefined8 *)(param_1 + 8));
      (**(code **)(*local_20 + 0xf8))(local_20,1);
      if (*(byte *)(param_1 + 0x2c) < 2) {
        (**(code **)(*local_28 + 0x10))(local_28,*(undefined8 *)(param_1 + 8));
        (**(code **)(*local_28 + 0xf8))(local_28,1);
        lVar6 = FUN_00609e10(local_28);
        FUN_005fdab0(*(undefined8 *)(lVar6 + 0x80),0);
        (**(code **)(*local_28 + 0x88))(local_28,local_38);
        cVar1 = FUN_00609f50(local_28);
        if (cVar1 != '\0') {
          lVar6 = FUN_00609e10(local_28);
          FUN_005fc860(*(undefined8 *)(lVar6 + 0x70),0xffffff);
          FUN_0060b9b0(local_28,0);
          lVar6 = FUN_00609e10(local_28);
          FUN_005fdab0(*(undefined8 *)(lVar6 + 0x80),0xffffff);
        }
        FUN_0060b9b0(local_28,1);
        local_78 = (longlong *)FUN_00609e10(local_30);
        FUN_005fdab0(local_78[0x10],0xff00000f);
        (**(code **)(*local_78 + 0xa8))(local_78,local_4c);
        FUN_005fdab0(local_78[0x10],0xff000014);
        uVar5 = FUN_005ffa40(local_78);
        thunk_FUN_0412a071(uVar5,0);
        uVar5 = FUN_005ffa40(local_78);
        thunk_FUN_03e3a7dc(uVar5,0xffffff);
        uVar5 = FUN_005ffa40(local_78);
        uVar7 = FUN_00609e10(local_28);
        local_b0 = FUN_005ffa40(uVar7);
        local_b8 = local_3c;
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0xe20746;
        thunk_FUN_0415fcd2(uVar5,1,1,local_38);
        FUN_005fdab0(local_78[0x10],0xff000010);
        uVar5 = FUN_005ffa40(local_78);
        thunk_FUN_0412a071(uVar5,0);
        uVar5 = FUN_005ffa40(local_78);
        thunk_FUN_03e3a7dc(uVar5,0xffffff);
        uVar5 = FUN_005ffa40(local_78);
        uVar7 = FUN_00609e10(local_28);
        local_b0 = FUN_005ffa40(uVar7);
        local_b8 = local_3c;
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0xe20746;
        thunk_FUN_0415fcd2(uVar5,0,0,local_38);
      }
      else {
        local_70 = FUN_00609e10(local_30);
        uVar5 = FUN_00609e10(local_20);
        FUN_005fead0(local_70,local_4c,uVar5,local_5c);
        FUN_0060b9b0(local_28,1);
        (**(code **)(*local_28 + 0x88))(local_28,local_38);
        (**(code **)(*local_28 + 0x70))(local_28,local_3c);
        lVar6 = FUN_00609e10(local_20);
        FUN_005fdab0(*(undefined8 *)(lVar6 + 0x80),0xffffff);
        uVar5 = FUN_00609e10(local_28);
        uVar7 = FUN_00609e10(local_20);
        FUN_005fead0(uVar5,local_4c,uVar7,local_5c);
        FUN_005fdab0(*(undefined8 *)(local_70 + 0x80),0xff000014);
        local_68 = FUN_005ffa40(local_70);
        thunk_FUN_0412a071(local_68,0);
        thunk_FUN_03e3a7dc(local_68,0xffffff);
        uVar5 = FUN_00609e10(local_28);
        local_b0 = FUN_005ffa40(uVar5);
        local_b8 = local_3c;
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0xe20746;
        thunk_FUN_0415fcd2(local_68,0,0,local_38);
        lVar6 = FUN_00609e10(local_20);
        FUN_005fdab0(*(undefined8 *)(lVar6 + 0x80),0x808080);
        uVar5 = FUN_00609e10(local_28);
        uVar7 = FUN_00609e10(local_20);
        FUN_005fead0(uVar5,local_4c,uVar7,local_5c);
        FUN_005fdab0(*(undefined8 *)(local_70 + 0x80),0xff000010);
        local_68 = FUN_005ffa40(local_70);
        thunk_FUN_0412a071(local_68,0);
        thunk_FUN_03e3a7dc(local_68,0xffffff);
        uVar5 = FUN_00609e10(local_28);
        local_b0 = FUN_005ffa40(uVar5);
        local_b8 = local_3c;
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0xe20746;
        thunk_FUN_0415fcd2(local_68,0,0,local_38);
        lVar6 = FUN_00609e10(local_20);
        uVar4 = FUN_005fbf20(*(undefined4 *)(param_1 + 0x28));
        FUN_005fdab0(*(undefined8 *)(lVar6 + 0x80),uVar4);
        uVar5 = FUN_00609e10(local_28);
        uVar7 = FUN_00609e10(local_20);
        FUN_005fead0(uVar5,local_4c,uVar7,local_5c);
        FUN_005fdab0(*(undefined8 *)(local_70 + 0x80),0xff00000f);
        local_68 = FUN_005ffa40(local_70);
        thunk_FUN_0412a071(local_68,0);
        thunk_FUN_03e3a7dc(local_68,0xffffff);
        uVar5 = FUN_00609e10(local_28);
        local_b0 = FUN_005ffa40(uVar5);
        local_b8 = local_3c;
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0xe20746;
        thunk_FUN_0415fcd2(local_68,0,0,local_38);
      }
      FUN_00410f20(local_20);
      FUN_00410f20(local_28);
      uVar4 = FUN_00827470(*(undefined8 *)(param_1 + 0x10),local_30,0x20000000);
      *(undefined4 *)(param_1 + 0x1c) = uVar4;
      goto code_r0x0082835f;
    }
    if (1 < (byte)(local_res10 - 2)) goto code_r0x0082835f;
  }
  uVar5 = FUN_00609e10(local_30);
  uVar7 = FUN_00609e10(*(undefined8 *)(param_1 + 8));
  FUN_005fead0(uVar5,local_4c,uVar7,local_5c);
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x58) == '\x01') {
    uVar4 = FUN_00827470(*(undefined8 *)(param_1 + 0x10),local_30,*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x18 + local_88 * 4) = uVar4;
  }
  else {
    uVar4 = FUN_00827470(*(undefined8 *)(param_1 + 0x10),local_30,0x20000000);
    *(undefined4 *)(param_1 + 0x18 + local_88 * 4) = uVar4;
  }
code_r0x0082835f:
  FUN_00410f20(local_30);
  local_34 = *(int *)(param_1 + 0x18 + (ulonglong)local_res10 * 4);
  FUN_00609160(*(undefined8 *)(param_1 + 8));
  return local_34;
}

