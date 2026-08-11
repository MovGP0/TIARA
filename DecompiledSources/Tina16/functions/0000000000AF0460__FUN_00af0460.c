/* Ghidra address: 00af0460 */
/* Ghidra symbol: FUN_00af0460 */


void FUN_00af0460(undefined8 param_1,longlong param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(*(longlong *)(param_2 + 0x50) + 0x8a0);
  *puVar1 = *puVar1 & 0xfffd;
  return;
}

