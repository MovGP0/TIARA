/* Ghidra address: 0082c220 */
/* Ghidra symbol: FUN_0082c220 */


void FUN_0082c220(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  FUN_006516f0(param_1);
  plVar2 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if ((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x536) != '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x536) = 0;
    (**(code **)(*param_1 + 0x188))(param_1);
  }
  return;
}

