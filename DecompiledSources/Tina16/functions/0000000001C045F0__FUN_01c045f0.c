/* Ghidra address: 01c045f0 */
/* Ghidra symbol: FUN_01c045f0 */


void FUN_01c045f0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if ((param_1[100] != 0) && (*(longlong *)(param_1[100] + 0x70) != 0)) {
    plVar2 = (longlong *)FUN_01c07120(param_1);
    cVar1 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
    if (cVar1 == '\0') {
      FUN_01c069b0(param_1);
    }
    (**(code **)(*param_1 + 0x188))(param_1);
    plVar2 = (longlong *)FUN_01c07120(param_1);
    cVar1 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
    if (cVar1 == '\0') {
      (**(code **)(**(longlong **)(param_1[100] + 0x70) + 0x30))
                (*(longlong **)(param_1[100] + 0x70),param_1);
    }
  }
  return;
}

