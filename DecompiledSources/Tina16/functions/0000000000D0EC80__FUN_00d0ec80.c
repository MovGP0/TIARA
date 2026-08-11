/* Ghidra address: 00d0ec80 */
/* Ghidra symbol: FUN_00d0ec80 */


void FUN_00d0ec80(longlong param_1)

{
  FUN_0040d200(param_1 + 0x2c,0x40,0);
  *(undefined4 *)(param_1 + 0x6c) = 0x67452301;
  *(undefined4 *)(param_1 + 0x70) = 0xefcdab89;
  *(undefined4 *)(param_1 + 0x74) = 0x98badcfe;
  *(undefined4 *)(param_1 + 0x78) = 0x10325476;
  *(undefined4 *)(param_1 + 0x7c) = 0xc3d2e1f0;
  *(undefined4 *)(param_1 + 0x80) = 0x76543210;
  *(undefined4 *)(param_1 + 0x84) = 0xfedcba98;
  *(undefined4 *)(param_1 + 0x88) = 0x89abcdef;
  *(undefined4 *)(param_1 + 0x8c) = 0x1234567;
  *(undefined4 *)(param_1 + 0x90) = 0x3c2d1e0f;
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_00d0d260(param_1,1);
  return;
}

