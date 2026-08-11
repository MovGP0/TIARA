/* Ghidra address: 00cf16e0 */
/* Ghidra symbol: FUN_00cf16e0 */


void FUN_00cf16e0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if ((*(longlong *)(param_1 + 0x40) != 0) && (*(char *)(param_1 + 0x50) != '\0')) {
    FUN_00410f20(*(longlong *)(param_1 + 0x40));
  }
  FUN_004b17c0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

