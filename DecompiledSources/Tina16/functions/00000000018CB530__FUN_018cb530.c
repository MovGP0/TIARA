/* Ghidra address: 018cb530 */
/* Ghidra symbol: FUN_018cb530 */


double FUN_018cb530(longlong *param_1)

{
  double dVar1;
  double dVar2;
  
  if (*(char *)(param_1[0x25] + 0x1a1) == '\0') {
    if ((double)param_1[0x20] == 0.0) {
      dVar1 = (double)(**(code **)(*param_1 + 0x20))(param_1);
      dVar2 = (double)(**(code **)(*param_1 + 0x98))(param_1);
      dVar1 = (dVar1 - dVar2) - (double)param_1[0x12];
    }
    else {
      dVar1 = (double)(**(code **)(*param_1 + 0x20))(param_1);
      dVar1 = (dVar1 - (double)param_1[0x20]) - (double)param_1[0x12];
    }
  }
  else {
    dVar1 = 1000000.0;
  }
  return dVar1;
}

