/* Ghidra address: 00680590 */
/* Ghidra symbol: FUN_00680590 */


void FUN_00680590(longlong *param_1,int param_2)

{
  char cVar1;
  
  if (*(int *)((longlong)param_1 + 0x494) != param_2) {
    *(int *)((longlong)param_1 + 0x494) = param_2;
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x260))(param_1,param_2);
    }
  }
  return;
}

