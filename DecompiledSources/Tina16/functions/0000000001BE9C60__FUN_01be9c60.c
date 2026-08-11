/* Ghidra address: 01be9c60 */
/* Ghidra symbol: FUN_01be9c60 */


void FUN_01be9c60(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  FUN_01c05af0(param_1);
  cVar1 = FUN_01bfaa20(param_1[100]);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x278))(param_1);
  }
  plVar2 = (longlong *)FUN_01c07120(param_1);
  cVar1 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_01c07120(param_1);
    cVar1 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
    if (cVar1 == '\0') {
      return;
    }
    if (*(char *)((longlong)param_1 + 0x344) != '\0') {
      return;
    }
  }
  (**(code **)(*param_1 + 0x280))(param_1);
  return;
}

