/* Ghidra address: 011598d0 */
/* Ghidra symbol: FUN_011598d0 */


void FUN_011598d0(ulonglong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                 longlong param_5,undefined8 param_6,undefined8 *param_7,char param_8,byte param_9,
                 char param_10,undefined8 param_11,ushort param_12,int param_13)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 local_res20;
  undefined1 auStack_c68 [32];
  wchar_t *local_c48;
  undefined8 local_c40;
  longlong *local_c38;
  undefined8 *local_c30;
  ulonglong local_c28;
  undefined1 *local_c20;
  uint local_c18;
  longlong *local_c10;
  undefined1 *local_c08;
  undefined4 local_c00;
  undefined4 local_bf8;
  undefined8 local_be0;
  undefined8 local_bd8;
  undefined8 local_bd0;
  undefined8 *local_bc8;
  undefined8 local_bc0;
  undefined8 local_bb8;
  undefined8 local_bb0;
  undefined8 local_ba8;
  undefined8 local_ba0;
  undefined8 *local_b98;
  undefined8 local_b90;
  undefined8 local_b88;
  undefined8 local_b80;
  undefined8 local_b78;
  undefined8 local_b70;
  undefined8 local_b68;
  undefined8 local_b60;
  undefined8 *local_b58;
  undefined8 local_b50;
  undefined8 local_b48;
  undefined8 local_b40;
  undefined8 local_b38;
  undefined8 local_b30;
  undefined8 *local_b28;
  undefined8 local_b20;
  undefined8 local_b18;
  undefined8 local_b10;
  undefined8 local_b08;
  undefined8 local_b00;
  undefined8 local_af8;
  undefined8 *local_af0;
  undefined8 local_ae8;
  undefined8 local_ae0;
  undefined8 local_ad8;
  undefined8 local_ad0;
  undefined8 local_ac8;
  undefined8 local_ac0;
  undefined1 local_ab8 [16];
  undefined8 local_aa8;
  undefined8 local_aa0;
  undefined8 local_a98;
  undefined8 local_a90;
  undefined8 local_a88;
  undefined1 *local_a80;
  longlong local_a68;
  longlong local_a60;
  longlong local_a58;
  int local_a4c;
  longlong local_a48;
  int local_a3c;
  longlong local_a38;
  longlong local_a30;
  longlong local_a28;
  int local_a1c;
  longlong local_a18;
  int local_a0c;
  longlong local_a08;
  int local_9fc;
  int local_9f8;
  char local_9f1;
  double local_9f0;
  undefined1 local_9e2;
  undefined1 local_9e1;
  undefined8 *local_9e0;
  undefined8 local_9d8;
  undefined8 *local_9d0;
  undefined8 local_9c8;
  int local_9bc;
  ulonglong local_9b8;
  undefined8 local_9b0;
  undefined8 local_9a8;
  longlong *local_9a0;
  undefined1 *local_998;
  longlong local_990;
  undefined8 local_988;
  int local_8cf;
  char local_5eb;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_a80 = auStack_c68;
  local_be0 = 0;
  local_bd8 = 0;
  local_bd0 = 0;
  local_bc0 = 0;
  local_bc8 = (undefined8 *)0x0;
  local_bb8 = 0;
  local_bb0 = 0;
  local_ba8 = 0;
  local_ba0 = 0;
  local_b90 = 0;
  local_b98 = (undefined8 *)0x0;
  local_b88 = 0;
  local_b80 = 0;
  local_b78 = 0;
  local_b70 = 0;
  local_b68 = 0;
  local_b60 = 0;
  local_b50 = 0;
  local_b58 = (undefined8 *)0x0;
  local_b48 = 0;
  local_b40 = 0;
  local_b38 = 0;
  local_b30 = 0;
  local_b20 = 0;
  local_b28 = (undefined8 *)0x0;
  local_b18 = 0;
  local_b10 = 0;
  local_b08 = 0;
  local_b00 = 0;
  local_af8 = 0;
  local_ae8 = 0;
  local_af0 = (undefined8 *)0x0;
  local_ae0 = 0;
  local_ad8 = 0;
  local_ad0 = 0;
  local_ac8 = 0;
  local_ac0 = 0;
  local_aa8 = 0;
  local_a98 = 0;
  local_a90 = 0;
  local_a88 = 0;
  local_9c8 = 0;
  local_9d0 = (undefined8 *)0x0;
  local_9d8 = 0;
  local_9e0 = (undefined8 *)0x0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  puVar10 = param_7;
  puVar11 = &local_988;
  for (lVar9 = 0x127; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  local_res20 = param_4;
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  FUN_004179d0(&local_988,&DAT_01d0d0b8);
  if (param_2 != 0) {
    local_9b8 = 0;
    local_9a0 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    local_9f1 = FUN_01158f80(param_2);
    param_9 = 0;
    if (local_5eb == '\0') {
      local_9e1 = 0;
    }
    else {
      local_9e1 = 2;
    }
    if (param_5 == 0) {
      FUN_00414480(&local_9d8);
    }
    else {
      FUN_00414480(local_30);
      local_9fc = param_13 + 1;
      FUN_0043f750(local_30,local_9fc);
      local_c48 = L".wmf";
      FUN_00416cd0(&local_a88,3,&DAT_0115c65c,local_30[0]);
      local_c48 = (wchar_t *)CONCAT71(local_c48._1_7_,3);
      FUN_00450070(&local_9d8,param_5,L".wmf",local_a88);
      FUN_00414480(local_30);
    }
    FUN_01158fc0(&local_9e0,param_1);
    if (local_9f1 == '\0') {
      local_9e2 = 1;
      FUN_00de8980(&local_9d0,0x11a,param_6);
      local_9a8 = FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,param_2);
    }
    else {
      local_9e2 = 0;
      FUN_00de8980(&local_9d0,0x122,param_6);
      local_9a8 = FUN_01cc6f70(&PTR_FUN_01cb8ae0,1,param_2);
    }
    FUN_004414c0(&local_a90,local_9d8,L".tdr");
    cVar1 = FUN_00440a20(local_a90,1);
    if (cVar1 == '\0') {
      uVar8 = FUN_00609e10(param_3);
      local_aa0 = FUN_00498310(0,0);
      local_c40 = &local_aa0;
      local_c30 = &local_988;
      local_c48 = (wchar_t *)uVar8;
      local_c38 = (longlong *)param_1;
      local_998 = (undefined1 *)FUN_01acdf10(&PTR_FUN_01ac9770,1,local_9b8,0);
      FUN_00414b50(&local_9c8,L"AC Ampli");
      FUN_01ae5ef0(local_998,local_9c8);
      (**(code **)(*local_9a0 + 0x80))(local_9a0,local_9c8,local_998);
      local_990 = 0;
      local_c48 = (wchar_t *)local_9e0;
      local_c40 = (undefined8 *)((ulonglong)local_c40 & 0xffffffffffffff00);
      local_c38 = (longlong *)0x0;
      local_990 = FUN_01adfeb0(local_998,param_2,0,0);
      if (local_990 != 0) {
        local_c48 = (wchar_t *)local_9e0;
        FUN_01ae1590(local_998,param_11,0,0);
      }
      if (local_990 == 0) {
        FUN_00de8980(&local_aa8,0x129,param_6);
        local_c48 = (wchar_t *)CONCAT71(local_c48._1_7_,local_9e1);
        local_c40 = (undefined8 *)CONCAT71(local_c40._1_7_,1);
        local_c38 = (longlong *)((ulonglong)local_c38 & 0xffffffff00000000);
        local_c30 = local_9d0;
        local_c28 = CONCAT71(local_c28._1_7_,local_9e2);
        local_c20 = (undefined1 *)CONCAT71(local_c20._1_7_,1);
        local_c18 = 2;
        local_c10 = &local_990;
        local_c08 = local_998;
        local_c00 = 1;
        local_bf8 = 0;
        FUN_00f16900(local_9a8,param_2,0,local_aa8);
        (**(code **)(**(longlong **)(local_998 + 0xd8) + 0x80))
                  (*(longlong **)(local_998 + 0xd8),L"Analysis Result 1",local_990);
        local_a08 = local_990;
        cVar1 = FUN_01ce8540(local_990);
        if ((cVar1 != '\0') || ((param_9 & local_988._3_1_ == '\0') != 0)) {
          uVar2 = FUN_01ce83f0(local_a08);
          FUN_01ce6ab0(local_a08,uVar2,0);
        }
        FUN_01adc0f0(local_998,0,local_9e0);
      }
    }
    else {
      local_998 = (undefined1 *)0x0;
      FUN_004414c0(&local_a98,local_9d8,L".tdr");
      FUN_011568e0(local_a98,param_1,&local_998);
      if (local_998 != (undefined1 *)0x0) {
        local_990 = (**(code **)(**(longlong **)(local_998 + 0xd8) + 0x30))
                              (*(longlong **)(local_998 + 0xd8),0);
        local_9f8 = (**(code **)(**(longlong **)(local_990 + 0x80) + 0x28))
                              (*(longlong **)(local_990 + 0x80));
        local_9f8 = local_9f8 % 0xf;
        local_c30 = (undefined8 *)FUN_00609e10(param_3);
        local_c48 = (wchar_t *)((ulonglong)local_c48 & 0xffffffff00000000);
        local_c40 = (undefined8 *)((ulonglong)local_c40._4_4_ << 0x20);
        local_c38 = &local_990;
        local_c28 = local_9b8;
        local_c20 = local_998;
        local_c18 = local_c18 & 0xffffff00;
        FUN_00f1d0a0(local_9a8,param_2,&local_9f8,1);
      }
    }
    uVar2 = (**(code **)(*param_3 + 0x60))(param_3);
    uVar3 = (**(code **)(*param_3 + 0x48))(param_3);
    local_c48 = (wchar_t *)CONCAT44(local_c48._4_4_,uVar3);
    FUN_00498350(local_ab8,0,0,uVar2);
    FUN_01acf9e0(local_998,local_ab8);
    FUN_01ad0490(local_998);
    FUN_01acfa60(local_998);
    if ((param_8 == '\0') && ((param_12 & 1) != 0)) {
      FUN_004414c0(&local_ac0,local_9d8,L".tdr");
      FUN_01156430(local_ac0,local_998);
      FUN_004414c0(&local_ac8,local_9d8,L".tdr");
      local_c48 = (wchar_t *)&local_988;
      FUN_01158320(param_1,param_2,local_ac8,param_6);
    }
    if (param_5 == 0) {
      FUN_00414480(&local_9d8);
    }
    else {
      FUN_00414480(&local_38);
      local_a0c = param_13 + 2;
      FUN_0043f750(&local_38,local_a0c);
      local_c48 = L".wmf";
      FUN_00416cd0(&local_ad0,3,&DAT_0115c65c,local_38);
      local_c48 = (wchar_t *)CONCAT71(local_c48._1_7_,3);
      FUN_00450070(&local_9d8,param_5,L".wmf",local_ad0);
      FUN_00414480(&local_38);
    }
    local_9a8 = FUN_01cc6f70(&PTR_FUN_01cb9528,1,param_2);
    FUN_004414c0(&local_ad8,local_9d8,L".tdr");
    cVar1 = FUN_00440a20(local_ad8,1);
    if (cVar1 == '\0') {
      uVar8 = FUN_00609e10(param_3);
      local_aa0 = FUN_00498310(0,0);
      local_c40 = &local_aa0;
      local_c30 = &local_988;
      local_c48 = (wchar_t *)uVar8;
      local_c38 = (longlong *)param_1;
      local_998 = (undefined1 *)FUN_01acdf10(&PTR_FUN_01ac9770,1,local_9b8,0);
      FUN_00414b50(&local_9c8,L"AC Phase");
      FUN_01ae5ef0(local_998,local_9c8);
      (**(code **)(*local_9a0 + 0x80))(local_9a0,local_9c8,local_998);
      local_990 = 0;
      local_c48 = (wchar_t *)local_9e0;
      local_c40 = (undefined8 *)((ulonglong)local_c40 & 0xffffffffffffff00);
      local_c38 = (longlong *)0x0;
      local_990 = FUN_01adfeb0(local_998,param_2,0,0);
      if (local_990 != 0) {
        local_c48 = (wchar_t *)local_9e0;
        FUN_01ae1590(local_998,param_11,0,0);
      }
      if (local_990 == 0) {
        FUN_00de8980(&local_ae8,0x129,param_6);
        FUN_00de8980(&local_af0,0x13d,param_6);
        FUN_00416ad0(&local_af0,L" [#deg]");
        local_c48 = (wchar_t *)CONCAT71(local_c48._1_7_,local_9e1);
        local_c40 = (undefined8 *)CONCAT71(local_c40._1_7_,1);
        local_c38 = (longlong *)((ulonglong)local_c38 & 0xffffffff00000000);
        local_c30 = local_af0;
        local_c28 = local_c28 & 0xffffffffffffff00;
        local_c20 = (undefined1 *)CONCAT71(local_c20._1_7_,1);
        local_c18 = 2;
        local_c10 = &local_990;
        local_c08 = local_998;
        local_c00 = 1;
        local_bf8 = 0;
        FUN_00f16900(local_9a8,param_2,0,local_ae8);
        (**(code **)(**(longlong **)(local_998 + 0xd8) + 0x80))
                  (*(longlong **)(local_998 + 0xd8),L"Analysis Result 2",local_990);
        local_a18 = local_990;
        cVar1 = FUN_01ce8540(local_990);
        if ((cVar1 != '\0') || ((param_9 & local_988._3_1_ == '\0') != 0)) {
          uVar2 = FUN_01ce83f0(local_a18);
          FUN_01ce6ab0(local_a18,uVar2,0);
        }
        FUN_01adc0f0(local_998,0,local_9e0);
      }
    }
    else {
      local_998 = (undefined1 *)0x0;
      FUN_004414c0(&local_ae0,local_9d8,L".tdr");
      FUN_011568e0(local_ae0,param_1,&local_998);
      if (local_998 != (undefined1 *)0x0) {
        local_990 = (**(code **)(**(longlong **)(local_998 + 0xd8) + 0x30))
                              (*(longlong **)(local_998 + 0xd8),0);
        local_9f8 = (**(code **)(**(longlong **)(local_990 + 0x80) + 0x28))
                              (*(longlong **)(local_990 + 0x80));
        local_9f8 = local_9f8 % 0xf;
        local_c30 = (undefined8 *)FUN_00609e10(param_3);
        local_c48 = (wchar_t *)((ulonglong)local_c48 & 0xffffffff00000000);
        local_c40 = (undefined8 *)((ulonglong)local_c40 & 0xffffffff00000000);
        local_c38 = &local_990;
        local_c28 = local_9b8;
        local_c20 = local_998;
        local_c18 = local_c18 & 0xffffff00;
        FUN_00f1d0a0(local_9a8,param_2,&local_9f8,1);
      }
    }
    uVar2 = (**(code **)(*param_3 + 0x60))(param_3);
    uVar3 = (**(code **)(*param_3 + 0x48))(param_3);
    local_c48 = (wchar_t *)CONCAT44(local_c48._4_4_,uVar3);
    FUN_00498350(local_ab8,0,0,uVar2);
    FUN_01acf9e0(local_998,local_ab8);
    FUN_01ad0490(local_998);
    FUN_01acfa60(local_998);
    if ((param_8 == '\0') && ((param_12 & 2) != 0)) {
      FUN_004414c0(&local_af8,local_9d8,L".tdr");
      FUN_01156430(local_af8,local_998);
      FUN_004414c0(&local_b00,local_9d8,L".tdr");
      local_c48 = (wchar_t *)&local_988;
      FUN_01158320(param_1,param_2,local_b00,param_6);
    }
    if (param_5 == 0) {
      FUN_00414480(&local_9d8);
    }
    else {
      FUN_00414480(&local_40);
      local_a1c = param_13 + 3;
      FUN_0043f750(&local_40,local_a1c);
      local_c48 = L".wmf";
      FUN_00416cd0(&local_b08,3,&DAT_0115c65c,local_40);
      local_c48 = (wchar_t *)CONCAT71(local_c48._1_7_,3);
      FUN_00450070(&local_9d8,param_5,L".wmf",local_b08);
      FUN_00414480(&local_40);
    }
    local_9a8 = FUN_01cc6f70(&PTR_FUN_01cb9c30,1,param_2);
    FUN_004414c0(&local_b10,local_9d8,L".tdr");
    cVar1 = FUN_00440a20(local_b10,1);
    if (cVar1 == '\0') {
      uVar8 = FUN_00609e10(param_3);
      local_aa0 = FUN_00498310(0,0);
      local_c40 = &local_aa0;
      local_c30 = &local_988;
      local_c48 = (wchar_t *)uVar8;
      local_c38 = (longlong *)param_1;
      local_998 = (undefined1 *)FUN_01acdf10(&PTR_FUN_01ac9770,1,local_9b8,0);
      FUN_00414b50(&local_9c8,L"AC Nyquist");
      FUN_01ae5ef0(local_998,local_9c8);
      (**(code **)(*local_9a0 + 0x80))(local_9a0,local_9c8,local_998);
      local_990 = 0;
      local_c48 = (wchar_t *)local_9e0;
      local_c40 = (undefined8 *)((ulonglong)local_c40 & 0xffffffffffffff00);
      local_c38 = (longlong *)0x0;
      local_990 = FUN_01adfeb0(local_998,param_2,0,0);
      if (local_990 != 0) {
        local_c48 = (wchar_t *)local_9e0;
        FUN_01ae1590(local_998,param_11,0,0);
      }
      if (local_990 == 0) {
        FUN_00de8980(&local_b20,0x11d,param_6);
        FUN_00de8980(&local_b28,0x11e,param_6);
        local_c48 = (wchar_t *)((ulonglong)local_c48 & 0xffffffffffffff00);
        local_c40 = (undefined8 *)CONCAT71(local_c40._1_7_,1);
        local_c38 = (longlong *)CONCAT44(local_c38._4_4_,2);
        local_c30 = local_b28;
        local_c28 = local_c28 & 0xffffffffffffff00;
        local_c20 = (undefined1 *)CONCAT71(local_c20._1_7_,1);
        local_c18 = 2;
        local_c10 = &local_990;
        local_c08 = local_998;
        local_c00 = 1;
        local_bf8 = 0;
        FUN_00f16900(local_9a8,param_2,0,local_b20);
        lVar9 = (**(code **)(**(longlong **)(local_990 + 0x70) + 0x30))
                          (*(longlong **)(local_990 + 0x70),0);
        lVar5 = (**(code **)(**(longlong **)(local_990 + 0x70) + 0x30))
                          (*(longlong **)(local_990 + 0x70),0);
        lVar6 = (**(code **)(**(longlong **)(local_990 + 0x78) + 0x30))
                          (*(longlong **)(local_990 + 0x78),0);
        lVar7 = (**(code **)(**(longlong **)(local_990 + 0x78) + 0x30))
                          (*(longlong **)(local_990 + 0x78),0);
        if ((*(double *)(lVar9 + 0xc0) - *(double *)(lVar5 + 0xb8)) /
            (*(double *)(lVar6 + 0xc0) - *(double *)(lVar7 + 0xb8)) <= 10.0) {
          lVar9 = (**(code **)(**(longlong **)(local_990 + 0x70) + 0x30))
                            (*(longlong **)(local_990 + 0x70),0);
          lVar5 = (**(code **)(**(longlong **)(local_990 + 0x70) + 0x30))
                            (*(longlong **)(local_990 + 0x70),0);
          lVar6 = (**(code **)(**(longlong **)(local_990 + 0x78) + 0x30))
                            (*(longlong **)(local_990 + 0x78),0);
          lVar7 = (**(code **)(**(longlong **)(local_990 + 0x78) + 0x30))
                            (*(longlong **)(local_990 + 0x78),0);
          if ((*(double *)(lVar9 + 0xc0) - *(double *)(lVar5 + 0xb8)) /
              (*(double *)(lVar6 + 0xc0) - *(double *)(lVar7 + 0xb8)) < 0.1) {
            lVar9 = (**(code **)(**(longlong **)(local_990 + 0x78) + 0x30))
                              (*(longlong **)(local_990 + 0x78),0);
            lVar5 = (**(code **)(**(longlong **)(local_990 + 0x78) + 0x30))
                              (*(longlong **)(local_990 + 0x78),0);
            lVar6 = (**(code **)(**(longlong **)(local_990 + 0x70) + 0x30))
                              (*(longlong **)(local_990 + 0x70),0);
            lVar7 = (**(code **)(**(longlong **)(local_990 + 0x70) + 0x30))
                              (*(longlong **)(local_990 + 0x70),0);
            local_9f0 = ((*(double *)(lVar9 + 0xc0) - *(double *)(lVar5 + 0xb8)) -
                        (*(double *)(lVar6 + 0xc0) - *(double *)(lVar7 + 0xb8))) / 2.0;
            lVar9 = (**(code **)(**(longlong **)(local_990 + 0x70) + 0x30))
                              (*(longlong **)(local_990 + 0x70),0);
            lVar5 = (**(code **)(**(longlong **)(local_990 + 0x70) + 0x30))
                              (*(longlong **)(local_990 + 0x70),0);
            *(double *)(lVar9 + 0xc0) = *(double *)(lVar5 + 0xc0) + local_9f0;
            lVar9 = (**(code **)(**(longlong **)(local_990 + 0x70) + 0x30))
                              (*(longlong **)(local_990 + 0x70),0);
            lVar5 = (**(code **)(**(longlong **)(local_990 + 0x70) + 0x30))
                              (*(longlong **)(local_990 + 0x70),0);
            *(double *)(lVar9 + 0xb8) = *(double *)(lVar5 + 0xb8) - local_9f0;
            local_a30 = (**(code **)(**(longlong **)(local_990 + 0x70) + 0x30))
                                  (*(longlong **)(local_990 + 0x70),0);
            uVar2 = FUN_01ccdde0(local_a30);
            uVar3 = FUN_01ccde00(local_a30);
            FUN_01cd43b0(local_a30,uVar2,uVar3);
            *(undefined8 *)(local_a30 + 200) = *(undefined8 *)(local_a30 + 0xb8);
            *(undefined8 *)(local_a30 + 0xd0) = *(undefined8 *)(local_a30 + 0xc0);
          }
        }
        else {
          lVar9 = (**(code **)(**(longlong **)(local_990 + 0x70) + 0x30))
                            (*(longlong **)(local_990 + 0x70),0);
          lVar5 = (**(code **)(**(longlong **)(local_990 + 0x70) + 0x30))
                            (*(longlong **)(local_990 + 0x70),0);
          lVar6 = (**(code **)(**(longlong **)(local_990 + 0x78) + 0x30))
                            (*(longlong **)(local_990 + 0x78),0);
          lVar7 = (**(code **)(**(longlong **)(local_990 + 0x78) + 0x30))
                            (*(longlong **)(local_990 + 0x78),0);
          local_9f0 = ((*(double *)(lVar9 + 0xc0) - *(double *)(lVar5 + 0xb8)) -
                      (*(double *)(lVar6 + 0xc0) - *(double *)(lVar7 + 0xb8))) / 2.0;
          lVar9 = (**(code **)(**(longlong **)(local_990 + 0x78) + 0x30))
                            (*(longlong **)(local_990 + 0x78),0);
          lVar5 = (**(code **)(**(longlong **)(local_990 + 0x78) + 0x30))
                            (*(longlong **)(local_990 + 0x78),0);
          *(double *)(lVar9 + 0xc0) = *(double *)(lVar5 + 0xc0) + local_9f0;
          lVar9 = (**(code **)(**(longlong **)(local_990 + 0x78) + 0x30))
                            (*(longlong **)(local_990 + 0x78),0);
          lVar5 = (**(code **)(**(longlong **)(local_990 + 0x78) + 0x30))
                            (*(longlong **)(local_990 + 0x78),0);
          *(double *)(lVar9 + 0xb8) = *(double *)(lVar5 + 0xb8) - local_9f0;
          local_a28 = (**(code **)(**(longlong **)(local_990 + 0x78) + 0x30))
                                (*(longlong **)(local_990 + 0x78),0);
          uVar2 = FUN_01ccddc0(local_a28);
          uVar3 = FUN_01ccddd0(local_a28);
          FUN_01cd43b0(local_a28,uVar2,uVar3);
          *(undefined8 *)(local_a28 + 200) = *(undefined8 *)(local_a28 + 0xb8);
          *(undefined8 *)(local_a28 + 0xd0) = *(undefined8 *)(local_a28 + 0xc0);
        }
        *(undefined1 *)(local_990 + 0x68) = 1;
        (**(code **)(**(longlong **)(local_998 + 0xd8) + 0x80))
                  (*(longlong **)(local_998 + 0xd8),L"Analysis Result 3",local_990);
        local_a38 = local_990;
        cVar1 = FUN_01ce8540(local_990);
        if ((cVar1 != '\0') || ((param_9 & local_988._3_1_ == '\0') != 0)) {
          uVar2 = FUN_01ce83f0(local_a38);
          FUN_01ce6ab0(local_a38,uVar2,0);
        }
        FUN_01adc0f0(local_998,0,local_9e0);
      }
    }
    else {
      local_998 = (undefined1 *)0x0;
      FUN_004414c0(&local_b18,local_9d8,L".tdr");
      FUN_011568e0(local_b18,param_1,&local_998);
      if (local_998 != (undefined1 *)0x0) {
        local_990 = (**(code **)(**(longlong **)(local_998 + 0xd8) + 0x30))
                              (*(longlong **)(local_998 + 0xd8),0);
        local_9f8 = (**(code **)(**(longlong **)(local_990 + 0x80) + 0x28))
                              (*(longlong **)(local_990 + 0x80));
        local_9f8 = local_9f8 % 0xf;
        local_c30 = (undefined8 *)FUN_00609e10(param_3);
        local_c48 = (wchar_t *)((ulonglong)local_c48 & 0xffffffff00000000);
        local_c40 = (undefined8 *)((ulonglong)local_c40 & 0xffffffff00000000);
        local_c38 = &local_990;
        local_c28 = local_9b8;
        local_c20 = local_998;
        local_c18 = local_c18 & 0xffffff00;
        FUN_00f1d0a0(local_9a8,param_2,&local_9f8,1);
      }
    }
    uVar2 = (**(code **)(*param_3 + 0x60))(param_3);
    uVar3 = (**(code **)(*param_3 + 0x48))(param_3);
    local_c48 = (wchar_t *)CONCAT44(local_c48._4_4_,uVar3);
    FUN_00498350(local_ab8,0,0,uVar2);
    FUN_01acf9e0(local_998,local_ab8);
    FUN_01ad0490(local_998);
    FUN_01acfa60(local_998);
    if ((param_8 == '\0') && ((param_12 & 8) != 0)) {
      FUN_004414c0(&local_b30,local_9d8,L".tdr");
      FUN_01156430(local_b30,local_998);
    }
    if (param_5 == 0) {
      FUN_00414480(&local_9d8);
    }
    else {
      FUN_00414480(&local_48);
      local_a3c = param_13 + 4;
      FUN_0043f750(&local_48,local_a3c);
      local_c48 = L".wmf";
      FUN_00416cd0(&local_b38,3,&DAT_0115c65c,local_48);
      local_c48 = (wchar_t *)CONCAT71(local_c48._1_7_,3);
      FUN_00450070(&local_9d8,param_5,L".wmf",local_b38);
      FUN_00414480(&local_48);
    }
    local_9a8 = FUN_01cc6f70(&PTR_FUN_01cbab10,1,param_2);
    FUN_004414c0(&local_b40,local_9d8,L".tdr");
    cVar1 = FUN_00440a20(local_b40,1);
    if (cVar1 == '\0') {
      uVar8 = FUN_00609e10(param_3);
      local_aa0 = FUN_00498310(0,0);
      local_c40 = &local_aa0;
      local_c30 = &local_988;
      local_c48 = (wchar_t *)uVar8;
      local_c38 = (longlong *)param_1;
      local_998 = (undefined1 *)FUN_01acdf10(&PTR_FUN_01ac9770,1,local_9b8,0);
      FUN_00414b50(&local_9c8,L"AC Group delay");
      FUN_01ae5ef0(local_998,local_9c8);
      (**(code **)(*local_9a0 + 0x80))(local_9a0,local_9c8,local_998);
      local_990 = 0;
      local_c48 = (wchar_t *)local_9e0;
      local_c40 = (undefined8 *)((ulonglong)local_c40 & 0xffffffffffffff00);
      local_c38 = (longlong *)0x0;
      local_990 = FUN_01adfeb0(local_998,param_2,0,0);
      if (local_990 != 0) {
        local_c48 = (wchar_t *)local_9e0;
        FUN_01ae1590(local_998,param_11,0,0);
      }
      if (local_990 == 0) {
        FUN_00de8980(&local_b50,0x129,param_6);
        FUN_00de8980(&local_b58,0x128,param_6);
        local_c48 = (wchar_t *)CONCAT71(local_c48._1_7_,local_9e1);
        local_c40 = (undefined8 *)CONCAT71(local_c40._1_7_,1);
        local_c38 = (longlong *)((ulonglong)local_c38 & 0xffffffff00000000);
        local_c30 = local_b58;
        local_c28 = local_c28 & 0xffffffffffffff00;
        local_c20 = (undefined1 *)CONCAT71(local_c20._1_7_,1);
        local_c18 = 2;
        local_c10 = &local_990;
        local_c08 = local_998;
        local_c00 = 1;
        local_bf8 = 0;
        FUN_00f16900(local_9a8,param_2,0,local_b50);
        (**(code **)(**(longlong **)(local_998 + 0xd8) + 0x80))
                  (*(longlong **)(local_998 + 0xd8),L"Analysis Result 4",local_990);
        local_a48 = local_990;
        cVar1 = FUN_01ce8540(local_990);
        if ((cVar1 != '\0') || ((param_9 & local_988._3_1_ == '\0') != 0)) {
          uVar2 = FUN_01ce83f0(local_a48);
          FUN_01ce6ab0(local_a48,uVar2,0);
        }
        FUN_01adc0f0(local_998,0,local_9e0);
      }
    }
    else {
      local_998 = (undefined1 *)0x0;
      FUN_004414c0(&local_b48,local_9d8,L".tdr");
      FUN_011568e0(local_b48,param_1,&local_998);
      if (local_998 != (undefined1 *)0x0) {
        local_990 = (**(code **)(**(longlong **)(local_998 + 0xd8) + 0x30))
                              (*(longlong **)(local_998 + 0xd8),0);
        local_9f8 = (**(code **)(**(longlong **)(local_990 + 0x80) + 0x28))
                              (*(longlong **)(local_990 + 0x80));
        local_9f8 = local_9f8 % 0xf;
        local_c30 = (undefined8 *)FUN_00609e10(param_3);
        local_c48 = (wchar_t *)((ulonglong)local_c48 & 0xffffffff00000000);
        local_c40 = (undefined8 *)((ulonglong)local_c40 & 0xffffffff00000000);
        local_c38 = &local_990;
        local_c28 = local_9b8;
        local_c20 = local_998;
        local_c18 = local_c18 & 0xffffff00;
        FUN_00f1d0a0(local_9a8,param_2,&local_9f8,1);
      }
    }
    uVar2 = (**(code **)(*param_3 + 0x60))(param_3);
    uVar3 = (**(code **)(*param_3 + 0x48))(param_3);
    local_c48 = (wchar_t *)CONCAT44(local_c48._4_4_,uVar3);
    FUN_00498350(local_ab8,0,0,uVar2);
    FUN_01acf9e0(local_998,local_ab8);
    FUN_01ad0490(local_998);
    FUN_01acfa60(local_998);
    if ((param_8 == '\0') && ((param_12 & 0x10) != 0)) {
      FUN_004414c0(&local_b60,local_9d8,L".tdr");
      FUN_01156430(local_b60,local_998);
      FUN_004414c0(&local_b68,local_9d8,L".tdr");
      local_c48 = (wchar_t *)&local_988;
      FUN_01158320(param_1,param_2,local_b68,param_6);
    }
    if (param_5 == 0) {
      FUN_00414480(&local_9d8);
    }
    else {
      FUN_00414480(&local_50);
      local_a4c = param_13 + 5;
      FUN_0043f750(&local_50,local_a4c);
      local_c48 = L".wmf";
      FUN_00416cd0(&local_b70,3,&DAT_0115c65c,local_50);
      local_c48 = (wchar_t *)CONCAT71(local_c48._1_7_,3);
      FUN_00450070(&local_9d8,param_5,L".wmf",local_b70);
      FUN_00414480(&local_50);
    }
    if (local_9f1 == '\0') {
      local_9e2 = 1;
      FUN_00de8980(&local_9d0,0x11a,param_6);
      local_9a8 = FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,param_2);
    }
    else {
      local_9e2 = 0;
      FUN_00de8980(&local_9d0,0x122,param_6);
      local_9a8 = FUN_01cc6f70(&PTR_FUN_01cb8ae0,1,param_2);
    }
    local_9b0 = FUN_01cc6f70(&PTR_FUN_01cb9528,1,param_2);
    FUN_004414c0(&local_b78,local_9d8,L".tdr");
    cVar1 = FUN_00440a20(local_b78,1);
    if (cVar1 == '\0') {
      uVar8 = FUN_00609e10(param_3);
      local_aa0 = FUN_00498310(0,0);
      local_c40 = &local_aa0;
      local_c30 = &local_988;
      local_c48 = (wchar_t *)uVar8;
      local_c38 = (longlong *)param_1;
      local_998 = (undefined1 *)FUN_01acdf10(&PTR_FUN_01ac9770,1,local_9b8,0);
      FUN_00414b50(&local_9c8,L"AC Bode");
      FUN_01ae5ef0(local_998,local_9c8);
      (**(code **)(*local_9a0 + 0x80))(local_9a0,local_9c8,local_998);
      local_990 = 0;
      local_c48 = (wchar_t *)local_9e0;
      local_c40 = (undefined8 *)((ulonglong)local_c40 & 0xffffffffffffff00);
      local_c38 = (longlong *)0x0;
      local_990 = FUN_01adfeb0(local_998,param_2,0,0);
      if (local_990 != 0) {
        local_c48 = (wchar_t *)local_9e0;
        FUN_01ae1590(local_998,param_11,0,0);
      }
      if (local_990 == 0) {
        FUN_00de8980(&local_b88,0x129,param_6);
        local_c48 = (wchar_t *)CONCAT71(local_c48._1_7_,local_9e1);
        local_c40 = (undefined8 *)CONCAT71(local_c40._1_7_,1);
        local_c38 = (longlong *)((ulonglong)local_c38 & 0xffffffff00000000);
        local_c30 = local_9d0;
        local_c28 = CONCAT71(local_c28._1_7_,local_9e2);
        local_c20 = (undefined1 *)CONCAT71(local_c20._1_7_,1);
        local_c18 = 2;
        local_c10 = &local_990;
        local_c08 = local_998;
        local_c00 = 1;
        local_bf8 = 0;
        FUN_00f16900(local_9a8,param_2,0,local_b88);
        (**(code **)(**(longlong **)(local_998 + 0xd8) + 0x80))
                  (*(longlong **)(local_998 + 0xd8),L"Analysis Result 5",local_990);
        local_a58 = local_990;
        cVar1 = FUN_01ce8540(local_990);
        if ((cVar1 != '\0') || ((param_9 & local_988._3_1_ == '\0') != 0)) {
          uVar2 = FUN_01ce83f0(local_a58);
          FUN_01ce6ab0(local_a58,uVar2,0);
        }
      }
      local_990 = 0;
      local_c48 = (wchar_t *)local_9e0;
      local_c40 = (undefined8 *)((ulonglong)local_c40 & 0xffffffffffffff00);
      local_c38 = (longlong *)0x0;
      local_990 = FUN_01adfeb0(local_998,param_2,1,0);
      if (local_990 != 0) {
        local_c48 = (wchar_t *)local_9e0;
        FUN_01ae1590(local_998,param_11,1,0);
      }
      if (local_990 == 0) {
        FUN_00de8980(&local_b90,0x129,param_6);
        FUN_00de8980(&local_b98,0x13d,param_6);
        FUN_00416ad0(&local_b98,L" [#deg]");
        local_c48 = (wchar_t *)CONCAT71(local_c48._1_7_,local_9e1);
        local_c40 = (undefined8 *)CONCAT71(local_c40._1_7_,1);
        local_c38 = (longlong *)((ulonglong)local_c38 & 0xffffffff00000000);
        local_c30 = local_b98;
        local_c28 = local_c28 & 0xffffffffffffff00;
        local_c20 = (undefined1 *)CONCAT71(local_c20._1_7_,1);
        local_c18 = 2;
        local_c10 = &local_990;
        local_c08 = local_998;
        local_c00 = 1;
        local_bf8 = 0;
        FUN_00f16900(local_9b0,param_2,0,local_b90);
        (**(code **)(**(longlong **)(local_998 + 0xd8) + 0x80))
                  (*(longlong **)(local_998 + 0xd8),L"Analysis Result 6",local_990);
        local_a60 = local_990;
        cVar1 = FUN_01ce8540(local_990);
        if ((cVar1 != '\0') || ((param_9 & local_988._3_1_ == '\0') != 0)) {
          uVar2 = FUN_01ce83f0(local_a60);
          FUN_01ce6ab0(local_a60,uVar2,0);
        }
        FUN_01adc0f0(local_998,0,local_9e0);
      }
    }
    else {
      local_998 = (undefined1 *)0x0;
      FUN_004414c0(&local_b80,local_9d8,L".tdr");
      FUN_011568e0(local_b80,param_1,&local_998);
      if (local_998 != (undefined1 *)0x0) {
        local_990 = (**(code **)(**(longlong **)(local_998 + 0xd8) + 0x30))
                              (*(longlong **)(local_998 + 0xd8),0);
        local_9f8 = (**(code **)(**(longlong **)(local_990 + 0x80) + 0x28))
                              (*(longlong **)(local_990 + 0x80));
        local_9f8 = local_9f8 % 0xf;
        local_c30 = (undefined8 *)FUN_00609e10(param_3);
        local_c48 = (wchar_t *)((ulonglong)local_c48 & 0xffffffff00000000);
        local_c40 = (undefined8 *)((ulonglong)local_c40 & 0xffffffff00000000);
        local_c38 = &local_990;
        local_c28 = local_9b8;
        local_c20 = local_998;
        local_c18 = local_c18 & 0xffffff00;
        FUN_00f1d0a0(local_9a8,param_2,&local_9f8,1);
        iVar4 = (**(code **)(**(longlong **)(local_998 + 0xd8) + 0x28))
                          (*(longlong **)(local_998 + 0xd8));
        if (1 < iVar4) {
          local_990 = (**(code **)(**(longlong **)(local_998 + 0xd8) + 0x30))
                                (*(longlong **)(local_998 + 0xd8),1);
          local_9f8 = (**(code **)(**(longlong **)(local_990 + 0x80) + 0x28))
                                (*(longlong **)(local_990 + 0x80));
          local_9f8 = local_9f8 % 0xf;
          local_c30 = (undefined8 *)FUN_00609e10(param_3);
          local_c48 = (wchar_t *)((ulonglong)local_c48 & 0xffffffff00000000);
          local_c40 = (undefined8 *)((ulonglong)local_c40 & 0xffffffff00000000);
          local_c38 = &local_990;
          local_c28 = local_9b8;
          local_c20 = local_998;
          local_c18 = local_c18 & 0xffffff00;
          FUN_00f1d0a0(local_9b0,param_2,&local_9f8,1);
        }
      }
    }
    uVar2 = (**(code **)(*param_3 + 0x60))(param_3);
    uVar3 = (**(code **)(*param_3 + 0x48))(param_3);
    local_c48 = (wchar_t *)CONCAT44(local_c48._4_4_,uVar3);
    FUN_00498350(local_ab8,0,0,uVar2);
    FUN_01acf9e0(local_998,local_ab8);
    local_998[0x10d] = 1;
    FUN_01ad0490(local_998);
    FUN_01acfa60(local_998);
    if (param_8 == '\x01') {
      local_c48 = (wchar_t *)CONCAT71(local_c48._1_7_,1);
      FUN_01156d70(local_9b8,local_998,local_9d8,param_3);
    }
    else if (param_8 == '\x02') {
      FUN_01156eb0(local_998,&local_res20,0,0);
    }
    else if (param_8 == '\x03') {
      if (0 < local_8cf) {
        FUN_01ce92d0(local_990,local_9d8);
      }
    }
    else if ((param_12 & 4) != 0) {
      FUN_004414c0(&local_ba0,local_9d8,L".tdr");
      FUN_01156430(local_ba0,local_998);
    }
    if (param_10 != '\0') {
      local_9bc = 6;
      do {
        FUN_0043f750(&local_9c8,local_9bc);
        if (param_5 == 0) {
          FUN_00414480(&local_9d8);
        }
        else {
          local_c48 = L".wmf";
          FUN_00416cd0(&local_ba8,3,&DAT_0115c65c,local_9c8);
          local_c48 = (wchar_t *)CONCAT71(local_c48._1_7_,3);
          FUN_00450070(&local_9d8,param_5,L".wmf",local_ba8);
        }
        local_9a8 = FUN_01cc6f70(&PTR_FUN_01cb8ae0,1,param_2);
        FUN_004414c0(&local_bb0,local_9d8,L".tdr");
        cVar1 = FUN_00440a20(local_bb0,1);
        if (cVar1 == '\0') {
          uVar8 = FUN_00609e10(param_3);
          local_aa0 = FUN_00498310(0,0);
          local_c40 = &local_aa0;
          local_c30 = &local_988;
          local_c48 = (wchar_t *)uVar8;
          local_c38 = (longlong *)param_1;
          local_998 = (undefined1 *)FUN_01acdf10(&PTR_FUN_01ac9770,1,local_9b8,0);
          FUN_00414b50(&local_9c8,L"AC Ampli");
          FUN_01ae5ef0(local_998,local_9c8);
          (**(code **)(*local_9a0 + 0x80))(local_9a0,local_9c8,local_998);
          local_990 = 0;
          if (local_9bc == 6) {
            local_9e2 = 2;
          }
          else {
            local_9e2 = 0;
          }
          FUN_00de8980(&local_bc0,0x129,param_6);
          FUN_00de8980(&local_bc8,0x11c,param_6);
          local_c48 = (wchar_t *)CONCAT71(local_c48._1_7_,local_9e1);
          local_c40 = (undefined8 *)CONCAT71(local_c40._1_7_,1);
          local_c38 = (longlong *)((ulonglong)local_c38 & 0xffffffff00000000);
          local_c30 = local_bc8;
          local_c28 = CONCAT71(local_c28._1_7_,local_9e2);
          local_c20 = (undefined1 *)CONCAT71(local_c20._1_7_,1);
          local_c18 = 2;
          local_c10 = &local_990;
          local_c08 = local_998;
          local_c00 = 1;
          local_bf8 = 0;
          FUN_00f16900(local_9a8,param_2,0,local_bc0);
          FUN_00416ba0(&local_bd0,L"Analysis Result ",local_9c8);
          (**(code **)(**(longlong **)(local_998 + 0xd8) + 0x80))
                    (*(longlong **)(local_998 + 0xd8),local_bd0,local_990);
          local_a68 = local_990;
          cVar1 = FUN_01ce8540(local_990);
          if ((cVar1 != '\0') || ((param_9 & local_988._3_1_ == '\0') != 0)) {
            FUN_01ce6ab0(local_a68,0,0);
          }
        }
        else {
          local_998 = (undefined1 *)0x0;
          FUN_004414c0(&local_bb8,local_9d8,L".tdr");
          FUN_011568e0(local_bb8,param_1,&local_998);
          if (local_998 != (undefined1 *)0x0) {
            local_990 = (**(code **)(**(longlong **)(local_998 + 0xd8) + 0x30))
                                  (*(longlong **)(local_998 + 0xd8),0);
            local_9f8 = (**(code **)(**(longlong **)(local_990 + 0x80) + 0x28))
                                  (*(longlong **)(local_990 + 0x80));
            local_9f8 = local_9f8 % 0xf;
            local_c30 = (undefined8 *)FUN_00609e10(param_3);
            local_c48 = (wchar_t *)((ulonglong)local_c48 & 0xffffffff00000000);
            local_c40 = (undefined8 *)((ulonglong)local_c40 & 0xffffffff00000000);
            local_c38 = &local_990;
            local_c28 = local_9b8;
            local_c20 = local_998;
            local_c18 = local_c18 & 0xffffff00;
            FUN_00f1d0a0(local_9a8,param_2,&local_9f8,1);
          }
        }
        (**(code **)(*param_3 + 0x60))(param_3);
        uVar2 = (**(code **)(*param_3 + 0x48))(param_3);
        local_c48 = (wchar_t *)CONCAT44(local_c48._4_4_,uVar2);
        FUN_00498350(local_ab8,0,0);
        FUN_01acf9e0(local_998,local_ab8);
        FUN_01ad0490(local_998);
        FUN_01acfa60(local_998);
        FUN_01adc0f0(local_998,0,local_9e0);
        if (param_8 == '\0') {
          FUN_004414c0(&local_bd8,local_9d8,L".tdr");
          FUN_01156430(local_bd8,local_998);
          FUN_004414c0(&local_be0,local_9d8,L".tdr");
          local_c48 = (wchar_t *)&local_988;
          FUN_01158320(param_1,param_2,local_be0);
        }
        local_9bc = local_9bc + 1;
      } while (local_9bc != 8);
    }
    iVar4 = (**(code **)(*local_9a0 + 0x28))();
    local_9bc = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar8 = (**(code **)(*local_9a0 + 0x30))(local_9a0,local_9bc);
        FUN_00410f20(uVar8);
        local_9bc = local_9bc + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00410f20(local_9a0);
  }
  FUN_00414560(&local_be0,0x25);
  FUN_00414480(&local_aa8);
  FUN_00414560(&local_a98,3);
  FUN_00414560(&local_9e0,4);
  FUN_00417740(&local_988,&DAT_01d0d0b8);
  FUN_00414560(&local_50,5);
  FUN_00414560(&param_5,2);
  return;
}

