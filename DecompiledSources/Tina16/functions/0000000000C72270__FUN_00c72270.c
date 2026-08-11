/* Ghidra address: 00c72270 */
/* Ghidra symbol: FUN_00c72270 */


void FUN_00c72270(longlong param_1,uint param_2)

{
  char cVar1;
  
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  FUN_00c722f0(param_1);
  if (DAT_01ea71e0 != 0) {
    cVar1 = FUN_00c72140(DAT_01ea71e0);
    if (cVar1 != '\0') {
      FUN_00410f20(DAT_01ea71e0);
      DAT_01ea71e0 = 0;
    }
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

