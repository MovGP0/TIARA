/* Ghidra address: 008488f0 */
/* Ghidra symbol: FUN_008488f0 */


void FUN_008488f0(longlong *param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != *(int *)((longlong)param_1 + 0x4cc)) {
    *(int *)((longlong)param_1 + 0x4cc) = param_2;
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x188))(param_1);
    }
  }
  return;
}

