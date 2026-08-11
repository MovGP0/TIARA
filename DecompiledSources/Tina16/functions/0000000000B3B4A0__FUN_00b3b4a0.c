/* Ghidra address: 00b3b4a0 */
/* Ghidra symbol: FUN_00b3b4a0 */


undefined8 *
FUN_00b3b4a0(undefined8 *param_1,longlong param_2,undefined2 param_3,undefined1 param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  bool bVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined *puVar11;
  undefined *puVar12;
  char *pcVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
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
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  uVar5 = FUN_00b4fb40(*(undefined8 *)(param_2 + 0x10),param_3,param_4);
  FUN_00b4e0c0(uVar5,local_20);
  FUN_00415530(&local_28,local_20[0],0);
  uVar3 = FUN_00b4e090(uVar5);
  FUN_0043f750(&local_30,uVar3);
  FUN_00415dd0(&local_38,local_30,0);
  uVar4 = FUN_00b4e060(uVar5);
  FUN_00b3b310(&local_40,uVar4);
  puVar9 = &DAT_00b3bf20;
  pcVar10 = "font-size: ";
  puVar11 = &DAT_00b3bf48;
  puVar12 = &DAT_00b3bf20;
  pcVar13 = "color: ";
  puVar15 = &DAT_00b3bf10;
  puVar16 = &DAT_00b3bf20;
  uVar6 = local_38;
  uVar14 = local_40;
  FUN_00415980(param_1,0xc,"font-family: ",local_28,&DAT_00b3bf10,&DAT_00b3bf20,"font-size: ",
               local_38,&DAT_00b3bf48,&DAT_00b3bf20,"color: ",local_40,&DAT_00b3bf10,&DAT_00b3bf20);
  cVar1 = FUN_00b4df10(uVar5);
  if (cVar1 != '\0') {
    FUN_00415980(param_1,3,*param_1,"font-weight: bold;",&DAT_00b3bf20,puVar9,pcVar10,uVar6,puVar11,
                 puVar12,pcVar13,uVar14,puVar15,puVar16);
  }
  cVar1 = FUN_00b4df40(uVar5);
  if (cVar1 != '\0') {
    FUN_00415980(param_1,3,*param_1,"font-style: italic;",&DAT_00b3bf20,puVar9,pcVar10,uVar6,puVar11
                 ,puVar12,pcVar13,uVar14,puVar15,puVar16);
  }
  cVar1 = FUN_00b4df70(uVar5);
  if (cVar1 != '\0') {
    FUN_00415980(param_1,3,*param_1,"text-decoration: underline;",&DAT_00b3bf20);
  }
  cVar1 = FUN_00b4dfa0(uVar5);
  if (cVar1 != '\0') {
    FUN_00415980(param_1,3,*param_1,"text-decoration: line-through;",&DAT_00b3bf20);
  }
  uVar4 = FUN_00b4d680(uVar5);
  FUN_00b3afe0(&local_48,uVar4);
  FUN_00415980(param_1,3,*param_1,local_48,&DAT_00b3bf20);
  uVar4 = FUN_00b4d6b0(uVar5);
  FUN_00b3b0e0(&local_50,uVar4);
  FUN_00415980(param_1,3,*param_1,local_50,&DAT_00b3bf20);
  uVar6 = FUN_00b4d5f0(uVar5);
  bVar7 = (char)uVar6 - 0x38;
  if (bVar7 < 8) {
    bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << (bVar7 & 0x1f) & 6U) != 0;
  }
  else {
    bVar8 = false;
  }
  if (!bVar8) {
    uVar4 = FUN_00b4d2b0(uVar5);
    FUN_00b3b310(&local_58,uVar4);
    FUN_00415980(param_1,5,*param_1,"background-color: ",local_58,&DAT_00b3bf10,&DAT_00b3bf20);
  }
  cVar1 = FUN_00b4d930(uVar5,2);
  if (cVar1 != '\0') {
    uVar4 = FUN_00b4d930(uVar5,2);
    FUN_00b3b1e0(&local_60,uVar4);
    uVar4 = FUN_00b4d8d0(uVar5,2);
    FUN_00b3b310(&local_68,uVar4);
    uVar4 = FUN_00b4d930(uVar5,2);
    uVar2 = FUN_00b1ba70(uVar4);
    FUN_0043f750(&local_70,uVar2);
    FUN_00415dd0(&local_78,local_70,0);
    FUN_00415980(param_1,0xd,*param_1,"border-top-style: ",local_60,&DAT_00b3bf10,&DAT_00b3bf20,
                 "border-top-color: ",local_68,&DAT_00b3bf10,&DAT_00b3bf20,"border-top-width: ",
                 local_78,&DAT_00b3bf10,&DAT_00b3bf20);
  }
  cVar1 = FUN_00b4d930(uVar5,0);
  if (cVar1 != '\0') {
    uVar4 = FUN_00b4d930(uVar5,0);
    FUN_00b3b1e0(&local_80,uVar4);
    uVar4 = FUN_00b4d8d0(uVar5,0);
    FUN_00b3b310(&local_88,uVar4);
    uVar4 = FUN_00b4d930(uVar5,0);
    uVar2 = FUN_00b1ba70(uVar4);
    FUN_0043f750(&local_90,uVar2);
    FUN_00415dd0(&local_98,local_90,0);
    FUN_00415980(param_1,0xd,*param_1,"border-left-style: ",local_80,&DAT_00b3bf10,&DAT_00b3bf20,
                 "border-left-color: ",local_88,&DAT_00b3bf10,&DAT_00b3bf20,"border-left-width: ",
                 local_98,&DAT_00b3bf10,&DAT_00b3bf20);
  }
  cVar1 = FUN_00b4d930(uVar5,3);
  if (cVar1 != '\0') {
    uVar4 = FUN_00b4d930(uVar5,3);
    FUN_00b3b1e0(&local_a0,uVar4);
    uVar4 = FUN_00b4d8d0(uVar5,3);
    FUN_00b3b310(&local_a8,uVar4);
    uVar4 = FUN_00b4d930(uVar5,3);
    uVar2 = FUN_00b1ba70(uVar4);
    FUN_0043f750(&local_b0,uVar2);
    FUN_00415dd0(&local_b8,local_b0,0);
    FUN_00415980(param_1,0xd,*param_1,"border-bottom-style: ",local_a0,&DAT_00b3bf10,&DAT_00b3bf20,
                 "border-bottom-color: ",local_a8,&DAT_00b3bf10,&DAT_00b3bf20,
                 "border-bottom-width: ",local_b8,&DAT_00b3bf10,&DAT_00b3bf20);
  }
  cVar1 = FUN_00b4d930(uVar5,1);
  if (cVar1 != '\0') {
    uVar4 = FUN_00b4d930(uVar5,1);
    FUN_00b3b1e0(&local_c0,uVar4);
    uVar4 = FUN_00b4d8d0(uVar5,1);
    FUN_00b3b310(&local_c8,uVar4);
    uVar4 = FUN_00b4d930(uVar5,1);
    uVar2 = FUN_00b1ba70(uVar4);
    FUN_0043f750(&local_d0,uVar2);
    FUN_00415dd0(&local_d8,local_d0,0);
    FUN_00415980(param_1,0xd,*param_1,"border-right-style: ",local_c0,&DAT_00b3bf10,&DAT_00b3bf20,
                 "border-right-color: ",local_c8,&DAT_00b3bf10,&DAT_00b3bf20,"border-right-width: ",
                 local_d8,&DAT_00b3bf10,&DAT_00b3bf20);
  }
  FUN_004144d0(&local_d8);
  FUN_00414480(&local_d0);
  FUN_00414590(&local_c8,3);
  FUN_00414480(&local_b0);
  FUN_00414590(&local_a8,3);
  FUN_00414480(&local_90);
  FUN_00414590(&local_88,3);
  FUN_00414480(&local_70);
  FUN_00414590(&local_68,7);
  FUN_00414480(&local_30);
  FUN_004144d0(&local_28);
  FUN_00414520(local_20);
  return param_1;
}

