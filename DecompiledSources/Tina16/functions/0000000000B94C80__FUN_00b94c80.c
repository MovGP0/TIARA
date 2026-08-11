/* Ghidra address: 00b94c80 */
/* Ghidra symbol: FUN_00b94c80 */


uint FUN_00b94c80(undefined8 *param_1)

{
  undefined2 local_10;
  undefined2 uStack_c;
  
  local_10 = (short)*param_1;
  uStack_c = (short)((ulonglong)*param_1 >> 0x20);
  return (int)local_10 | (int)uStack_c << 0x10;
}

