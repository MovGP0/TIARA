/* Ghidra address: 01bb7610 */
/* Ghidra symbol: FUN_01bb7610 */


void FUN_01bb7610(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_00b94e60(param_2,iVar3);
        cVar1 = FUN_01bb7510(auStack_48,uVar2);
        if (cVar1 != '\0') {
          FUN_00b94e60(param_2,iVar3);
          return;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

