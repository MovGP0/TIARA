/* Ghidra address: 01776f40 */
/* Ghidra symbol: FUN_01776f40 */


void FUN_01776f40(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0xd0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xe8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xf0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xf8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x100));
  FUN_017712f0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

