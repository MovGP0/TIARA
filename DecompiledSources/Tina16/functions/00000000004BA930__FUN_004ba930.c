/* Ghidra address: 004ba930 */
/* Ghidra symbol: FUN_004ba930 */


void FUN_004ba930(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(char *)(param_1 + 0x38) != '\0') {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
  }
  FUN_004b9e70(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

