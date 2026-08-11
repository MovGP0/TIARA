/* Ghidra address: 010bd140 */
/* Ghidra symbol: FUN_010bd140 */


undefined8 * FUN_010bd140(undefined8 *param_1,char param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
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
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_70 = 0;
  local_78 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  FUN_0043f750(&local_10,9);
  FUN_0043f750(&local_18,0x6b);
  FUN_0043f750(&local_20,200);
  FUN_0043f750(&local_28,0xd2);
  FUN_0043f750(&local_30,0xdc);
  FUN_0043f750(&local_38,0xf);
  FUN_0043f750(&local_40,0xd);
  FUN_0043f750(&local_48,0x10);
  FUN_0043f750(&local_50,0xe);
  FUN_0043f750(&local_58,0x43);
  FUN_0043f750(&local_60,0xd9);
  FUN_0043f750(&local_68,0xda);
  puVar1 = &DAT_010bd4cc;
  puVar3 = &DAT_010bd4cc;
  puVar5 = &DAT_010bd4cc;
  puVar7 = &DAT_010bd4cc;
  puVar9 = &DAT_010bd4cc;
  puVar11 = &DAT_010bd4cc;
  puVar13 = &DAT_010bd4cc;
  puVar15 = &DAT_010bd4cc;
  puVar17 = &DAT_010bd4cc;
  uVar2 = local_28;
  uVar4 = local_30;
  uVar6 = local_38;
  uVar8 = local_40;
  uVar10 = local_48;
  uVar12 = local_50;
  uVar14 = local_58;
  uVar16 = local_60;
  uVar18 = local_68;
  FUN_00416cd0(param_1,0x17,local_10,&DAT_010bd4cc,local_18,&DAT_010bd4cc,local_20,&DAT_010bd4cc,
               local_28,&DAT_010bd4cc,local_30,&DAT_010bd4cc,local_38,&DAT_010bd4cc,local_40,
               &DAT_010bd4cc,local_48,&DAT_010bd4cc,local_50,&DAT_010bd4cc,local_58,&DAT_010bd4cc,
               local_60,&DAT_010bd4cc,local_68);
  if (param_2 != '\0') {
    FUN_0043f750(&local_70,0x24);
    FUN_0043f750(&local_78,0x6c);
    FUN_00416cd0(param_1,5,*param_1,&DAT_010bd4cc,local_70,&DAT_010bd4cc,local_78,puVar1,uVar2,
                 puVar3,uVar4,puVar5,uVar6,puVar7,uVar8,puVar9,uVar10,puVar11,uVar12,puVar13,uVar14,
                 puVar15,uVar16,puVar17,uVar18);
  }
  FUN_00416ad0(param_1,L",<glbpars>");
  FUN_00414560(&local_78,0xe);
  return param_1;
}

