/* Ghidra address: 00bfe570 */
/* Ghidra symbol: FUN_00bfe570 */


void FUN_00bfe570(longlong *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x328))(param_1,0x1e0,0,0);
  FUN_00c03500(param_1);
  if (*(char *)((longlong)param_1 + 0x5c1) != '\0') {
    cVar1 = FUN_00bf2c80(param_1);
    if (cVar1 != '\0') {
      FUN_00bf3bb0(param_1);
    }
  }
  return;
}

