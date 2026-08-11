/* Ghidra address: 01974ec0 */
/* Ghidra symbol: FUN_01974ec0 */


char FUN_01974ec0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  longlong local_res10;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  code *local_90;
  longlong local_88;
  undefined1 *local_80;
  longlong local_68;
  undefined8 local_60;
  char local_51;
  longlong *local_50;
  longlong local_48;
  int local_40;
  char local_39;
  longlong *local_38;
  
  local_80 = auStack_128;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_c8 = 0;
  local_51 = *(longlong *)(param_1 + 0x200) != 0;
  if ((bool)local_51) {
    if ((*(longlong *)(param_1 + 0x250) == 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x248) + 0x110) !=
        *(longlong *)(*(longlong *)(param_1 + 0x200) + 0x248))) {
      *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(*(longlong *)(param_1 + 0x248) + 0x110);
    }
  }
  else if (*(longlong *)(param_1 + 0x250) == 0) {
    *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(*(longlong *)(param_1 + 0x248) + 0x110);
  }
  if ((*(longlong *)(param_1 + 0x250) != 0) && (*(longlong *)(param_1 + 0x200) != 0)) {
    *(longlong *)(*(longlong *)(param_1 + 0x200) + 0x250) = *(longlong *)(param_1 + 0x250);
  }
  local_res10 = param_2;
  if (param_2 == 0) {
    local_res10 = param_1;
  }
  puVar2 = auStack_128;
  if ((bool)local_51) {
    iVar4 = FUN_0184caf0();
    local_40 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar5 = FUN_0184cd80(*(undefined8 *)(param_1 + 0x248),local_40);
        cVar3 = FUN_004113d0(uVar5,&PTR_FUN_01844e48);
        if ((cVar3 != '\0') &&
           (lVar6 = FUN_0184cd80(*(undefined8 *)(param_1 + 0x248),local_40),
           *(longlong *)(lVar6 + 0x10) == 2)) {
          *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x200) + 0x248) + 0x78) = 2;
          local_68 = FUN_0184cd80(*(undefined8 *)(param_1 + 0x248),local_40);
          local_90 = FUN_01974d80;
          uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x200) + 0x248);
          local_88 = param_1;
          pcVar7 = (code *)FUN_00411550(uVar5,0xffe8);
          local_108 = *(wchar_t **)(local_68 + 0xc0);
          (*pcVar7)(uVar5,*(undefined8 *)(local_68 + 0x108),&local_90,
                    *(undefined8 *)(local_68 + 0xb0));
          *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x200) + 0x248) + 0x78) = 0;
        }
        local_40 = local_40 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_39 = FUN_01974ec0(*(undefined8 *)(param_1 + 0x200),local_res10);
    puVar2 = local_80;
    if (local_39 == '\0') {
      uVar5 = FUN_0180bfb0();
      FUN_01809b60(uVar5,&local_a0,L"clScrError");
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x200) + 0x248);
      local_108 = L" Line: ";
      local_100 = *(undefined8 *)(lVar6 + 0x90);
      FUN_00416cd0(&local_c8,4,L"Parent report: ",*(undefined8 *)(param_1 + 0x1f8));
      local_c0 = local_c8;
      local_b8 = 0x11;
      local_b0 = *(undefined8 *)(lVar6 + 0x88);
      local_a8 = 0x11;
      FUN_00442f70(&local_98,local_a0,&local_c0,1);
      (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x78))
                (*(longlong **)(param_1 + 0x1b0),local_98);
      goto LAB_019759d6;
    }
  }
  local_80 = puVar2;
  FUN_01978d90(*(undefined8 *)(param_1 + 0x1b8));
  FUN_00414ad0(*(longlong *)(param_1 + 0x1b8) + 0x20,*(undefined8 *)(param_1 + 600));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1a0) + 0x20);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  FUN_0184cc60(*(undefined8 *)(param_1 + 0x248),local_res10);
  lVar6 = *(longlong *)(param_1 + 0x248);
  *(longlong *)(lVar6 + 0x78) = local_res10;
  *(undefined1 *)(lVar6 + 200) = 1;
  if (local_51 == '\0') {
    *(undefined8 *)(lVar6 + 0x110) = *(undefined8 *)(param_1 + 0x250);
  }
  else {
    *(undefined8 *)(lVar6 + 0x110) = *(undefined8 *)(*(longlong *)(param_1 + 0x200) + 0x248);
  }
  local_48 = FUN_01951400(param_1);
  iVar4 = *(int *)(local_48 + 0x10);
  local_40 = 0;
  if (-1 < iVar4 + -1) {
    do {
      local_50 = (longlong *)FUN_004aeac0(local_48,local_40);
      local_38 = (longlong *)FUN_01974dc0(auStack_128,local_50[2]);
      if (local_38 == (longlong *)0x0) {
        local_38 = local_50;
      }
      FUN_01950de0(local_38,0);
      local_60 = *(undefined8 *)(local_res10 + 0x248);
      *(undefined8 *)(local_res10 + 0x248) = *(undefined8 *)(param_1 + 0x248);
      (**(code **)(*local_38 + 0x1b0))(local_38);
      *(undefined8 *)(local_res10 + 0x248) = local_60;
      cVar3 = FUN_004113d0(local_38,&PTR_FUN_01929d50);
      if (cVar3 != '\0') {
        *(undefined1 *)(local_38 + 0x5a) = 1;
      }
      cVar3 = FUN_01953b80(local_50);
      if (cVar3 == '\0') {
        uVar5 = *(undefined8 *)(param_1 + 0x248);
        pcVar7 = (code *)FUN_00411550(uVar5,0xffe7);
        (*pcVar7)(uVar5,local_38[2],local_38);
      }
      local_40 = local_40 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x248);
  pcVar7 = (code *)FUN_00411550(uVar5,0xffe7);
  (*pcVar7)(uVar5,L"Report",local_res10);
  uVar8 = FUN_0196f540(local_res10);
  uVar5 = *(undefined8 *)(param_1 + 0x248);
  pcVar7 = (code *)FUN_00411550(uVar5,0xffe7);
  (*pcVar7)(uVar5,L"PreviewPages",uVar8);
  uVar5 = *(undefined8 *)(param_1 + 0x248);
  pcVar7 = (code *)FUN_00411550(uVar5,0xffe7);
  (*pcVar7)(uVar5,L"Engine",*(undefined8 *)(local_res10 + 0x1a0));
  lVar6 = FUN_0196f540(local_res10);
  uVar5 = *(undefined8 *)(param_1 + 0x248);
  pcVar7 = (code *)FUN_00411550(uVar5,0xffe7);
  (*pcVar7)(uVar5,L"Outline",*(undefined8 *)(lVar6 + 0x18));
  FUN_0046f180(&local_e0);
  uVar5 = *(undefined8 *)(param_1 + 0x248);
  pcVar7 = (code *)FUN_00411550(uVar5,0xffe6);
  (*pcVar7)(uVar5,L"Value",L"Variant",&local_e0);
  FUN_0046f180(&local_f8);
  uVar5 = *(undefined8 *)(param_1 + 0x248);
  pcVar7 = (code *)FUN_00411550(uVar5,0xffe6);
  (*pcVar7)(uVar5,L"Self",L"TfrxView",&local_f8);
  local_88 = local_res10;
  local_90 = FUN_01973b80;
  uVar5 = *(undefined8 *)(param_1 + 0x248);
  pcVar7 = (code *)FUN_00411550(uVar5,0xffe8);
  local_108 = (wchar_t *)0x0;
  (*pcVar7)(uVar5,L"function Get(Name: String): Variant",&local_90,0);
  local_88 = local_res10;
  local_90 = FUN_01974060;
  uVar5 = *(undefined8 *)(param_1 + 0x248);
  pcVar7 = (code *)FUN_00411550(uVar5,0xffe8);
  local_108 = (wchar_t *)0x0;
  (*pcVar7)(uVar5,L"procedure Set(Name: String; Value: Variant)",&local_90,0);
  local_88 = local_res10;
  local_90 = FUN_01974220;
  uVar5 = *(undefined8 *)(param_1 + 0x248);
  pcVar7 = (code *)FUN_00411550(uVar5,0xffe8);
  local_108 = (wchar_t *)0x0;
  (*pcVar7)(uVar5,L"macrofunction IIF(Expr: Boolean; TrueValue, FalseValue: Variant): Variant",
            &local_90,0);
  local_88 = local_res10;
  local_90 = FUN_01974220;
  uVar5 = *(undefined8 *)(param_1 + 0x248);
  pcVar7 = (code *)FUN_00411550(uVar5,0xffe8);
  local_108 = (wchar_t *)0x0;
  (*pcVar7)(uVar5,
            L"macrofunction SUM(Expr: Variant; Band: Variant = 0; Flags: Integer = 0): Variant",
            &local_90,0);
  local_88 = local_res10;
  local_90 = FUN_01974220;
  uVar5 = *(undefined8 *)(param_1 + 0x248);
  pcVar7 = (code *)FUN_00411550(uVar5,0xffe8);
  local_108 = (wchar_t *)0x0;
  (*pcVar7)(uVar5,
            L"macrofunction AVG(Expr: Variant; Band: Variant = 0; Flags: Integer = 0): Variant",
            &local_90,0);
  local_88 = local_res10;
  local_90 = FUN_01974220;
  uVar5 = *(undefined8 *)(param_1 + 0x248);
  pcVar7 = (code *)FUN_00411550(uVar5,0xffe8);
  local_108 = (wchar_t *)0x0;
  (*pcVar7)(uVar5,
            L"macrofunction MIN(Expr: Variant; Band: Variant = 0; Flags: Integer = 0): Variant",
            &local_90,0);
  local_88 = local_res10;
  local_90 = FUN_01974220;
  uVar5 = *(undefined8 *)(param_1 + 0x248);
  pcVar7 = (code *)FUN_00411550(uVar5,0xffe8);
  local_108 = (wchar_t *)0x0;
  (*pcVar7)(uVar5,
            L"macrofunction MAX(Expr: Variant; Band: Variant = 0; Flags: Integer = 0): Variant",
            &local_90,0);
  local_88 = local_res10;
  local_90 = FUN_01974220;
  uVar5 = *(undefined8 *)(param_1 + 0x248);
  pcVar7 = (code *)FUN_00411550(uVar5,0xffe8);
  local_108 = (wchar_t *)0x0;
  (*pcVar7)(uVar5,L"macrofunction COUNT(Band: Variant = 0; Flags: Integer = 0): Variant",&local_90,0
           );
  if (*(longlong *)(DAT_02110720 + 0x18) != 0) {
    (**(code **)(DAT_02110720 + 0x18))(*(undefined8 *)(DAT_02110720 + 0x20),local_res10);
  }
  uVar5 = FUN_0184cde0(*(undefined8 *)(param_1 + 0x248),L"Value");
  *(undefined8 *)(param_1 + 0x1d8) = uVar5;
  uVar5 = FUN_0184cde0(*(undefined8 *)(param_1 + 0x248),L"Self");
  *(undefined8 *)(param_1 + 0x1e0) = uVar5;
  FUN_0184ed20(*(undefined8 *)(param_1 + 0x248),*(undefined8 *)(param_1 + 0x260));
  FUN_00414ad0(*(longlong *)(param_1 + 0x248) + 0x130,*(undefined8 *)(param_1 + 600));
  local_39 = '\x01';
  *(undefined1 *)(param_1 + 0x2b1) = 1;
  *(undefined8 *)(*(longlong *)(param_1 + 0x248) + 0x78) = 0;
LAB_019759d6:
  FUN_00417840(&local_f8,&DAT_004013d8,2);
  FUN_00414480(&local_c8);
  FUN_00414560(&local_a0,2);
  return local_39;
}

