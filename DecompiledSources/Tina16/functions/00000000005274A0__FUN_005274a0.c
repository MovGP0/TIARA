/* Ghidra address: 005274a0 */
/* Ghidra symbol: FUN_005274a0 */


uint FUN_005274a0(byte param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0040a140();
  FUN_0040a0f0(uVar1 & 0xe07f | (uint)param_1 << 7);
  return (uVar1 & 0xffff) >> 7 & 0xffffff3f;
}

