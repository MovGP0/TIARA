/* Ghidra address: 00c07f00 */
/* Ghidra symbol: FUN_00c07f00 */


void FUN_00c07f00(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  if (*(char *)(param_2 + 0x2af) != '\0') {
    puVar1 = (uint *)(*(longlong *)(param_2 + 0x2d0) + 0x63a);
    *puVar1 = *puVar1 & 0xfffbffff;
  }
  return;
}

