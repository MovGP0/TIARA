/* Ghidra address: 01ce3470 */
/* Ghidra symbol: FUN_01ce3470 */


int FUN_01ce3470(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    plVar2 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                       (*(longlong **)(param_1 + 0x78),iVar3);
    cVar1 = (**(code **)(*plVar2 + 0x58))(plVar2);
    if (cVar1 != '\0') break;
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}

