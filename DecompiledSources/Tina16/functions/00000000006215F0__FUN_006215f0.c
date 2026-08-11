/* Ghidra address: 006215f0 */
/* Ghidra symbol: FUN_006215f0 */


void FUN_006215f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  longlong local_10;
  
  local_20 = auStack_48;
  FUN_004520b0(*(undefined8 *)(param_1 + 0x10));
  local_18 = 0;
  lVar1 = *(longlong *)(param_1 + 8);
  while( true ) {
    local_10 = lVar1;
    if (local_10 == 0) {
      FUN_00452190(*(undefined8 *)(param_1 + 0x10));
      return;
    }
    if (local_10 == param_2) break;
    lVar1 = *(longlong *)(local_10 + 8);
    local_18 = local_10;
  }
  if (local_18 == 0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(local_10 + 8);
  }
  else {
    *(undefined8 *)(local_18 + 8) = *(undefined8 *)(local_10 + 8);
  }
  FUN_006216a0(0,local_20);
  return;
}

