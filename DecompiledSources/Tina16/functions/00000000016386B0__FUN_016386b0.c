/* Ghidra address: 016386b0 */
/* Ghidra symbol: FUN_016386b0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016386b0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_188 [32];
  longlong local_168;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 *local_110;
  undefined8 local_100;
  char local_f1;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_80;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  int local_58;
  int local_50;
  int local_4c;
  longlong *local_48;
  longlong *local_40;
  int local_34;
  longlong local_30;
  
  local_110 = auStack_188;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_40 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  local_70 = 0;
  local_30 = *(longlong *)(param_2 + 8);
  _DAT_0210f858 = FUN_0161bc10(*(undefined4 *)(param_1 + 0x5bc),*(undefined8 *)(local_30 + 0x48));
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x628) + 0x10);
  local_4c = 0;
  local_100 = _DAT_0210f858;
  local_58 = iVar5;
  if (-1 < iVar5 + -1) {
    do {
      local_80 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x628),local_4c);
      *(undefined8 *)(local_30 + 0x13960) = local_80;
      *(undefined8 *)(param_1 + 0x5b0) = local_80;
      FUN_01633d40(local_80,param_2);
      FUN_016381a0(local_80,local_100);
      local_4c = local_4c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (0 < local_58) {
    local_80 = FUN_016372d0(param_1);
    *(undefined8 *)(local_30 + 0x13960) = local_80;
    *(undefined8 *)(param_1 + 0x5b0) = local_80;
    FUN_01634120(local_80,param_2);
  }
  FUN_01636f00(param_1,local_30);
  local_4c = 0;
  iVar5 = local_58;
  if (-1 < local_58 + -1) {
    do {
      local_80 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x628),local_4c);
      *(undefined8 *)(local_30 + 0x13960) = local_80;
      *(undefined8 *)(param_1 + 0x5b0) = local_80;
      FUN_01636e00(param_1,local_80,local_30);
      local_4c = local_4c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_d8 = *(longlong **)(param_1 + 0x70);
  iVar5 = (**(code **)(*local_d8 + 0x28))();
  local_64 = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_e8 = (**(code **)(*local_d8 + 0x30))(local_d8,local_64);
      FUN_0161b430(local_e8);
      local_64 = local_64 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_d8 = *(longlong **)(param_1 + 0x78);
  iVar5 = (**(code **)(*local_d8 + 0x28))();
  local_64 = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_e8 = (**(code **)(*local_d8 + 0x30))(local_d8,local_64);
      FUN_0161b430(local_e8);
      local_64 = local_64 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_b8 = FUN_0161bc10(*(undefined4 *)(param_1 + 0x5bc),*(undefined8 *)(local_30 + 0x48));
  local_34 = *(int *)(local_b8 + 0xc);
  if (local_34 != 0) {
    local_168 = (longlong)local_34;
    FUN_00419260(local_b8 + 0x98,&DAT_01621240,2,local_168);
    *(undefined1 *)(local_b8 + 0xa0) = 1;
    FUN_00419260(local_b8 + 0x6a0,&DAT_01621318,1,(longlong)local_34);
    FUN_00419260(local_b8 + 0x698,&DAT_016212d0,1,(longlong)local_34);
    FUN_00419260(local_b8 + 0x690,&DAT_016212d0,1,(longlong)local_34);
    *(undefined1 *)(local_b8 + 0xa1) = 1;
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))();
    local_64 = 0;
    if (-1 < iVar5 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x70) + 0x18))
                  (*(longlong **)(param_1 + 0x70),&local_c0,local_64);
        local_e0 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                             (*(longlong **)(param_1 + 0x70),local_64);
        local_d0 = (longlong *)FUN_0161b260(local_e0);
        local_4c = FUN_0043fc00(local_c0);
        iVar2 = (**(code **)(*local_d0 + 0x28))();
        local_68 = 0;
        if (-1 < iVar2 + -1) {
          do {
            (**(code **)(*local_d0 + 0x18))(local_d0,&local_118,local_68);
            local_50 = FUN_0043fc00(local_118);
            if (local_4c != local_50) {
              *(undefined4 *)
               (*(longlong *)(*(longlong *)(local_b8 + 0x98) + (longlong)local_4c * 8) +
               (longlong)local_50 * 4) = 1;
            }
            local_68 = local_68 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        FUN_00410f20(local_d0);
        local_64 = local_64 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    local_6c = -1;
    local_50 = 0;
    iVar5 = local_34;
    if (-1 < local_34 + -1) {
      do {
        local_f1 = '\x01';
        local_4c = 0;
        iVar2 = local_34;
        if (-1 < local_34 + -1) {
          do {
            if (*(int *)(*(longlong *)(*(longlong *)(local_b8 + 0x98) + (longlong)local_4c * 8) +
                        (longlong)local_50 * 4) != 0) {
              local_f1 = '\0';
              break;
            }
            local_4c = local_4c + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        if (local_f1 != '\0') {
          local_6c = local_50;
          break;
        }
        local_50 = local_50 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (local_6c != -1) {
      local_40 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      local_48 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      local_4c = 0;
      iVar5 = local_34;
      if (-1 < local_34 + -1) {
        do {
          cVar1 = FUN_016382c0(auStack_188,local_4c);
          if ((cVar1 == '\0') || (cVar1 = FUN_01638230(auStack_188,local_4c), cVar1 != '\0')) {
            local_f1 = '\0';
          }
          else {
            local_f1 = '\x01';
          }
          if (local_f1 != '\0') {
            FUN_0043f750(&local_120,local_4c);
            (**(code **)(*local_40 + 0x78))(local_40,local_120);
          }
          local_4c = local_4c + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      (**(code **)(*local_48 + 0x10))(local_48,local_40);
      local_74 = FUN_01638350(auStack_188);
      do {
        iVar5 = (**(code **)(*local_40 + 0x28))(local_40);
        if (iVar5 == local_34 - local_74) break;
        local_4c = 0;
        iVar5 = local_34;
        if (-1 < local_34 + -1) {
          do {
            FUN_0043f750(&local_128,local_4c);
            iVar2 = (**(code **)(*local_40 + 0xb0))(local_40,local_128);
            local_f1 = iVar2 == -1;
            if ((bool)local_f1) {
              FUN_01638590(auStack_188,local_4c);
            }
            local_4c = local_4c + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_70 = local_70 + 1;
      } while (local_70 < 0x3e9);
      local_4c = 0;
      iVar5 = local_34;
      if (-1 < local_34 + -1) {
        do {
          *(int *)(*(longlong *)(local_b8 + 0x690) + (longlong)local_4c * 4) = local_4c;
          local_4c = local_4c + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar5 = (**(code **)(*local_40 + 0x28))();
      local_4c = 0;
      if (-1 < iVar5 + -1) {
        do {
          (**(code **)(*local_40 + 0x18))(local_40,&local_130,local_4c);
          local_60 = FUN_0043fc00(local_130);
          *(undefined4 *)(*(longlong *)(local_b8 + 0x690) + (longlong)local_4c * 4) = local_60;
          local_4c = local_4c + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      (**(code **)(*local_40 + 0x10))(local_40,local_48);
      do {
        iVar5 = (**(code **)(*local_40 + 0x28))(local_40);
        if (iVar5 == local_34) break;
        local_4c = 0;
        iVar5 = local_34;
        if (-1 < local_34 + -1) {
          do {
            FUN_0043f750(&local_138,local_4c);
            iVar2 = (**(code **)(*local_40 + 0xb0))(local_40,local_138);
            local_f1 = iVar2 == -1;
            if (((bool)local_f1) && (cVar1 = FUN_016383c0(auStack_188,local_4c), cVar1 != '\0')) {
              FUN_016384b0(auStack_188,local_4c);
              (**(code **)(**(longlong **)(param_1 + 0x70) + 0x18))
                        (*(longlong **)(param_1 + 0x70),&local_140,local_4c);
              uVar3 = FUN_0043fc00(local_140);
              FUN_01636fd0(local_100,&local_c0,uVar3);
              FUN_0043f750(&local_148,local_4c);
              (**(code **)(*local_40 + 0x78))(local_40,local_148);
            }
            local_4c = local_4c + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_70 = local_70 + 1;
      } while (local_70 < 0x3e9);
      iVar5 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))();
      local_64 = 0;
      if (-1 < iVar5 + -1) {
        do {
          (**(code **)(**(longlong **)(param_1 + 0x78) + 0x18))
                    (*(longlong **)(param_1 + 0x78),&local_c0,local_64);
          local_f0 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                               (*(longlong **)(param_1 + 0x78),local_64);
          local_d0 = (longlong *)FUN_0161b260(local_f0);
          iVar2 = (**(code **)(*local_d0 + 0x28))();
          local_68 = 0;
          if (-1 < iVar2 + -1) {
            do {
              (**(code **)(*local_d0 + 0x18))(local_d0,&local_150,local_68);
              local_4c = FUN_0043fc00(local_150);
              iVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))
                                (*(longlong **)(param_1 + 0x70));
              if (iVar4 <= local_4c) {
                FUN_01613110(L"src := TControlEntry(FControls.Objects[i])");
              }
              local_e8 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                                   (*(longlong **)(param_1 + 0x70),local_4c);
              FUN_0161b490(local_f0,local_4c,local_e8);
              local_68 = local_68 + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          FUN_00410f20(local_d0);
          local_64 = local_64 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if (local_40 != (longlong *)0x0) {
        FUN_00410f20(local_40);
      }
      if (local_48 != (longlong *)0x0) {
        FUN_00410f20(local_48);
      }
      goto LAB_016392f1;
    }
  }
  FUN_01639320(0,local_110);
LAB_016392f1:
  FUN_00414560(&local_150,8);
  FUN_00414560(&local_c8,2);
  return;
}

