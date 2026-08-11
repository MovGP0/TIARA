/* Ghidra address: 004d4ea0 */
/* Ghidra symbol: FUN_004d4ea0 */


void FUN_004d4ea0(longlong param_1,longlong param_2)

{
  longlong local_10;
  
  *(longlong *)(param_2 + 0x18) = param_1;
  local_10 = param_2;
  FUN_00597e50(*(longlong *)(param_1 + 0x78) + 8,&local_10);
  return;
}

