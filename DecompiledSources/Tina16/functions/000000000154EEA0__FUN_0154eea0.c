/* Ghidra address: 0154eea0 */
/* Ghidra symbol: FUN_0154eea0 */


void FUN_0154eea0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64 [3];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_3c;
  int local_38;
  int local_34;
  longlong *local_30;
  
  local_c0 = auStack_128;
  local_f8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x938) + 0x10);
  local_34 = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_70 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x938),local_34);
      local_78 = *(longlong **)(local_70 + 0x820);
      iVar2 = (**(code **)(*local_78 + 0x1c8))(local_78);
      local_44 = 0;
      local_48 = iVar2;
      if (-1 < iVar2 + -1) {
        do {
          local_4c = (**(code **)(*local_78 + 0x210))(local_78,local_44);
          FUN_00e0fac0(local_70,local_4c,&local_58);
          (**(code **)(*local_78 + 0x1f0))(local_78,local_44,&local_50,&local_54);
          cVar1 = FUN_0154de60(param_1,local_50,local_54,&local_80);
          if (cVar1 != '\0') {
            if (*(char *)(local_80 + 0x2d8) == '\0') {
              FUN_0154de00(param_1,L"Bus has no ID");
            }
            else {
              (**(code **)(*local_30 + 0x90))(local_30);
              FUN_017c4360(local_80,local_30);
              iVar3 = (**(code **)(*local_30 + 0x28))(local_30);
              if (0 < iVar3) {
                (**(code **)(*local_30 + 0x28))(local_30);
              }
              iVar3 = (**(code **)(*local_30 + 0x28))(local_30);
              if (iVar3 < 1) {
                FUN_0154de00(param_1,L"TODO: two connected macro with no bus lines, dec maxgr");
              }
              else {
                FUN_00414480(&local_90);
                FUN_00414480(&local_a0);
                iVar3 = (**(code **)(*local_30 + 0x28))();
                local_38 = 0;
                if (-1 < iVar3 + -1) {
                  do {
                    (**(code **)(*local_30 + 0x18))(local_30,&local_c8,local_38);
                    local_88 = (longlong *)FUN_019aff50(*(undefined8 *)(param_1 + 0x748),local_c8);
                    if (local_88 == (longlong *)0x0) {
                      local_3c = FUN_019954d0(*(undefined8 *)(param_1 + 0x748));
                      local_3c = local_3c + 1;
                      FUN_019954b0(*(undefined8 *)(param_1 + 0x748),local_3c);
                      FUN_0043f750(&local_e0,0xffffffff);
                      FUN_0043f750(&local_e8,0xffffffff);
                      local_108 = local_e8;
                      FUN_00416cd0(&local_98,3,local_e0,&DAT_0154f4a0);
                    }
                    else {
                      local_3c = (**(code **)(*local_88 + 0x210))(local_88,0);
                      (**(code **)(*local_88 + 0x1f0))(local_88,0,local_64,&local_68);
                      FUN_0043f750(&local_d0,local_64[0]);
                      FUN_0043f750(&local_d8,local_68);
                      local_108 = local_d8;
                      FUN_00416cd0(&local_98,3,local_d0,&DAT_0154f4a0);
                    }
                    FUN_0043f750(&local_f0,local_3c);
                    FUN_00416ad0(&local_90,local_f0);
                    FUN_00416ad0(&local_90,&DAT_0154f4b0);
                    FUN_00416ad0(&local_a0,local_98);
                    iVar4 = (**(code **)(*local_30 + 0x28))(local_30);
                    if (local_38 < iVar4 + -1) {
                      FUN_00416ad0(&local_a0,&DAT_0154f4b0);
                    }
                    local_38 = local_38 + 1;
                    iVar3 = iVar3 + -1;
                  } while (iVar3 != 0);
                }
                FUN_0043f750(&local_f8,local_4c);
                FUN_00416ad0(&local_90,local_f8);
                FUN_0154e950(param_1,local_58,local_90,local_a0);
              }
            }
          }
          local_44 = local_44 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_34 = local_34 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x10);
  local_34 = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_78 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x78),local_34);
      FUN_015672d0(param_1,local_78,0xffffffff);
      local_34 = local_34 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00410f20(local_30);
  FUN_00414560(&local_f8,7);
  FUN_00414560(&local_a0,3);
  return;
}

