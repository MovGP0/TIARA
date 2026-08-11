/* Ghidra address: 015c46b0 */
/* Ghidra symbol: FUN_015c46b0 */


undefined * FUN_015c46b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_70;
  char local_5c [4];
  longlong local_58;
  longlong local_50;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  undefined *local_20;
  
  local_20 = (undefined *)0xffffffffffffffff;
  local_38 = FUN_004b6da0(*(undefined8 *)(param_1 + 8));
  FUN_004b6dc0(*(undefined8 *)(param_1 + 8),param_2);
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x85) == '\0') {
    local_48 = (undefined *)0x5045c61;
  }
  else {
    local_48 = &DAT_04034b50;
  }
  FUN_00409a70(&local_48,local_5c,4);
  local_58 = FUN_00409570(0xffff);
  do {
    lVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 8));
    lVar2 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8));
    if (lVar2 <= lVar1) break;
    local_30 = FUN_004b6da0(*(undefined8 *)(param_1 + 8));
    local_70 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8));
    lVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 8));
    local_70 = local_70 - lVar1;
    if (0xffff < local_70) {
      local_70 = 0xffff;
    }
    local_28 = local_70;
    FUN_004b84c0(*(undefined8 *)(param_1 + 8),local_58,local_70);
    local_40 = (undefined *)0xffffffffffffffff;
    for (local_48 = (undefined *)0x0; (longlong)local_48 < local_28; local_48 = local_48 + 1) {
      local_40 = (undefined *)0xffffffffffffffff;
      if (local_48[local_58] == local_5c[0]) {
        local_50 = 1;
        while (((local_50 < 4 && ((longlong)(local_48 + local_50) < local_28)) &&
               (local_48[local_50 + local_58] == local_5c[local_50]))) {
          local_50 = local_50 + 1;
          if (3 < local_50) {
            local_40 = local_48;
          }
        }
        if (-1 < (longlong)local_40) break;
      }
    }
    if (-1 < (longlong)local_40) {
      local_20 = local_40 + local_30;
      break;
    }
    FUN_004b6dc0(*(undefined8 *)(param_1 + 8),local_30 + -4 + local_28);
    lVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 8));
  } while (local_30 < lVar1);
  if ((-1 < (longlong)local_20) &&
     (lVar1 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8)),
     lVar1 - (longlong)local_20 < 0x1e)) {
    local_20 = (undefined *)0xffffffffffffffff;
  }
  FUN_004b6dc0(*(undefined8 *)(param_1 + 8),local_38);
  FUN_004095f0(local_58);
  return local_20;
}

