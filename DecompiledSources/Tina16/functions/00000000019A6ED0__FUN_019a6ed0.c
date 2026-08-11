/* Ghidra address: 019a6ed0 */
/* Ghidra symbol: FUN_019a6ed0 */


void FUN_019a6ed0(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 == '\x05') {
    iVar2 = FUN_019a6fd0();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar3 = (longlong *)FUN_019a6fe0(param_1,iVar4);
        if (*plVar3 == param_2) {
          return;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  plVar3 = (longlong *)FUN_004095c0(0x10);
  *plVar3 = param_2;
  *(undefined4 *)(plVar3 + 1) = param_3;
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),plVar3);
  return;
}

