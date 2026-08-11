/* Ghidra address: 0150f610 */
/* Ghidra symbol: FUN_0150f610 */


void FUN_0150f610(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  char cVar2;
  
  if (*(char *)((longlong)param_1 + 0x7f9) == '\0') {
    cVar2 = (**(code **)(*param_1 + 0x498))(param_1,param_2);
    if (cVar2 == '\0') {
      uVar1 = *(ulonglong *)(param_2 + 8);
      cVar2 = FUN_010e1c50(param_1,param_2);
      if (cVar2 == '\0') {
        cVar2 = FUN_010e1d20(param_1,param_2);
        if ((cVar2 != '\0') && ((uVar1 & 2) == 0)) {
          FUN_015103c0(param_1);
        }
      }
    }
  }
  return;
}

