/* Ghidra address: 008509f0 */
/* Ghidra symbol: FUN_008509f0 */


void FUN_008509f0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  FUN_006516f0(param_1);
  plVar2 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x560) != '\0')) {
    *(undefined1 *)(param_1 + 0x560) = 0;
    FUN_0083e5c0(param_1);
  }
  return;
}

