/* Ghidra address: 00c4c870 */
/* Ghidra symbol: FUN_00c4c870 */


undefined8 FUN_00c4c870(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00414ad0(param_1 + 0x88);
  FUN_00414ad0(param_1 + 0x90,param_3);
  FUN_00c4cc90(param_1);
  return CONCAT71(0x2019c,(&DAT_02019c90)[*(int *)(param_1 + 0x80)] != 0);
}

