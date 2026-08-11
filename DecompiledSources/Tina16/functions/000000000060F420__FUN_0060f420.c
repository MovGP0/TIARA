/* Ghidra address: 0060f420 */
/* Ghidra symbol: FUN_0060f420 */


void FUN_0060f420(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_20 = auStack_48;
  while (local_18 = *(undefined8 **)(param_1 + 8), local_18 != (undefined8 *)0x0) {
    local_10 = local_18;
    FUN_0060f160(param_1);
    *(undefined8 *)(param_1 + 8) = *local_18;
    FUN_0060f180(param_1);
    if (local_18[1] != 0) {
      FUN_00410f20(local_18[1]);
    }
    FUN_004095f0(local_10);
  }
  return;
}

