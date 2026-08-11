/* Ghidra address: 01773f60 */
/* Ghidra symbol: FUN_01773f60 */


void FUN_01773f60(longlong param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x110) + 0x2a);
  *puVar1 = *puVar1 | param_2;
  return;
}

