/* Ghidra address: 00d1c110 */
/* Ghidra symbol: FUN_00d1c110 */


void FUN_00d1c110(longlong param_1)

{
  FUN_0040d200(param_1 + 0x2c,0x40,0);
  FUN_00d1afe0(param_1,*(undefined4 *)(param_1 + 0x98));
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x89abcdef;
  *(undefined4 *)(param_1 + 0x70) = 0x1234567;
  *(undefined4 *)(param_1 + 0x74) = 0x76543210;
  *(undefined4 *)(param_1 + 0x78) = 0xfedcba98;
  *(undefined4 *)(param_1 + 0x7c) = 0xc3b2e187;
  *(undefined4 *)(param_1 + 0x80) = 0xf096a5b4;
  FUN_00d0d260(param_1,1);
  return;
}

