/* Ghidra address: 010bdc50 */
/* Ghidra symbol: FUN_010bdc50 */


void FUN_010bdc50(longlong *param_1)

{
  short sVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    while( true ) {
      iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
      if (iVar2 <= iVar4) {
        return;
      }
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1,iVar4);
      if (plVar3 != (longlong *)0x0) break;
LAB_010bdca5:
      iVar4 = iVar4 + 1;
    }
    sVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
    if (sVar1 != 0x24) {
      sVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
      if (sVar1 != 0x6c) goto LAB_010bdca5;
    }
    (**(code **)(*param_1 + 0x98))(param_1,iVar4);
  } while( true );
}

