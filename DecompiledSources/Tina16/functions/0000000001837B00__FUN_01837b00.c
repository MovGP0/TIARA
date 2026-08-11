/* Ghidra address: 01837b00 */
/* Ghidra symbol: FUN_01837b00 */


longlong *
FUN_01837b00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            longlong param_5,char param_6,undefined1 param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  char local_81;
  longlong local_80;
  longlong local_78;
  int local_70;
  int local_6c;
  longlong *local_60;
  longlong local_58;
  ulonglong local_50;
  byte local_41;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_a0 = auStack_f8;
  local_b0 = 0;
  local_a8 = 0;
  local_50 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_90 = 0;
  local_58 = 0;
  local_78 = 0;
  FUN_00414b50(&local_50,L"Variant");
  local_81 = '\0';
  FUN_00414b50(&local_90,*(undefined8 *)(param_1 + 8));
  iVar1 = FUN_0181e3e0();
  local_6c = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_0181e3c0(param_2,local_6c);
      iVar2 = FUN_0043e420(*(undefined8 *)(lVar3 + 0x18),L"type");
      if (iVar2 == 0) {
        local_81 = local_6c != 0;
        uVar4 = FUN_0181e3c0(param_2,local_6c);
        FUN_0181e5f0(uVar4,&local_50,L"text");
        uVar4 = FUN_0181e3c0(param_2,local_6c);
        FUN_01837010(param_1,uVar4);
        break;
      }
      local_6c = local_6c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_41 = FUN_01837460(param_1,local_50);
  uVar5 = (ulonglong)local_41;
  if (uVar5 < 3) {
    if (uVar5 != 0) {
      if (uVar5 == 1) {
        FUN_00468820(&local_40,0);
        goto LAB_01837d26;
      }
      if (uVar5 != 2) goto LAB_01837d1a;
    }
LAB_01837ce4:
    FUN_00468530(&local_40,0,1);
  }
  else if (uVar5 - 3 < 2) {
    FUN_00468a10(&local_40,0);
  }
  else {
    if ((uVar5 == 5) || (uVar5 == 10)) goto LAB_01837ce4;
LAB_01837d1a:
    FUN_0046f180(&local_40);
  }
LAB_01837d26:
  uVar4 = FUN_0181e3e0();
  iVar1 = (int)uVar4;
  local_6c = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar4 = FUN_0181e3c0(param_2,local_6c);
      FUN_0181e5f0(uVar4,&local_a8,L"text");
      uVar4 = FUN_0043e420(local_a8,param_4);
      iVar2 = local_6c;
      if ((int)uVar4 == 0) goto LAB_01837e53;
      local_6c = local_6c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
code_r0x01837eb0:
  if (param_6 == '\0') {
    if (local_41 < 8) {
      bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (local_41 & 0x1f) & 0x18U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      local_d8 = local_50;
      local_60 = (longlong *)FUN_01847460(&PTR_FUN_01843978,1,param_4,local_41);
    }
    else {
      local_d8 = local_50;
      local_60 = (longlong *)FUN_01847460(&DAT_01843700,1,param_4,local_41);
    }
  }
  else {
    local_d8 = local_50;
    local_d0 = local_78 != 0;
    local_c8 = param_7;
    local_60 = (longlong *)FUN_01847a00(&PTR_FUN_01843af8,1,param_4,local_41);
  }
  (**(code **)(*local_60 + 8))(local_60,&local_40);
  local_60[6] = local_58;
  FUN_00414ad0(local_60 + 7,local_90);
  FUN_00414ad0(local_60 + 8,*(undefined8 *)(param_1 + 0x50));
  lVar3 = *(longlong *)(param_1 + 0x38);
  local_60[0xf] = *(longlong *)(lVar3 + 0x100);
  local_60[0x10] = *(longlong *)(lVar3 + 0x108);
  if ((local_78 != 0) && (param_5 != 0)) {
    FUN_01836fd0(param_1,&local_b0,param_2);
    local_d8 = local_b0;
    local_80 = FUN_0184f010(&PTR_FUN_018403d0,1,param_3,*(undefined8 *)(param_1 + 0x50));
    FUN_01847420(param_5,local_80);
    lVar3 = FUN_0184b540(&PTR_FUN_01846bd8,1,param_3);
    *(longlong *)(local_80 + 0x28) = lVar3;
    *(longlong **)(lVar3 + 0x30) = local_60;
    uVar4 = FUN_0181e3c0(local_78,0);
    uVar4 = FUN_0183a030(param_1,uVar4,param_3);
    *(undefined8 *)(local_80 + 0x30) = uVar4;
    FUN_01837210(param_1,local_60,uVar4);
    FUN_0184f2c0(local_80);
  }
  FUN_00414560(&local_b0,2);
  FUN_00414480(&local_90);
  FUN_00414480(&local_50);
  FUN_00460ba0(&local_40);
  return local_60;
LAB_01837e53:
  local_70 = iVar2 + 1;
  uVar4 = FUN_0181e3e0(param_2);
  if (local_70 < (int)uVar4) {
    if (local_81 == '\0') {
      lVar3 = FUN_0181e3c0(param_2,local_70);
      uVar4 = FUN_0043e420(*(undefined8 *)(lVar3 + 0x18),L"ident");
      if ((int)uVar4 == 0) goto code_r0x01837eb0;
    }
    lVar3 = FUN_0181e3c0(param_2,local_70);
    iVar1 = FUN_0043e420(*(undefined8 *)(lVar3 + 0x18),L"array");
    if (iVar1 == 0) {
      uVar4 = FUN_0181e3c0(param_2,local_70);
      FUN_01837650(auStack_f8,uVar4);
      iVar2 = local_70;
    }
    else {
      lVar3 = FUN_0181e3c0(param_2,local_70);
      iVar1 = FUN_0043e420(*(undefined8 *)(lVar3 + 0x18),L"init");
      iVar2 = local_70;
      if (iVar1 == 0) {
        if (param_5 == 0) {
          uVar4 = FUN_0181e3c0(param_2,local_70);
          FUN_01837990(auStack_f8,uVar4);
        }
        local_78 = FUN_0181e3c0(param_2,local_70);
        iVar2 = local_70;
      }
    }
    goto LAB_01837e53;
  }
  goto code_r0x01837eb0;
}

