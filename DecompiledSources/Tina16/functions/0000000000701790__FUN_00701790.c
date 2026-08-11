/* Ghidra address: 00701790 */
/* Ghidra symbol: FUN_00701790 */


void FUN_00701790(longlong *param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != *(int *)((longlong)param_1 + 0x4d4)) {
    *(int *)((longlong)param_1 + 0x4d4) = param_2;
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x188))(param_1);
    }
  }
  return;
}

