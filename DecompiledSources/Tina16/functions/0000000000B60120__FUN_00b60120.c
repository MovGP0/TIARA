/* Ghidra address: 00b60120 */
/* Ghidra symbol: FUN_00b60120 */


void FUN_00b60120(longlong param_1)

{
  longlong lVar1;
  ushort local_1c;
  ushort local_1a [5];
  
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_1a);
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1c);
  if (local_1c != 0) {
    lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8));
    *(char *)(lVar1 + 0x89) = (char)(((uint)local_1a[0] * 100) / (uint)local_1c);
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  return;
}

