/* Ghidra address: 00742cd0 */
/* Ghidra symbol: FUN_00742cd0 */


void FUN_00742cd0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  *(undefined1 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_00742de0(param_1);
    FUN_004d6550(*(undefined8 *)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

