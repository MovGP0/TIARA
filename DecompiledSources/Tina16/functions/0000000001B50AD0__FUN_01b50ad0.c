/* Ghidra address: 01b50ad0 */
/* Ghidra symbol: FUN_01b50ad0 */


undefined1 FUN_01b50ad0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *local_res10 [3];
  undefined1 local_1d28 [32];
  undefined4 local_1d08;
  undefined8 local_1d00;
  undefined8 local_1cf8;
  undefined1 local_1cf0;
  undefined4 local_1ce8;
  undefined8 local_1cd0;
  undefined8 local_1cc8;
  undefined8 local_1cc0;
  undefined8 local_1cb8 [292];
  undefined8 local_1394;
  undefined4 local_1380 [2];
  undefined1 local_1378;
  undefined8 local_1370;
  undefined8 local_1368;
  undefined8 local_1360;
  undefined8 local_1358 [198];
  undefined1 local_d28;
  undefined8 local_a3c;
  undefined8 local_a20;
  undefined8 local_a18 [290];
  undefined8 local_104;
  undefined1 *local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  int local_9c;
  undefined1 local_94 [4];
  int local_90;
  int local_8c;
  int local_84;
  undefined1 local_61;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_30 [2];
  
  local_d28 = 0;
  local_1d28[0] = 0;
  local_1cc8 = 0;
  local_1cd0 = 0;
  local_1cc0 = 0;
  puVar5 = local_1cb8;
  for (lVar4 = 0x127; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_1370 = 0;
  local_1368 = 0;
  local_1360 = 0;
  puVar5 = local_1358;
  for (lVar4 = 0x127; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_a20 = 0;
  puVar5 = local_a18;
  for (lVar4 = 0x127; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_a8 = 0;
  local_40 = 0;
  local_48 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_30[0] = 0;
  local_58 = 0;
  local_res10[0] = param_2;
  local_e0 = local_1d28;
  FUN_0041b910(param_2);
  local_61 = 0;
  local_50 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_8c = 0;
  (**(code **)(*local_res10[0] + 0x100))(local_res10[0],local_30);
  FUN_01b4ef40(param_1,local_a18);
  FUN_004b4b10(local_50,local_104);
  local_90 = (**(code **)(*local_50 + 0x28))(local_50);
  iVar2 = (**(code **)(*local_50 + 0x28))(local_50);
  FUN_00419260(&local_b0,&DAT_01b4b7e0,1,(longlong)iVar2);
  iVar2 = (**(code **)(*local_50 + 0x28))();
  local_84 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_50 + 0x18))(local_50,&local_a20,local_84);
      uVar6 = FUN_00b8f030(local_a20);
      *(undefined8 *)(local_b0 + (longlong)local_84 * 8) = uVar6;
      if (*(double *)(local_b0 + (longlong)local_84 * 8) <= 0.0) {
        uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Frequency must be a positive number!");
        FUN_004134c0(uVar6);
      }
      local_84 = local_84 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_01b4ef40(param_1,local_1358);
  FUN_004b4b10(local_50,local_a3c);
  iVar2 = (**(code **)(*local_50 + 0x28))(local_50);
  FUN_00419260(&local_b8,&DAT_01b4b830,1,(longlong)iVar2);
  iVar2 = (**(code **)(*local_50 + 0x28))(local_50);
  if (iVar2 != local_90) {
    uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,
                         L"The Number of harmonics must be specified for each Base frequency, separated by commas (e.g., 3, 1, 1)!"
                        );
    FUN_004134c0(uVar6);
  }
  iVar2 = (**(code **)(*local_50 + 0x28))();
  local_84 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_50 + 0x18))(local_50,&local_1360,local_84);
      cVar1 = FUN_0043fc80(local_1360,local_94);
      if (cVar1 == '\0') {
        uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Number of harmonics must be an integer number!");
        FUN_004134c0(uVar6);
      }
      (**(code **)(*local_50 + 0x18))(local_50,&local_1368,local_84);
      iVar3 = FUN_0043fc00(local_1368);
      lVar4 = (longlong)local_84;
      *(int *)(local_b8 + lVar4 * 4) = iVar3;
      if (iVar3 < 1) {
        lVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Number of harmonics must be a positive number!");
        FUN_004134c0();
      }
      if (0x40 < *(int *)(local_b8 + lVar4 * 4)) {
        local_1380[0] = 0x40;
        local_1378 = 0;
        FUN_00442f70(&local_1370,L"Number of harmonics exceed a limit (%d)",local_1380,0);
        lVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,local_1370);
        FUN_004134c0();
      }
      iVar3 = *(int *)(local_b8 + lVar4 * 4);
      if (local_8c < iVar3) {
        local_8c = iVar3;
      }
      local_84 = local_84 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_01b4ef40(param_1,local_1cb8);
  FUN_00414b50(&local_a8,local_1394);
  local_9c = FUN_004170c0(&DAT_01b5168c,local_a8,1);
  if (0 < local_9c) {
    FUN_00416dc0(&local_a8,local_a8,1,local_9c + -1);
  }
  local_1d08 = 0;
  local_1d00 = 0;
  local_1cf8 = 0;
  local_1cf0 = 0;
  local_1ce8 = 1;
  FUN_01b4f420(param_1,local_b8,local_b0,local_a8);
  local_61 = 1;
  FUN_00410f20(local_50);
  FUN_0041b800(&local_1cd0);
  FUN_00417840(&local_1cc8,&DAT_00b9f8e0,2);
  FUN_00417740(local_1cb8,&DAT_01d0d0b8);
  FUN_00414560(&local_1370,3);
  FUN_00417740(local_1358,&DAT_01d0d0b8);
  FUN_00414480(&local_a20);
  FUN_00417740(local_a18,&DAT_01d0d0b8);
  FUN_00417840(&local_d0,&LAB_00b9fca0,2);
  FUN_00419430(&local_b8,&DAT_01b4b830);
  FUN_00419430(&local_b0,&DAT_01b4b7e0);
  FUN_00414480(&local_a8);
  FUN_0041b800(&local_58);
  FUN_00414560(&local_48,2);
  FUN_0041b800(local_30);
  FUN_0041b800(local_res10);
  return local_61;
}

