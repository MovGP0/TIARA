/* Ghidra address: 006212f0 */
/* Ghidra symbol: FUN_006212f0 */


void FUN_006212f0(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  FUN_004520b0(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 8);
  *(longlong *)(param_1 + 8) = param_2;
  FUN_00452190(*(undefined8 *)(param_1 + 0x10));
  return;
}

