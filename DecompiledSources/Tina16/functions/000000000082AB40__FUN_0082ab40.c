/* Ghidra address: 0082ab40 */
/* Ghidra symbol: FUN_0082ab40 */


void FUN_0082ab40(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_00651660(param_1);
  if (((((char)param_1[0x67] == '\0') || (*(char *)((longlong)param_1 + 0x339) != '\0')) ||
      (cVar2 = (**(code **)(*param_1 + 0xf0))(param_1), cVar2 == '\0')) ||
     ((cVar2 = FUN_0064c470(param_1), cVar2 == '\x01' || (lVar3 = thunk_FUN_041d93e9(), lVar3 != 0))
     )) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    plVar4 = (longlong *)FUN_00781840();
    cVar2 = (**(code **)(*plVar4 + 0x98))(plVar4);
    if (cVar2 == '\0') {
      return;
    }
  }
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
    *(undefined1 *)((longlong)param_1 + 0x339) = 1;
    cVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x188))(param_1);
    }
  }
  return;
}

