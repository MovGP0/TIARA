/* Ghidra address: 01779260 */
/* Ghidra symbol: FUN_01779260 */


void FUN_01779260(longlong param_1,undefined8 *param_2,undefined8 param_3,ushort param_4)

{
  FUN_01d316c0(*param_2,param_1 + 0x10);
  FUN_01d30f00(*param_2,param_1 + 8,4);
  if (0x10 < param_4) {
    FUN_01d316c0(*param_2,param_1 + 0x18);
    FUN_01d316c0(*param_2,param_1 + 0x20);
  }
  return;
}

