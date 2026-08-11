/* Ghidra address: 00c0bba0 */
/* Ghidra symbol: FUN_00c0bba0 */


void FUN_00c0bba0(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  if (*(char *)(param_2 + 0xef) != '\0') {
    puVar1 = (uint *)(*(longlong *)(param_2 + 0x110) + 0x63a);
    *puVar1 = *puVar1 & 0xfffbffff;
  }
  return;
}

