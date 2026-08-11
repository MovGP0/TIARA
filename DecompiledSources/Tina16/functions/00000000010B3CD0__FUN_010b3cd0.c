/* Ghidra address: 010b3cd0 */
/* Ghidra symbol: FUN_010b3cd0 */


uint FUN_010b3cd0(longlong param_1)

{
  return (*(uint *)(param_1 + 0x2a) & 0x3fc) >> 2;
}

