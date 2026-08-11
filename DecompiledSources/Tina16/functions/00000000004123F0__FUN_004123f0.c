/* Ghidra address: 004123f0 */
/* Ghidra symbol: FUN_004123f0 */


void FUN_004123f0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_20 = auStack_48;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_00411b30(param_1 + 0x28);
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    if (puVar1 != (undefined8 *)0x0) {
      local_10 = puVar1;
      for (local_18 = (undefined8 *)*puVar1; local_18 != *(undefined8 **)(param_1 + 0x20);
          local_18 = (undefined8 *)*local_18) {
        if (local_18 == param_2) {
          *local_10 = *local_18;
          break;
        }
        local_10 = local_18;
      }
      if ((local_18 == *(undefined8 **)(param_1 + 0x20)) && (local_18 == param_2)) {
        puVar1 = (undefined8 *)*local_18;
        if (puVar1 == local_18) {
          *(undefined8 *)(param_1 + 0x20) = 0;
        }
        else {
          *(undefined8 **)(param_1 + 0x20) = puVar1;
          *local_10 = puVar1;
        }
      }
    }
    FUN_00411b70(param_1 + 0x28);
  }
  return;
}

