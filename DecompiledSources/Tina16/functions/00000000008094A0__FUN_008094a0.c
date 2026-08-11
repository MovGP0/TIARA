/* Ghidra address: 008094a0 */
/* Ghidra symbol: FUN_008094a0 */


void FUN_008094a0(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(longlong *)(param_2 + 0x50) + 0x12a);
  *puVar1 = *puVar1 & 0xffffffef;
  FUN_00808da0(*(undefined8 *)(param_2 + 0x50));
  return;
}

