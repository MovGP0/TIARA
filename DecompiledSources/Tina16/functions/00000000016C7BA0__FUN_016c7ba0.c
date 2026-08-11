/* Ghidra address: 016c7ba0 */
/* Ghidra symbol: FUN_016c7ba0 */


void FUN_016c7ba0(longlong param_1,byte *param_2,int param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,char param_7,longlong *param_8,undefined8 *param_9,
                 undefined1 *param_10,undefined1 *param_11)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  double dVar10;
  undefined1 auStack_618 [32];
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined1 local_5c0 [256];
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined1 *local_490;
  longlong local_478;
  longlong local_470;
  int local_468;
  byte local_463;
  byte local_462;
  byte local_461;
  undefined8 local_460;
  longlong local_458;
  longlong local_450;
  int local_444;
  undefined1 local_440 [256];
  byte local_340 [256];
  byte local_240 [256];
  undefined8 local_140;
  char local_138 [280];
  
  local_490 = auStack_618;
  local_5f8 = 0;
  local_5f0 = 0;
  local_5e8 = 0;
  local_5d8 = 0;
  local_5e0 = 0;
  local_5c8 = 0;
  local_5d0 = 0;
  local_4c0 = 0;
  local_4b8 = 0;
  local_4b0 = 0;
  local_4a8 = 0;
  local_4a0 = 0;
  local_498 = 0;
  local_140 = 0;
  lVar6 = (ulonglong)*param_2 + 1;
  pbVar9 = local_240;
  for (; lVar6 != 0; lVar6 = lVar6 + -1) {
    *pbVar9 = *param_2;
    param_2 = param_2 + 1;
    pbVar9 = pbVar9 + 1;
  }
  puVar1 = auStack_618;
  if (local_240[0] == 0) goto LAB_016c8605;
  FUN_004169a0(&local_498,local_240);
  iVar4 = FUN_004170c0(L"TEMP",local_498,1);
  puVar1 = local_490;
  if (iVar4 == 1) goto LAB_016c8605;
  FUN_004169a0(&local_4a0,local_240);
  iVar4 = FUN_004170c0(L"PARAM",local_4a0,1);
  if (iVar4 == 1) {
    FUN_004169a0(&local_4a8,local_240);
    local_461 = FUN_004170c0(&DAT_016c8718,local_4a8,1);
    FUN_004151b0(local_138,local_240,local_461 + 1,local_240[0]);
    cVar2 = FUN_01d350f0(*(undefined8 *)(param_1 + 0x9e0),local_138,&local_444);
    if (cVar2 == '\0') {
      FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0x1a,local_138,0xffffffff);
      puVar1 = local_490;
    }
    else {
      lVar6 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x9e0),local_444);
      *param_8 = lVar6;
      FUN_004144d0(*param_8 + 0x10);
      puVar1 = local_490;
    }
    goto LAB_016c8605;
  }
  if ((local_240[1] == 'V') || (local_240[1] == 'I')) {
    *param_10 = 1;
    *param_11 = 0;
    local_450 = FUN_016c4bb0(param_1,local_240,*(undefined8 *)(param_1 + 0x9b8));
    if (local_450 == 0) {
      FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0xc,local_240,0xffffffff);
      puVar1 = local_490;
    }
    else {
      *param_9 = *(undefined8 *)(local_450 + 0x48);
      puVar1 = local_490;
    }
    goto LAB_016c8605;
  }
  FUN_004169a0(&local_4b0,local_240);
  local_461 = FUN_004170c0(&DAT_016c8718,local_4b0,1);
  FUN_004169a0(&local_4b8,local_240);
  local_462 = FUN_004170c0(&DAT_016c8728,local_4b8,1);
  FUN_004169a0(&local_4c0,local_240);
  local_463 = FUN_004170c0(&DAT_016c8738,local_4c0,1);
  uVar7 = (uint)local_461;
  FUN_004151b0(local_340,local_240,1,uVar7 - 1);
  uVar8 = (uint)local_462;
  FUN_004151b0(local_138,local_240,local_461 + 1,(uVar8 - uVar7) + -1);
  FUN_004151b0(local_440,local_240,local_462 + 1,(local_463 - uVar8) + -1);
  local_470 = 0;
  local_478 = *(longlong *)(param_1 + 0x9b8);
  iVar4 = *(int *)(local_478 + 0x10);
  local_468 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar5 = FUN_01d347d0(local_478,local_468);
      cVar2 = FUN_016c7b60(auStack_618,uVar5);
      if (cVar2 != '\0') {
        local_470 = FUN_01d347d0(local_478,local_468);
        break;
      }
      local_468 = local_468 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_450 = local_470;
  if (local_470 == 0) {
    FUN_00414480(&local_140);
    if (local_138[0] == '\0') {
      FUN_004169a0(&local_140,local_240);
    }
    else {
      FUN_004169a0(&local_140,local_138);
    }
    FUN_00416910(local_5c0,local_140,0xff);
    FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0xb,local_5c0,0xffffffff);
    FUN_00414480(&local_140);
  }
  else {
    *param_9 = *(undefined8 *)(local_470 + 0x48);
  }
  FUN_004154b0(&local_5c8,local_340,0);
  FUN_004155b0(&local_5c8,&DAT_016c8748);
  FUN_00416880(&local_5d0,local_5c8);
  iVar4 = FUN_004170c0(local_5d0,L"CAP|C|IND|RES|R|VSWITCH|ISWITCH|SW|CSW|",1);
  if (iVar4 < 1) {
    *param_10 = 1;
    iVar4 = FUN_00414f50(local_340,&DAT_016c87ed,(ulonglong)local_340[0] + 1);
    if (iVar4 == 0) {
      uVar3 = FUN_014dcff0(PTR_PTR_02002330,local_138,0x14);
      *param_11 = uVar3;
      puVar1 = local_490;
    }
    else {
      iVar4 = FUN_00414f50(local_340,&DAT_016c87ef,(ulonglong)local_340[0] + 1);
      if (iVar4 == 0) {
        uVar3 = FUN_014dcff0(PTR_DAT_020058e0,local_138,8);
        *param_11 = uVar3;
        puVar1 = local_490;
      }
      else {
        FUN_004169a0(&local_5e8,local_340);
        iVar4 = FUN_004170c0(local_5e8,L"NPN|PNP|LPNP",1);
        if (iVar4 < 1) {
          FUN_004169a0(&local_5f0,local_340);
          iVar4 = FUN_004170c0(local_5f0,L"NJF|PJF",1);
          if (iVar4 < 1) {
            FUN_004169a0(&local_5f8,local_340);
            iVar4 = FUN_004170c0(local_5f8,L"NMOS|PMOS",1);
            puVar1 = local_490;
            if (0 < iVar4) {
              cVar2 = FUN_014db910(&LAB_016c885c,*(undefined8 *)(local_450 + 0x40),&local_458);
              if (cVar2 == '\0') {
                uVar3 = FUN_014dcff0(PTR_DAT_020047d8,local_138,0x2a);
                *param_11 = uVar3;
                puVar1 = local_490;
              }
              else {
                local_460 = *(undefined8 *)(local_458 + 0x28);
                lVar6 = FUN_0040c770(local_460);
                if (lVar6 == 1) {
                  uVar3 = FUN_014dcff0(PTR_DAT_020047d8,local_138,0x2a);
                  *param_11 = uVar3;
                  puVar1 = local_490;
                }
                else if (lVar6 == 2) {
                  uVar3 = FUN_014dcff0(PTR_DAT_02004af8,local_138,0x31);
                  *param_11 = uVar3;
                  puVar1 = local_490;
                }
                else if (lVar6 == 7) {
                  uVar3 = FUN_014dcff0(PTR_DAT_020053b0,local_138,0x87);
                  *param_11 = uVar3;
                  puVar1 = local_490;
                }
                else if (lVar6 == 8) {
                  uVar3 = FUN_014dcff0(PTR_DAT_020040d8,local_138,0x196);
                  *param_11 = uVar3;
                  puVar1 = local_490;
                }
                else {
                  uVar3 = FUN_014dcff0(PTR_DAT_02003290,local_138,0x32);
                  *param_11 = uVar3;
                  puVar1 = local_490;
                }
              }
            }
          }
          else {
            uVar3 = FUN_014dcff0(*(undefined8 *)PTR_PTR_02001bb0,local_138,0x18);
            *param_11 = uVar3;
            puVar1 = local_490;
          }
        }
        else {
          uVar3 = FUN_014dcff0(PTR_PTR_020051e8,local_138,0x26);
          *param_11 = uVar3;
          puVar1 = local_490;
        }
      }
    }
    goto LAB_016c8605;
  }
  FUN_004154b0(&local_5d8,local_340,0);
  FUN_004155b0(&local_5d8,&DAT_016c8748);
  FUN_00416880(&local_5e0,local_5d8);
  iVar4 = FUN_004170c0(local_5e0,L"CAP|C|IND|RES|R|",1);
  if (iVar4 < 1) {
    iVar4 = FUN_00414f50(local_340,&DAT_016c87d6,(ulonglong)local_340[0] + 1);
    if (iVar4 != 0) {
      iVar4 = FUN_00414f50(local_340,&DAT_016c87de,(ulonglong)local_340[0] + 1);
      if (iVar4 != 0) {
        iVar4 = FUN_00414f50(local_340,&DAT_016c87e1,(ulonglong)local_340[0] + 1);
        if (iVar4 != 0) {
          iVar4 = FUN_00414f50(local_340,&DAT_016c87e9,(ulonglong)local_340[0] + 1);
          if (iVar4 != 0) {
            uVar3 = FUN_014dcff0(PTR_DAT_02005820,local_138,2);
            *param_10 = uVar3;
            goto LAB_016c8355;
          }
        }
        uVar3 = FUN_014dcff0(PTR_DAT_02004fa0,local_138,4);
        *param_10 = uVar3;
        goto LAB_016c8355;
      }
    }
    uVar3 = FUN_014dcff0(PTR_DAT_02005458,local_138,4);
    *param_10 = uVar3;
  }
  else {
    *param_10 = 1;
    if (param_7 == '\x02') {
      local_444 = 0;
      if (-1 < param_3 + -1) {
        do {
          dVar10 = (double)FUN_01d0f3b0(param_6,local_444);
          lVar6 = FUN_01d347d0(*(undefined8 *)(local_450 + 0x40),0);
          FUN_01d0f400(param_6,local_444,dVar10 * *(double *)(lVar6 + 0x28));
          local_444 = local_444 + 1;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
    }
    else {
      FUN_01d347d0(*(undefined8 *)(local_450 + 0x40),0);
      FUN_01d347d0(*(undefined8 *)(local_450 + 0x40),0);
    }
  }
LAB_016c8355:
  *param_11 = 0;
  puVar1 = local_490;
LAB_016c8605:
  local_490 = puVar1;
  FUN_00414560(&local_5f8,4);
  FUN_004144d0(&local_5d8);
  FUN_00414480(&local_5d0);
  FUN_004144d0(&local_5c8);
  FUN_00414560(&local_4c0,6);
  FUN_00414480(&local_140);
  return;
}

