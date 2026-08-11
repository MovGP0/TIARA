/* Ghidra address: 006dbb60 */
/* Ghidra symbol: FUN_006dbb60 */


void FUN_006dbb60(longlong param_1,undefined8 param_2)

{
  char cVar1;
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
  FUN_006586f0(param_1,param_2);
  cVar1 = FUN_0065be20(param_1);
  if ((cVar1 != '\0') && ((*(ushort *)(param_1 + 0x34) & 2) == 0)) {
    local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    local_2c = FUN_0064d0b0(param_1);
    local_50 = *(longlong *)(param_1 + 0x490);
    iVar2 = *(int *)(*(longlong *)(local_50 + 0x10) + 0x10);
    local_24 = 0;
    if (-1 < iVar2 + -1) {
      do {
        local_40 = FUN_006da380(*(undefined8 *)(param_1 + 0x490),local_24);
        if (*(char *)(local_40 + 0x2f) == '\0') {
          local_2c = local_2c - *(int *)(local_40 + 0x20);
        }
        else {
          FUN_004ae7e0(local_20,local_40);
        }
        local_24 = local_24 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (0 < *(int *)(local_20 + 0x10)) {
      (**(code **)(**(longlong **)(param_1 + 0x490) + 0x40))(*(longlong **)(param_1 + 0x490));
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
            FUN_006da1a0(local_40,local_30);
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
            if (*(int *)(local_40 + 0x20) != local_30) {
              FUN_004ae870(local_20,local_24);
              local_2c = local_2c - *(int *)(local_40 + 0x20);
            }
            local_24 = local_24 + -1;
          } while (local_24 != -1);
        }
      } while ((*(int *)(local_20 + 0x10) != 0) && (*(int *)(local_20 + 0x10) != local_28));
      (**(code **)(**(longlong **)(param_1 + 0x490) + 0x48))(*(longlong **)(param_1 + 0x490));
    }
    FUN_00410f20(local_20);
  }
  return;
}

