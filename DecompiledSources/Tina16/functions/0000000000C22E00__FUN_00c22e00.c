/* Ghidra address: 00c22e00 */
/* Ghidra symbol: FUN_00c22e00 */


uint FUN_00c22e00(undefined8 param_1,undefined2 *param_2)

{
  byte local_1c;
  byte local_1b;
  
  local_1b = (byte)((ushort)*param_2 >> 8);
  local_1c = (byte)*param_2;
  return (uint)*(byte *)(param_2 + 1) << 0x10 | (uint)local_1b << 8 | (uint)local_1c;
}

