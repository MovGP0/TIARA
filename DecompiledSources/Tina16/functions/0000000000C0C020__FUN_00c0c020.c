/* Ghidra address: 00c0c020 */
/* Ghidra symbol: FUN_00c0c020 */


void FUN_00c0c020(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  if (*(char *)(param_2 + 0x8f) != '\0') {
    puVar1 = (uint *)(*(longlong *)(param_2 + 0xb0) + 0x63a);
    *puVar1 = *puVar1 & 0xfffbffff;
  }
  return;
}

