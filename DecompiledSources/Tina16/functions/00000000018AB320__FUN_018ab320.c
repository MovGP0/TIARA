/* Ghidra address: 018ab320 */
/* Ghidra symbol: FUN_018ab320 */


void FUN_018ab320(longlong *param_1)

{
  longlong *plVar1;
  
  if (*(char *)((longlong)param_1 + 0x531) == '\0') {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x278))(param_1);
    (**(code **)(*plVar1 + 0xf8))(plVar1,(int)param_1[0xa5] + -1);
    FUN_018aba70(param_1);
    FUN_018a9020(param_1,(int)param_1[0xa5]);
  }
  return;
}

