/* Ghidra address: 00557760 */
/* Ghidra symbol: FUN_00557760 */


void FUN_00557760(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x30));
  }
  FUN_00546160(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

