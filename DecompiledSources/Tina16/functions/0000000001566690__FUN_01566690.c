/* Ghidra address: 01566690 */
/* Ghidra symbol: FUN_01566690 */


void FUN_01566690(longlong param_1,longlong param_2)

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
        FUN_01566510(*(undefined8 *)(param_1 + 0x30),plVar2);
        cVar1 = FUN_0198a580(plVar2);
        if ((cVar1 == '\x04') &&
           (((cVar1 = FUN_01d04d40(plVar2), cVar1 != '\0' && ((char)plVar2[0x34] == '\x01')) &&
            (*(longlong *)(plVar2[0x35] + 8) != 0)))) {
          FUN_01566690(param_1,*(undefined8 *)(plVar2[0x35] + 8));
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

