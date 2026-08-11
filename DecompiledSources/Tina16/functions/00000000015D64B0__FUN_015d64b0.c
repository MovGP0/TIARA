/* Ghidra address: 015d64b0 */
/* Ghidra symbol: FUN_015d64b0 */


void FUN_015d64b0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_5e8 [32];
  undefined8 local_5c8;
  undefined8 local_5b8;
  undefined2 local_5ac;
  undefined8 local_528;
  undefined2 local_51a;
  undefined8 local_498;
  undefined2 local_48c;
  undefined8 local_408;
  undefined2 local_3fa;
  undefined8 local_378 [5];
  longlong local_34a;
  undefined8 local_2e8 [4];
  uint local_2c2;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220 [7];
  undefined8 local_1e2;
  undefined8 local_190 [4];
  undefined4 local_16a;
  undefined1 *local_100;
  char local_f5;
  int local_f4;
  longlong local_f0;
  char local_e5;
  uint local_e4;
  int local_e0;
  undefined4 local_dc;
  longlong local_d8;
  char local_c9;
  undefined8 local_c8;
  undefined8 local_c0 [5];
  longlong local_92;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined4 local_1c;
  
  puVar5 = &local_5b8;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = &local_528;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = &local_498;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = &local_408;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_378;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_2e8;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_250 = 0;
  local_258 = 0;
  local_230 = 0;
  local_238 = 0;
  local_228 = 0;
  puVar5 = local_220;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_190;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_28 = (undefined8 *)0x0;
  local_30 = (undefined8 *)0x0;
  local_c8 = 0;
  local_100 = auStack_5e8;
  FUN_00414b50(&local_30,param_3);
  FUN_00414b50(&local_28,param_4);
  FUN_015c29e0(*(undefined8 *)(param_1[0x47] + 0x28),local_190,param_2);
  local_dc = local_16a;
  FUN_015c29e0(*(undefined8 *)(param_1[0x47] + 0x28),local_220,param_2);
  (**(code **)(*param_1 + 0x108))(param_1,&local_30,&local_dc,local_1e2);
  local_c9 = '\0';
  iVar2 = FUN_004170c0(&DAT_015d6f40,local_30,1);
  if ((0 < iVar2) || (iVar2 = FUN_004170c0(&LAB_015d6f50,local_30,1), 0 < iVar2)) {
    FUN_00414480(&local_28);
  }
  if (*(char *)(param_1[0x18] + 0xc) == '\0') {
    FUN_015bf710(&local_228,local_30);
    FUN_00414b50(&local_30,local_228);
  }
  else if (*(char *)(param_1[0x18] + 0xc) != '\0') {
    FUN_015bf7d0(&local_238,local_30);
    FUN_00416ba0(&local_230,local_28,local_238);
    cVar1 = FUN_015bf210(local_230);
    if (cVar1 == '\0') {
      uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,0);
      FUN_004134c0(uVar3);
    }
  }
  FUN_015c29e0(*(undefined8 *)(param_1[0x47] + 0x28),local_2e8,param_2);
  if ((local_2c2 & 0x10) == 0) {
    puVar5 = local_c0;
    for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    FUN_015c29e0(*(undefined8 *)(param_1[0x47] + 0x28),local_c0,param_2);
    FUN_015c29e0(*(undefined8 *)(param_1[0x47] + 0x28),local_378,param_2);
    local_f0 = local_34a;
    local_f4 = 0;
    if (local_34a != 0) {
      local_f4 = *(int *)(local_34a + -4);
    }
    local_f5 = *(short *)(local_92 + -2 + (longlong)local_f4 * 2) == 0x2f;
    FUN_00417740(local_c0,&DAT_015b9418);
  }
  else {
    local_f5 = '\x01';
  }
  if (local_f5 == '\0') {
    FUN_00416ba0(&local_c8,local_28,local_30);
    cVar1 = FUN_015bf1b0(local_c8);
    if (cVar1 != '\0') {
      if ((*(char *)(param_1[0x18] + 0xd) == '\0') &&
         (local_e4 = FUN_015bf640(local_c8), (local_e4 & 1) != 0)) goto LAB_015d6ca3;
      cVar1 = *(char *)(param_1[0x18] + 0xb);
      if (cVar1 == '\0') {
        (**(code **)(*param_1 + 0xb0))(param_1,local_30,&local_c8,&local_e5);
        if (local_e5 == '\0') goto LAB_015d6ca3;
      }
      else {
        if (cVar1 == '\x02') goto LAB_015d6ca3;
        if ((byte)(cVar1 - 3U) < 2) {
          local_e0 = FUN_015bf8b0(local_c8);
          FUN_015c29e0(*(undefined8 *)(param_1[0x47] + 0x28),&local_408,param_2);
          local_1c._2_2_ = local_3fa;
          FUN_015c29e0(*(undefined8 *)(param_1[0x47] + 0x28),&local_498,param_2);
          local_1c = CONCAT22(local_1c._2_2_,local_48c);
          if (((local_1c <= local_e0) && (*(char *)(param_1[0x18] + 0xb) == '\x03')) ||
             ((local_e0 <= local_1c && (*(char *)(param_1[0x18] + 0xb) == '\x04'))))
          goto LAB_015d6ca3;
        }
      }
    }
    cVar1 = FUN_015bf1b0(local_c8);
    if (cVar1 != '\0') {
      FUN_015bf690(local_c8,0);
      uVar3 = FUN_00416740(local_c8);
      FUN_015bf470(uVar3);
    }
    local_d8 = FUN_004b9860(&PTR_FUN_0047c498,1,local_c8,0xff00);
    local_c9 = '\0';
    local_5c8 = 0;
    FUN_015d3670(param_1,param_2,local_d8,0);
    FUN_015c29e0(*(undefined8 *)(param_1[0x47] + 0x28),&local_528,param_2);
    local_1c._2_2_ = local_51a;
    FUN_015c29e0(*(undefined8 *)(param_1[0x47] + 0x28),&local_5b8,param_2);
    local_1c = CONCAT22(local_1c._2_2_,local_5ac);
    FUN_00440ee0(*(undefined8 *)(local_d8 + 8),local_1c);
    if ((*(char *)(param_1[0x18] + 0x14) != '\0') && (cVar1 = FUN_015c08c0(local_c8), cVar1 != '\0')
       ) {
      thunk_FUN_041ad0c1(*(undefined8 *)(local_d8 + 8));
    }
    FUN_00410f20(local_d8);
    if (((*(char *)((longlong)param_1 + 0x102) == '\0') && ((char)param_1[0x20] == '\0')) &&
       (local_c9 == '\0')) {
      if (*(char *)(param_1[0x18] + 0xe) != '\0') {
        FUN_015bf690(local_c8,local_dc);
      }
    }
    else {
      uVar3 = FUN_00416740(local_c8);
      FUN_015bf470(uVar3);
    }
  }
LAB_015d6ca3:
  FUN_00417840(&local_5b8,&DAT_015b9418,6);
  FUN_00414560(&local_258,2);
  FUN_00414560(&local_238,3);
  FUN_00417840(local_220,&DAT_015b9418,2);
  FUN_00414480(&local_c8);
  FUN_00414560(&local_30,2);
  return;
}

