/* Ghidra address: 00ce97f0 */
/* Ghidra symbol: FUN_00ce97f0 */


void FUN_00ce97f0(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_00ce9860(param_1,1);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30));
  FUN_004b1e70(param_1);
  FUN_00ce98a0(param_1,1);
  return;
}

