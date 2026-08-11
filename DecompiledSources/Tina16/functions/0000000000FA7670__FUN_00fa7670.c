/* Ghidra address: 00fa7670 */
/* Ghidra symbol: FUN_00fa7670 */


void FUN_00fa7670(longlong param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  double dVar5;
  char local_f1;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [4];
  
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  FUN_00450070(local_30,*(undefined8 *)(param_1 + 0x858),&DAT_00fa8cac,&DAT_00fa8cc0,1);
  if (*(int *)(param_1 + 0x850) == 8) {
    FUN_00416cd0(&local_38,4,*(undefined8 *)PTR_DAT_02005598,L"\\VHDL\\MCU\\Include\\PIC18\\",
                 local_30[0],L".inc");
  }
  else {
    FUN_00416cd0(&local_38,4,*(undefined8 *)PTR_DAT_02005598,L"\\VHDL\\MCU\\Include\\",local_30[0],
                 L".inc");
  }
  FUN_00440a20(local_38,1);
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(param_1 + 0x8a8) = plVar4;
  (**(code **)(*plVar4 + 0xd8))(plVar4,local_38);
  (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x268))(*(longlong **)(param_1 + 0x6c0),0);
  (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x268))(*(longlong **)(param_1 + 0x7c0),0);
  *(undefined4 *)(param_1 + 0x860) = 1;
  *(undefined4 *)(param_1 + 0x864) = 1;
  if (*(char *)(param_1 + 0x8b1) == '\x0f') {
    iVar3 = FUN_00fab810(param_1,L"PR3L");
    local_f1 = iVar3 != -1;
  }
  if (*(char *)(param_1 + 0x8b1) == '\x10') {
    iVar3 = FUN_00fab810(param_1,L"PR4L");
    local_f1 = iVar3 != -1;
  }
  if (*(char *)(param_1 + 0x8b1) == '\x11') {
    iVar3 = FUN_00fab810(param_1,L"PR5L");
    local_f1 = iVar3 != -1;
  }
  if (local_f1 == '\0') {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x800),0);
    (**(code **)(**(longlong **)(param_1 + 0x800) + 0x268))(*(longlong **)(param_1 + 0x800),0);
  }
  else {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x800),1);
    (**(code **)(**(longlong **)(param_1 + 0x800) + 0x268))(*(longlong **)(param_1 + 0x800),1);
  }
  if (*(char *)(param_1 + 0x8b1) == '\x03') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x770),L"Timer2 period");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),L"Timer2 reload");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),L"Timer2 prescaler");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7b8),L"Timer2 postscaler");
    local_f0 = *(undefined4 *)(param_1 + 0x938);
    local_ec = *(undefined4 *)(param_1 + 0x93c);
    (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x268))
              (*(longlong **)(param_1 + 0x6c0),*(undefined4 *)(param_1 + 0x934));
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0))
    ;
    *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(param_1 + 0x83c + (longlong)iVar3 * 4);
    FUN_0043f750(&local_40,*(undefined4 *)(param_1 + 0x938));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x828),local_40);
    FUN_0043f750(&local_48,*(undefined4 *)(param_1 + 0x93c));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x830),local_48);
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))
              (*(longlong **)(param_1 + 0x6f0),*(undefined4 *)(param_1 + 0x940));
    (**(code **)(**(longlong **)(param_1 + 0x718) + 0x268))
              (*(longlong **)(param_1 + 0x718),*(undefined4 *)(param_1 + 0x944));
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))
              (*(longlong **)(param_1 + 0x708),*(undefined4 *)(param_1 + 0x948));
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x268))
              (*(longlong **)(param_1 + 0x6f8),*(undefined4 *)(param_1 + 0x94c));
    (**(code **)(**(longlong **)(param_1 + 0x728) + 0x268))
              (*(longlong **)(param_1 + 0x728),*(undefined4 *)(param_1 + 0x950));
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x268))
              (*(longlong **)(param_1 + 0x738),*(undefined4 *)(param_1 + 0x954));
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x268))
              (*(longlong **)(param_1 + 0x748),*(undefined4 *)(param_1 + 0x958));
    (**(code **)(**(longlong **)(param_1 + 0x758) + 0x268))
              (*(longlong **)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x95c));
    (**(code **)(**(longlong **)(param_1 + 0x768) + 0x268))
              (*(longlong **)(param_1 + 0x768),*(undefined4 *)(param_1 + 0x960));
    (**(code **)(**(longlong **)(param_1 + 0x778) + 0x268))
              (*(longlong **)(param_1 + 0x778),*(undefined1 *)(param_1 + 0x964));
    (**(code **)(**(longlong **)(param_1 + 0x780) + 0x268))
              (*(longlong **)(param_1 + 0x780),*(undefined1 *)(param_1 + 0x965));
    (**(code **)(**(longlong **)(param_1 + 0x788) + 0x268))
              (*(longlong **)(param_1 + 0x788),*(undefined1 *)(param_1 + 0x966));
    (**(code **)(**(longlong **)(param_1 + 0x790) + 0x268))
              (*(longlong **)(param_1 + 0x790),*(undefined1 *)(param_1 + 0x967));
    (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))
              (*(longlong **)(param_1 + 0x798),*(undefined1 *)(param_1 + 0x968));
    FUN_00f61040(&local_50,*(undefined4 *)(param_1 + 0x96c));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7a8),local_50);
    (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x268))
              (*(longlong **)(param_1 + 0x7b0),*(undefined1 *)(param_1 + 0x969));
    (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x268))
              (*(longlong **)(param_1 + 0x7c0),*(undefined4 *)(param_1 + 0x970));
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))(*(longlong **)(param_1 + 0x7c0))
    ;
    *(int *)(param_1 + 0x860) = iVar3 + 1;
  }
  if (*(char *)(param_1 + 0x8b1) == '\x0f') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x770),L"Timer3 period");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),L"Timer3 reload");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),L"Timer3 prescaler");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7b8),L"Timer3 postscaler");
    local_f0 = *(undefined4 *)(param_1 + 0x978);
    local_ec = *(undefined4 *)(param_1 + 0x9c0);
    (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x268))
              (*(longlong **)(param_1 + 0x6c0),*(undefined4 *)(param_1 + 0x974));
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0))
    ;
    *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(param_1 + 0x83c + (longlong)iVar3 * 4);
    FUN_0043f750(&local_58,*(undefined4 *)(param_1 + 0x978));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x828),local_58);
    FUN_0043f750(&local_60,*(undefined4 *)(param_1 + 0x9c0));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x830),local_60);
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))
              (*(longlong **)(param_1 + 0x6f0),*(undefined4 *)(param_1 + 0x990));
    (**(code **)(**(longlong **)(param_1 + 0x718) + 0x268))
              (*(longlong **)(param_1 + 0x718),*(undefined4 *)(param_1 + 0x994));
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))
              (*(longlong **)(param_1 + 0x708),*(undefined4 *)(param_1 + 0x998));
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x268))
              (*(longlong **)(param_1 + 0x6f8),*(undefined4 *)(param_1 + 0x9a4));
    (**(code **)(**(longlong **)(param_1 + 0x728) + 0x268))
              (*(longlong **)(param_1 + 0x728),*(undefined4 *)(param_1 + 0x9ac));
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x268))
              (*(longlong **)(param_1 + 0x738),*(undefined4 *)(param_1 + 0x9c4));
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x268))
              (*(longlong **)(param_1 + 0x748),*(undefined4 *)(param_1 + 0x9c8));
    (**(code **)(**(longlong **)(param_1 + 0x758) + 0x268))
              (*(longlong **)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x9cc));
    (**(code **)(**(longlong **)(param_1 + 0x768) + 0x268))
              (*(longlong **)(param_1 + 0x768),*(undefined4 *)(param_1 + 0x9d0));
    (**(code **)(**(longlong **)(param_1 + 0x778) + 0x268))
              (*(longlong **)(param_1 + 0x778),*(undefined1 *)(param_1 + 0x9d4));
    (**(code **)(**(longlong **)(param_1 + 0x780) + 0x268))
              (*(longlong **)(param_1 + 0x780),*(undefined1 *)(param_1 + 0x9d5));
    (**(code **)(**(longlong **)(param_1 + 0x788) + 0x268))
              (*(longlong **)(param_1 + 0x788),*(undefined1 *)(param_1 + 0x9d6));
    (**(code **)(**(longlong **)(param_1 + 0x790) + 0x268))
              (*(longlong **)(param_1 + 0x790),*(undefined1 *)(param_1 + 0x9d7));
    (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))
              (*(longlong **)(param_1 + 0x798),*(undefined1 *)(param_1 + 0x9d8));
    FUN_00f61040(&local_68,*(undefined4 *)(param_1 + 0x9dc));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7a8),local_68);
    (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x268))
              (*(longlong **)(param_1 + 0x7b0),*(undefined1 *)(param_1 + 0x9d9));
    (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x268))
              (*(longlong **)(param_1 + 0x7c0),*(undefined4 *)(param_1 + 0x9e0));
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))(*(longlong **)(param_1 + 0x7c0))
    ;
    *(int *)(param_1 + 0x860) = iVar3 + 1;
  }
  if (*(char *)(param_1 + 0x8b1) == '\x10') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x770),L"Timer4 period");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),L"Timer4 reload");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),L"Timer4 prescaler");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7b8),L"Timer4 postscaler");
    local_f0 = *(undefined4 *)(param_1 + 0x9f0);
    local_ec = *(undefined4 *)(param_1 + 0xa38);
    (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x268))
              (*(longlong **)(param_1 + 0x6c0),*(undefined4 *)(param_1 + 0x9ec));
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0))
    ;
    *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(param_1 + 0x83c + (longlong)iVar3 * 4);
    FUN_0043f750(&local_70,*(undefined4 *)(param_1 + 0x9f0));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x828),local_70);
    FUN_0043f750(&local_78,*(undefined4 *)(param_1 + 0xa38));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x830),local_78);
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))
              (*(longlong **)(param_1 + 0x6f0),*(undefined4 *)(param_1 + 0xa08));
    (**(code **)(**(longlong **)(param_1 + 0x718) + 0x268))
              (*(longlong **)(param_1 + 0x718),*(undefined4 *)(param_1 + 0xa0c));
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))
              (*(longlong **)(param_1 + 0x708),*(undefined4 *)(param_1 + 0xa10));
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x268))
              (*(longlong **)(param_1 + 0x6f8),*(undefined4 *)(param_1 + 0xa1c));
    (**(code **)(**(longlong **)(param_1 + 0x728) + 0x268))
              (*(longlong **)(param_1 + 0x728),*(undefined4 *)(param_1 + 0xa24));
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x268))
              (*(longlong **)(param_1 + 0x738),*(undefined4 *)(param_1 + 0xa3c));
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x268))
              (*(longlong **)(param_1 + 0x748),*(undefined4 *)(param_1 + 0xa40));
    (**(code **)(**(longlong **)(param_1 + 0x758) + 0x268))
              (*(longlong **)(param_1 + 0x758),*(undefined4 *)(param_1 + 0xa44));
    (**(code **)(**(longlong **)(param_1 + 0x768) + 0x268))
              (*(longlong **)(param_1 + 0x768),*(undefined4 *)(param_1 + 0xa48));
    (**(code **)(**(longlong **)(param_1 + 0x778) + 0x268))
              (*(longlong **)(param_1 + 0x778),*(undefined1 *)(param_1 + 0xa4c));
    (**(code **)(**(longlong **)(param_1 + 0x780) + 0x268))
              (*(longlong **)(param_1 + 0x780),*(undefined1 *)(param_1 + 0xa4d));
    (**(code **)(**(longlong **)(param_1 + 0x788) + 0x268))
              (*(longlong **)(param_1 + 0x788),*(undefined1 *)(param_1 + 0xa4e));
    (**(code **)(**(longlong **)(param_1 + 0x790) + 0x268))
              (*(longlong **)(param_1 + 0x790),*(undefined1 *)(param_1 + 0xa4f));
    (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))
              (*(longlong **)(param_1 + 0x798),*(undefined1 *)(param_1 + 0xa50));
    FUN_00f61040(&local_80,*(undefined4 *)(param_1 + 0xa54));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7a8),local_80);
    (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x268))
              (*(longlong **)(param_1 + 0x7b0),*(undefined1 *)(param_1 + 0xa51));
    (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x268))
              (*(longlong **)(param_1 + 0x7c0),*(undefined4 *)(param_1 + 0xa58));
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))(*(longlong **)(param_1 + 0x7c0))
    ;
    *(int *)(param_1 + 0x860) = iVar3 + 1;
  }
  if (*(char *)(param_1 + 0x8b1) == '\x11') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x770),L"Timer5 period");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),L"Timer5 reload");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),L"Timer5 prescaler");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7b8),L"Timer5 postscaler");
    local_f0 = *(undefined4 *)(param_1 + 0xa68);
    local_ec = *(undefined4 *)(param_1 + 0xab0);
    (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x268))
              (*(longlong **)(param_1 + 0x6c0),*(undefined4 *)(param_1 + 0xa64));
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0))
    ;
    *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(param_1 + 0x83c + (longlong)iVar3 * 4);
    FUN_0043f750(&local_88,*(undefined4 *)(param_1 + 0xa68));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x828),local_88);
    FUN_0043f750(&local_90,*(undefined4 *)(param_1 + 0xab0));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x830),local_90);
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))
              (*(longlong **)(param_1 + 0x6f0),*(undefined4 *)(param_1 + 0xa80));
    (**(code **)(**(longlong **)(param_1 + 0x718) + 0x268))
              (*(longlong **)(param_1 + 0x718),*(undefined4 *)(param_1 + 0xa84));
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))
              (*(longlong **)(param_1 + 0x708),*(undefined4 *)(param_1 + 0xa88));
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x268))
              (*(longlong **)(param_1 + 0x6f8),*(undefined4 *)(param_1 + 0xa94));
    (**(code **)(**(longlong **)(param_1 + 0x728) + 0x268))
              (*(longlong **)(param_1 + 0x728),*(undefined4 *)(param_1 + 0xa9c));
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x268))
              (*(longlong **)(param_1 + 0x738),*(undefined4 *)(param_1 + 0xab4));
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x268))
              (*(longlong **)(param_1 + 0x748),*(undefined4 *)(param_1 + 0xab8));
    (**(code **)(**(longlong **)(param_1 + 0x758) + 0x268))
              (*(longlong **)(param_1 + 0x758),*(undefined4 *)(param_1 + 0xabc));
    (**(code **)(**(longlong **)(param_1 + 0x768) + 0x268))
              (*(longlong **)(param_1 + 0x768),*(undefined4 *)(param_1 + 0xac0));
    (**(code **)(**(longlong **)(param_1 + 0x778) + 0x268))
              (*(longlong **)(param_1 + 0x778),*(undefined1 *)(param_1 + 0xac4));
    (**(code **)(**(longlong **)(param_1 + 0x780) + 0x268))
              (*(longlong **)(param_1 + 0x780),*(undefined1 *)(param_1 + 0xac5));
    (**(code **)(**(longlong **)(param_1 + 0x788) + 0x268))
              (*(longlong **)(param_1 + 0x788),*(undefined1 *)(param_1 + 0xac6));
    (**(code **)(**(longlong **)(param_1 + 0x790) + 0x268))
              (*(longlong **)(param_1 + 0x790),*(undefined1 *)(param_1 + 0xac7));
    (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))
              (*(longlong **)(param_1 + 0x798),*(undefined1 *)(param_1 + 0xac8));
    FUN_00f61040(&local_98,*(undefined4 *)(param_1 + 0xacc));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7a8),local_98);
    (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x268))
              (*(longlong **)(param_1 + 0x7b0),*(undefined1 *)(param_1 + 0xac9));
    (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x268))
              (*(longlong **)(param_1 + 0x7c0),*(undefined4 *)(param_1 + 0xad0));
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))(*(longlong **)(param_1 + 0x7c0))
    ;
    *(int *)(param_1 + 0x860) = iVar3 + 1;
  }
  if (*(int *)(param_1 + 0x850) == 8) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x800) + 0x260))(*(longlong **)(param_1 + 0x800))
    ;
    if (cVar2 != '\0') goto LAB_00fa881a;
  }
  else {
LAB_00fa881a:
    if (*(int *)(param_1 + 0x850) != 1) {
      *(undefined4 *)(param_1 + 0x86c) = 0x10000;
      goto LAB_00fa8845;
    }
  }
  *(undefined4 *)(param_1 + 0x86c) = 0x100;
