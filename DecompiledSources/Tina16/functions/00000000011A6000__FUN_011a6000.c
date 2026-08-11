/* Ghidra address: 011a6000 */
/* Ghidra symbol: FUN_011a6000 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011a6000(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_4c8 [32];
  ushort *local_4a8;
  undefined *local_4a0;
  undefined *local_498;
  int local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  longlong local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined1 *local_3d0;
  longlong *local_3c8;
  longlong *local_3c0;
  undefined8 *local_3b8;
  int *local_3b0;
  longlong *local_3a8;
  longlong *local_3a0;
  longlong *local_398;
  longlong *local_390;
  longlong *local_388;
  int local_380;
  int local_37c;
  longlong local_378;
  int local_370;
  int local_36c;
  longlong local_368;
  int local_35c;
  longlong local_358;
  int local_34c;
  longlong local_348;
  int local_33c;
  int local_338;
  int local_334;
  int local_330;
  int local_32c;
  longlong local_328;
  int local_31c;
  int local_318;
  int local_314;
  longlong local_310;
  int local_2f4;
  int local_2f0;
  longlong local_2ec [32];
  longlong local_1ec [32];
  int local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  int local_d8;
  int local_d4;
  longlong local_d0;
  longlong local_c8;
  int local_c0;
  int local_bc;
  short local_b6;
  int local_b4;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined8 local_30 [2];
  
  local_3d0 = auStack_4c8;
  local_488 = 0;
  local_480 = 0;
  local_478 = 0;
  local_468 = 0;
  local_470 = 0;
  local_460 = 0;
  local_458 = 0;
  local_448 = 0;
  local_450 = 0;
  local_438 = 0;
  local_440 = 0;
  local_428 = 0;
  local_430 = 0;
  local_418 = 0;
  local_420 = 0;
  local_408 = 0;
  local_410 = 0;
  local_3f8 = 0;
  local_400 = 0;
  local_3e8 = 0;
  local_3f0 = 0;
  local_3d8 = 0;
  local_3e0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_30[0] = 0;
  local_e8 = 0x4000000000000000;
  FUN_00525b70(0x4000000000000000,*(undefined4 *)(*(longlong *)PTR_DAT_02003af0 + 0x764));
  local_e0 = FUN_0040c770();
  local_d8 = (int)local_e0 + -1;
  local_ec = *(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x830);
  cVar2 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004ae8 + 0x710) + 0x260))
                    (*(longlong **)(*(longlong *)PTR_DAT_02004ae8 + 0x710));
  if (cVar2 != '\0') {
    *(undefined4 *)PTR_DAT_02004708 = 0x1068;
    local_9c = 0;
    if (-1 < local_d8) {
      iVar6 = local_d8 + 1;
      local_388 = local_1ec;
      local_390 = local_2ec;
      do {
        FUN_0084e320(*(undefined8 *)(*(longlong *)PTR_DAT_020048c8 + 0x700),&local_3e0,
                     *(undefined4 *)(*(longlong *)PTR_DAT_02003af0 + 0x764),local_9c + 1);
        FUN_0043ea00(&local_3d8,local_3e0);
        iVar3 = FUN_00416db0(local_3d8,&DAT_011a9434);
        if (iVar3 == 0) {
          *(undefined1 *)local_388 = 1;
        }
        else {
          *(undefined1 *)local_388 = 0;
        }
        FUN_0084e320(*(undefined8 *)(*(longlong *)PTR_DAT_020048c8 + 0x700),&local_3f0,
                     *(undefined4 *)(*(longlong *)PTR_DAT_02003af0 + 0x764),local_9c + 1);
        FUN_0043ea00(&local_3e8,local_3f0);
        iVar3 = FUN_00416db0(local_3e8,&DAT_011a9444);
        if (iVar3 == 0) {
          *(char *)local_390 = '\x01';
        }
        else {
          *(char *)local_390 = '\0';
        }
        local_9c = local_9c + 1;
        local_390 = (longlong *)((longlong)local_390 + 1);
        local_388 = (longlong *)((longlong)local_388 + 1);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  cVar2 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004ae8 + 0x718) + 0x260))
                    (*(longlong **)(*(longlong *)PTR_DAT_02004ae8 + 0x718));
  if (cVar2 != '\0') {
    *(undefined4 *)PTR_DAT_02004708 = 0x1194;
    local_9c = 0;
    if (-1 < local_d8) {
      iVar6 = local_d8 + 1;
      do {
        FUN_0084e320(*(undefined8 *)(*(longlong *)PTR_DAT_020048c8 + 0x700),&local_400,
                     *(undefined4 *)(*(longlong *)PTR_DAT_02003af0 + 0x764),local_9c + 1);
        FUN_0043ea00(&local_3f8,local_400);
        iVar3 = FUN_00416db0(local_3f8,&DAT_011a9434);
        if (iVar3 == 0) {
          *(undefined1 *)((longlong)local_1ec + (longlong)(local_d8 - local_9c)) = 1;
        }
        else {
          *(undefined1 *)((longlong)local_1ec + (longlong)(local_d8 - local_9c)) = 0;
        }
        FUN_0084e320(*(undefined8 *)(*(longlong *)PTR_DAT_020048c8 + 0x700),&local_410,
                     *(undefined4 *)(*(longlong *)PTR_DAT_02003af0 + 0x764),local_9c + 1);
        FUN_0043ea00(&local_408,local_410);
        iVar3 = FUN_00416db0(local_408,&DAT_011a9444);
        if (iVar3 == 0) {
          *(undefined1 *)((longlong)local_2ec + (longlong)(local_d8 - local_9c)) = 1;
        }
        else {
          *(undefined1 *)((longlong)local_2ec + (longlong)(local_d8 - local_9c)) = 0;
        }
        local_9c = local_9c + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  if ((*(char *)(*(longlong *)PTR_DAT_02003af0 + 0x5fe8) != '\0') && (local_9c = 0, -1 < local_d8))
  {
    iVar6 = local_d8 + 1;
    local_390 = local_1ec;
    do {
      if ((*(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x40c38 + (longlong)local_9c * 4) == 1) &&
         ((char)*local_390 != '\0')) {
        *(undefined4 *)(*(longlong *)PTR_DAT_02004ae8 + 0x40c38 + (longlong)local_9c * 4) = 0;
        *(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x830) =
             *(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x830) + -1;
      }
      local_9c = local_9c + 1;
      local_390 = (longlong *)((longlong)local_390 + 1);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_38 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x298))(*(longlong **)(param_1 + 0x6f0));
  local_2f0 = 0;
  iVar6 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764);
  if (0 < iVar6) {
    local_390 = (longlong *)PTR_DAT_020013a0;
    do {
      local_310 = *local_390;
      local_314 = 0;
      if (local_310 != 0) {
        local_314 = *(int *)(local_310 + -4);
      }
      local_2f0 = local_2f0 + local_314;
      local_390 = local_390 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_d4 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) * 8 + local_2f0 * 7;
  local_3c = 0;
  if (-1 < local_d8) {
    iVar6 = local_d8 + 1;
    local_390 = (longlong *)&DAT_020c7180;
    do {
      local_40 = 0;
      if (-1 < local_d8) {
        iVar3 = local_d8 + 1;
        local_398 = local_390;
        do {
          *(undefined4 *)local_398 =
               *(undefined4 *)
                (*(longlong *)PTR_DAT_02004ae8 + 0x838 + (longlong)local_3c * 0x400 +
                (longlong)local_40 * 4);
          local_40 = local_40 + 1;
          local_398 = (longlong *)((longlong)local_398 + 4);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_3c = local_3c + 1;
      local_390 = local_390 + 0x80;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)PTR_DAT_020012c0 = 0xfffffff4;
  local_54 = 0;
  local_58 = 0;
  local_50 = *(undefined4 *)(*(longlong *)(param_1 + 0x6b8) + 0x98);
  local_4c = *(undefined4 *)(*(longlong *)(param_1 + 0x6b8) + 0x9c);
  FUN_011a5d20(0xffffff);
  (**(code **)(*param_2 + 0xa8))(param_2,&local_58);
  FUN_011a5d20(0);
  FUN_011a5ce0(0xffffff);
  FUN_011a5ca0(0xff);
  if (6 < *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764)) {
    FUN_0064cc50(param_1,0xc3);
  }
  local_68 = DAT_020c6578 + local_d4;
  local_88 = DAT_020c6578 + local_d4;
  local_78 = 0;
  local_98 = 0;
  local_64 = DAT_020c6574 + 0x14;
  local_74 = DAT_020c6574 + 0x14;
  local_84 = 0;
  local_94 = 0;
  local_80 = (local_ec + -1) * 0x18 + local_68 + 0x12;
  local_90 = (local_ec + -1) * 0x18 + local_68 + -0xcd2;
  local_6c = (*(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x828) + -1) * 0x16 + local_64 + 0xe;
  local_8c = (*(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x828) + -1) * 0x16 + local_64 + -0x5ce;
  local_7c = local_8c;
  local_70 = local_90;
  local_60 = local_80;
  local_5c = local_6c;
  FUN_005fdf50(param_2,&local_68);
  FUN_011a5ca0(0);
  local_88 = DAT_020c6578 + -1;
  local_74 = DAT_020c6574 + -2;
  local_90 = local_d4 + (local_ec + -1) * 0x18 + local_88;
  local_80 = local_90 + 0x1a;
  local_8c = (*(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x828) + -1) * 0x16 + local_74;
  local_6c = local_8c + 0x2e;
  local_78 = 0;
  local_98 = 0;
  local_84 = 0;
  local_94 = 0;
  local_90 = local_90 + -0xcca;
  local_8c = local_8c + -0x5ae;
  local_7c = local_8c;
  local_70 = local_90;
  local_68 = local_88;
  local_64 = local_74;
  local_60 = local_80;
  local_5c = local_6c;
  local_58 = local_88;
  local_54 = local_74;
  local_50 = local_80;
  local_4c = local_6c;
  FUN_005fdf50(param_2,&local_68);
  FUN_011a5ca0(0x8000);
  FUN_011a5d60(local_58,local_54,local_50,local_54);
  FUN_011a5d60(local_50,local_54,local_50,local_4c);
  FUN_011a5d60(local_50,local_4c,local_58,local_4c);
  FUN_011a5d60(local_58,local_4c,local_58,local_54);
  FUN_011a5ca0(0xffff00);
  local_58 = DAT_020c6578 + 2;
  local_54 = DAT_020c6574 + 1;
  local_50 = local_d4 + (local_ec + -1) * 0x18 + local_58 + 0x14;
  local_4c = (*(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x828) + -1) * 0x16 + local_54 + 0x28;
  FUN_011a5d60(local_58,local_54,local_50,local_54);
  FUN_011a5d60(local_50,local_54,local_50,local_4c);
  FUN_011a5d60(local_50,local_4c,local_58,local_4c);
  FUN_011a5d60(local_58,local_4c,local_58,local_54);
  FUN_011a5d20(0xc0c0c0);
  FUN_011a5ca0(0xffff00);
  local_88 = DAT_020c6578 + local_d4 + (*(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x830) + -1) * 0x18
             + 0x16;
  local_74 = DAT_020c6574 + 1;
  local_90 = local_d4 + (local_ec + -1) * 0x18 + DAT_020c6578;
  local_80 = local_90 + 0x16;
  local_8c = (*(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x828) + -1) * 0x16 + local_74;
  local_6c = local_8c + 0x28;
  local_78 = 0;
  local_98 = 0;
  local_84 = 0;
  local_94 = 0;
  local_90 = local_90 + -0xcce;
  local_8c = local_8c + -0x5b4;
  local_7c = local_8c;
  local_70 = local_90;
  local_68 = local_88;
  local_64 = local_74;
  local_60 = local_80;
  local_5c = local_6c;
  local_58 = local_88;
  local_54 = local_74;
  local_50 = local_80;
  local_4c = local_6c;
  FUN_005fdf50(DAT_020c6568,&local_68);
  FUN_011a5d60(local_58,local_54,local_50,local_54);
  FUN_011a5d60(local_50,local_54,local_50,local_4c);
  FUN_011a5d60(local_50,local_4c,local_58,local_4c);
  FUN_011a5d60(local_58,local_4c,local_58,local_54);
  FUN_011a5ca0(0xc0c0c0);
  iVar6 = *(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x830);
  local_9c = 0;
  if (-1 < iVar6 + -1) {
    do {
      FUN_011a5d60(DAT_020c6578 + local_d4 + local_9c * 0x18,DAT_020c6574 + 2,
                   DAT_020c6578 + local_d4 + local_9c * 0x18,
                   DAT_020c6574 + *(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x828) * 0x16 + 0x13);
      local_9c = local_9c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_011a5ca0(0x808080);
  local_9c = *(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x830);
  if (local_9c <= local_ec + -1) {
    iVar6 = ((local_ec + -1) - local_9c) + 1;
    do {
      FUN_011a5d60(DAT_020c6578 + local_d4 + local_9c * 0x18,DAT_020c6574 + 2,
                   DAT_020c6578 + local_d4 + local_9c * 0x18,
                   DAT_020c6574 + *(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x828) * 0x16 + 0x13);
      local_9c = local_9c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_011a5ca0(0xffffff);
  iVar6 = *(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x828);
  local_9c = 0;
  if (-1 < iVar6 + -1) {
    do {
      FUN_011a5d60(DAT_020c6578 + 2,DAT_020c6574 + local_9c * 0x16 + 0x14,
                   DAT_020c6578 + local_d4 + *(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x830) * 0x18
                   + -1,DAT_020c6574 + local_9c * 0x16 + 0x14);
      FUN_011a5d60(DAT_020c6578 + local_d4 + *(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x830) * 0x18
                   + -1,DAT_020c6574 + local_9c * 0x16 + 0x14,
                   DAT_020c6578 + local_d4 + local_ec * 0x18 + -1,
                   DAT_020c6574 + local_9c * 0x16 + 0x14);
      local_9c = local_9c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_011a5d60(DAT_020c6578 + 4,DAT_020c6574 + 0x14,DAT_020c6578 + local_d4,DAT_020c6574 + 0x14);
  FUN_011a5d60(DAT_020c6578 + local_d4,DAT_020c6574 + 4,DAT_020c6578 + local_d4,DAT_020c6574 + 0x14)
  ;
  FUN_011a5ca0(0xff);
  local_a0 = 0;
  FUN_011a5d20(0);
  local_9c = 0;
  if (-1 < local_d8) {
    iVar6 = local_d8 + 1;
    do {
      if (*(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x40c38 + (longlong)local_9c * 4) == 1) {
        FUN_0043f750(&local_d0,local_9c);
        local_318 = 0;
        if (local_d0 != 0) {
          local_318 = *(int *)(local_d0 + -4);
        }
        if (local_318 < 3) {
          FUN_011a5dd0(DAT_020c6578 + local_d4 + local_a0 * 0x18 + 8,
                       DAT_020c6574 + *(int *)PTR_DAT_020012c0 + 0x12,local_d0);
        }
        else {
          FUN_011a5dd0(DAT_020c6578 + local_d4 + local_a0 * 0x18 + 2,
                       DAT_020c6574 + *(int *)PTR_DAT_020012c0 + 0x12,local_d0);
        }
        local_a0 = local_a0 + 1;
      }
      local_9c = local_9c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_011a5d20(0xc0c0c0);
  FUN_011a5ce0(0);
  local_9c = 0;
  if (-1 < local_d8) {
    iVar6 = local_d8 + 1;
    local_390 = local_1ec;
    do {
      if ((char)*local_390 != '\0') {
        FUN_0043f750(&local_d0,local_9c);
        local_31c = 0;
        if (local_d0 != 0) {
          local_31c = *(int *)(local_d0 + -4);
        }
        if (local_31c < 3) {
          FUN_011a5dd0(DAT_020c6578 + local_d4 + local_a0 * 0x18 + 8,
                       DAT_020c6574 + *(int *)PTR_DAT_020012c0 + 0x12,local_d0);
        }
        else {
          FUN_011a5dd0(DAT_020c6578 + local_d4 + local_a0 * 0x18 + 2,
                       DAT_020c6574 + *(int *)PTR_DAT_020012c0 + 0x12,local_d0);
        }
        local_a0 = local_a0 + 1;
      }
      local_9c = local_9c + 1;
      local_390 = (longlong *)((longlong)local_390 + 1);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_011a5ce0(0xffffff);
  FUN_011a5d20(0);
  iVar6 = *(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x828);
  local_9c = 0;
  if (-1 < iVar6 + -1) {
    local_390 = &DAT_020c6580;
    local_388 = (longlong *)&DAT_020c6d80;
    do {
      local_a4 = 0;
      FUN_00414480(local_390);
      *(int *)local_388 = 0;
      local_328 = *(longlong *)(*(longlong *)PTR_DAT_02004ae8 + 0x41838 + (longlong)local_9c * 8);
      local_32c = 0;
      if (local_328 != 0) {
        local_32c = *(int *)(local_328 + -4);
      }
      local_34 = local_32c;
      local_48 = 0;
      local_2f4 = 0;
      local_a0 = 1;
      iVar3 = local_32c;
      if (0 < local_32c) {
        do {
          if (*(short *)(*(longlong *)
                          (*(longlong *)PTR_DAT_02004ae8 + 0x41838 + (longlong)local_9c * 8) + -2 +
                        (longlong)local_a0 * 2) != 0x2d) {
            local_48 = local_48 + 1;
          }
          local_a0 = local_a0 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_a0 = 1;
      iVar3 = local_32c;
      if (0 < local_32c) {
        do {
          lVar7 = (longlong)local_9c;
          local_b6 = *(short *)(*(longlong *)(*(longlong *)PTR_DAT_02004ae8 + 0x41838 + lVar7 * 8) +
                                -2 + (longlong)local_a0 * 2);
          if (local_b6 != 0x2d) {
            FUN_00414ad0(&DAT_01f2a438,
                         (&PTR_DAT_01f2a3f8)
                         [7 - (*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) - local_a0)]);
            FUN_00414b50(&local_c8,
                         *(undefined8 *)
                          (PTR_DAT_020013a0 + (longlong)(int)(*DAT_01f2a438 - 0x40) * 8 + -8));
            FUN_011a5dd0(DAT_020c6578 + local_a4 * 0xe + local_2f4 * 7 + 6,
                         DAT_020c6574 + local_9c * 0x16 + *(int *)PTR_DAT_020012c0 + 0x24,local_c8);
            if (local_a4 < local_48 + -1) {
              if (*(char *)(*(longlong *)PTR_DAT_02004ae8 + 0x42038) == '\0') {
                local_334 = 0;
                if (local_c8 != 0) {
                  local_334 = *(int *)(local_c8 + -4);
                }
                FUN_011a5dd0(DAT_020c6578 + local_a4 * 0xe + local_2f4 * 7 + local_334 * 7 + 6,
                             DAT_020c6574 + local_9c * 0x16 + *(int *)PTR_DAT_020012c0 + 0x24,
                             &DAT_011a9464);
              }
              else {
                local_330 = 0;
                if (local_c8 != 0) {
                  local_330 = *(int *)(local_c8 + -4);
                }
                FUN_011a5dd0(DAT_020c6578 + local_a4 * 0xe + local_2f4 * 7 + local_330 * 7 + 6,
                             DAT_020c6574 + local_9c * 0x16 + *(int *)PTR_DAT_020012c0 + 0x24,
                             &DAT_011a9454);
              }
            }
            if (*(short *)(*(longlong *)(*(longlong *)PTR_DAT_02004ae8 + 0x41838 + lVar7 * 8) + -2 +
                          (longlong)local_a0 * 2) == 0x30) {
              FUN_011a5ca0(0xffffff);
              local_338 = 0;
              if (local_c8 != 0) {
                local_338 = *(int *)(local_c8 + -4);
              }
              FUN_011a5d60(DAT_020c6578 + local_a4 * 0xe + local_2f4 * 7 + 7,
                           DAT_020c6574 + local_9c * 0x16 + 0x17,
                           DAT_020c6578 + local_a4 * 0xe + local_2f4 * 7 + local_338 * 6 + 7,
                           DAT_020c6574 + local_9c * 0x16 + 0x17);
              if (*(char *)(*(longlong *)PTR_DAT_02004ae8 + 0x42038) == '\0') {
                local_4a8 = DAT_01f2a438;
                local_4a0 = &DAT_011a9464;
                FUN_00416cd0(local_390,4,*local_390,&DAT_011a9474);
              }
              else {
                local_4a8 = DAT_01f2a438;
                local_4a0 = &DAT_011a9454;
                FUN_00416cd0(local_390,4,*local_390,&DAT_011a9474);
              }
            }
            else if (*(char *)(*(longlong *)PTR_DAT_02004ae8 + 0x42038) == '\0') {
              local_4a8 = (ushort *)&DAT_011a9464;
              FUN_00416cd0(local_390,3,*local_390,DAT_01f2a438);
            }
            else {
              local_4a8 = (ushort *)&DAT_011a9454;
              FUN_00416cd0(local_390,3,*local_390,DAT_01f2a438);
            }
            local_33c = 0;
            if (local_c8 != 0) {
              local_33c = *(int *)(local_c8 + -4);
            }
            if (local_33c == 2) {
              local_2f4 = local_2f4 + 1;
            }
            local_a4 = local_a4 + 1;
          }
          local_a0 = local_a0 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_348 = *local_390;
      local_34c = 0;
      if (local_348 != 0) {
        local_34c = *(int *)(local_348 + -4);
      }
      FUN_00416dc0(local_390,*local_390,1,local_34c + -1);
      local_a0 = 0;
      if (-1 < local_d8) {
        iVar3 = local_d8 + 1;
        do {
          local_a4 = 0;
          local_ac = 0;
          iVar4 = local_a0;
          if (-1 < local_a0 + -1) {
            do {
              if (*(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x40c38 + (longlong)local_ac * 4) == 1) {
                local_a4 = local_a4 + 1;
              }
              local_ac = local_ac + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          FUN_011a5ca0(0xc0c0c0);
          if ((*(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x838 + (longlong)local_9c * 0x400 +
                       (longlong)local_a0 * 4) == 1) &&
             (*(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x40c38 + (longlong)local_a0 * 4) == 1)) {
            if (*(char *)(*(longlong *)PTR_DAT_02004ae8 + 0x42038) == '\0') {
              FUN_011a5dd0(DAT_020c6578 + local_d4 + local_a4 * 0x18 + 7,
                           DAT_020c6574 + local_9c * 0x16 + *(int *)PTR_DAT_020012c0 + 0x26,
                           &DAT_011a9464);
            }
            else {
              FUN_011a5dd0(DAT_020c6578 + local_d4 + local_a4 * 0x18 + 7,
                           DAT_020c6574 + local_9c * 0x16 + *(int *)PTR_DAT_020012c0 + 0x26,
                           &DAT_011a9454);
            }
          }
          local_a0 = local_a0 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_38 = local_9c;
      local_9c = local_9c + 1;
      local_388 = (longlong *)((longlong)local_388 + 4);
      local_390 = local_390 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_011a5ca0(0xff);
  local_9c = 0;
  if (-1 < local_d8) {
    iVar6 = local_d8 + 1;
    local_388 = (longlong *)&DAT_020c7180;
    do {
      if (*(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x40c38 + (longlong)local_9c * 4) != 0) {
        DAT_01f2a440 = 0;
        iVar3 = *(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x828);
        local_a0 = 0;
        if (-1 < iVar3 + -1) {
          do {
            if ((*(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x838 + (longlong)local_a0 * 0x400 +
                         (longlong)local_9c * 4) == 1) &&
               (*(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x40c38 + (longlong)local_9c * 4) == 1)) {
              DAT_01f2a440 = DAT_01f2a440 + 1;
            }
            local_a0 = local_a0 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        if (DAT_01f2a440 == 1) {
          FUN_011a5ca0(0xff);
          local_ac = 0;
          iVar3 = local_9c;
          if (-1 < local_9c + -1) {
            do {
              local_ac = local_ac + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          iVar3 = *(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x828);
          local_a0 = 0;
          if (-1 < iVar3 + -1) {
            local_3b0 = &DAT_020c6d80;
            local_3b8 = &DAT_020c6580;
            do {
              if ((*(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x838 + (longlong)local_a0 * 0x400 +
                           (longlong)local_9c * 4) == 1) &&
                 (*(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x40c38 + (longlong)local_9c * 4) == 1))
              {
                local_44 = -1;
                local_40 = 0;
                if (-1 < local_d8) {
                  iVar4 = local_d8 + 1;
                  local_3a0 = (longlong *)&DAT_020c7180;
                  do {
                    if (*(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x40c38 + (longlong)local_40 * 4)
                        == 1) {
                      local_44 = local_44 + 1;
                    }
                    if ((*(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x838 + (longlong)local_a0 * 0x400
                                 + (longlong)local_40 * 4) == 1) &&
                       (*(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x40c38 + (longlong)local_40 * 4)
                        == 1)) {
                      FUN_011a5dd0(DAT_020c6578 + local_d4 + local_44 * 0x18 + 7,
                                   DAT_020c6574 + local_a0 * 0x16 + *(int *)PTR_DAT_020012c0 + 0x26,
                                   &DAT_011a9454);
                      if (local_40 == local_9c) {
                        FUN_011a5ca0(0xff);
                      }
                      else {
                        FUN_011a5ca0(0x800080);
                      }
                      local_4a8 = (ushort *)
                                  CONCAT44(local_4a8._4_4_,
                                           DAT_020c6578 + local_d4 + local_44 * 0x18 + 3);
                      local_4a0 = (undefined *)
                                  CONCAT44(local_4a0._4_4_,DAT_020c6574 + local_a0 * 0x16 + 0x20);
                      local_498 = (undefined *)
                                  CONCAT44(local_498._4_4_,
                                           DAT_020c6578 + local_d4 + local_44 * 0x18 + 3);
                      local_490 = DAT_020c6574 + local_a0 * 0x16 + 0x20;
                      FUN_011a5e60(DAT_020c6578 + local_d4 + local_44 * 0x18 + 3,
                                   DAT_020c6574 + local_a0 * 0x16 + 0x18,
                                   DAT_020c6578 + local_d4 + local_44 * 0x18 + 0x13,
                                   DAT_020c6574 + local_a0 * 0x16 + 0x28);
                      local_b4 = 0;
                      if (-1 < local_d8) {
                        iVar5 = local_d8 + 1;
                        local_3a8 = local_3a0;
                        do {
                          *(int *)local_3a8 = 0;
                          local_3a8 = local_3a8 + 0x80;
                          iVar5 = iVar5 + -1;
                        } while (iVar5 != 0);
                      }
                    }
                    local_40 = local_40 + 1;
                    local_3a0 = (longlong *)((longlong)local_3a0 + 4);
                    iVar4 = iVar4 + -1;
                  } while (iVar4 != 0);
                }
                if (*local_3b0 == 0) {
                  if (*(char *)(*(longlong *)PTR_DAT_02004ae8 + 0x42038) == '\0') {
                    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_430);
                    local_4a8 = (ushort *)*local_3b8;
                    local_4a0 = &DAT_011a9494;
                    local_498 = &DAT_011a9454;
                    FUN_00416cd0(&local_428,5,local_430,&DAT_011a9484);
                    FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_428);
                  }
                  else {
                    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_420);
                    local_4a8 = (ushort *)&DAT_011a9464;
                    FUN_00416cd0(&local_418,3,local_420,*local_3b8);
                    FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_418);
                  }
                  *local_3b0 = 1;
                }
                local_b4 = 0;
                if (-1 < local_d8) {
                  iVar4 = local_d8 + 1;
                  local_3a0 = local_388;
                  do {
                    *(int *)local_3a0 = 0;
                    local_3a0 = local_3a0 + 0x80;
                    iVar4 = iVar4 + -1;
                  } while (iVar4 != 0);
                }
              }
              local_a0 = local_a0 + 1;
              local_3b8 = local_3b8 + 1;
              local_3b0 = local_3b0 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
      }
      local_9c = local_9c + 1;
      local_388 = (longlong *)((longlong)local_388 + 4);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_011a5ca0(0xff);
  while( true ) {
    local_bc = 0;
    local_c0 = 0;
    iVar6 = *(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x828);
    local_a8 = 0;
    if (-1 < iVar6 + -1) {
      local_388 = (longlong *)&DAT_020c7180;
      do {
        DAT_01f2a440 = 0;
        local_40 = 0;
        if (-1 < local_d8) {
          iVar3 = local_d8 + 1;
          local_3c0 = local_388;
          do {
            if (((int)*local_3c0 == 1) &&
               (*(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x40c38 + (longlong)local_40 * 4) == 1)) {
              DAT_01f2a440 = DAT_01f2a440 + 1;
            }
            local_40 = local_40 + 1;
            local_3c0 = (longlong *)((longlong)local_3c0 + 4);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        if (local_bc < DAT_01f2a440) {
          local_bc = DAT_01f2a440;
          local_c0 = local_a8;
        }
        local_a8 = local_a8 + 1;
        local_388 = local_388 + 0x80;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (local_bc == 0) break;
    local_9c = local_c0;
    local_40 = 0;
    if (-1 < local_d8) {
      iVar6 = local_d8 + 1;
      local_388 = (longlong *)&DAT_020c7180;
      do {
        local_a4 = 0;
        local_ac = 0;
        iVar3 = local_40;
        if (-1 < local_40 + -1) {
          do {
            if (*(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x40c38 + (longlong)local_ac * 4) == 1) {
              local_a4 = local_a4 + 1;
            }
            local_ac = local_ac + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        if (((int)local_388[(longlong)local_9c * 0x80] == 1) &&
           (*(int *)(*(longlong *)PTR_DAT_02004ae8 + 0x40c38 + (longlong)local_40 * 4) == 1)) {
          FUN_011a5ca0(0xffff00);
          local_4a8 = (ushort *)
                      CONCAT44(local_4a8._4_4_,DAT_020c6578 + local_d4 + local_a4 * 0x18 + 3);
          local_4a0 = (undefined *)CONCAT44(local_4a0._4_4_,DAT_020c6574 + local_9c * 0x16 + 0x20);
          local_498 = (undefined *)
                      CONCAT44(local_498._4_4_,DAT_020c6578 + local_d4 + local_a4 * 0x18 + 3);
          local_490 = DAT_020c6574 + local_9c * 0x16 + 0x20;
          FUN_011a5e60(DAT_020c6578 + local_d4 + local_a4 * 0x18 + 3,
                       DAT_020c6574 + local_9c * 0x16 + 0x18,
                       DAT_020c6578 + local_d4 + local_a4 * 0x18 + 0x13,
                       DAT_020c6574 + local_9c * 0x16 + 0x28);
          if ((&DAT_020c6d80)[local_9c] == 0) {
            if (*(char *)(*(longlong *)PTR_DAT_02004ae8 + 0x42038) == '\0') {
              FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_450);
              local_4a8 = (ushort *)(&DAT_020c6580)[local_9c];
              local_4a0 = &DAT_011a9494;
              local_498 = &DAT_011a9454;
              FUN_00416cd0(&local_448,5,local_450,&DAT_011a9484);
              FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_448);
            }
            else {
              FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_440);
              local_4a8 = (ushort *)&DAT_011a9464;
              FUN_00416cd0(&local_438,3,local_440,(&DAT_020c6580)[local_9c]);
              FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_438);
            }
            (&DAT_020c6d80)[local_9c] = 1;
          }
          local_b4 = 0;
          local_3c8 = local_388;
          do {
            *(int *)local_3c8 = 0;
            local_b4 = local_b4 + 1;
            local_3c8 = local_3c8 + 0x80;
          } while (local_b4 != 0x100);
        }
        local_40 = local_40 + 1;
        local_388 = (longlong *)((longlong)local_388 + 4);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_458);
  FUN_00414ad0(*(longlong *)PTR_DAT_02003af0 + 0x7b0,local_458);
  local_30[0] = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),local_30);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_460);
  local_358 = local_460;
  local_35c = 0;
  if (local_460 != 0) {
    local_35c = *(int *)(local_460 + -4);
  }
  FUN_00416dc0(&DAT_01f2a3f0,local_30[0],1,local_35c + -1);
  FUN_00414480(local_30);
  if ((DAT_01f2a3f0 == 0) || (iVar6 = FUN_00416db0(DAT_01f2a3f0,&DAT_011a94a4), iVar6 == 0)) {
    if (((*(char *)(*(longlong *)PTR_DAT_02004ae8 + 0x42038) == '\0') || (local_44 != 0)) &&
       ((*(char *)(*(longlong *)PTR_DAT_02004ae8 + 0x42038) != '\0' || (local_44 != local_d8)))) {
      FUN_00414ad0(&DAT_01f2a3f0,&DAT_011a9444);
    }
    else {
      FUN_00414ad0(&DAT_01f2a3f0,&DAT_011a94b8);
    }
  }
  DAT_01f2a450 = 0;
  FUN_00b971a0(&local_470,DAT_01f2a3f0);
  local_4a8 = (ushort *)local_470;
  FUN_00416cd0(&local_468,3,*(undefined8 *)PTR_DAT_02002860,&LAB_011a94c8);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_468);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_478);
  FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02004ae8 + 0x810),local_478);
  if (*(char *)(*(longlong *)PTR_DAT_02004ae8 + 0x4203a) != '\0') {
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02003af0 + 0x710),DAT_01f2a3f0);
    *(undefined1 *)(*(longlong *)PTR_DAT_02004ae8 + 0x4203a) = 0;
  }
  FUN_00805990(*(undefined8 *)PTR_DAT_02001d58);
  FUN_00805990(*(undefined8 *)PTR_DAT_020048c8);
  if (*(char *)(*(longlong *)PTR_DAT_02004ae8 + 0x42038) == '\0') {
    FUN_00414ad0(PTR_DAT_02005bf8,DAT_01f2a3f0);
  }
  else {
    FUN_00414ad0(PTR_DAT_020011d8,DAT_01f2a3f0);
  }
  if (*(char *)(*(longlong *)PTR_DAT_02004ae8 + 0x42038) == '\0') {
    FUN_00b971a0(&local_488,DAT_01f2a3f0);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001d60 + 0x6d0),local_488);
  }
  else {
    FUN_00b971a0(&local_480,DAT_01f2a3f0);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001d60 + 0x6c8),local_480);
  }
  if (*(char *)(*(longlong *)PTR_DAT_02004ae8 + 0x42038) == '\0') {
    *(undefined4 *)(*(longlong *)PTR_DAT_02003af0 + 0x774) = 0;
    local_9c = 0;
    do {
      local_a0 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)PTR_DAT_02003af0 + 0xfcc + (longlong)local_a0 * 0x400 +
         (longlong)local_9c * 4) = 0;
        local_a0 = local_a0 + 1;
      } while (local_a0 != 10);
      local_9c = local_9c + 1;
    } while (local_9c != 0x20);
    DAT_01f2a444 = 1;
    local_378 = *(longlong *)(*(longlong *)PTR_DAT_02003af0 + 0x7b0);
    local_37c = 0;
    if (local_378 != 0) {
      local_37c = *(int *)(local_378 + -4);
    }
    local_9c = 1;
    local_a0 = 10;
    iVar6 = local_37c;
    if (0 < local_37c) {
      do {
        if ((*(char *)(*(longlong *)PTR_DAT_02004ae8 + 0x42038) == '\0') &&
           (*(short *)(*(longlong *)(*(longlong *)PTR_DAT_02003af0 + 0x7b0) + -2 +
                      (longlong)local_9c * 2) == 0x2a)) {
          DAT_01f2a448 = local_9c;
          _DAT_01f2a44c = 0;
          FUN_00416dc0(&DAT_01f2a458,*(undefined8 *)(*(longlong *)PTR_DAT_02003af0 + 0x7b0),
                       DAT_01f2a444,local_9c - DAT_01f2a444);
          local_380 = 0;
          if (DAT_01f2a458 != 0) {
            local_380 = *(int *)(DAT_01f2a458 + -4);
          }
          local_a4 = 1;
          iVar3 = local_380;
          if (0 < local_380) {
            do {
              if (*(short *)(DAT_01f2a458 + -2 + (longlong)local_a4 * 2) == 0x41) {
                if ((local_a4 == 0) ||
                   ((0 < local_a4 &&
                    (*(short *)(DAT_01f2a458 + -2 + (longlong)(local_a4 + -1) * 2) != 0x27)))) {
                  piVar1 = (int *)(*(longlong *)PTR_DAT_02003af0 + 0xfcc +
                                  (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x774) * 4);
                  *piVar1 = *piVar1 + 1;
                }
                if ((0 < local_a4) &&
                   (*(short *)(DAT_01f2a458 + -2 + (longlong)(local_a4 + -1) * 2) == 0x27)) {
                  piVar1 = (int *)(*(longlong *)PTR_DAT_02003af0 + 0x23cc +
                                  (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x774) * 4);
                  *piVar1 = *piVar1 + 1;
                }
              }
              if (*(short *)(DAT_01f2a458 + -2 + (longlong)local_a4 * 2) == 0x42) {
                if ((local_a4 == 0) ||
                   ((0 < local_a4 &&
                    (*(short *)(DAT_01f2a458 + -2 + (longlong)(local_a4 + -1) * 2) != 0x27)))) {
                  piVar1 = (int *)(*(longlong *)PTR_DAT_02003af0 + 0x13cc +
                                  (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x774) * 4);
                  *piVar1 = *piVar1 + 1;
                }
                if ((0 < local_a4) &&
                   (*(short *)(DAT_01f2a458 + -2 + (longlong)(local_a4 + -1) * 2) == 0x27)) {
                  piVar1 = (int *)(*(longlong *)PTR_DAT_02003af0 + 0x27cc +
                                  (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x774) * 4);
                  *piVar1 = *piVar1 + 1;
                }
              }
              if (*(short *)(DAT_01f2a458 + -2 + (longlong)local_a4 * 2) == 0x43) {
                if ((local_a4 == 0) ||
                   ((0 < local_a4 &&
                    (*(short *)(DAT_01f2a458 + -2 + (longlong)(local_a4 + -1) * 2) != 0x27)))) {
                  piVar1 = (int *)(*(longlong *)PTR_DAT_02003af0 + 0x17cc +
                                  (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x774) * 4);
                  *piVar1 = *piVar1 + 1;
                }
                if ((0 < local_a4) &&
                   (*(short *)(DAT_01f2a458 + -2 + (longlong)(local_a4 + -1) * 2) == 0x27)) {
                  piVar1 = (int *)(*(longlong *)PTR_DAT_02003af0 + 0x2bcc +
                                  (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x774) * 4);
                  *piVar1 = *piVar1 + 1;
                }
              }
              if (*(short *)(DAT_01f2a458 + -2 + (longlong)local_a4 * 2) == 0x44) {
                if ((local_a4 == 0) ||
                   ((0 < local_a4 &&
                    (*(short *)(DAT_01f2a458 + -2 + (longlong)(local_a4 + -1) * 2) != 0x27)))) {
                  piVar1 = (int *)(*(longlong *)PTR_DAT_02003af0 + 0x1bcc +
                                  (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x774) * 4);
                  *piVar1 = *piVar1 + 1;
                }
                if ((0 < local_a4) &&
                   (*(short *)(DAT_01f2a458 + -2 + (longlong)(local_a4 + -1) * 2) == 0x27)) {
                  piVar1 = (int *)(*(longlong *)PTR_DAT_02003af0 + 0x2fcc +
                                  (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x774) * 4);
                  *piVar1 = *piVar1 + 1;
                }
              }
              if (*(short *)(DAT_01f2a458 + -2 + (longlong)local_a4 * 2) == 0x45) {
                if ((local_a4 == 0) ||
                   ((0 < local_a4 &&
                    (*(short *)(DAT_01f2a458 + -2 + (longlong)(local_a4 + -1) * 2) != 0x27)))) {
                  piVar1 = (int *)(*(longlong *)PTR_DAT_02003af0 + 0x1fcc +
                                  (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x774) * 4);
                  *piVar1 = *piVar1 + 1;
                }
                if ((0 < local_a4) &&
                   (*(short *)(DAT_01f2a458 + -2 + (longlong)(local_a4 + -1) * 2) == 0x27)) {
                  piVar1 = (int *)(*(longlong *)PTR_DAT_02003af0 + 0x33cc +
                                  (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x774) * 4);
                  *piVar1 = *piVar1 + 1;
                }
              }
              local_a4 = local_a4 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x774) =
               *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x774) + 1;
          DAT_01f2a444 = DAT_01f2a448 + 1;
        }
        local_9c = local_9c + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else {
    *(undefined4 *)(*(longlong *)PTR_DAT_02003af0 + 0x770) = 0;
    local_9c = 0;
    do {
      local_a0 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)PTR_DAT_02003af0 + 0x37cc + (longlong)local_a0 * 0x400 +
         (longlong)local_9c * 4) = 0;
        local_a0 = local_a0 + 1;
      } while (local_a0 != 10);
      local_9c = local_9c + 1;
    } while (local_9c != 0x20);
    DAT_01f2a444 = 1;
    local_368 = *(longlong *)(*(longlong *)PTR_DAT_02003af0 + 0x7b0);
    local_36c = 0;
    if (local_368 != 0) {
      local_36c = *(int *)(local_368 + -4);
    }
    local_9c = 1;
    local_a0 = 10;
    iVar6 = local_36c;
    if (0 < local_36c) {
      do {
        if ((*(char *)(*(longlong *)PTR_DAT_02004ae8 + 0x42038) != '\0') &&
           (*(short *)(*(longlong *)(*(longlong *)PTR_DAT_02003af0 + 0x7b0) + -2 +
                      (longlong)local_9c * 2) == 0x2b)) {
          DAT_01f2a448 = local_9c;
          _DAT_01f2a44c = 0;
          FUN_00416dc0(&DAT_01f2a458,*(undefined8 *)(*(longlong *)PTR_DAT_02003af0 + 0x7b0),
                       DAT_01f2a444,local_9c - DAT_01f2a444);
          local_370 = 0;
          if (DAT_01f2a458 != 0) {
            local_370 = *(int *)(DAT_01f2a458 + -4);
          }
          local_a4 = 1;
          iVar3 = local_370;
          if (0 < local_370) {
            do {
              if (*(short *)(DAT_01f2a458 + -2 + (longlong)local_a4 * 2) == 0x41) {
                if ((local_a4 == 0) ||
                   ((0 < local_a4 &&
                    (*(short *)(DAT_01f2a458 + -2 + (longlong)(local_a4 + -1) * 2) != 0x27)))) {
                  piVar1 = (int *)(*(longlong *)PTR_DAT_02003af0 + 0x37cc +
                                  (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x770) * 4);
                  *piVar1 = *piVar1 + 1;
                }
                if ((0 < local_a4) &&
                   (*(short *)(DAT_01f2a458 + -2 + (longlong)(local_a4 + -1) * 2) == 0x27)) {
                  piVar1 = (int *)(*(longlong *)PTR_DAT_02003af0 + 0x4bcc +
                                  (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x770) * 4);
                  *piVar1 = *piVar1 + 1;
                }
              }
              if (*(short *)(DAT_01f2a458 + -2 + (longlong)local_a4 * 2) == 0x42) {
                if ((local_a4 == 0) ||
                   ((0 < local_a4 &&
                    (*(short *)(DAT_01f2a458 + -2 + (longlong)(local_a4 + -1) * 2) != 0x27)))) {
                  piVar1 = (int *)(*(longlong *)PTR_DAT_02003af0 + 0x3bcc +
                                  (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x770) * 4);
                  *piVar1 = *piVar1 + 1;
                }
                if ((0 < local_a4) &&
                   (*(short *)(DAT_01f2a458 + -2 + (longlong)(local_a4 + -1) * 2) == 0x27)) {
                  piVar1 = (int *)(*(longlong *)PTR_DAT_02003af0 + 0x4fcc +
                                  (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x770) * 4);
                  *piVar1 = *piVar1 + 1;
                }
              }
              if (*(short *)(DAT_01f2a458 + -2 + (longlong)local_a4 * 2) == 0x43) {
                if ((local_a4 == 0) ||
                   ((0 < local_a4 &&
                    (*(short *)(DAT_01f2a458 + -2 + (longlong)(local_a4 + -1) * 2) != 0x27)))) {
                  piVar1 = (int *)(*(longlong *)PTR_DAT_02003af0 + 0x3fcc +
                                  (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x770) * 4);
                  *piVar1 = *piVar1 + 1;
                }
                if ((0 < local_a4) &&
                   (*(short *)(DAT_01f2a458 + -2 + (longlong)(local_a4 + -1) * 2) == 0x27)) {
                  piVar1 = (int *)(*(longlong *)PTR_DAT_02003af0 + 0x53cc +
                                  (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x770) * 4);
                  *piVar1 = *piVar1 + 1;
                }
              }
              if (*(short *)(DAT_01f2a458 + -2 + (longlong)local_a4 * 2) == 0x44) {
                if ((local_a4 == 0) ||
                   ((0 < local_a4 &&
                    (*(short *)(DAT_01f2a458 + -2 + (longlong)(local_a4 + -1) * 2) != 0x27)))) {
                  piVar1 = (int *)(*(longlong *)PTR_DAT_02003af0 + 0x43cc +
                                  (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x770) * 4);
                  *piVar1 = *piVar1 + 1;
                }
                if ((0 < local_a4) &&
                   (*(short *)(DAT_01f2a458 + -2 + (longlong)(local_a4 + -1) * 2) == 0x27)) {
                  piVar1 = (int *)(*(longlong *)PTR_DAT_02003af0 + 0x57cc +
                                  (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x770) * 4);
                  *piVar1 = *piVar1 + 1;
                }
              }
              if (*(short *)(DAT_01f2a458 + -2 + (longlong)local_a4 * 2) == 0x45) {
                if ((local_a4 == 0) ||
                   ((0 < local_a4 &&
                    (*(short *)(DAT_01f2a458 + -2 + (longlong)(local_a4 + -1) * 2) != 0x27)))) {
                  piVar1 = (int *)(*(longlong *)PTR_DAT_02003af0 + 0x47cc +
                                  (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x770) * 4);
                  *piVar1 = *piVar1 + 1;
                }
                if ((0 < local_a4) &&
                   (*(short *)(DAT_01f2a458 + -2 + (longlong)(local_a4 + -1) * 2) == 0x27)) {
                  piVar1 = (int *)(*(longlong *)PTR_DAT_02003af0 + 0x5bcc +
                                  (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x770) * 4);
                  *piVar1 = *piVar1 + 1;
                }
              }
              local_a4 = local_a4 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x770) =
               *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x770) + 1;
          DAT_01f2a444 = DAT_01f2a448 + 1;
        }
        local_9c = local_9c + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  FUN_00414560(&local_488,2);
  FUN_00414480(&local_478);
  FUN_00414560(&local_470,2);
  FUN_00414560(&local_460,10);
  FUN_00414560(&local_410,8);
  FUN_00414560(&local_d0,2);
  return;
}

