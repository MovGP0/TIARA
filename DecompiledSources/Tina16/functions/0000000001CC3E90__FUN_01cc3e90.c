/* Ghidra address: 01cc3e90 */
/* Ghidra symbol: FUN_01cc3e90 */


void FUN_01cc3e90(longlong param_1,undefined8 param_2,ushort param_3)

{
  FUN_01d30f00(param_2,param_1 + 0x18,2);
  if (0x10 < param_3) {
    FUN_01d30f00(param_2,param_1 + 0x1a,2);
  }
  if (0x11 < param_3) {
    FUN_01d30f00(param_2,param_1 + 0x4c,4);
  }
  if (0x12 < param_3) {
    FUN_01d30f00(param_2,param_1 + 0x30,8);
    FUN_01d30f00(param_2,param_1 + 0x20,8);
    FUN_01d30f00(param_2,param_1 + 0x38,8);
    FUN_01d30f00(param_2,param_1 + 0x28,8);
  }
  if (param_3 < 0x14) {
    *(undefined1 *)(param_1 + 0x54) = 1;
  }
  else {
    FUN_01d30f00(param_2,param_1 + 0x54,1);
  }
  if (0x14 < param_3) {
    FUN_01d30f00(param_2,param_1 + 0x56,1);
  }
  if (0x15 < param_3) {
    FUN_01d30f00(param_2,param_1 + 0x40,8);
    FUN_01d30f00(param_2,param_1 + 0x57,1);
    FUN_01d30f00(param_2,param_1 + 0x58,1);
  }
  if (0x16 < param_3) {
    FUN_01d30f00(param_2,param_1 + 0x60,8);
  }
  return;
}

