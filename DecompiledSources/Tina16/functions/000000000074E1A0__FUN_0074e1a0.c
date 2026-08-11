/* Ghidra address: 0074e1a0 */
/* Ghidra symbol: FUN_0074e1a0 */


void FUN_0074e1a0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_1[0x27] != 0) {
    (*(code *)param_1[0x27])(param_1[0x28],param_1);
  }
  plVar1 = (longlong *)param_1[0x16];
  if (plVar1 != (longlong *)0x0) {
    iVar2 = (**(code **)(*plVar1 + 0x90))(plVar1);
    if ((int)param_1[0x1a] < iVar2 + -1) {
      (**(code **)(*param_1 + 0x90))(param_1,(int)param_1[0x1a] + 1);
      goto LAB_0074e20b;
    }
  }
  (**(code **)(*param_1 + 0x90))(param_1,0);
LAB_0074e20b:
  FUN_0074e0e0(param_1);
  return;
}

