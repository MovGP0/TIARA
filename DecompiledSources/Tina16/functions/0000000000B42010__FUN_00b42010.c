/* Ghidra address: 00b42010 */
/* Ghidra symbol: FUN_00b42010 */


void FUN_00b42010(longlong param_1,undefined8 param_2)

{
  uint local_1c;
  
  FUN_00b25710(param_2,&local_1c);
  *(byte *)(param_1 + 0x20) = (byte)local_1c & 0xf;
  *(ushort *)(param_1 + 0x21) = (ushort)(local_1c >> 4) & 0xfff;
  *(short *)(param_1 + 0x23) = (short)(local_1c >> 0x10);
  FUN_00b25710(param_2,&local_1c);
  *(uint *)(param_1 + 0x25) = local_1c;
  return;
}

