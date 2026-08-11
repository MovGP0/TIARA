/* Ghidra address: 013d8d70 */
/* Ghidra symbol: FUN_013d8d70 */


void FUN_013d8d70(longlong param_1,ulonglong param_2,undefined1 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  bool bVar9;
  ulonglong in_stack_fffffffffffffef8;
  uint uVar10;
  wchar_t *in_stack_ffffffffffffff00;
  undefined8 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined8 local_90;
  undefined8 local_88;
  wchar_t *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_98 = (wchar_t *)0x0;
  local_88 = 0;
  local_78 = 0;
  local_80 = (wchar_t *)0x0;
  local_70 = 0;
  local_50 = 0;
  local_58 = (wchar_t *)0x0;
  local_48 = 0;
  local_38 = 0;
  if (param_1 == 0) goto LAB_013d9863;
  FUN_013d2e70();
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0xfff5);
  FUN_01a80d70(*(undefined8 *)PTR_DAT_02001e00,param_3);
  if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x8a0) + 0x80) == '\0') {
LAB_013d8e9f:
    FUN_01cec530(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),
                 *(longlong *)PTR_DAT_02001e00 + 0x798,*(undefined8 *)PTR_DAT_02001e00,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  }
  else {
    uVar5 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
    if ((byte)uVar5 < 8) {
      bVar9 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)uVar5 & 0x1f) & 6U) != 0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) goto LAB_013d8e9f;
  }
  uVar10 = (uint)(in_stack_fffffffffffffef8 >> 0x20);
  iVar8 = 0;
  if ((param_2 & 1) != 0) {
    iVar8 = 1;
    local_40 = FUN_00498310(0,0);
    lVar6 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),&local_40);
    FUN_0043f750(&local_48,DAT_01f45458);
    FUN_00416ba0(&local_38,L"Output noise",local_48);
    DAT_01f45458 = DAT_01f45458 + 1;
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar6,local_38,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) = lVar6;
    uVar5 = FUN_01cc6f70(&PTR_FUN_01cbb338,1,param_1);
    local_30[0] = 0;
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_50,0x129);
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_58,0x11f);
    in_stack_fffffffffffffef8 = (ulonglong)uVar10 << 0x20;
    in_stack_ffffffffffffff00 = local_58;
    FUN_00f16900(uVar5,param_1,0,local_50,2,1,in_stack_fffffffffffffef8,local_58,0,1,2,local_30,
                 lVar6,1,0);
    (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
              (*(longlong **)(lVar6 + 0xd8),L"Analysis Result 1",local_30[0]);
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_68);
    FUN_01acf9e0(lVar6,local_68);
    uVar5 = local_30[0];
    cVar2 = FUN_01ce8540(local_30[0]);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(uVar5);
      FUN_01ce6ab0(uVar5,uVar3,0);
    }
    FUN_01ad0490(lVar6);
    FUN_01acfa60(lVar6);
    FUN_01adc0f0(lVar6,0,0);
  }
  if ((param_2 & 2) != 0) {
    iVar8 = iVar8 + 1;
    local_40 = FUN_00498310(0,0);
    lVar6 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),&local_40);
    FUN_0043f750(&local_70,DAT_01f4545c);
    FUN_00416ba0(&local_38,L"Input noise",local_70);
    DAT_01f4545c = DAT_01f4545c + 1;
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar6,local_38,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) = lVar6;
    uVar5 = FUN_01cc6f70(&PTR_FUN_01cbb530,1,param_1);
    local_30[0] = 0;
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_78,0x129);
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_80,0x120);
    in_stack_fffffffffffffef8 = in_stack_fffffffffffffef8 & 0xffffffff00000000;
    in_stack_ffffffffffffff00 = local_80;
    FUN_00f16900(uVar5,param_1,0,local_78,2,1,in_stack_fffffffffffffef8,local_80,0,1,2,local_30,
                 lVar6,1,0);
    (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
              (*(longlong **)(lVar6 + 0xd8),L"Analysis Result 1",local_30[0]);
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_68);
    FUN_01acf9e0(lVar6,local_68);
    uVar5 = local_30[0];
    cVar2 = FUN_01ce8540(local_30[0]);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(uVar5);
      FUN_01ce6ab0(uVar5,uVar3,0);
    }
    FUN_01ad0490(lVar6);
    FUN_01acfa60(lVar6);
    FUN_01adc0f0(lVar6,0,0);
  }
  if ((param_2 & 4) != 0) {
    iVar8 = iVar8 + 1;
    local_40 = FUN_00498310(0,0);
    lVar6 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),&local_40);
    FUN_0043f750(&local_88,DAT_01f45460);
    FUN_00416ba0(&local_38,L"Total noise",local_88);
    DAT_01f45460 = DAT_01f45460 + 1;
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar6,local_38,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) = lVar6;
    uVar5 = FUN_01cc6f70(&PTR_FUN_01cbb878,1,param_1);
    local_30[0] = 0;
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_90,0x129);
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_98,0x121);
    in_stack_fffffffffffffef8 = in_stack_fffffffffffffef8 & 0xffffffff00000000;
    in_stack_ffffffffffffff00 = local_98;
    FUN_00f16900(uVar5,param_1,0,local_90,2,1,in_stack_fffffffffffffef8,local_98,0,1,2,local_30,
                 lVar6,1,0);
    (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
              (*(longlong **)(lVar6 + 0xd8),L"Analysis Result 1",local_30[0]);
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_68);
    FUN_01acf9e0(lVar6,local_68);
    uVar5 = local_30[0];
    cVar2 = FUN_01ce8540(local_30[0]);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(uVar5);
      FUN_01ce6ab0(uVar5,uVar3,0);
    }
    FUN_01ad0490(lVar6);
    FUN_01acfa60(lVar6);
    FUN_01adc0f0(lVar6,0,0);
  }
  if ((param_2 & 8) != 0) {
    iVar8 = iVar8 + 1;
    local_40 = FUN_00498310(0,0);
    lVar6 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),&local_40);
    FUN_0043f750(&local_a0,DAT_01f45464);
    FUN_00416ba0(&local_38,L"Signal to Noise",local_a0);
    DAT_01f45464 = DAT_01f45464 + 1;
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar6,local_38,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) = lVar6;
    uVar5 = FUN_01cc6f70(&PTR_FUN_01cbbbc0,1,param_1);
    local_30[0] = 0;
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_a8,0x129);
    in_stack_ffffffffffffff00 = L"Signal to Noise [#dB]";
    FUN_00f16900(uVar5,param_1,0,local_a8,2,1,in_stack_fffffffffffffef8 & 0xffffffff00000000,
                 L"Signal to Noise [#dB]",0,1,2,local_30,lVar6,1,0);
    (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
              (*(longlong **)(lVar6 + 0xd8),L"Analysis Result 1",local_30[0]);
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_68);
    FUN_01acf9e0(lVar6,local_68);
    uVar5 = local_30[0];
    cVar2 = FUN_01ce8540(local_30[0]);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(uVar5);
      FUN_01ce6ab0(uVar5,uVar3,0);
    }
    FUN_01ad0490(lVar6);
    FUN_01acfa60(lVar6);
    FUN_01adc0f0(lVar6,0,0);
  }
  if (iVar8 != 0) {
    lVar6 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0);
    plVar1 = *(longlong **)(lVar6 + 0x10);
    iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
    FUN_01cec9c0(lVar6,iVar4 - iVar8,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
                 *(longlong *)PTR_DAT_02001e00 + 0x798,*(longlong *)PTR_DAT_02001e00 + 0x788,
                 *(undefined8 *)PTR_DAT_02001e00,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68),
                 (ulonglong)in_stack_ffffffffffffff00 & 0xffffffffffffff00);
  }
  if (*(char *)(*(longlong *)PTR_DAT_02001e00 + 0x4d2) == '\x01') {
    *(int *)PTR_DAT_02001bf8 = *(int *)PTR_DAT_02001bf8 + -1;
    FUN_00800700(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  uVar5 = FUN_0065b870(*(undefined8 *)PTR_DAT_02001e00);
  thunk_FUN_03ab0e43(uVar5,9);
  (**(code **)(**(longlong **)PTR_DAT_02001e00 + 600))(*(longlong **)PTR_DAT_02001e00);
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0);
LAB_013d9863:
  FUN_00414560(&local_a8,8);
  FUN_00414560(&local_58,3);
  FUN_00414480(&local_38);
  return;
}

