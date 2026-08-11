/* Ghidra address: 00af2590 */
/* Ghidra symbol: FUN_00af2590 */


void FUN_00af2590(undefined8 param_1,longlong param_2)

{
  ushort *puVar1;
  
  if (*(char *)(param_2 + 0x6f) == '\0') {
    puVar1 = (ushort *)(*(longlong *)(param_2 + 0x80) + 0x8a0);
    *puVar1 = *puVar1 & 0xfffd;
  }
  return;
}

