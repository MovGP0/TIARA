/* Ghidra address: 00618f70 */
/* Ghidra symbol: FUN_00618f70 */


void FUN_00618f70(ulonglong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_30 = auStack_58;
  if ((*param_1 & 0xfffffffffffffffe) != 0) {
    local_10 = (undefined8 *)FUN_00618e50(param_1);
    puVar1 = (undefined8 *)*local_10;
    local_18 = local_10;
    while (local_20 = puVar1, local_20 != local_10) {
      if (local_20 == param_2) {
        *local_18 = *local_20;
        break;
      }
      local_18 = local_20;
      puVar1 = (undefined8 *)*local_20;
    }
    if ((local_20 == local_10) && (local_20 == param_2)) {
      local_10 = (undefined8 *)*local_20;
      if (local_10 == local_20) {
        local_10 = (undefined8 *)0x0;
      }
      else {
        *local_18 = local_10;
      }
    }
    FUN_006191b0(param_1,local_10);
  }
  return;
}

