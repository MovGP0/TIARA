/* Ghidra address: 015d4110 */
/* Ghidra symbol: FUN_015d4110 */


char FUN_015d4110(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_910 [7];
  undefined8 local_8d2;
  undefined8 local_880 [4];
  undefined4 local_85a;
  undefined8 local_7f0 [2];
  undefined4 local_7e0;
  undefined8 local_760;
  undefined2 local_754;
  undefined8 local_6d0;
  undefined2 local_6c2;
  undefined8 local_640;
  ushort local_638;
  undefined8 local_5b0 [10];
  undefined8 local_560;
  undefined8 local_520 [3];
  uint local_508;
  undefined8 local_490 [3];
  int local_478;
  undefined8 local_400 [11];
  undefined8 local_3a8;
  undefined8 local_370 [2];
  uint local_35c;
  undefined8 local_2e0 [2];
  int local_2cc;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240 [5];
  undefined8 local_212;
  undefined8 local_1b0;
  undefined8 local_1a8 [4];
  undefined4 local_182;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0 [5];
  undefined8 local_b2;
  undefined8 local_50;
  int local_44;
  int local_40;
  undefined8 local_38;
  longlong local_30;
  char local_21;
  int local_20;
  char local_19;
  
  puVar5 = local_910;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_880;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_7f0;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = &local_760;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = &local_6d0;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = &local_640;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_5b0;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_520;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_490;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_400;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_370;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_2e0;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_250 = 0;
  local_248 = 0;
  local_1b0 = 0;
  puVar5 = local_240;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_1a8;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_e8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_f0 = 0;
  local_f8 = 0;
  puVar5 = local_e0;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  local_21 = '\0';
  if ((*(char *)(param_2 + 0x249) == '\0') && (*(char *)(*(longlong *)(param_1 + 0xc0) + 9) == '\0')
     ) {
    FUN_00414480(&local_30);
    local_20 = 0;
    while (*(short *)(param_2 + 0x41 + (longlong)local_20 * 2) != 0) {
      FUN_00416780(&local_50,*(undefined2 *)(param_2 + 0x41 + (longlong)local_20 * 2));
      FUN_00416ad0(&local_30,local_50);
      local_20 = local_20 + 1;
    }
    FUN_015c33c0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_30,&local_20);
    if ((-1 < local_20) && (*(int *)(param_2 + 0x3d) <= local_20)) {
      local_21 = '\x01';
    }
  }
  else {
    iVar2 = FUN_015c2df0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28));
    local_20 = *(int *)(param_2 + 0x3d);
    if (local_20 <= iVar2 + -1) {
      iVar2 = ((iVar2 + -1) - local_20) + 1;
      do {
        if (*(char *)(*(longlong *)(param_1 + 0xc0) + 9) == '\0') {
          FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_e0,local_20);
          FUN_00414b50(&local_30,local_b2);
          local_40 = 0;
          if (local_30 != 0) {
            local_40 = *(int *)(local_30 + -4);
          }
          if (*(short *)(local_30 + -2 + (longlong)local_40 * 2) == 0x2f) {
            local_44 = 0;
            if (local_30 != 0) {
              local_44 = *(int *)(local_30 + -4);
            }
            FUN_00416dc0(&local_30,local_30,1,local_44 + -1);
          }
          FUN_015bf370(&local_f8,local_30,&DAT_015d4b9c,&DAT_015d4bac,1);
          FUN_015bf7d0(&local_f0,local_f8);
          FUN_015bf270(&local_e8,local_f0);
          FUN_00416830(&local_118,param_2 + 0x41,0x104);
          FUN_015bf370(&local_110,local_118,&DAT_015d4b9c,&DAT_015d4bac,1);
          FUN_00441640(&local_108,local_110);
          FUN_015bf270(&local_100,local_108);
          iVar3 = FUN_00416db0(local_e8,local_100);
          if (iVar3 == 0) goto LAB_015d4592;
        }
        else {
LAB_015d4592:
          local_21 = FUN_015d3c60(param_1,local_20,param_2);
          if (local_21 != '\0') {
            FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_1a8,local_20);
            cVar1 = FUN_015d3c20(param_1,local_182,*(undefined4 *)(param_2 + 0x24a));
            if (cVar1 != '\0') break;
            local_21 = '\0';
          }
        }
        local_20 = local_20 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  if (local_21 != '\0') {
    *(int *)(param_2 + 0x3d) = local_20;
    FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_240,local_20);
    FUN_015bf370(&local_1b0,local_212,&DAT_015d4b9c,&DAT_015d4bac,1);
    FUN_015bf0c0(&local_38,local_1b0);
    FUN_015bf710(&local_248,local_38);
    FUN_00414ad0(param_2,local_248);
    FUN_015bf7d0(&local_250,local_38);
    FUN_00414ad0(param_2 + 8,local_250);
    FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_2e0,local_20);
    if (local_2cc == -1) {
      FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_400,local_20);
      *(undefined8 *)(param_2 + 0x10) = local_3a8;
    }
    else {
      FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_370,local_20);
      *(ulonglong *)(param_2 + 0x10) = (ulonglong)local_35c;
    }
    FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_490,local_20);
    if (local_478 == -1) {
      FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_5b0,local_20);
      *(undefined8 *)(param_2 + 0x18) = local_560;
    }
    else {
      FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_520,local_20);
      *(ulonglong *)(param_2 + 0x18) = (ulonglong)local_508;
    }
    if (*(longlong *)(param_2 + 0x18) < 1) {
      *(undefined8 *)(param_2 + 0x20) = 0x4059000000000000;
    }
    else {
      *(double *)(param_2 + 0x20) =
           (1.0 - (double)*(longlong *)(param_2 + 0x10) / (double)*(longlong *)(param_2 + 0x18)) *
           100.0;
    }
    if (*(double *)(param_2 + 0x20) <= 0.0 && *(double *)(param_2 + 0x20) != 0.0) {
      *(undefined8 *)(param_2 + 0x20) = 0;
    }
    FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),&local_640,local_20);
    *(bool *)(param_2 + 0x28) = (local_638 & 1) == 1;
    FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),&local_6d0,local_20);
    *(undefined2 *)(param_2 + 0x29) = local_6c2;
    FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),&local_760,local_20);
    *(undefined2 *)(param_2 + 0x2b) = local_754;
    FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_7f0,local_20);
    *(undefined4 *)(param_2 + 0x2d) = local_7e0;
    FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_880,local_20);
    *(undefined4 *)(param_2 + 0x31) = local_85a;
    FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_910,local_20);
    FUN_00414bf0(param_2 + 0x35,local_8d2);
  }
  local_19 = local_21;
  FUN_00417840(local_910,&DAT_015b9418,0xc);
  FUN_00414560(&local_250,2);
  FUN_00417740(local_240,&DAT_015b9418);
  FUN_00414480(&local_1b0);
  FUN_00417740(local_1a8,&DAT_015b9418);
  FUN_00414560(&local_118,7);
  FUN_00417740(local_e0,&DAT_015b9418);
  FUN_00414480(&local_50);
  FUN_00414560(&local_38,2);
  return local_19;
}

