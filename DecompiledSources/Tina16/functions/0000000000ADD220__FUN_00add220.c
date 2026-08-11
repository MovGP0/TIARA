/* Ghidra address: 00add220 */
/* Ghidra symbol: FUN_00add220 */


void FUN_00add220(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_50;
  int local_40;
  char local_39;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_50 = auStack_88;
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x60);
  (**(code **)(*plVar1 + 200))(plVar1,*(undefined8 *)(param_1 + 0x238));
  FUN_00a74cd0(*(undefined8 *)(param_1 + 0x238));
  local_28 = *(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0);
  local_30 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x48);
  if (local_30 == 0) {
    local_68 = 0;
    FUN_00ac0980(*(undefined8 *)(local_28 + 0xe8),param_2,0,0);
  }
  else {
    local_20 = 0;
    local_38 = 0;
    iVar3 = *(int *)(local_30 + 0x10);
    local_40 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar2 = FUN_00a72910(local_30,local_40);
        if (*(char *)(lVar2 + 8) == 'P') {
          local_39 = '\x01';
          local_38 = FUN_00a72910(local_30,local_40);
          goto code_r0x00add323;
        }
        local_40 = local_40 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_39 = '\0';
code_r0x00add323:
    if (local_39 != '\0') {
      local_20 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
      FUN_00a62c40(*(undefined8 *)(local_38 + 0x28),local_20);
    }
    local_68 = 0;
    FUN_00ac0980(*(undefined8 *)(local_28 + 0xe8),param_2,local_20,local_30);
    FUN_00410f20(local_20);
  }
  return;
}

