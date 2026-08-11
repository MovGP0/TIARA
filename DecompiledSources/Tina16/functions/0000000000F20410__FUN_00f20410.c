/* Ghidra address: 00f20410 */
/* Ghidra symbol: FUN_00f20410 */


void FUN_00f20410(longlong param_1,undefined8 *param_2,undefined8 param_3,ushort param_4)

{
  if (param_4 < 0x11) {
    FUN_01d314e0(*param_2,param_1 + 8);
  }
  else {
    FUN_01d316c0(*param_2,param_1 + 8);
  }
  FUN_01d30f00(*param_2,param_1 + 0x10,1);
  FUN_01d30f00(*param_2,param_1 + 0x11,1);
  FUN_01d30f00(*param_2,param_1 + 0x12,1);
  FUN_01d32040(*param_2,*(undefined8 *)(param_1 + 0x18));
  FUN_01d32040(*param_2,*(undefined8 *)(param_1 + 0x20));
  FUN_01d30f00(*param_2,param_1 + 0x28,1);
  FUN_00f20360(param_1);
  return;
}

