/* Ghidra address: 00cf0d10 */
/* Ghidra symbol: FUN_00cf0d10 */


void FUN_00cf0d10(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x2c) = 0;
  FUN_004b1e70(*(undefined8 *)(param_1 + 0x48));
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN_00410f20(*(undefined8 *)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_00419430(param_1 + 0x30,&DAT_0086e978);
  return;
}

