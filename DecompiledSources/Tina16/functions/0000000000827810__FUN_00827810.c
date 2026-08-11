/* Ghidra address: 00827810 */
/* Ghidra symbol: FUN_00827810 */


void FUN_00827810(longlong param_1,uint param_2)

{
  char cVar1;
  
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  FUN_00827890(param_1);
  if (DAT_01e17888 != 0) {
    cVar1 = FUN_008276d0(DAT_01e17888);
    if (cVar1 != '\0') {
      FUN_00410f20(DAT_01e17888);
      DAT_01e17888 = 0;
    }
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

