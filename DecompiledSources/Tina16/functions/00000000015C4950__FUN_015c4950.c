/* Ghidra address: 015c4950 */
/* Ghidra symbol: FUN_015c4950 */


char FUN_015c4950(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_70;
  longlong local_60;
  char local_54 [4];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  char local_19;
  
  local_19 = '\0';
  local_60 = 0;
  FUN_004b6dc0(*(undefined8 *)(*(longlong *)(param_1 + 0x213d0) + 8),param_2);
  local_40 = 0x8074b50;
  FUN_00409a70(&local_40,local_54,4);
  local_50 = FUN_00409570(0xffff);
  do {
    lVar3 = FUN_004b6da0(*(undefined8 *)(*(longlong *)(param_1 + 0x213d0) + 8));
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x213d0) + 8);
    lVar4 = (**(code **)*puVar1)(puVar1);
    if (lVar4 <= lVar3) break;
    local_30 = FUN_004b6da0(*(undefined8 *)(*(longlong *)(param_1 + 0x213d0) + 8));
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x213d0) + 8);
    local_70 = (**(code **)*puVar1)(puVar1);
    lVar3 = FUN_004b6da0(*(undefined8 *)(*(longlong *)(param_1 + 0x213d0) + 8));
    local_70 = local_70 - lVar3;
    if (0xffff < local_70) {
      local_70 = 0xffff;
    }
    local_28 = local_70;
    FUN_004b84c0(*(undefined8 *)(*(longlong *)(param_1 + 0x213d0) + 8),local_50,local_70);
    local_38 = -1;
    for (local_40 = 0; local_40 < local_28; local_40 = local_40 + 1) {
      local_38 = -1;
      if (*(char *)(local_50 + local_40) == local_54[0]) {
        local_48 = 1;
        while (((local_48 < 4 && (local_40 + local_48 < local_28)) &&
               (*(char *)(local_50 + local_40 + local_48) == local_54[local_48]))) {
          local_48 = local_48 + 1;
          if (3 < local_48) {
            local_38 = local_40;
          }
        }
        if (-1 < local_38) break;
      }
    }
    if (-1 < local_38) {
      local_19 = '\x01';
      local_60 = local_38 + local_30;
      break;
    }
    FUN_004b6dc0(*(undefined8 *)(*(longlong *)(param_1 + 0x213d0) + 8),local_30 + -4 + local_28);
    lVar3 = FUN_004b6da0(*(undefined8 *)(*(longlong *)(param_1 + 0x213d0) + 8));
  } while (local_30 < lVar3);
  if (local_19 != '\0') {
    FUN_004b6dc0(*(undefined8 *)(*(longlong *)(param_1 + 0x213d0) + 8),local_60);
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x213d0) + 8);
    lVar3 = (**(code **)*puVar1)(puVar1);
    if (0xf < lVar3 - local_60) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x213d0) + 8);
      (**(code **)(*plVar2 + 0x18))(plVar2,param_3,0x10);
    }
  }
  FUN_004095f0(local_50);
  return local_19;
}

