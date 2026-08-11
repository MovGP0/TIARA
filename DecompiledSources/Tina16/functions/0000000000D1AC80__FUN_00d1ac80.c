/* Ghidra address: 00d1ac80 */
/* Ghidra symbol: FUN_00d1ac80 */


void FUN_00d1ac80(longlong param_1)

{
  FUN_0040d200(param_1 + 0x30,0x40,0);
  FUN_0040d200(param_1 + 0x70,0x20,0);
  *(undefined4 *)(param_1 + 0x28) = 8;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_00d0d260(param_1,1);
  return;
}

