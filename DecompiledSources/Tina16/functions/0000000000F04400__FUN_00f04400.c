/* Ghidra address: 00f04400 */
/* Ghidra symbol: FUN_00f04400 */


void FUN_00f04400(longlong param_1,char param_2)

{
  ushort *puVar1;
  
  if (((*(ushort *)(*(longlong *)(param_1 + 8) + 0x4f) & 0x80) == 0) ||
     (param_2 != *(char *)(param_1 + 0x24))) {
    *(char *)(param_1 + 0x24) = param_2;
    puVar1 = (ushort *)(*(longlong *)(param_1 + 8) + 0x4f);
    *puVar1 = *puVar1 | 0x80;
    FUN_004b1830(*(undefined8 *)(param_1 + 8),0);
  }
  return;
}

