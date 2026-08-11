/* Ghidra address: 00bf1e10 */
/* Ghidra symbol: FUN_00bf1e10 */


void FUN_00bf1e10(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  if (*(char *)(param_2 + 0x3f) != '\0') {
    puVar1 = (uint *)(*(longlong *)(param_2 + 0x50) + 0x63a);
    *puVar1 = *puVar1 | 0x4000000;
  }
  return;
}

