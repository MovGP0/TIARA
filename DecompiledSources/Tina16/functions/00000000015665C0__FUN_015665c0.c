/* Ghidra address: 015665c0 */
/* Ghidra symbol: FUN_015665c0 */


void FUN_015665c0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar2 = (longlong *)FUN_00b94e60(param_2,iVar3);
      if ((plVar2 != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*plVar2 + 0x118))(plVar2), cVar1 != '\0')) {
        FUN_015662f0(param_1,plVar2);
        cVar1 = FUN_0198a580(plVar2);
        if ((cVar1 == '\x04') &&
           (((cVar1 = FUN_01d04d40(plVar2), cVar1 != '\0' && ((char)plVar2[0x34] == '\x01')) &&
            (*(longlong *)(plVar2[0x35] + 8) != 0)))) {
          FUN_015665c0(param_1,*(undefined8 *)(plVar2[0x35] + 8));
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

