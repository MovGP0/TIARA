/* Ghidra address: 00727d10 */
/* Ghidra symbol: FUN_00727d10 */


/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_00727d10(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  PCWSTR pWVar4;
  void **ppvVar5;
  code *pcVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 *local_a0;
  uint local_94;
  uint local_90;
  uint local_8c;
  longlong local_88;
  longlong local_80;
  uint local_74;
  uint local_6e;
  byte local_6a;
  byte local_69;
  longlong local_68;
  uint local_5c;
  ulonglong local_58;
  longlong local_50;
  bool local_42;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  longlong *local_28;
  longlong *local_20;
  
  local_a0 = auStack_f8;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_58 = 0;
  local_28 = (longlong *)0x0;
  iVar2 = FUN_0044f080();
  if (iVar2 < 6) {
    FUN_00410ae0(*param_1,&local_b8);
    local_b0 = local_b8;
    local_a8 = 0x11;
    local_d8 = 0;
    uVar3 = FUN_0044d8d0(&PTR_FUN_0071c108,1,PTR_PTR_020036f8,&local_b0);
    FUN_004134c0(uVar3);
  }
  local_42 = false;
  (**(code **)(*param_1 + 0x88))(param_1,&local_c0);
  FUN_0041b840(param_1 + 0x12,local_c0);
  if (param_1[0x12] != 0) {
    FUN_0041b840(&local_28,param_1[0x12]);
    if (param_1[0xf] != 0) {
      FUN_0043dd70(&local_b0,param_1[0xf]);
      (**(code **)(*local_28 + 0xc0))(local_28,&local_b0);
    }
    if (param_1[0x10] != 0) {
      uVar3 = FUN_00416740(param_1[0x10]);
      (**(code **)(*local_28 + 0xb0))(local_28,uVar3);
    }
    if (param_1[0x14] != 0) {
      uVar3 = FUN_00416740(param_1[0x14]);
      (**(code **)(*local_28 + 0x78))(local_28,uVar3);
    }
    if (param_1[0x15] != 0) {
      uVar3 = FUN_00416740(param_1[0x15]);
      (**(code **)(*local_28 + 0x98))(local_28,uVar3);
    }
    if (param_1[0x1a] != 0) {
      uVar3 = FUN_00416740(param_1[0x1a]);
      (**(code **)(*local_28 + 0x90))(local_28,uVar3);
    }
    if (param_1[0x1e] != 0) {
      uVar3 = FUN_00416740(param_1[0x1e]);
      (**(code **)(*local_28 + 0x88))(local_28,uVar3);
    }
    if (param_1[0x11] != 0) {
      pWVar4 = (PCWSTR)FUN_00416740(param_1[0x11]);
      FUN_0043dd70(&local_b0);
      ppvVar5 = (void **)FUN_0041b800(&local_58);
      local_74 = SHCreateItemFromParsingName(pWVar4,(IBindCtx *)0x0,(IID *)&local_b0,ppvVar5);
      if ((local_74 & 0x80000000) == 0) {
        (**(code **)(*local_28 + 0x60))(local_28,local_58);
      }
    }
    local_80 = param_1[0x18];
    if (0 < *(int *)(*(longlong *)(local_80 + 0x10) + 0x10)) {
      local_88 = local_80;
      FUN_00726e30(local_80,&local_c8);
      (**(code **)(*(longlong *)param_1[0x12] + 0x20))
                ((longlong *)param_1[0x12],*(undefined4 *)(*(longlong *)(local_88 + 0x10) + 0x10),
                 local_c8);
      (**(code **)(*local_28 + 0x28))(local_28,(int)param_1[0x17]);
    }
    local_5c = 0;
    local_6e = *(uint *)(param_1 + 0x1b);
    local_6a = 0;
    do {
      if (local_6a < 0x20 && (1 << (local_6a & 0x1f) & local_6e) != 0) {
        local_69 = local_6a;
        local_5c = local_5c | *(uint *)(&DAT_01e05cc8 + (ulonglong)local_6a * 4);
      }
      local_6a = local_6a + 1;
    } while (local_6a != 0x15);
    (**(code **)(*local_28 + 0x48))(local_28,local_5c);
    local_20 = (longlong *)FUN_00727050(param_1[0x13]);
    while (cVar1 = FUN_00726fe0(local_20), cVar1 != '\0') {
      local_50 = FUN_00726fc0(local_20);
      pWVar4 = (PCWSTR)FUN_00416740(*(undefined8 *)(local_50 + 0x18));
      FUN_0043dd70(&local_b0);
      ppvVar5 = (void **)FUN_0041b800(&local_58);
      local_8c = SHCreateItemFromParsingName(pWVar4,(IBindCtx *)0x0,(IID *)&local_b0,ppvVar5);
      if ((local_8c & 0x80000000) == 0) {
        (**(code **)(*local_28 + 0xa8))(local_28,local_58,0);
      }
    }
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + -0x20))(local_20,1);
    }
    pcVar6 = (code *)FUN_00411550(param_1,0xffef);
    (*pcVar6)(param_1);
    local_38 = FUN_007f94c0(param_2);
    local_40 = FUN_007f9260();
    local_41 = *PTR_DAT_02002b98;
    FUN_00782c20(0);
    local_68 = FUN_00727610(&DAT_00727240,1,param_1);
    if (local_68 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = local_68 + 0x28;
    }
    (**(code **)(*local_28 + 0x38))(local_28,lVar7,&local_2c);
    if ((((*(uint *)(param_1 + 0x1b) & 8) != 0) && (iVar2 = FUN_0044f080(), iVar2 == 6)) &&
       (iVar2 = FUN_0044f0a0(), iVar2 == 0)) {
      param_1[0x24] = (longlong)param_1;
      param_1[0x23] = (longlong)FUN_00727cf0;
    }
    local_90 = (**(code **)(*local_28 + 0x18))(local_28,param_2);
    local_42 = (local_90 & 0x80000000) == 0;
    if (local_42) {
      local_94 = (**(code **)(*param_1 + 0x90))(param_1);
      local_42 = (local_94 & 0x80000000) == 0;
    }
    (**(code **)(*local_28 + 0x40))(local_28,local_2c);
    FUN_007f95c0(local_38);
    thunk_FUN_04161dbd(param_2);
    FUN_007f9270(local_40);
    FUN_00782c20(local_41);
    FUN_0041b800(param_1 + 0x12);
  }
  FUN_00419430(&local_c8,&DAT_0069b140);
  FUN_0041b800(&local_c0);
  FUN_00414480(&local_b8);
  FUN_0041b800(&local_58);
  FUN_0041b800(&local_28);
  return local_42;
}

