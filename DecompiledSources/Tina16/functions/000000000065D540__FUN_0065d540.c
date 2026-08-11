/* Ghidra address: 0065d540 */
/* Ghidra symbol: FUN_0065d540 */


void FUN_0065d540(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(longlong *)(param_2 + 0xb0) + 0xa4);
  *puVar1 = *puVar1 & 0xffffffef;
  FUN_00654410(*(undefined8 *)(param_2 + 0xb0));
  return;
}

