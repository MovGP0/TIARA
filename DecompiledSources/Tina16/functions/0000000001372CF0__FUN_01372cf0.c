/* Ghidra address: 01372cf0 */
/* Ghidra symbol: FUN_01372cf0 */


void FUN_01372cf0(longlong param_1,undefined8 param_2,undefined8 *param_3,char param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_378 [32];
  undefined8 local_358;
  undefined8 local_348;
  undefined8 local_340 [2];
  double local_330 [10];
  double adStack_2e0 [21];
  undefined8 local_238 [10];
  char local_1e1;
  undefined1 local_1e0 [8];
  undefined8 local_1d8 [10];
  undefined1 local_188 [80];
  undefined8 local_138 [10];
  undefined8 local_e8 [9];
  double adStack_a0 [16];
  
  local_348 = 0;
  local_340[0] = 0;
  puVar6 = local_1d8;
  for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *param_3;
    param_3 = param_3 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_00414610(param_6);
  local_1e1 = '\0';
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x468) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x468),iVar4);
      iVar2 = iVar4 + 1;
      adStack_2e0[iVar2] = *(double *)(lVar3 + 0xc);
      local_330[iVar2] = *(double *)(lVar3 + 0x14);
      adStack_a0[iVar2] =
           (local_330[iVar2] - adStack_2e0[iVar4 + 1]) / (double)(int)*(short *)(param_1 + 0xda3);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_330[0] = 4.94065645841247e-324;
  *(undefined1 *)(param_1 + 0x1438) = 0;
  puVar6 = local_1d8;
  puVar7 = local_138;
  for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  do {
    dVar8 = (double)FUN_013729d0(auStack_378,local_138,local_e8);
    while( true ) {
      FUN_01372c70(auStack_378);
      dVar9 = (double)FUN_013729d0(auStack_378,local_188,local_238);
      local_330[0] = (double)((longlong)local_330[0] + 1);
      local_1e1 = FUN_01371930(param_1,local_138,&local_1e1,local_1e0);
      FUN_01af25d0(*(undefined8 *)(param_1 + 0xf10),4,1,local_330);
      FUN_01af25d0(*(undefined8 *)(param_1 + 0xf10),5,2,local_1e0);
      if (((local_1e1 != '\0') ||
          ((longlong)(ulonglong)*(ushort *)(param_1 + 0xd9f) < (longlong)local_330[0])) ||
         (*(char *)(param_1 + 0x49c) == '\x01')) {
        if (local_1e1 == '\0') {
          if (param_4 == '\0') {
            FUN_01af2b10(*(undefined8 *)(param_1 + 0xf10));
            uVar1 = FUN_00b89270();
            FUN_00b8e520(uVar1,&local_348,0x14b);
            FUN_016fd940(local_348);
          }
          else {
            FUN_00de8980(local_340,0x14b,*(undefined8 *)(param_1 + 0x1310));
            FUN_01b05000(local_340[0],0);
          }
        }
        else if (local_1e1 != '\0') {
          local_358 = param_6;
          FUN_01371b20(param_1,local_138,param_4,param_5);
        }
        FUN_00414560(&local_348,2);
        FUN_00414480(&param_6);
        return;
      }
      if (dVar8 <= dVar9) break;
      puVar6 = local_e8;
      puVar7 = local_138;
      for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar6 = local_238;
      puVar7 = local_e8;
      for (lVar3 = 10; dVar8 = dVar9, lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    puVar6 = local_e8;
    puVar7 = local_138;
    for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  } while( true );
}

