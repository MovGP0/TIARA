/* Ghidra address: 00666700 */
/* Ghidra symbol: FUN_00666700 */


void FUN_00666700(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_006667a0(param_1);
  *(undefined1 *)(param_1 + 0xb8) = 1;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_00667a20(*(longlong *)(param_1 + 0x98));
    FUN_004d1f00(*(undefined8 *)(param_1 + 0x98));
    FUN_00410f20(*(undefined8 *)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

