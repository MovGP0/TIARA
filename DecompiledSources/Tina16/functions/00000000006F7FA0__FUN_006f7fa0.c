/* Ghidra address: 006f7fa0 */
/* Ghidra symbol: FUN_006f7fa0 */


void FUN_006f7fa0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  longlong local_50;
  longlong local_40;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  longlong local_20;
  
  local_60 = auStack_88;
  local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_2c = FUN_0064d0b0(param_1);
  local_50 = *(longlong *)(param_1 + 0x500);
  iVar2 = *(int *)(*(longlong *)(local_50 + 0x10) + 0x10);
  local_24 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_40 = FUN_006edb10(*(undefined8 *)(param_1 + 0x500),local_24);
      if (*(char *)(local_40 + 0x19) == '\0') {
        iVar1 = FUN_006ed780(local_40);
        local_2c = local_2c - iVar1;
      }
      else {
        FUN_004ae7e0(local_20,local_40);
      }
      local_24 = local_24 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (0 < *(int *)(local_20 + 0x10)) {
    (**(code **)(**(longlong **)(param_1 + 0x500) + 0x40))(*(longlong **)(param_1 + 0x500));
    do {
      local_28 = *(int *)(local_20 + 0x10);
      local_34 = local_2c % local_28;
      local_30 = local_2c / local_28;
      local_24 = local_28 + -1;
      if (-1 < local_24) {
        do {
          local_40 = FUN_004aeac0(local_20,local_24);
          if (local_24 == 0) {
            local_30 = local_30 + local_34;
          }
          FUN_006ed840(local_40,local_30);
          local_24 = local_24 + -1;
        } while (local_24 != -1);
      }
      local_30 = local_2c / local_28;
      local_24 = local_28 + -1;
      if (-1 < local_24) {
        do {
          local_40 = FUN_004aeac0(local_20,local_24);
          if (local_24 == 0) {
            local_30 = local_30 + local_34;
          }
          iVar2 = FUN_006ed780(local_40);
          if (iVar2 != local_30) {
            FUN_004ae870(local_20,local_24);
            iVar2 = FUN_006ed780(local_40);
            local_2c = local_2c - iVar2;
          }
          local_24 = local_24 + -1;
        } while (local_24 != -1);
      }
    } while ((*(int *)(local_20 + 0x10) != 0) && (*(int *)(local_20 + 0x10) != local_28));
    (**(code **)(**(longlong **)(param_1 + 0x500) + 0x48))(*(longlong **)(param_1 + 0x500));
  }
  FUN_00410f20(local_20);
  return;
}