LAB_00fa8845:
  *(undefined4 *)(param_1 + 0x870) = *(undefined4 *)(param_1 + 0x844);
  *(undefined4 *)(param_1 + 0x874) = 0x10;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0));
  *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(param_1 + 0x83c + (longlong)iVar3 * 4);
  *(undefined4 *)(param_1 + 0x878) = local_f0;
  *(undefined4 *)(param_1 + 0x87c) = local_ec;
  dVar5 = *(double *)(param_1 + 0x848) / 4.0;
  *(double *)(param_1 + 0x888) =
       (1.0 / dVar5) * (double)*(int *)(param_1 + 0x86c) * (double)*(int *)(param_1 + 0x870) *
       (double)*(int *)(param_1 + 0x874);
  FUN_00b8fd60(&local_a8,*(undefined8 *)(param_1 + 0x888),*PTR_DAT_02005310,0,1);
  FUN_00416ba0(&local_a0,L"Period max: ",local_a8);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x820),local_a0);
  iVar3 = *(int *)(param_1 + 0x878);
  iVar1 = *(int *)(param_1 + 0x87c);
  if (iVar3 < iVar1) {
    *(double *)(param_1 + 0x880) =
         (1.0 / dVar5) * (double)(iVar1 - iVar3) * (double)*(int *)(param_1 + 0x870);
  }
  else {
    *(double *)(param_1 + 0x880) =
         (1.0 / dVar5) * (double)((*(int *)(param_1 + 0x86c) + iVar1) - iVar3) *
         (double)*(int *)(param_1 + 0x870);
  }
  FUN_00b8fd60(&local_b8,*(undefined8 *)(param_1 + 0x880),*PTR_DAT_02005310,0,1);
  FUN_00416ba0(&local_b0,L"Time max: ",local_b8);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7e0),local_b0);
  if (*(int *)(param_1 + 0x87c) < *(int *)(param_1 + 0x878)) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x828),&local_c0);
    iVar3 = FUN_0043fc00(local_c0);
    iVar3 = (*(int *)(param_1 + 0x86c) - iVar3) + *(int *)(param_1 + 0x87c);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x828),&local_c8);
    iVar3 = FUN_0043fc00(local_c8);
    iVar3 = *(int *)(param_1 + 0x87c) - iVar3;
  }
  *(double *)(param_1 + 0x890) = (1.0 / dVar5) * (double)iVar3 * (double)*(int *)(param_1 + 0x864);
  *(undefined1 *)(param_1 + 0x8a0) = 1;
  FUN_00b90440(*(undefined8 *)(param_1 + 0x7f8),*(undefined8 *)(param_1 + 0x890));
  FUN_00b8fd60(&local_d8,*(undefined8 *)(param_1 + 0x890),*PTR_DAT_02005310,0,1);
  FUN_00416ba0(&local_d0,L"Start time: ",local_d8);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7d8),local_d0);
  *(double *)(param_1 + 0x898) =
       (1.0 / dVar5) * (double)*(int *)(param_1 + 0x87c) * (double)*(int *)(param_1 + 0x864) *
       (double)*(int *)(param_1 + 0x860);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x818),*(undefined8 *)(param_1 + 0x898));
  *(undefined1 *)(param_1 + 0x8a0) = 0;
  FUN_00b8fd60(&local_e8,*(undefined8 *)(param_1 + 0x898),*PTR_DAT_02005310,0,1);
  FUN_00416ba0(&local_e0,L"Period time: ",local_e8);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x808),local_e0);
  FUN_00414560(&local_e8,4);
  FUN_00414560(&local_c8,2);
  FUN_00414560(&local_b8,0x12);
  return;
}

