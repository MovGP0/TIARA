/* Ghidra address: 0181b0d0 */
/* Ghidra symbol: FUN_0181b0d0 */


void FUN_0181b0d0(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_9;
  
  local_20 = auStack_48;
  local_9 = *(undefined1 *)(param_1 + 0x6c8);
  *(undefined1 *)(param_1 + 0x6c8) = param_3;
  FUN_0181b150(param_1,param_2);
  *(undefined1 *)(param_1 + 0x6c8) = local_9;
  return;
}

