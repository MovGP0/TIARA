/* Ghidra address: 0065dfe0 */
/* Ghidra symbol: FUN_0065dfe0 */


void FUN_0065dfe0(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  if (*(char *)(param_2 + 0x3b) == '\0') {
    puVar1 = (uint *)(*(longlong *)(param_2 + 0x60) + 0xa4);
    *puVar1 = *puVar1 & 0xfffeffff;
  }
  return;
}

