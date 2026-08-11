/* Ghidra address: 00d27b20 */
/* Ghidra symbol: FUN_00d27b20 */


undefined1 FUN_00d27b20(longlong param_1,int param_2,int param_3)

{
  return *(undefined1 *)
          (*(longlong *)(param_1 + 0x80) + 0x1c0 +
          (ulonglong)
          ((uint)*(byte *)(*(longlong *)(param_1 + 0x80) + 0xc0 + (longlong)param_2) +
          (uint)*(byte *)(*(longlong *)(param_1 + 0x80) + 0xc0 + (longlong)param_3)) % 0xff);
}

