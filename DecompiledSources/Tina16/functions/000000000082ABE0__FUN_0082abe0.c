/* Ghidra address: 0082abe0 */
/* Ghidra symbol: FUN_0082abe0 */


void FUN_0082abe0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  
  FUN_006516f0(param_1);
  if (((((char)param_1[0x67] == '\0') || (*(char *)((longlong)param_1 + 0x339) == '\0')) ||
      (cVar2 = (**(code **)(*param_1 + 0xf0))(param_1), cVar2 == '\0')) ||
     (*(char *)((longlong)param_1 + 0x329) != '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    plVar3 = (longlong *)FUN_00781840();
    cVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
    if (cVar2 == '\0') {
      return;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x339) = 0;
  cVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x188))(param_1);
  }
  return;
}

