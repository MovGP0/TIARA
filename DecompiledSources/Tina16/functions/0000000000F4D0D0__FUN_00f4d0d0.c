/* Ghidra address: 00f4d0d0 */
/* Ghidra symbol: FUN_00f4d0d0 */


undefined8 *
FUN_00f4d0d0(undefined8 *param_1,longlong param_2,int param_3,byte param_4,short *param_5,
            char param_6)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  short sVar7;
  int iVar9;
  bool bVar10;
  double dVar11;
  ulonglong in_stack_fffffffffffffea8;
  ulonglong uVar12;
  int local_10c;
  int local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [20];
  undefined1 local_4c [36];
  short sVar8;
  
  local_f8 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_b8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  uVar1 = *(undefined1 *)(param_2 + 0x12f1);
  FUN_00414480(param_1);
  *param_5 = 0;
  if (param_4 < 8) {
    bVar10 = ((int)CONCAT71((int7)((ulonglong)param_5 >> 8),1) << (param_4 & 0x1f) & 5U) != 0;
  }
  else {
    bVar10 = false;
  }
  local_10c = param_3;
  if (!bVar10) {
    if (-1 < param_3) {
      cVar2 = FUN_01b07dd0(param_2);
      if ((cVar2 != '\0') && (lVar5 = FUN_014cdd20(*(undefined8 *)(param_2 + 0xe8)), lVar5 != 0)) {
        uVar6 = FUN_014cdd20(*(undefined8 *)(param_2 + 0xe8));
        cVar2 = FUN_01563760(uVar6,param_3);
        if (cVar2 != '\0') {
          FUN_00de8980(&local_90,0x826,*(undefined8 *)(param_2 + 0x1310));
          uVar6 = FUN_014cdce0(*(undefined8 *)(param_2 + 0xe8));
          uVar3 = FUN_015f8bb0(uVar6,param_3,local_4c);
          FUN_01aa0820(&local_98,uVar3);
          FUN_00416cd0(param_1,5,&DAT_00f4da3c,local_90,&DAT_00f4da4c,local_98,&DAT_00f4da3c);
          *param_5 = 0x501;
          goto code_r0x00f4d973;
        }
      }
      if (((param_6 != '\0') && (cVar2 = FUN_01b07dd0(param_2), cVar2 != '\0')) &&
         (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x23d0) != 0)) {
        local_10c = FUN_01566100(*(undefined8 *)(*(longlong *)(param_2 + 0xe8) + 0x23d0),param_3);
      }
      if (-1 < local_10c) {
        iVar4 = FUN_017d1380(*(undefined8 *)(param_2 + 0x4c0));
        if (iVar4 < 2) {
          FUN_00de8980(&local_f8,0x137,*(undefined8 *)(param_2 + 0x1310));
          FUN_017d1750(local_a8,*(undefined8 *)(param_2 + 0x4c0),0,local_10c,
                       in_stack_fffffffffffffea8 & 0xffffffff00000000);
          FUN_00b8fec0(&local_100,local_a8[0],uVar1,0,0x3cd203af9ee75616);
          FUN_00416cd0(param_1,5,&DAT_00f4da3c,local_f8,&DAT_00f4da4c,local_100,&DAT_00f4da5c);
          *param_5 = 0x501;
        }
        else {
          in_stack_fffffffffffffea8 = in_stack_fffffffffffffea8 & 0xffffffffffffff00;
          uVar6 = FUN_017d17e0(*(undefined8 *)(param_2 + 0x4c0),local_10c,0,1,
                               in_stack_fffffffffffffea8);
          FUN_017d1750(local_a8,*(undefined8 *)(param_2 + 0x4c0),0,local_10c,
                       in_stack_fffffffffffffea8 & 0xffffffff00000000);
          FUN_00b8fec0(&local_b0,uVar6,uVar1,0,0x3cd203af9ee75616);
          FUN_00416cd0(param_1,3,L"rms=",local_b0,&DAT_00f4da88);
          FUN_0041ddd0(&local_c0,&LAB_00f4cc78);
          FUN_00de8a20(&local_b8,L"DAskVolt",L"sDCLevel",*(undefined8 *)(param_2 + 0x1310),local_c0)
          ;
          FUN_004168b0(&local_c8,local_b8);
          FUN_00b8fec0(&local_d0,local_a8[0],uVar1,0,0x3cd203af9ee75616);
          uVar12 = 0;
          FUN_00416cd0(param_1,7,*param_1,&DAT_00f4da98,&DAT_00f4da3c,local_c8,&DAT_00f4da4c,
                       local_d0,&DAT_00f4da5c);
          sVar8 = 2;
          sVar7 = 2;
          iVar9 = iVar4 + -1;
          local_104 = 1;
          if (0 < iVar9) {
            do {
              FUN_017d1750(local_60,*(undefined8 *)(param_2 + 0x4c0),local_104,local_10c,
                           uVar12 & 0xffffffff00000000);
              FUN_00f4cfc0(&local_68,param_2,local_104,iVar4,uVar1);
              FUN_00de8980(&local_d8,0x13c,*(undefined8 *)(param_2 + 0x1310));
              uVar6 = FUN_00c44590(local_60);
              FUN_00b8fec0(&local_e0,uVar6,uVar1,0,0x3cd203af9ee75616);
              FUN_00416cd0(param_1,8,*param_1,&DAT_00f4da98,&DAT_00f4da3c,local_d8,local_68,
                           &DAT_00f4da4c,local_e0,&DAT_00f4da5c);
              FUN_00de8980(&local_e8,0x13d,*(undefined8 *)(param_2 + 0x1310));
              dVar11 = (double)FUN_00c445d0(local_60);
              uVar6 = FUN_00f4ced0(dVar11 * 57.29577951308232);
              FUN_00b8fec0(&local_f0,uVar6,uVar1,0,0x3cd203af9ee75616);
              uVar12 = 0;
              FUN_00416cd0(param_1,8,*param_1,&DAT_00f4da98,&DAT_00f4da3c,local_e8,local_68,
                           &DAT_00f4da4c,local_f0,&LAB_00f4dae8);
              sVar7 = sVar8 + 2;
              local_104 = local_104 + 1;
              iVar9 = iVar9 + -1;
              sVar8 = sVar7;
            } while (iVar9 != 0);
          }
          *param_5 = sVar7 + 0x400;
        }
      }
    }
    goto code_r0x00f4d973;
  }
  if (param_3 < 0) goto code_r0x00f4d973;
  cVar2 = FUN_01b07dd0(param_2);
  if ((cVar2 == '\0') || (lVar5 = FUN_014cdd20(*(undefined8 *)(param_2 + 0xe8)), lVar5 == 0)) {
LAB_00f4d2f5:
    if (((param_6 != '\0') && (cVar2 = FUN_01b07dd0(param_2), cVar2 != '\0')) &&
       (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x23d0) != 0)) {
      local_10c = FUN_01566100(*(undefined8 *)(*(longlong *)(param_2 + 0xe8) + 0x23d0),param_3);
    }
    if (-1 < local_10c) {
      FUN_00de8980(&local_80,0x137,*(undefined8 *)(param_2 + 0x1310));
      FUN_00b8fec0(&local_88,
                   *(undefined8 *)(*(longlong *)(param_2 + 0x148) + (longlong)local_10c * 8),uVar1,0
                   ,0x3cd203af9ee75616);
      FUN_00416cd0(param_1,5,&DAT_00f4da3c,local_80,&DAT_00f4da4c,local_88,&DAT_00f4da5c);
    }
  }
  else {
    uVar6 = FUN_014cdd20(*(undefined8 *)(param_2 + 0xe8));
    cVar2 = FUN_01563760(uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00f4d2f5;
    FUN_00de8980(&local_70,0x826,*(undefined8 *)(param_2 + 0x1310));
    uVar6 = FUN_014cdce0(*(undefined8 *)(param_2 + 0xe8));
    uVar3 = FUN_015f8bb0(uVar6,param_3,local_4c);
    FUN_01aa0820(&local_78,uVar3);
    FUN_00416cd0(param_1,5,&DAT_00f4da3c,local_70,&DAT_00f4da4c,local_78,&DAT_00f4da3c);
  }
  *param_5 = 0x501;
code_r0x00f4d973:
  FUN_00414560(&local_100,9);
  FUN_00414520(&local_b8);
  FUN_00414480(&local_b0);
  FUN_00414560(&local_98,7);
  return param_1;
}

