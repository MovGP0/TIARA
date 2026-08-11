/* Ghidra address: 006daf60 */
/* Ghidra symbol: FUN_006daf60 */


void FUN_006daf60(longlong param_1,char param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x571) != param_2) {
    *(char *)(param_1 + 0x571) = param_2;
    cVar1 = FUN_0044f0c0(5,1);
    if (cVar1 != '\0') {
      plVar2 = (longlong *)FUN_00777cd0();
      cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
      if (cVar1 != '\0') {
        cVar1 = FUN_0065be20(param_1);
        if (cVar1 != '\0') {
          FUN_00655b90(param_1);
        }
      }
    }
  }
  return;
}

