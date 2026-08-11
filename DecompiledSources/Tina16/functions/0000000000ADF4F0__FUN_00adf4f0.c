/* Ghidra address: 00adf4f0 */
/* Ghidra symbol: FUN_00adf4f0 */


void FUN_00adf4f0(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined1 *local_60;
  int local_48;
  char local_41;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_60 = auStack_a8;
  puVar1 = auStack_a8;
  if (*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x60) == 0) {
    local_28 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
    local_88 = FUN_004aeac0(local_28,*(int *)(local_28 + 0x10) + -1);
    local_80 = *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x70);
    local_78 = 1;
    uVar2 = FUN_00ab3440(&PTR_FUN_00a84e18,1,*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68),
                         0);
    *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x60) = uVar2;
    puVar1 = local_60;
  }
  local_60 = puVar1;
  local_30 = *(longlong *)(param_1 + 0x2a0);
  local_38 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x48);
  if (local_38 == 0) {
    local_88 = 0;
    FUN_00ac0980(*(undefined8 *)(local_30 + 0xe8),param_2,0,0);
  }
  else {
    local_20 = 0;
    local_40 = 0;
    iVar4 = *(int *)(local_38 + 0x10);
    local_48 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar3 = FUN_00a72910(local_38,local_48);
        if (*(char *)(lVar3 + 8) == 'P') {
          local_41 = '\x01';
          local_40 = FUN_00a72910(local_38,local_48);
          goto code_r0x00adf649;
        }
        local_48 = local_48 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_41 = '\0';
code_r0x00adf649:
    if (local_41 != '\0') {
      local_20 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
      FUN_00a62c40(*(undefined8 *)(local_40 + 0x28),local_20);
    }
    local_88 = 0;
    FUN_00ac0980(*(undefined8 *)(local_30 + 0xe8),param_2,local_20,local_38);
    FUN_00410f20(local_20);
  }
  return;
}

