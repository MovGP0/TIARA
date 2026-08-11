/* Ghidra address: 00c03cf0 */
/* Ghidra symbol: FUN_00c03cf0 */


void FUN_00c03cf0(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  if (*(char *)(param_2 + 0x3f) != '\0') {
    puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_2 + 0x50) + 0x2d0) + 0x63a);
    *puVar1 = *puVar1 & 0xfffbffff;
  }
  return;
}

