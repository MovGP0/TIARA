/* Ghidra address: 01873c10 */
/* Ghidra symbol: FUN_01873c10 */


void FUN_01873c10(longlong param_1)

{
  FUN_0040d200(param_1 + 0x18,8,0);
  *(undefined4 *)(param_1 + 8) = 0x67452301;
  *(undefined4 *)(param_1 + 0xc) = 0xefcdab89;
  *(undefined4 *)(param_1 + 0x10) = 0x98badcfe;
  *(undefined4 *)(param_1 + 0x14) = 0x10325476;
  return;
}

