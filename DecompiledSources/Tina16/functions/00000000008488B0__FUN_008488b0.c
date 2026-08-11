/* Ghidra address: 008488b0 */
/* Ghidra symbol: FUN_008488b0 */


void FUN_008488b0(longlong *param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != (int)param_1[0x99]) {
    *(int *)(param_1 + 0x99) = param_2;
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x188))(param_1);
    }
  }
  return;
}

