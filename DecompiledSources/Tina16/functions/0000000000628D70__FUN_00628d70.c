/* Ghidra address: 00628d70 */
/* Ghidra symbol: FUN_00628d70 */


void FUN_00628d70(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00630390(param_1 + 0x30);
  if (*(char *)(param_1 + 0x90) != '\0') {
    FUN_00410f20(*(undefined8 *)(param_1 + 8));
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

