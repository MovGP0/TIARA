/* Ghidra address: 006e5650 */
/* Ghidra symbol: FUN_006e5650 */


void FUN_006e5650(longlong param_1,longlong param_2,char param_3,char param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_34;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  local_40 = auStack_68;
  if (((param_2 == 0) || (*(char *)(param_2 + 0x38) != '\0')) ||
     ((*(byte *)(param_1 + 0x561) & 2) == 0)) {
    FUN_006e5530(param_1,param_2);
  }
  else {
    local_40 = auStack_68;
    local_28 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    local_30 = *(longlong *)(param_1 + 0x578);
    if (local_30 != param_2) {
      do {
        if (local_30 == 0) goto LAB_006e5785;
        FUN_004ae7e0(local_28,local_30);
        if (param_3 == '\0') {
          if ((*(byte *)(param_1 + 0x561) & 4) == 0) {
            local_30 = FUN_006dd600(local_30);
          }
          else {
            local_30 = FUN_006dd480(local_30);
          }
        }
        else if ((*(byte *)(param_1 + 0x561) & 4) == 0) {
          local_30 = FUN_006dd6a0(local_30);
        }
        else {
          local_30 = FUN_006dd4e0(local_30);
        }
      } while (local_30 != param_2);
      FUN_004ae7e0(local_28,local_30);
    }
LAB_006e5785:
    if (param_4 != '\0') {
      FUN_004af610(local_20,*(undefined8 *)(param_1 + 0x568),4,local_28);
      if ((0 < *(int *)(local_20 + 0x10)) &&
         (local_34 = *(int *)(*(longlong *)(param_1 + 0x568) + 0x10) + -1, -1 < local_34)) {
        do {
          uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x568),local_34);
          iVar1 = FUN_004aeba0(local_20,uVar2);
          if (iVar1 != -1) {
            FUN_006e5480(param_1,local_34);
          }
          local_34 = local_34 + -1;
        } while (local_34 != -1);
      }
    }
    FUN_004af610(local_28,*(undefined8 *)(param_1 + 0x568),4,0);
    iVar1 = *(int *)(local_28 + 0x10);
    local_34 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar2 = FUN_004aeac0(local_28,local_34);
        FUN_006e54c0(param_1,uVar2,0);
        local_34 = local_34 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    local_34 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x568),param_2);
    if (local_34 < 1) {
      if (local_34 == -1) {
        FUN_006e54c0(param_1,param_2,0);
      }
    }
    else {
      FUN_004ae870(*(undefined8 *)(param_1 + 0x568),local_34);
      FUN_004aec30(*(undefined8 *)(param_1 + 0x568),0,param_2);
    }
    FUN_00410f20(local_20);
    FUN_00410f20(local_28);
  }
  return;
}

