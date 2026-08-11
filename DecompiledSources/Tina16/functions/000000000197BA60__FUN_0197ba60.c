/* Ghidra address: 0197ba60 */
/* Ghidra symbol: FUN_0197ba60 */


void FUN_0197ba60(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_00452320(param_1 + 0xa0);
  }
  DAT_02110710 = *(undefined8 *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x90));
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_004412f0(*(undefined8 *)(param_1 + 0x98));
  }
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

