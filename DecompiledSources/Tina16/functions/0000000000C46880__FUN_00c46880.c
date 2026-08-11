/* Ghidra address: 00c46880 */
/* Ghidra symbol: FUN_00c46880 */


void FUN_00c46880(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(char *)(param_1 + 0x31) != '\0') {
    FUN_004095f0(*(undefined8 *)(param_1 + 8));
  }
  FUN_004b9c20(param_1,0,0);
  FUN_004b9e70(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

