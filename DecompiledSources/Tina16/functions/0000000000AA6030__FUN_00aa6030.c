/* Ghidra address: 00aa6030 */
/* Ghidra symbol: FUN_00aa6030 */


void FUN_00aa6030(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00abef70(param_1,param_2 & 0xfffffffc);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x298));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1b8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x220));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1c0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x228));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x230));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x240));
  FUN_00410f20(*(undefined8 *)(param_1 + 600));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x238));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x280));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x288));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x2a0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x2c0));
  if (*(char *)(param_1 + 700) == '\0') {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x2d0));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x68));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

