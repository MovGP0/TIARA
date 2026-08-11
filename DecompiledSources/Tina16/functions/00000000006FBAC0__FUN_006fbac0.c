/* Ghidra address: 006fbac0 */
/* Ghidra symbol: FUN_006fbac0 */


void FUN_006fbac0(longlong param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (param_2 != *(int *)(param_1 + 0x4a8)) {
    *(int *)(param_1 + 0x4a8) = param_2;
    plVar2 = (longlong *)FUN_00777cd0();
    cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
    if ((cVar1 == '\x01') && (*(char *)(param_1 + 0x391) != '\0')) {
      FUN_00655b90(param_1);
    }
    FUN_006fd640(param_1);
  }
  return;
}

