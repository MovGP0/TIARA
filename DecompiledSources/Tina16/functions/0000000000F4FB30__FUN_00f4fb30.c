/* Ghidra address: 00f4fb30 */
/* Ghidra symbol: FUN_00f4fb30 */


undefined8 *
FUN_00f4fb30(undefined8 *param_1,longlong param_2,longlong *param_3,byte param_4,undefined2 *param_5
            )

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined8 uVar10;
  double *pdVar11;
  ulonglong uVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_168 [32];
  undefined *local_148;
  undefined1 *local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined1 *local_128;
  undefined8 *local_118;
  byte local_10d;
  uint local_10c;
  longlong *local_108;
  char local_f9;
  double local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 *local_48;
  undefined1 local_39;
  
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a0 = (undefined1 *)0x0;
  local_98 = (undefined1 *)0x0;
  local_90 = 0;
  local_60[0] = 0;
  local_70 = 0;
  local_88 = 0;
  local_68 = 0;
  local_48 = (undefined1 *)0x0;
  local_39 = *(undefined1 *)(param_2 + 0x12f1);
  local_118 = param_1;
  local_10d = param_4;
  local_108 = param_3;
  FUN_00414480(param_1);
  *param_5 = 0;
  iVar4 = FUN_01b07e10(param_2,local_108);
  if ((*(int *)(param_2 + 0x2d8) < iVar4) ||
     (((lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x2b0) + -8 + (longlong)iVar4 * 8),
       *(char *)(lVar1 + 5) != '\x02' &&
       (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0x24)) &&
      (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0x6c)))) goto code_r0x00f50b8c;
  FUN_0041ddd0(&local_68,&PTR_PTR_00f4cc58);
  local_148 = (undefined *)local_68;
  FUN_00de8a20(local_60,L"DAskVolt",L"sVoltage",*(undefined8 *)(param_2 + 0x1310));
  FUN_004168b0(&local_70,local_60[0]);
  (**(code **)(**(longlong **)(lVar1 + 0x128) + 0x288))(*(longlong **)(lVar1 + 0x128),&local_88);
  local_80 = local_88;
  local_78 = 0x11;
  FUN_00442f70(&local_48,local_70,&local_80,0);
  local_148 = (undefined *)CONCAT71(local_148._1_7_,1);
  FUN_00450070(&local_90,local_48,&DAT_00f50ce4,&DAT_00f50cf4);
  FUN_00414b50(&local_48,local_90);
  iVar4 = FUN_01b05600(lVar1,1);
  uVar5 = FUN_01b05600(lVar1,2);
  uVar12 = (ulonglong)uVar5;
  uVar8 = FUN_01b07dd0(param_2);
  if (((char)uVar8 != '\0') &&
     (uVar8 = *(ulonglong *)(param_2 + 0xe8), *(longlong *)(uVar8 + 0x23d0) != 0)) {
    iVar4 = FUN_01566100(*(undefined8 *)(*(longlong *)(param_2 + 0xe8) + 0x23d0),iVar4);
    uVar8 = FUN_01566100(*(undefined8 *)(*(longlong *)(param_2 + 0xe8) + 0x23d0),uVar12);
    uVar12 = uVar8 & 0xffffffff;
  }
  if (local_10d < 8) {
    bVar13 = ((int)CONCAT71((int7)(uVar8 >> 8),1) << (local_10d & 0x1f) & 5U) != 0;
  }
  else {
    bVar13 = false;
  }
  if (bVar13) {
    local_148 = (undefined *)0x3cd203af9ee75616;
    FUN_00b8fec0(&local_98,
                 *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar4 * 8) -
                 *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)(int)uVar12 * 8),local_39,0)
    ;
    local_148 = &DAT_00f50ce4;
    local_140 = local_98;
    local_138 = &DAT_00f50d18;
    FUN_00416cd0(local_118,5,&DAT_00f50d08,local_48);
  }
  else {
    local_148 = (undefined *)CONCAT71(local_148._1_7_,1);
    local_140 = (undefined1 *)((ulonglong)local_140 & 0xffffffffffffff00);
    local_138 = (undefined *)0x0;
    FUN_00f4f6a0(auStack_168,&local_a0,iVar4,uVar12);
    local_148 = &DAT_00f50ce4;
    local_140 = local_a0;
    FUN_00416cd0(local_118,4,&DAT_00f50d08,local_48);
  }
  *param_5 = 0x501;
  sVar3 = (**(code **)(*local_108 + 0xf8))(local_108);
  if ((((sVar3 == 10) || (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 == 0x4f)) ||
      ((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 == 0x6d ||
       ((((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 == 0xca ||
          (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 == 0xcb)) ||
         (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 == 0xd4)) ||
        ((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 == 0xd5 ||
         (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 == 0xde)))))))) ||
     (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 == 0xdf)) {
    if (*(char *)(param_2 + 0x339) == '\0') {
      local_f9 = '\0';
    }
    else {
      uVar6 = FUN_01cfd2d0(local_108);
      local_148 = &local_4b;
      local_140 = &local_49;
      pcVar9 = (char *)FUN_01cfde70(local_108,uVar6,0,&local_4a);
      local_f9 = *pcVar9;
    }
  }
  cVar2 = FUN_017cc9f0(local_108,0,0);
  if ((cVar2 != '\0') ||
     ((((((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0x10 &&
          (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0xd9)) &&
         ((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0xda &&
          (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0xe)))) &&
        ((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 10 || (local_f9 != '\x02')))
        ) && ((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0x4f ||
              (local_f9 != '\x02')))) &&
      (((((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0x6d ||
          (local_f9 != '\x02')) &&
         ((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0xca ||
          (local_f9 != '\x02')))) &&
        ((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0xcb || (local_f9 != '\x02')
         ))) && (((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0xd4 ||
                  (local_f9 != '\x02')) &&
                 ((((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0xd5 ||
                    (local_f9 != '\x02')) &&
                   ((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0xde ||
                    (local_f9 != '\x02')))) &&
                  (((((((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0xdf ||
                        (local_f9 != '\x02')) &&
                       (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0xb)) &&
                      ((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0x50 &&
                       (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0x6e)))) &&
                     (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0xcc)) &&
                    ((((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0xcd &&
                       (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0xd6)) &&
                      ((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0xd7 &&
                       (((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0xe0 &&
                         (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0xe1)) &&
                        (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 9)))))) &&
                     ((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0x6b &&
                      (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 200)))))) &&
                   ((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0xc9 &&
                    (((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0xd2 &&
                      (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0xd3)) &&
                     ((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0xdc &&
                      (((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0xdd &&
                        (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0x24)) &&
                       (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 != 0x6c))))))))))
                  )))))))))) goto code_r0x00f50b8c;
  FUN_0041ddd0(&local_b0,&PTR_PTR_00f4cc68);
  local_148 = (undefined *)local_b0;
  FUN_00de8a20(&local_a8,L"DAskVolt",L"sCurrent",*(undefined8 *)(param_2 + 0x1310));
  FUN_004168b0(&local_b8,local_a8);
  (**(code **)(**(longlong **)(lVar1 + 0x128) + 0x288))(*(longlong **)(lVar1 + 0x128),&local_c0);
  local_80 = local_c0;
  local_78 = 0x11;
  FUN_00442f70(&local_48,local_b8,&local_80,0);
  local_148 = (undefined *)CONCAT71(local_148._1_7_,1);
  FUN_00450070(&local_c8,local_48,&DAT_00f50ce4,&DAT_00f50cf4);
  FUN_00414b50(&local_48,local_c8);
  sVar3 = (**(code **)(*local_108 + 0xf8))(local_108);
  if ((((sVar3 == 9) || (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 == 0x6b)) ||
      (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 == 200)) ||
     (((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 == 0xc9 ||
       (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 == 0xd2)) ||
      ((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 == 0xd3 ||
       ((((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 == 0xdc ||
          (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 == 0xdd)) ||
         (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 == 0x24)) ||
        (uVar10 = (**(code **)(*local_108 + 0xf8))(local_108), (short)uVar10 == 0x6c)))))))) {
    uVar5 = FUN_01b05600(lVar1,1);
    uVar7 = FUN_01b05600(lVar1,2);
    sVar3 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))(*(longlong **)(lVar1 + 0x128));
    if ((sVar3 == 0x24) ||
       (sVar3 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))(*(longlong **)(lVar1 + 0x128)),
       sVar3 == 0x6c)) {
      local_10c = FUN_01b05600(lVar1,3);
    }
    sVar3 = (**(code **)(*local_108 + 0xf8))(local_108);
    if (((sVar3 == 0xc9) || (sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 == 0xd3)) ||
       ((sVar3 = (**(code **)(*local_108 + 0xf8))(local_108), sVar3 == 0xdd ||
        ((sVar3 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))
                            (*(longlong **)(lVar1 + 0x128)), sVar3 == 0x24 ||
         (sVar3 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))
                            (*(longlong **)(lVar1 + 0x128)), sVar3 == 0x6c)))))) {
      local_148 = &local_4b;
      local_140 = &local_49;
      pdVar11 = (double *)FUN_01cfde70(local_108,3,0,&local_4a);
      dVar15 = *pdVar11 / 100.0;
    }
    else {
      dVar15 = 1.0;
    }
    if (*(char *)(param_2 + 0x339) == '\0') {
      local_f9 = '\0';
    }
    else {
      uVar6 = FUN_01cfd2d0(local_108);
      local_148 = &local_4b;
      local_140 = &local_49;
      pcVar9 = (char *)FUN_01cfde70(local_108,uVar6,0,&local_4a);
      local_f9 = *pcVar9;
    }
    if (local_f9 == '\0') {
LAB_00f5078a:
      sVar3 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))(*(longlong **)(lVar1 + 0x128));
      if ((sVar3 == 0x24) ||
         (sVar3 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))
                            (*(longlong **)(lVar1 + 0x128)), sVar3 == 0x6c)) {
        local_f8 = 0.0;
        dVar14 = 0.0;
        if (uVar5 != local_10c) {
          local_f8 = dVar15 * **(double **)(lVar1 + 0x48);
        }
        pdVar11 = (double *)(ulonglong)local_10c;
        if (uVar7 != local_10c) {
          pdVar11 = *(double **)(lVar1 + 0x48);
          dVar14 = (1.0 - dVar15) * *pdVar11;
        }
        local_f8 = local_f8 + dVar14;
      }
      else {
        pdVar11 = *(double **)(lVar1 + 0x48);
        local_f8 = *pdVar11 * dVar15;
      }
    }
    else if (local_f9 == '\x01') {
      local_f8 = 1000000000.0;
      pdVar11 = (double *)0x0;
    }
    else if (local_f9 == '\x02') {
      local_f8 = 1e-06;
      pdVar11 = (double *)0x0;
    }
    else {
      pdVar11 = (double *)0x0;
      if (local_f9 == '\x03') goto LAB_00f5078a;
    }
    if (local_10d < 8) {
      bVar13 = ((int)CONCAT71((int7)((ulonglong)pdVar11 >> 8),1) << (local_10d & 0x1f) & 5U) != 0;
    }
    else {
      bVar13 = false;
    }
    if (bVar13) {
      if (local_f8 == 0.0) {
        local_148 = (undefined *)0x3cd203af9ee75616;
        FUN_00b8fec0(&local_d8,0x54b249ad2594c37d,local_39,0);
        local_148 = &DAT_00f50d08;
        local_140 = local_48;
        local_138 = &DAT_00f50ce4;
        local_130 = local_d8;
        local_128 = &LAB_00f50d5c;
        FUN_00416cd0(local_118,7,*local_118,&DAT_00f50d4c);
      }
      else {
        local_148 = (undefined *)0x3cd203af9ee75616;
        FUN_00b8fec0(&local_d0,
                     (*(double *)(*(longlong *)(param_2 + 0x118) + (longlong)(int)uVar5 * 8) -
                     *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)(int)uVar7 * 8)) /
                     local_f8,local_39,0);
        local_148 = &DAT_00f50d08;
        local_140 = local_48;
        local_138 = &DAT_00f50ce4;
        local_130 = local_d0;
        local_128 = &LAB_00f50d5c;
        FUN_00416cd0(local_118,7,*local_118,&DAT_00f50d4c);
      }
    }
    else {
      local_148 = (undefined *)((ulonglong)local_148 & 0xffffffffffffff00);
      local_140 = (undefined1 *)CONCAT71(local_140._1_7_,1);
      local_138 = (undefined *)local_f8;
      FUN_00f4f6a0(auStack_168,&local_e0,uVar5,uVar7);
      local_148 = &DAT_00f50d08;
      local_140 = local_48;
      local_138 = &DAT_00f50ce4;
      local_130 = local_e0;
      FUN_00416cd0(local_118,6,*local_118,&DAT_00f50d4c);
    }
  }
  else {
    if (local_10d < 8) {
      bVar13 = ((int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1) << (local_10d & 0x1f) & 5U) != 0;
    }
    else {
      bVar13 = false;
    }
    if (bVar13) {
      iVar4 = FUN_01b05690(lVar1,1,1);
      local_148 = (undefined *)0x3cd203af9ee75616;
      FUN_00b8fec0(&local_e8,*(undefined8 *)(*(longlong *)(param_2 + 0x148) + (longlong)iVar4 * 8),
                   local_39,0);
      local_148 = &DAT_00f50d08;
      local_140 = local_48;
      local_138 = &DAT_00f50ce4;
      local_130 = local_e8;
      local_128 = &LAB_00f50d5c;
      FUN_00416cd0(local_118,7,*local_118,&DAT_00f50d4c);
    }
    else {
      uVar6 = FUN_01b05690(lVar1,1,1);
      local_148 = (undefined *)((ulonglong)local_148 & 0xffffffffffffff00);
      local_140 = (undefined1 *)((ulonglong)local_140 & 0xffffffffffffff00);
      local_138 = (undefined *)0x0;
      FUN_00f4f6a0(auStack_168,&local_f0,uVar6,0);
      local_148 = &DAT_00f50d08;
      local_140 = local_48;
      local_138 = &DAT_00f50ce4;
      local_130 = local_f0;
      FUN_00416cd0(local_118,6,*local_118,&DAT_00f50d4c);
    }
  }
  *param_5 = 0x202;
code_r0x00f50b8c:
  FUN_00414560(&local_f0,9);
  FUN_00414520(&local_a8);
  FUN_00414560(&local_a0,4);
  FUN_00414560(&local_70,2);
  FUN_00414520(local_60);
  FUN_00414480(&local_48);
  return local_118;
}

