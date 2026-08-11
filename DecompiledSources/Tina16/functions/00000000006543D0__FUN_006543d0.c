/* Ghidra address: 006543d0 */
/* Ghidra symbol: FUN_006543d0 */


void FUN_006543d0(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(longlong *)(param_2 + 0x60) + 0xa4);
  *puVar1 = *puVar1 & 0xffffffef;
  FUN_00654410(*(undefined8 *)(param_2 + 0x60));
  return;
}

