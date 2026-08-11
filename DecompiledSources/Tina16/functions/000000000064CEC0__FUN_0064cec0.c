/* Ghidra address: 0064cec0 */
/* Ghidra symbol: FUN_0064cec0 */


void FUN_0064cec0(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(longlong *)(param_2 + 0x80) + 0xa4);
  *puVar1 = *puVar1 & 0xfffffbff;
  return;
}

