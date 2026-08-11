/* Ghidra address: 00d1cbc0 */
/* Ghidra symbol: FUN_00d1cbc0 */


void FUN_00d1cbc0(longlong param_1)

{
  FUN_0040d200(param_1 + 0x2c,0x10,0);
  *(undefined4 *)(param_1 + 0x3c) = 0x67452301;
  *(undefined4 *)(param_1 + 0x40) = 0xefcdab89;
  *(undefined4 *)(param_1 + 0x44) = 0x98badcfe;
  *(undefined4 *)(param_1 + 0x48) = 0x10325476;
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_00d0d260(param_1,1);
  return;
}

