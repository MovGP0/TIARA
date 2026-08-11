/* Ghidra address: 00812470 */
/* Ghidra symbol: FUN_00812470 */


void FUN_00812470(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar2 + 0x90))(plVar2);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_00781840();
    (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(param_1 + 0x10),1);
  }
  return;
}

