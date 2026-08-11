/* Ghidra address: 00d83770 */
/* Ghidra symbol: FUN_00d83770 */


void FUN_00d83770(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00d84660(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  FUN_00d7f230(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

