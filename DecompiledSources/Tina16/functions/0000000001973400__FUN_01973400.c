/* Ghidra address: 01973400 */
/* Ghidra symbol: FUN_01973400 */


undefined1 FUN_01973400(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_e9;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30 [3];
  
  local_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_e9 = 0;
  FUN_0046f180(&local_60);
  FUN_00461840(param_3,&local_60);
  if (*(longlong *)(DAT_02110720 + 8) != 0) {
    local_30[0] = local_30[0] & 0xffffffffffff0000;
    (**(code **)(DAT_02110720 + 8))(*(undefined8 *)(DAT_02110720 + 0x10),param_2,local_30);
    if ((short)local_30[0] != 0) {
      FUN_00461840(param_3,local_30);
      local_e9 = 1;
      goto LAB_01973a76;
    }
  }
  FUN_01970ff0(param_1,param_2,&local_38,&local_40);
  if ((local_38 == (longlong *)0x0) || (local_40 == 0)) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0xb0))
                      (*(longlong **)(param_1 + 0x280),param_2);
    if (iVar2 == -1) {
      local_30[0] = local_30[0] & 0xffffffffffff0000;
      if (*(longlong *)(param_1 + 0x368) != 0) {
        (**(code **)(param_1 + 0x368))(*(undefined8 *)(param_1 + 0x370),param_2,local_30);
      }
      if (*(longlong *)(param_1 + 0x378) != 0) {
        (**(code **)(param_1 + 0x378))(*(undefined8 *)(param_1 + 0x380),param_1,param_2,local_30);
      }
      if ((short)local_30[0] == 0) {
        iVar2 = FUN_018163f0(*(undefined8 *)(param_1 + 0x298),param_2);
        if (iVar2 == -1) {
          iVar2 = FUN_018163f0(DAT_02110728,param_2);
          if (iVar2 == -1) {
            if (*(longlong *)(DAT_02110720 + 0x38) == 0) {
              plVar4 = (longlong *)FUN_0184ce20(*(undefined8 *)(param_1 + 0x248),param_2);
              if (plVar4 != (longlong *)0x0) {
                cVar1 = FUN_004113d0(plVar4,&PTR_FUN_01843fa0);
                if (cVar1 == '\0') {
                  cVar1 = FUN_004113d0(plVar4,&PTR_FUN_01844e48);
                  if (cVar1 == '\0') {
                    (**(code **)(*plVar4 + 0x10))(plVar4,&local_e8);
                    FUN_00461840(param_3,&local_e8);
                    local_e9 = 1;
                  }
                }
              }
            }
          }
          else {
            lVar5 = FUN_018163e0(DAT_02110728,iVar2);
            FUN_00461840(param_3,lVar5 + 0x28);
            local_e9 = 1;
          }
        }
        else {
          lVar5 = FUN_018163e0(*(undefined8 *)(param_1 + 0x298),iVar2);
          FUN_00461840(local_30,lVar5 + 0x28);
          if ((((short)local_30[0] == 0x100) || ((short)local_30[0] == 8)) ||
             ((short)local_30[0] == 0x102)) {
            FUN_00467e90(&local_b0,local_30);
            iVar2 = FUN_004170c0(&LAB_01973b74,local_b0,1);
            if (iVar2 == 0) {
              FUN_00467e90(&local_d0,local_30);
              FUN_01970cf0(param_1,&local_c8,local_d0,0);
              FUN_00461840(param_3,&local_c8);
            }
            else {
              FUN_00461840(param_3,local_30);
            }
          }
          else {
            FUN_00461840(param_3,local_30);
          }
          local_e9 = 1;
        }
      }
      else {
        FUN_00461840(param_3,local_30);
        local_e9 = 1;
      }
    }
    else {
      if (iVar2 < 6) {
        if (iVar2 == 5) {
          FUN_00468530(param_3,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x60),
                       0xfffffffffffffffc);
        }
        else if (iVar2 < 3) {
          if (iVar2 == 2) {
            plVar4 = (longlong *)FUN_0196f540(param_1);
            uVar3 = (**(code **)(*plVar4 + 0xe8))(plVar4);
            FUN_00468530(param_3,uVar3,0xfffffffffffffffc);
          }
          else if (iVar2 == 0) {
            FUN_004688a0(param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 0x50));
          }
          else if (iVar2 == 1) {
            FUN_004688a0(param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 0x58));
          }
        }
        else if (iVar2 == 3) {
          lVar5 = FUN_0196f540(param_1);
          FUN_00468530(param_3,*(int *)(lVar5 + 0xc) + 1,0xfffffffffffffffc);
        }
        else if (iVar2 == 4) {
          plVar4 = (longlong *)FUN_0196f540(param_1);
          uVar3 = (**(code **)(*plVar4 + 0xf0))(plVar4);
          FUN_00468530(param_3,uVar3,0xfffffffffffffffc);
        }
      }
      else if (iVar2 < 9) {
        if (iVar2 == 8) {
          FUN_01816460(DAT_02110728,&local_a8,L"CopyName0");
          FUN_00461840(param_3,&local_a8);
        }
        else if (iVar2 == 6) {
          FUN_00468530(param_3,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x10),
                       0xfffffffffffffffc);
        }
        else if (iVar2 == 7) {
          FUN_00468530(param_3,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x14),
                       0xfffffffffffffffc);
        }
      }
      else if (iVar2 == 9) {
        FUN_00468530(param_3,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x7c),
                     0xfffffffffffffffc);
      }
      else if (iVar2 == 10) {
        FUN_00468530(param_3,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x80),
                     0xfffffffffffffffc);
      }
      local_e9 = 1;
    }
    goto LAB_01973a76;
  }
  (**(code **)(*local_38 + 0x2c8))(local_38,&local_78,local_40);
  FUN_00461840(param_3,&local_78);
  if (*(char *)(*(longlong *)(param_1 + 0x1a8) + 8) != '\0') {
    FUN_0046f180(&local_90);
    cVar1 = FUN_0046f320(param_3,&local_90);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*local_38 + 0x2c0))(local_38,local_40);
      if (cVar1 == '\0') {
LAB_019735e9:
        FUN_00468530(param_3,0,1);
      }
      else if (cVar1 == '\x01') {
        FUN_00468a10(param_3,0);
      }
      else if (cVar1 == '\x02') {
        FUN_00468820(param_3,0);
      }
      else if (cVar1 == '\x03') goto LAB_019735e9;
    }
  }
  local_e9 = 1;
LAB_01973a76:
  FUN_00460ba0(&local_e8);
  FUN_00414480(&local_d0);
  FUN_00460ba0(&local_c8);
  FUN_00414480(&local_b0);
  FUN_00417840(&local_a8,&DAT_004013d8,4);
  FUN_00414480(&local_40);
  FUN_00460ba0(local_30);
  return local_e9;
}

