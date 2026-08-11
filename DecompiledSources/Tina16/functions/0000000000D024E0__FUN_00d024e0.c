/* Ghidra address: 00d024e0 */
/* Ghidra symbol: FUN_00d024e0 */


undefined8 FUN_00d024e0(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  int *local_78;
  uint *local_70;
  uint *local_68;
  int local_60;
  uint local_58;
  byte local_51;
  int local_50;
  int local_4c;
  longlong local_48;
  short *local_40;
  ulonglong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  local_80 = auStack_f8;
  local_c8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_20 = 0;
  local_40 = (short *)0x0;
  local_48 = 0;
  FUN_00414ad0(param_1,L"UTF-8");
  if (param_2 == (undefined8 *)0x0) goto LAB_00d02bc7;
  local_28 = FUN_004b6da0(param_2);
  FUN_004b6dc0(param_2,0);
  FUN_00419260(&local_20,&DAT_0086e978,1,4);
  FUN_00874ad0(&local_20,4,0);
  local_30 = FUN_00878880(param_2,&local_20,4,0);
  if (2 < local_30) {
    local_58 = FUN_00d02490(auStack_f8);
    cVar1 = '\a';
    local_68 = &DAT_01eb32c0;
    do {
      if ((local_58 & *local_68) == local_68[-1]) {
        local_28 = local_28 + (int)local_68[-2];
        FUN_00414ad0(param_1,*(undefined8 *)(local_68 + -4));
        goto LAB_00d02bb9;
      }
      local_68 = local_68 + 6;
      cVar1 = cVar1 + -1;
    } while (cVar1 != '\0');
    if (local_30 == 4) {
      FUN_00414480(&local_40);
      local_51 = 0;
      local_70 = &DAT_01eb335c;
      local_78 = &DAT_01eb33d8;
      do {
        if (local_58 == *local_70) {
          FUN_00874ad0(&local_20,4,0);
          goto LAB_00d02984;
        }
        local_51 = local_51 + 1;
        local_78 = local_78 + 1;
        local_70 = local_70 + 4;
      } while (local_51 != 8);
      goto code_r0x00d029ee;
    }
  }
  goto LAB_00d02bb9;
  while( true ) {
    FUN_00878880(param_2,&local_20,(longlong)(int)local_70[-1],0);
    local_58 = FUN_00d02490(auStack_f8);
    if ((local_58 & local_70[2]) == local_70[1]) break;
LAB_00d02984:
    lVar2 = (**(code **)*param_2)(param_2);
    lVar3 = FUN_004b6da0(param_2);
    if (lVar2 - lVar3 < (longlong)(int)local_70[-1]) goto code_r0x00d029ee;
  }
  local_38 = FUN_004b6da0(param_2);
  FUN_004b6dc0(param_2,0);
  if (local_51 < 6) {
    if (local_51 == 5) {
      FUN_00874790(&local_90);
      FUN_008787b0(&local_40,param_2,local_38 & 0xffffffff,local_90);
    }
    else if (local_51 < 4) {
      local_50 = (int)((longlong)local_38 / (longlong)(int)local_70[-1]);
      FUN_004169f0(&local_40,(longlong)local_38 / (longlong)(int)local_70[-1] & 0xffffffff);
      local_4c = 1;
      iVar4 = local_50;
      if (0 < local_50) {
        do {
          FUN_00878880(param_2,&local_20,(longlong)(int)local_70[-1],0);
          lVar2 = FUN_00414de0(&local_40);
          *(ushort *)(lVar2 + -2 + (longlong)local_4c * 2) = (ushort)*(byte *)(local_20 + *local_78)
          ;
          local_4c = local_4c + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else if (local_51 == 4) {
      FUN_008746c0(&local_88);
      FUN_008787b0(&local_40,param_2,local_38 & 0xffffffff,local_88);
    }
  }
  else if (local_51 == 6) {
    FUN_00874930(&local_98);
    FUN_008787b0(&local_40,param_2,local_38 & 0xffffffff,local_98);
  }
  else if (local_51 == 7) {
    FUN_00874520(&local_a0);
    FUN_008787b0(&local_40,param_2,local_38 & 0xffffffff,local_a0);
    local_60 = 0;
    if (local_40 != (short *)0x0) {
      local_60 = *(int *)(local_40 + -2);
    }
    local_4c = 1;
    iVar4 = local_60;
    if (0 < local_60) {
      do {
        lVar3 = (longlong)local_4c;
        lVar2 = FUN_00414de0(&local_40);
        *(undefined2 *)(lVar2 + -2 + lVar3 * 2) =
             *(undefined2 *)(&DAT_01eb33e8 + (ulonglong)*(byte *)(local_40 + lVar3 + -1) * 2);
        local_4c = local_4c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
code_r0x00d029ee:
  if ((local_40 != (short *)0x0) && (local_4c = FUN_004170c0(L"encoding",local_40,1), local_4c != 0)
     ) {
    FUN_00416dc0(&local_b0,local_40,local_4c + 8,0x7fffffff);
    FUN_0043eb50(&local_a8,local_b0);
    FUN_00414b50(&local_40,local_a8);
    cVar1 = FUN_00879280(local_40,1,0x3d);
    if (cVar1 != '\0') {
      FUN_00416dc0(&local_c0,local_40,2,0x7fffffff);
      FUN_0043eb50(&local_b8,local_c0);
      FUN_00414b50(&local_40,local_b8);
      if (local_40 != (short *)0x0) {
        if (*local_40 == 0x27) {
          FUN_00416dc0(&local_40,local_40,2,0x7fffffff);
          local_d8 = 1;
          FUN_00874ee0(&local_48,&local_40,&DAT_00d02d00,1);
        }
        else if (*local_40 == 0x22) {
          FUN_00416dc0(&local_40,local_40,2,0x7fffffff);
          local_d8 = 1;
          FUN_00874ee0(&local_48,&local_40,&LAB_00d02d10,1);
        }
        FUN_0043ea00(&local_c8,local_48);
        FUN_00414b50(&local_48,local_c8);
        if (local_48 != 0) {
          FUN_00414ad0(param_1,local_48);
          FUN_004b6dc0(param_2,local_28);
          goto LAB_00d02bc7;
        }
      }
    }
  }
LAB_00d02bb9:
  FUN_00d02c30(0,local_80);
LAB_00d02bc7:
  FUN_00414560(&local_c8,5);
  FUN_00417840(&local_a0,&DAT_0086ea00,4);
  FUN_00414560(&local_48,2);
  FUN_00419430(&local_20,&DAT_0086e978);
  return param_1;
}

