/* Ghidra address: 00c3c780 */
/* Ghidra symbol: FUN_00c3c780 */


void FUN_00c3c780(longlong param_1,undefined8 param_2,ushort param_3)

{
  FUN_01d30f00(param_2,param_1 + 8,4);
  if (param_3 < 0x101) {
    *(uint *)(param_1 + 8) = ((int)*(uint *)(param_1 + 8) / 2) * 3 + (*(uint *)(param_1 + 8) & 1);
  }
  FUN_01d30f00(param_2,param_1 + 0xc,8);
  FUN_01d30f00(param_2,param_1 + 0x14,8);
  FUN_01d30f00(param_2,param_1 + 0x1c,8);
  FUN_01d30f00(param_2,param_1 + 0x24,4);
  FUN_01d30f00(param_2,param_1 + 0x28,4);
  FUN_01d30f00(param_2,param_1 + 0x2c,4);
  FUN_00c3c330(param_2,*(undefined8 *)(param_1 + 0x30));
  FUN_00c3c330(param_2,*(undefined8 *)(param_1 + 0x38));
  return;
}

