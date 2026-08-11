/* Ghidra address: 013bb2b0 */
/* Ghidra symbol: FUN_013bb2b0 */


void FUN_013bb2b0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  char *pcVar6;
  undefined1 auStack_ba8 [32];
  undefined8 *local_b88;
  undefined8 local_b70;
  undefined8 local_b68;
  undefined8 local_b60;
  undefined8 local_b58;
  undefined1 *local_b50;
  longlong local_b48;
  longlong local_b38;
  longlong local_328;
  char local_320;
  char local_31f [551];
  undefined8 local_f8 [8];
  longlong *local_b8;
  longlong local_a8;
  int local_98;
  undefined8 *local_90;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  undefined8 local_68;
  char local_60 [8];
  undefined8 local_58;
  undefined1 local_50 [32];
  undefined8 local_30;
  
  local_b50 = auStack_ba8;
  local_b70 = 0;
  local_b68 = 0;
  local_b60 = 0;
  local_b58 = 0;
  local_68 = 0;
  local_30 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_84 = 0;
  local_7c = 0;
  (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x90))(*(longlong **)(param_1 + 0xd0));
  FUN_004b89e0(param_4,&DAT_01f3bcf0,4);
  FUN_004b89e0(param_4,&local_84,4);
  local_74 = 0;
  do {
    local_328 = param_3;
    if (local_74 == 0) {
      local_328 = param_2;
    }
    if (local_328 != 0) {
      local_b38 = local_328;
      iVar5 = *(int *)(local_328 + 0x10);
      local_6c = 0;
      if (-1 < iVar5 + -1) {
        do {
          puVar2 = (undefined8 *)FUN_00b94e60(local_b38,local_6c);
          pcVar6 = &local_320;
          local_90 = puVar2;
          for (lVar4 = 0x52; puVar2 = puVar2 + 1, lVar4 != 0; lVar4 = lVar4 + -1) {
            *(undefined8 *)pcVar6 = *puVar2;
            pcVar6 = pcVar6 + 8;
          }
          FUN_004154b0(&local_68,local_31f,0);
          puVar2 = local_f8;
          pcVar6 = local_60;
          for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
            *(undefined8 *)pcVar6 = *puVar2;
            puVar2 = puVar2 + 1;
            pcVar6 = pcVar6 + 8;
          }
          FUN_01b210c0(param_4,local_68);
          FUN_00416880(&local_b58,local_68);
          (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x78))
                    (*(longlong **)(param_1 + 0xd0),local_b58);
          local_6c = local_6c + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    local_74 = local_74 + 1;
  } while (local_74 != 2);
  local_84 = FUN_004b6da0(param_4);
  FUN_004b6dc0(param_4,4);
  FUN_004b89e0(param_4,&local_84,4);
  FUN_004b6dc0(param_4,(longlong)local_84);
  local_78 = 0;
  local_74 = 0;
  do {
    local_328 = param_3;
    if (local_74 == 0) {
      local_328 = param_2;
    }
    if (local_328 != 0) {
      local_78 = local_78 + *(int *)(local_328 + 0x10);
    }
    local_74 = local_74 + 1;
  } while (local_74 != 2);
  FUN_004b89e0(param_4,&local_78,4);
  local_74 = 0;
  do {
    local_328 = param_3;
    if (local_74 == 0) {
      local_328 = param_2;
    }
    if (local_328 != 0) {
      local_b48 = local_328;
      iVar5 = *(int *)(local_328 + 0x10);
      local_6c = 0;
      if (-1 < iVar5 + -1) {
        do {
          puVar2 = (undefined8 *)FUN_00b94e60(local_b48,local_6c);
          local_90 = puVar2;
          pcVar6 = &local_320;
          for (lVar4 = 0x52; puVar2 = puVar2 + 1, lVar4 != 0; lVar4 = lVar4 + -1) {
            *(undefined8 *)pcVar6 = *puVar2;
            pcVar6 = pcVar6 + 8;
          }
          puVar2 = local_f8;
          pcVar6 = local_60;
          for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
            *(undefined8 *)pcVar6 = *puVar2;
            puVar2 = puVar2 + 1;
            pcVar6 = pcVar6 + 8;
          }
          FUN_004b89e0(param_4,&local_7c,4);
          FUN_004b89e0(param_4,&local_320,1);
          plVar1 = local_b8;
          if (local_320 == '\v') {
            uVar3 = FUN_013bac10(param_1,&local_80);
            *(undefined8 *)(param_1 + 0x80) = uVar3;
            FUN_004b89e0(param_4,&local_80,4);
            FUN_004b89e0(param_4,*(undefined8 *)(param_1 + 0x80),(longlong)local_80);
          }
          else {
            if (local_320 == '\t') {
              if (local_b8 != (longlong *)0x0) {
                FUN_004169a0(&local_b60,local_31f);
                local_70 = (**(code **)(*plVar1 + 0xb8))(plVar1,local_b60);
                FUN_004b5390(local_b8,&local_b68,local_70);
                FUN_00415dd0(&local_68,local_b68,0);
                FUN_00416880(&local_b70,local_68);
                local_b88 = &local_58;
                FUN_013b97c0(*(undefined8 *)(param_1 + 8),local_b70,*(undefined8 *)(param_1 + 0x30),
                             local_30);
              }
            }
            else if (local_320 == '\n') {
              local_58 = *(undefined8 *)(local_a8 + 0xc0 + (longlong)local_98 * 8);
            }
            FUN_004b89e0(param_4,local_60,1);
            if (local_60[0] == '\0') {
              FUN_004b89e0(param_4,&local_58,8);
            }
            if (local_60[0] == '\x01') {
              FUN_004b89e0(param_4,&local_58,8);
              FUN_004b89e0(param_4,local_50,8);
            }
          }
          local_7c = local_7c + 1;
          local_6c = local_6c + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    local_74 = local_74 + 1;
  } while (local_74 != 2);
  FUN_00410f20(local_30);
  FUN_00414560(&local_b70,4);
  FUN_004144d0(&local_68);
  return;
}

