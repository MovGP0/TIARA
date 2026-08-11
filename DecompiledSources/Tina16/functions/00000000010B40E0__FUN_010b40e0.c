/* Ghidra address: 010b40e0 */
/* Ghidra symbol: FUN_010b40e0 */


void FUN_010b40e0(longlong param_1,undefined8 *param_2,ushort param_3)

{
  undefined4 local_2c [3];
  
  FUN_01d30f00(*param_2,local_2c,4);
  FUN_01d32710(*param_2,*(undefined8 *)(param_1 + 8),local_2c[0]);
  FUN_01d30f00(*param_2,local_2c,4);
  FUN_01d32710(*param_2,*(undefined8 *)(param_1 + 0x10),local_2c[0]);
  FUN_01d30f00(*param_2,local_2c,4);
  FUN_01d32710(*param_2,*(undefined8 *)(param_1 + 0x18),local_2c[0]);
  FUN_01d32380(*param_2,*(undefined8 *)(param_1 + 0x20));
  if (0x3a < param_3) {
    FUN_01d32380(*param_2,*(undefined8 *)(param_1 + 0x30));
    FUN_01d30f00(*param_2,local_2c,4);
    FUN_01d32710(*param_2,*(undefined8 *)(param_1 + 0x28),local_2c[0]);
  }
  return;
}

