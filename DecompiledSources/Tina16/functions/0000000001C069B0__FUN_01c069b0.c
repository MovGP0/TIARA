/* Ghidra address: 01c069b0 */
/* Ghidra symbol: FUN_01c069b0 */


void FUN_01c069b0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
    lVar2 = FUN_01c07120(param_1);
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUN_01c07120(param_1);
      cVar1 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
      if (cVar1 != '\0') {
        return;
      }
    }
    if ((((param_1[100] != 0) && (cVar1 = FUN_01bfaa20(param_1[100]), cVar1 == '\0')) &&
        (cVar1 = (**(code **)(*param_1 + 0xf0))(param_1), cVar1 != '\0')) && (param_1[100] != 0)) {
      FUN_01bfdd30(param_1[100]);
    }
  }
  return;
}

