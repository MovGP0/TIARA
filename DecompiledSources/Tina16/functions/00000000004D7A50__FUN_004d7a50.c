/* Ghidra address: 004d7a50 */
/* Ghidra symbol: FUN_004d7a50 */


void FUN_004d7a50(longlong *param_1)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + 8))(param_1);
  if (*(char *)((longlong)param_1 + 0x21) != '\0') {
    lVar1 = param_1[1];
    param_1[1] = 0;
    FUN_00410f20(lVar1);
  }
  return;
}

