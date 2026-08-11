/* Ghidra address: 01961250 */
/* Ghidra symbol: FUN_01961250 */


undefined8 * FUN_01961250(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30 [2];
  
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  local_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  local_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  local_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  local_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_88 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_30[0] = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_0195b240(param_1,param_2,param_3);
  cVar1 = FUN_0195f670(param_1,2);
  cVar2 = FUN_0195f670(param_3,2);
  if (cVar1 != cVar2) {
    uVar3 = FUN_0195f670(param_1,2);
    FUN_00468820(&local_48,uVar3);
    FUN_018036e0(local_30,&local_48);
    FUN_00416cd0(param_2,4,*param_2,L" AutoWidth=\"",local_30[0],&DAT_01961e60);
  }
  cVar1 = FUN_0180c8c0(param_1[0x58],*(undefined8 *)(param_3 + 0x2c0));
  if (cVar1 != '\0') {
    FUN_00448430(&local_50,param_1[0x58]);
    FUN_00416cd0(param_2,4,*param_2,L" CharSpacing=\"",local_50,&DAT_01961e60);
  }
  cVar1 = FUN_0180c8c0(param_1[0x5c],*(undefined8 *)(param_3 + 0x2e0));
  if (cVar1 != '\0') {
    FUN_00448430(&local_58,param_1[0x5c]);
    FUN_00416cd0(param_2,4,*param_2,L" GapX=\"",local_58,&DAT_01961e60);
  }
  cVar1 = FUN_0180c8c0(param_1[0x5d],*(undefined8 *)(param_3 + 0x2e8));
  if (cVar1 != '\0') {
    FUN_00448430(&local_60,param_1[0x5d]);
    FUN_00416cd0(param_2,4,*param_2,L" GapY=\"",local_60,&DAT_01961e60);
  }
  if ((char)param_1[0x5e] != *(char *)(param_3 + 0x2f0)) {
    FUN_00468530(&local_80,(char)param_1[0x5e],1);
    FUN_018036e0(&local_68,&local_80);
    FUN_00416cd0(param_2,4,*param_2,L" HAlign=\"",local_68,&DAT_01961e60);
  }
  cVar1 = FUN_0180c8c0(param_1[0x60],*(undefined8 *)(param_3 + 0x300));
  if (cVar1 != '\0') {
    FUN_00448430(&local_88,param_1[0x60]);
    FUN_00416cd0(param_2,4,*param_2,L" LineSpacing=\"",local_88,&DAT_01961e60);
  }
  cVar1 = FUN_0195f670(param_1,0xb);
  cVar2 = FUN_0195f670(param_3,0xb);
  if (cVar1 != cVar2) {
    uVar3 = FUN_0195f670(param_1,0xb);
    FUN_00468820(&local_a8,uVar3);
    FUN_018036e0(&local_90,&local_a8);
    FUN_00416cd0(param_2,4,*param_2,L" UseDefaultCharset=\"",local_90,&DAT_01961e60);
  }
  (**(code **)(*param_1 + 0x368))(param_1,&local_b0,param_3);
  FUN_00416ad0(param_2,local_b0);
  if (param_1[0x3d] != 0) {
    FUN_01802f80(&local_b8,param_1[0x3d]);
    FUN_00416cd0(param_2,4,*param_2,L" Hint=\"",local_b8,&DAT_01961e60);
  }
  cVar1 = FUN_0180c8c0(param_1[0x62],*(undefined8 *)(param_3 + 0x310));
  if (cVar1 != '\0') {
    FUN_00448430(&local_c0,param_1[0x62]);
    FUN_00416cd0(param_2,4,*param_2,L" ParagraphGap=\"",local_c0,&DAT_01961e60);
  }
  if ((int)param_1[99] != *(int *)(param_3 + 0x318)) {
    FUN_0043f750(&local_c8,(int)param_1[99]);
    FUN_00416cd0(param_2,4,*param_2,L" Rotation=\"",local_c8,&DAT_01961e60);
  }
  cVar1 = FUN_0195f670(param_1,6);
  cVar2 = FUN_0195f670(param_3,6);
  if (cVar1 != cVar2) {
    uVar3 = FUN_0195f670(param_1,6);
    FUN_00468820(&local_e8,uVar3);
    FUN_018036e0(&local_d0,&local_e8);
    FUN_00416cd0(param_2,4,*param_2,L" RTLReading=\"",local_d0,&DAT_01961e60);
  }
  if ((char)param_1[0x68] != *(char *)(param_3 + 0x340)) {
    FUN_00468530(&local_108,(char)param_1[0x68],1);
    FUN_018036e0(&local_f0,&local_108);
    FUN_00416cd0(param_2,4,*param_2,L" UnderlinesTextMode=\"",local_f0,&DAT_01961e60);
  }
  if (*(char *)((longlong)param_1 + 0x341) != *(char *)(param_3 + 0x341)) {
    FUN_00468530(&local_128,*(char *)((longlong)param_1 + 0x341),1);
    FUN_018036e0(&local_110,&local_128);
    FUN_00416cd0(param_2,4,*param_2,L" VAlign=\"",local_110,&DAT_01961e60);
  }
  cVar1 = FUN_0195f670(param_1,9);
  cVar2 = FUN_0195f670(param_3,9);
  if (cVar1 != cVar2) {
    uVar3 = FUN_0195f670(param_1,9);
    FUN_00468820(&local_148,uVar3);
    FUN_018036e0(&local_130,&local_148);
    FUN_00416cd0(param_2,4,*param_2,L" WordWrap=\"",local_130,&DAT_01961e60);
  }
  iVar4 = FUN_004b2060(param_1[0x59]);
  if (iVar4 == 1) {
    lVar5 = FUN_0195f5e0(param_1);
    lVar6 = FUN_0195f5e0(param_3);
    if (*(char *)(lVar5 + 0x30) != *(char *)(lVar6 + 0x30)) {
      lVar5 = FUN_0195f5e0(param_1);
      FUN_00468530(&local_168,*(undefined1 *)(lVar5 + 0x30),1);
      FUN_018036e0(&local_150,&local_168);
      FUN_00416cd0(param_2,4,*param_2,L" DisplayFormat.Kind=\"",local_150,&DAT_01961e60);
    }
    lVar5 = FUN_0195f5e0(param_1);
    lVar6 = FUN_0195f5e0(param_3);
    iVar4 = FUN_00416db0(*(undefined8 *)(lVar5 + 0x18),*(undefined8 *)(lVar6 + 0x18));
    if (iVar4 != 0) {
      lVar5 = FUN_0195f5e0(param_1);
      FUN_01802f80(&local_170,*(undefined8 *)(lVar5 + 0x18));
      FUN_00416cd0(param_2,4,*param_2,L" DisplayFormat.DecimalSeparator=\"",local_170,&DAT_01961e60)
      ;
    }
    lVar5 = FUN_0195f5e0(param_1);
    lVar6 = FUN_0195f5e0(param_3);
    iVar4 = FUN_00416db0(*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(lVar6 + 0x20));
    if (iVar4 != 0) {
      lVar5 = FUN_0195f5e0(param_1);
      FUN_01802f80(&local_178,*(undefined8 *)(lVar5 + 0x20));
      FUN_00416cd0(param_2,4,*param_2,L" DisplayFormat.ThousandSeparator=\"",local_178,&DAT_01961e60
                  );
    }
    lVar5 = FUN_0195f5e0(param_1);
    lVar6 = FUN_0195f5e0(param_3);
    iVar4 = FUN_00416db0(*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(lVar6 + 0x28));
    if (iVar4 != 0) {
      lVar5 = FUN_0195f5e0(param_1);
      FUN_01802f80(&local_180,*(undefined8 *)(lVar5 + 0x28));
      FUN_00416cd0(param_2,4,*param_2,L" DisplayFormat.FormatStr=\"",local_180,&DAT_01961e60);
    }
  }
  cVar1 = FUN_0195f670(param_1,4);
  if (cVar1 != '\0') {
    FUN_00416ad0(param_2,L" FirstParaBreak=\"1\"");
  }
  cVar1 = FUN_0195f670(param_1,5);
  if (cVar1 != '\0') {
    FUN_00416ad0(param_2,L" LastParaBreak=\"1\"");
  }
  uVar3 = FUN_0195f670(param_1,5);
  FUN_0195f6f0(param_1,4,uVar3);
  FUN_0195f6f0(param_1,5,0);
  FUN_00414560(&local_180,3);
  FUN_00460ba0(&local_168);
  FUN_00414480(&local_150);
  FUN_00460ba0(&local_148);
  FUN_00414480(&local_130);
  FUN_00460ba0(&local_128);
  FUN_00414480(&local_110);
  FUN_00460ba0(&local_108);
  FUN_00414480(&local_f0);
  FUN_00460ba0(&local_e8);
  FUN_00414560(&local_d0,5);
  FUN_00460ba0(&local_a8);
  FUN_00414560(&local_90,2);
  FUN_00460ba0(&local_80);
  FUN_00414560(&local_68,4);
  FUN_00460ba0(&local_48);
  FUN_00414480(local_30);
  return param_2;
}

