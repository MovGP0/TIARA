/* Ghidra address: 014749d0 */
/* Ghidra symbol: FUN_014749d0 */


void FUN_014749d0(longlong param_1,undefined8 *param_2,undefined8 param_3,ushort param_4)

{
  if (param_4 < 0x15) {
    FUN_01d32040(*param_2,*(undefined8 *)(param_1 + 0x18));
    FUN_01d32040(*param_2,*(undefined8 *)(param_1 + 8));
  }
  else {
    FUN_01d32430(*param_2,*(undefined8 *)(param_1 + 0x18));
    FUN_01d32430(*param_2,*(undefined8 *)(param_1 + 8));
  }
  FUN_00414ad0(param_1 + 0x20,L"Noname");
  if (0x10 < param_4) {
    if (param_4 < 0x13) {
      FUN_01d312f0(*param_2,param_1 + 0x20);
    }
    else {
      FUN_01d316c0(*param_2,param_1 + 0x20);
    }
  }
  if (0x11 < param_4) {
    FUN_01d30f00(*param_2,param_1 + 0x28,1);
  }
  if (0x13 < param_4) {
    FUN_01d32430(*param_2,*(undefined8 *)(param_1 + 0x10));
  }
  if (0x14 < param_4) {
    FUN_01d316c0(*param_2,param_1 + 0x50);
  }
  return;
}

