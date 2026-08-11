/* Ghidra address: 01d6f160 */
/* Ghidra symbol: FUN_01d6f160 */


longlong FUN_01d6f160(longlong param_1)

{
  FUN_004095f0(*(undefined8 *)(param_1 + 0x18),(uint)*(byte *)(param_1 + 0x10) * 0x228);
  FUN_004095f0(*(undefined8 *)(param_1 + 0x20),(ulonglong)*(byte *)(param_1 + 0x10) << 3);
  FUN_004095f0(*(undefined8 *)(param_1 + 0x28),(ulonglong)*(byte *)(param_1 + 0x10) << 3);
  return param_1;
}

