/* Ghidra address: 0186aae0 */
/* Ghidra symbol: FUN_0186aae0 */


void FUN_0186aae0(undefined8 param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_004d1f00(param_1);
  if (DAT_02110388 != 0) {
    thunk_FUN_041b2403(*(undefined8 *)(DAT_02110388 + 0x10),0x12,0,0);
  }
  FUN_004d0ea0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

