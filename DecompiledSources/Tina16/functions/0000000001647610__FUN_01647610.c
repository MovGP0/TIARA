/* Ghidra address: 01647610 */
/* Ghidra symbol: FUN_01647610 */


void FUN_01647610(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x28));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  FUN_00419430(param_1 + 0x40,&DAT_01620200);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

