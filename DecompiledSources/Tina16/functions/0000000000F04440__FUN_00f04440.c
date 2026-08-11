/* Ghidra address: 00f04440 */
/* Ghidra symbol: FUN_00f04440 */


void FUN_00f04440(longlong param_1,int param_2)

{
  ushort *puVar1;
  
  if (((*(ushort *)(*(longlong *)(param_1 + 8) + 0x4f) & 0x20) == 0) ||
     (param_2 != *(int *)(param_1 + 0x20))) {
    *(int *)(param_1 + 0x20) = param_2;
    puVar1 = (ushort *)(*(longlong *)(param_1 + 8) + 0x4f);
    *puVar1 = *puVar1 | 0x20;
    FUN_004b1830(*(undefined8 *)(param_1 + 8),0);
  }
  return;
}

