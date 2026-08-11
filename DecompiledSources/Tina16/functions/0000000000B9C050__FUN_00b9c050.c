/* Ghidra address: 00b9c050 */
/* Ghidra symbol: FUN_00b9c050 */


void FUN_00b9c050(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00b9c200(param_1);
  if (*(char *)(param_1 + 0x30) != '\0') {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x28));
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

