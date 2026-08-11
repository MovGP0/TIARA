/* Ghidra address: 0179ac90 */
/* Ghidra symbol: FUN_0179ac90 */


void FUN_0179ac90(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  int local_5c;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  ushort local_3c;
  undefined1 local_3a;
  char local_39;
  longlong local_38;
  undefined4 local_30;
  int local_2c;
  longlong *local_28;
  longlong *local_20;
  
  local_70 = auStack_118;
  local_f0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  FUN_0177d560(*(undefined8 *)(param_1 + 0xce8),*(undefined8 *)(param_1 + 0xcd8));
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0xce8) + 0xa8))(*(longlong **)(param_1 + 0xce8));
  if (cVar1 != '\0') {
    local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_00724270(*(undefined8 *)(param_1 + 0xce8),&local_88);
    FUN_00441a10(&local_80,local_88);
    FUN_0043e130(&local_78,local_80);
    iVar2 = FUN_00416db0(local_78,L".TSM");
    if (iVar2 == 0) {
      FUN_00724270(*(undefined8 *)(param_1 + 0xce8),&local_90);
      local_38 = FUN_0179a870(param_1,local_90);
      if (local_38 != 0) {
        (**(code **)(*local_28 + 0x80))(local_28,*(undefined8 *)(local_38 + 0x10),local_38);
      }
    }
    else {
      FUN_00724270(*(undefined8 *)(param_1 + 0xce8),&local_98);
      FUN_017960f0(param_1,local_98,local_28);
    }
    local_20 = (longlong *)FUN_007fc180(&PTR_FUN_017823b8,1,*(undefined8 *)PTR_DAT_02004030);
    (**(code **)(*(longlong *)local_20[0xda] + 0x278))((longlong *)local_20[0xda]);
    FUN_004b3260(*(undefined8 *)(local_20[0xda] + 0x4a0));
    iVar2 = (**(code **)(*local_28 + 0x28))();
    local_2c = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*local_28 + 0x18))(local_28,&local_a0,local_2c);
        uVar3 = (**(code **)(*local_28 + 0x30))(local_28,local_2c);
        (**(code **)(**(longlong **)(local_20[0xda] + 0x4a0) + 0x80))
                  (*(longlong **)(local_20[0xda] + 0x4a0),local_a0,uVar3);
        FUN_0068bd10(local_20[0xda],local_2c,1);
        local_2c = local_2c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_004b3390(*(undefined8 *)(local_20[0xda] + 0x4a0));
    FUN_01782e70(local_20,0);
    FUN_0064dd90(local_20,&local_a8);
    FUN_00724270(*(undefined8 *)(param_1 + 0xce8),&local_b8);
    FUN_00441920(&local_b0,local_b8);
    FUN_00416ad0(&local_a8,local_b0);
    FUN_0064de00(local_20,local_a8);
    (**(code **)(*(longlong *)local_20[0xda] + 0x268))((longlong *)local_20[0xda],0xffffffff);
    FUN_017832e0(local_20,0);
    FUN_00414480(&local_58);
    iVar2 = (**(code **)(*local_20 + 0x2d0))(local_20);
    if (iVar2 == 1) {
      local_3a = *(undefined1 *)(*(longlong *)(param_1 + 0xd18) + 0x48);
      FUN_004b67b0(*(longlong *)(param_1 + 0xd18),0);
      local_5c = *(int *)(param_1 + 0xca0);
      if (-1 < local_5c) {
        (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x18))
                  (*(longlong **)(param_1 + 0xd18),&local_58,local_5c);
      }
      local_39 = '\x01';
      FUN_004b67b0(local_28,0);
      FUN_0179bc20(param_1);
      iVar2 = (**(code **)(**(longlong **)(local_20[0xda] + 0x4a0) + 0x28))();
      local_2c = 0;
      if (-1 < iVar2 + -1) {
        do {
          cVar1 = FUN_0068bca0(local_20[0xda],local_2c);
          if (cVar1 != '\0') {
            (**(code **)(*local_28 + 0x18))(local_28,&local_48,local_2c);
            cVar1 = FUN_0179bb80(param_1,local_48,&local_30,0xffffffff);
            if (cVar1 == '\0') {
              (**(code **)(*local_28 + 0x18))(local_28,&local_c0,local_2c);
              uVar3 = (**(code **)(*local_28 + 0x30))(local_28,local_2c);
              uVar3 = FUN_00c3f320(uVar3);
              (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x80))
                        (*(longlong **)(param_1 + 0xd18),local_c0,uVar3);
              FUN_01795670(param_1,1);
            }
            else {
              FUN_0179bc60(param_1,&local_50,local_48);
              if (local_39 != '\0') {
                local_e8 = local_48;
                local_e0 = 0x11;
                local_d8 = local_50;
                local_d0 = 0x11;
                FUN_00442f70(&local_c8,
                             L"Another device named %s already exists in the library.\rOverwrite it or add it under a new name (%s)"
                             ,&local_e8);
                local_3c = FUN_0072d440(local_c8,0,0x30b);
              }
              if (local_3c < 8) {
                if (local_3c == 7) {
LAB_0179b361:
                  (**(code **)(*local_28 + 0x40))(local_28,local_2c,local_50);
                  lVar4 = (**(code **)(*local_28 + 0x30))(local_28,local_2c);
                  FUN_00414ad0(lVar4 + 0x10,local_50);
                  (**(code **)(*local_28 + 0x18))(local_28,&local_f0,local_2c);
                  uVar3 = (**(code **)(*local_28 + 0x30))(local_28,local_2c);
                  uVar3 = FUN_00c3f320(uVar3);
                  (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x80))
                            (*(longlong **)(param_1 + 0xd18),local_f0,uVar3);
                  FUN_01795670(param_1,1);
                  if (local_3c == 0xd) {
                    local_3c = 7;
                    local_39 = '\0';
                  }
                }
                else {
                  if (local_3c == 2) break;
                  if (local_3c == 6) {
LAB_0179b2e1:
                    local_38 = (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x30))
                                         (*(longlong **)(param_1 + 0xd18),local_30);
                    uVar3 = (**(code **)(*local_28 + 0x30))(local_28,local_2c);
                    FUN_00c3f350(uVar3,local_38);
                    FUN_01795670(param_1,1);
                    if (local_3c == 0xe) {
                      local_3c = 6;
                      local_39 = '\0';
                    }
                  }
                }
              }
              else {
                if (local_3c == 0xd) goto LAB_0179b361;
                if (local_3c == 0xe) goto LAB_0179b2e1;
              }
              if (local_3c == 2) break;
            }
          }
          local_2c = local_2c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_004b67b0(*(undefined8 *)(param_1 + 0xd18),local_3a);
      FUN_01798270(param_1);
    }
    FUN_00410f20(local_20);
    if (local_58 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x758) + 0x268))(*(longlong **)(param_1 + 0x758),0);
    }
    else {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd18) + 0xb0))
                        (*(longlong **)(param_1 + 0xd18),local_58);
      *(int *)(param_1 + 0xca0) = iVar2;
      if (iVar2 != local_5c) {
        (**(code **)(**(longlong **)(param_1 + 0x758) + 0x268))
                  (*(longlong **)(param_1 + 0x758),iVar2);
      }
    }
    FUN_01794150(param_1,local_28);
    FUN_00410f20(local_28);
  }
  FUN_00414480(&local_f0);
  FUN_00414560(&local_c8,2);
  FUN_00414480(&local_b8);
  FUN_00414480(&local_b0);
  FUN_00414480(&local_a8);
  FUN_00414480(&local_a0);
  FUN_00414560(&local_98,3);
  FUN_00414560(&local_80,2);
  FUN_00414560(&local_58,3);
  return;
}

