/* Ghidra address: 00c24090 */
/* Ghidra symbol: FUN_00c24090 */


void FUN_00c24090(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
  (**(code **)(*plVar1 + 0x78))(plVar1,0);
  return;
}

