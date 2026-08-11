/* Ghidra address: 00655860 */
/* Ghidra symbol: FUN_00655860 */


void FUN_00655860(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(longlong *)(param_2 + 0x50) + 0xa4);
  *puVar1 = *puVar1 & 0xfffffdff;
  return;
}

