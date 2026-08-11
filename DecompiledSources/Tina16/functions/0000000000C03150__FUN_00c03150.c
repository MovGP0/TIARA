/* Ghidra address: 00c03150 */
/* Ghidra symbol: FUN_00c03150 */


void FUN_00c03150(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  if (*(char *)(param_2 + 0x7f) != '\0') {
    puVar1 = (uint *)(*(longlong *)(param_2 + 0xa0) + 0x63a);
    *puVar1 = *puVar1 & 0xfffbffff;
  }
  return;
}

