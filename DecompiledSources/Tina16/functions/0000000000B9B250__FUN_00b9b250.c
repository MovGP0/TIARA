/* Ghidra address: 00b9b250 */
/* Ghidra symbol: FUN_00b9b250 */


void FUN_00b9b250(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00b9bdb0(param_1);
  if (*(char *)(param_1 + 0x58) != '\0') {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

