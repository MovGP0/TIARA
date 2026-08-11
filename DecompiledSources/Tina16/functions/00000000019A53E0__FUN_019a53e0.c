/* Ghidra address: 019a53e0 */
/* Ghidra symbol: FUN_019a53e0 */


void FUN_019a53e0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_38 [32];
  
  if (param_2 == 0) {
    iVar4 = *(int *)(param_1 + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_0198d420(param_1,iVar3);
        cVar1 = FUN_0198a580(uVar2);
        if (cVar1 == '\x05') {
          uVar2 = FUN_00b94e60(param_1,iVar3);
          FUN_019a5350(auStack_38,uVar2);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else {
    FUN_019a5350(auStack_38);
  }
  return;
}

