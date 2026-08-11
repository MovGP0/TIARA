/* Ghidra address: 004d5060 */
/* Ghidra symbol: FUN_004d5060 */


void FUN_004d5060(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

