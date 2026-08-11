/* Ghidra address: 00f63210 */
/* Ghidra symbol: FUN_00f63210 */


void FUN_00f63210(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 local_30 [2];
  
  local_30[0] = *param_3;
  FUN_00f652e0(param_1,*(undefined4 *)(PTR_DAT_02002068 + 8));
  FUN_00f65300(param_1,*(undefined4 *)(PTR_DAT_02002068 + 0x28));
  FUN_00f65320(param_1,0);
  FUN_00f652c0(param_1,param_4);
  *(undefined1 *)(param_1 + 0x61) = 1;
  FUN_00f62f10(param_1,param_2,local_30);
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined1 *)(param_2 + 0x40) = 0;
  return;
}

