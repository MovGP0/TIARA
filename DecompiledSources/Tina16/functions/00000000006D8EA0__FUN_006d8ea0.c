/* Ghidra address: 006d8ea0 */
/* Ghidra symbol: FUN_006d8ea0 */


void FUN_006d8ea0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined8 local_20;
  
  local_80 = auStack_a8;
  cVar1 = FUN_0065be20(param_1);
  if (((cVar1 != '\0') && (*(char *)(param_1 + 0x4a8) == '\0')) &&
     (local_40 = *(longlong *)(param_1 + 0x490), 0 < *(int *)(*(longlong *)(local_40 + 0x10) + 0x10)
     )) {
    local_2c = FUN_0064d0b0(param_1);
    lVar2 = FUN_006d8710(*(undefined8 *)(param_1 + 0x490),0);
    local_28 = *(undefined4 *)(lVar2 + 0x20);
    local_48 = *(longlong *)(param_1 + 0x490);
    iVar4 = *(int *)(*(longlong *)(local_48 + 0x10) + 0x10);
    local_24 = 0;
    if (-1 < iVar4 + -2) {
      iVar4 = iVar4 + -1;
      do {
        lVar2 = FUN_006d8710(*(undefined8 *)(param_1 + 0x490),local_24);
        local_2c = local_2c - *(int *)(lVar2 + 0x20);
        local_24 = local_24 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_20 = FUN_006d8620(&PTR_FUN_006b0560,1,param_1);
    local_50 = *(longlong *)(param_1 + 0x490);
    iVar4 = *(int *)(*(longlong *)(local_50 + 0x10) + 0x10);
    local_24 = 0;
    if (-1 < iVar4 + -1) {
      do {
        local_38 = (longlong *)FUN_006d8700(local_20);
        uVar3 = FUN_006d8710(*(undefined8 *)(param_1 + 0x490),local_24);
        (**(code **)(*local_38 + 0x10))(local_38,uVar3);
        local_24 = local_24 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_58 = *(longlong *)(param_1 + 0x490);
    iVar4 = *(int *)(*(longlong *)(local_58 + 0x10) + 0x10);
    local_24 = 0;
    if (-1 < iVar4 + -1) {
      do {
        local_68 = (longlong *)FUN_006d8710(*(undefined8 *)(param_1 + 0x490),local_24);
        local_60 = *(longlong *)(param_1 + 0x490);
        uVar3 = FUN_006d8710(local_20,(*(int *)(*(longlong *)(local_60 + 0x10) + 0x10) - local_24) +
                                      -1);
        (**(code **)(*local_68 + 0x10))(local_68,uVar3);
        local_24 = local_24 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00410f20(local_20);
    local_70 = *(longlong *)(param_1 + 0x490);
    if (1 < *(int *)(*(longlong *)(local_70 + 0x10) + 0x10)) {
      local_78 = local_70;
      uVar3 = FUN_006d8710(local_70,*(int *)(*(longlong *)(local_70 + 0x10) + 0x10) + -1);
      FUN_006d8600(uVar3,local_28);
      uVar3 = FUN_006d8710(*(undefined8 *)(param_1 + 0x490),0);
      FUN_006d8600(uVar3,local_2c);
    }
    FUN_006d93f0(param_1,1,1);
  }
  return;
}

