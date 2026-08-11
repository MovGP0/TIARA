/* Ghidra address: 0042a2a0 */
/* Ghidra symbol: FUN_0042a2a0 */


uint FUN_0042a2a0(byte param_1,uint param_2,uint param_3)

{
  return (uint)param_1 | (param_2 & 0xff) << 8 | (param_3 & 0xff) << 0x10;
}

