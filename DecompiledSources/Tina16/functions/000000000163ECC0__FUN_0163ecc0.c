/* Ghidra address: 0163ecc0 */
/* Ghidra symbol: FUN_0163ecc0 */


void FUN_0163ecc0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  int local_4c;
  longlong local_48;
  longlong local_40;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  local_90 = auStack_d8;
  local_a0 = 0;
  local_98 = 0;
  local_68 = 0;
  local_70 = 0;
  FUN_004b84c0(param_2,&local_24,4);
  local_4c = 0;
  local_58 = 0;
  local_1c = 0;
  iVar2 = local_24;
  if (-1 < local_24 + -1) {
    do {
      local_40 = FUN_016127d0(&DAT_01611bf0,1);
      FUN_004b84c0(param_2,local_40 + 0x48,1);
      FUN_004b84c0(param_2,local_40 + 8,1);
      FUN_004b84c0(param_2,local_40 + 10,2);
      cVar1 = *(char *)(local_40 + 8);
      if (((((cVar1 == '1') || (cVar1 == '2')) || (cVar1 == '3')) || (cVar1 == '4')) ||
         ((*(char *)(local_40 + 8) == '5' && (*(short *)(local_40 + 10) == 0x19c)))) {
        FUN_0163eba0(param_1,param_2,*(undefined8 *)(local_40 + 0x10));
        FUN_0163eba0(param_1,param_2,*(undefined8 *)(local_40 + 0x18));
      }
      else {
        FUN_004b84c0(param_2,local_40 + 0x20,4);
        FUN_004b84c0(param_2,local_40 + 0x24,4);
      }
      if (((param_4 != 0) && (*(int *)(param_4 + 0x5c8) == 2)) &&
         ((*(char *)(local_40 + 8) == '5' &&
          ((*(short *)(local_40 + 10) == 0x1e7 || (*(short *)(local_40 + 10) == 0x1e6)))))) {
        *(undefined1 *)(*(longlong *)(*(longlong *)(param_4 + 0xb0) + 8) + 0x139e2) = 1;
      }
      FUN_004b84c0(param_2,local_40 + 0x28,4);
      FUN_004b84c0(param_2,local_40 + 0x30,4);
      FUN_004b84c0(param_2,local_40 + 0x60,4);
      FUN_004b84c0(param_2,&local_2c,4);
      FUN_004b84c0(param_2,&local_28,4);
      if (*(char *)(local_40 + 8) == '\x11') {
        if (local_4c == 0) {
          local_58 = FUN_00410e60(&PTR_FUN_00472dd0,1);
        }
        local_48 = FUN_01612560(&DAT_01611548,1);
        FUN_0163eac0(param_1,param_2,local_48);
        FUN_004ae7e0(local_58,local_48);
        local_48 = FUN_01612560(&DAT_01611548,1);
        FUN_0163eac0(param_1,param_2,local_48);
        FUN_00410f20(local_48);
        local_4c = 1;
      }
      else {
        local_48 = FUN_01612560(&DAT_01611548,1);
        FUN_0163eac0(param_1,param_2,local_48);
        if (*(char *)(local_48 + 10) == '\0') {
          FUN_00410f20(local_48);
        }
        else {
          FUN_004ae7e0(*(undefined8 *)(local_40 + 0x50),local_48);
        }
        local_48 = FUN_01612560(&DAT_01611548,1);
        FUN_0163eac0(param_1,param_2,local_48);
        if (*(char *)(local_48 + 10) == '\0') {
          FUN_00410f20(local_48);
        }
        else {
          FUN_004ae7e0(*(undefined8 *)(local_40 + 0x50),local_48);
        }
        if (local_2c == 1) {
          local_48 = FUN_01612560(&DAT_01611548,1);
          FUN_0163eac0(param_1,param_2,local_48);
          if (*(char *)(local_48 + 10) == '\0') {
            FUN_00410f20(local_48);
          }
          else {
            FUN_004ae7e0(*(undefined8 *)(local_40 + 0x50),local_48);
          }
        }
        if ((local_4c == 1) &&
           ((*(char *)(local_40 + 8) == '5' || (*(char *)(local_40 + 8) == '\x14')))) {
          FUN_01b202f0(*(undefined8 *)(local_40 + 0x50));
          (**(code **)(**(longlong **)(local_40 + 0x50) + 0x10))(*(longlong **)(local_40 + 0x50));
          iVar3 = *(int *)(local_58 + 0x10);
          local_20 = 0;
          if (-1 < iVar3 + -1) {
            do {
              local_48 = FUN_004aeac0(local_58,local_20);
              FUN_004ae7e0(*(undefined8 *)(local_40 + 0x50),local_48);
              local_20 = local_20 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          if ((*(char *)(local_40 + 8) == '5') && (*(short *)(local_40 + 10) == 499)) {
            local_48 = FUN_01612bc0(local_40,2);
            local_60 = FUN_0161be50(local_48,*(undefined8 *)(param_4 + 0xb0),local_80,1);
            if (*(int *)(local_60 + 0x14) == 7) {
              FUN_01614d20(&local_68,local_60);
              FUN_015fcd70(&local_70,*(undefined8 *)(param_1 + 0x10b8));
              FUN_01604ab0(&local_98,local_68,*(undefined8 *)(param_1 + 0x88));
              local_b8 = local_98;
              FUN_00416cd0(&local_68,3,local_70,&DAT_0163f42c);
              local_78 = FUN_0161ee00(local_68,&local_30,&local_34);
              FUN_01612bf0(local_40,local_78,local_30,local_34);
            }
            else {
              FUN_0041ddd0(&local_a0,PTR_PTR_020013b8);
              FUN_01613110(local_a0);
            }
          }
        }
        if ((*(char *)(local_40 + 8) == '$') && (local_58 != 0)) {
          FUN_00410f20(local_58);
          local_58 = 0;
          local_4c = 0;
        }
      }
      if (local_28 == 1) {
        FUN_0163eac0(param_1,param_2,*(undefined8 *)(local_40 + 0x58));
      }
      FUN_004ae7e0(param_3,local_40);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_4c == 1) {
    FUN_01613110(L"LEAVE not found");
  }
  FUN_00414560(&local_a0,2);
  FUN_00414560(&local_70,2);
  return;
}

