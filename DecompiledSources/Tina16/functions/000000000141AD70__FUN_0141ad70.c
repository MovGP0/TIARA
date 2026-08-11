/* Ghidra address: 0141ad70 */
/* Ghidra symbol: FUN_0141ad70 */


void FUN_0141ad70(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_228 [32];
  undefined *local_208;
  longlong local_200;
  undefined *local_1f8;
  int local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [256];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined4 local_6c;
  longlong local_68;
  undefined4 local_5c;
  longlong local_58;
  int local_4c;
  longlong local_48 [4];
  longlong local_28 [2];
  
  local_80 = auStack_228;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = (undefined *)0x0;
  local_1b0 = 0;
  local_1c0 = (undefined *)0x0;
  local_1b8 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_48[0] = 0;
  local_28[0] = 0;
  FUN_00414480(param_1 + 0x6d8);
  if (*(char *)(param_1 + 0x6e5) == '\0') {
    *(undefined1 *)(param_1 + 0x6e4) = 0;
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x4e0);
    local_1e4 = iVar2 + -1;
    local_4c = 0;
    if (-1 < local_1e4) {
      do {
        local_1e4 = iVar2;
        FUN_0084e320(*(undefined8 *)(param_1 + 0x6b0),&local_88,0,local_4c);
        FUN_0043ea00(local_48,local_88);
        FUN_0084e320(*(undefined8 *)(param_1 + 0x6b0),&local_90,1,local_4c);
        FUN_0043ea00(local_28,local_90);
        if (local_28[0] != 0) {
          if (*(char *)(param_1 + 0x6e2) == '\0') {
            if (*(short *)(param_1 + 0x6e0) == 0) {
              FUN_0043e130(&local_98,local_28[0]);
              FUN_00416910(local_198,local_98);
              FUN_016a4200(local_198,0);
            }
          }
          else {
            FUN_0141a770(param_1,local_28[0]);
          }
        }
        if ((local_48[0] != 0) && (local_28[0] != 0)) {
          if (*(short *)(param_1 + 0x6e0) == 0) {
            local_208 = &LAB_0141b538;
            local_200 = local_28[0];
            local_1f8 = &DAT_0141b518;
            FUN_00416cd0(param_1 + 0x6d8,5,*(undefined8 *)(param_1 + 0x6d8),local_48[0]);
          }
          else {
            iVar2 = FUN_004170c0(&DAT_0141b518,local_28[0],1);
            if ((iVar2 < 1) && (iVar2 = FUN_004170c0(&DAT_0141b528,local_28[0],1), iVar2 < 1)) {
              FUN_00416780(&local_1c8,*(undefined2 *)(param_1 + 0x6e0));
              local_208 = &LAB_0141b538;
              local_200 = local_28[0];
              local_1f8 = local_1c8;
              FUN_00416cd0(param_1 + 0x6d8,5,*(undefined8 *)(param_1 + 0x6d8),local_48[0]);
            }
            else {
              local_208 = (undefined *)local_28[0];
              FUN_00416cd0(&local_1b8,3,local_48[0],&LAB_0141b538);
              FUN_0043eca0(&local_1b0,local_1b8,0x22);
              FUN_00416780(&local_1c0,*(undefined2 *)(param_1 + 0x6e0));
              local_208 = local_1c0;
              FUN_00416cd0(param_1 + 0x6d8,3,*(undefined8 *)(param_1 + 0x6d8),local_1b0);
            }
          }
        }
        local_4c = local_4c + 1;
        local_1e4 = local_1e4 + -1;
        iVar2 = local_1e4;
      } while (local_1e4 != 0);
    }
    local_58 = *(longlong *)(param_1 + 0x6d8);
    local_5c = 0;
    if (local_58 != 0) {
      local_5c = *(undefined4 *)(local_58 + -4);
    }
    FUN_00416e20(param_1 + 0x6d8,local_5c,1);
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4d8) + 0x28))();
    local_4c = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4d8);
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_1d0,local_4c);
        if (local_1d0 != 0) {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4d8);
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_1d8,local_4c);
          local_208 = &DAT_0141b518;
          FUN_00416cd0(param_1 + 0x6d8,3,*(undefined8 *)(param_1 + 0x6d8),local_1d8);
        }
        local_4c = local_4c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_68 = *(longlong *)(param_1 + 0x6d8);
    local_6c = 0;
    if (local_68 != 0) {
      local_6c = *(undefined4 *)(local_68 + -4);
    }
    FUN_00416e20(param_1 + 0x6d8,local_6c,1);
  }
  FUN_0043ea00(&local_1e0,*(undefined8 *)(param_1 + 0x6d8));
  FUN_00414560(&local_1e0,9);
  FUN_00414560(&local_98,3);
  FUN_00414480(local_48);
  FUN_00414480(local_28);
  return;
}

