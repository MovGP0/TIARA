/* Ghidra address: 01bfbd50 */
/* Ghidra symbol: FUN_01bfbd50 */


void FUN_01bfbd50(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != 0) {
    iVar5 = *(int *)(*(longlong *)(param_2 + 0x10) + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar2 = FUN_01bfb960(param_2,iVar4);
        if (*(longlong *)(lVar2 + 0x80) != 0) {
          lVar2 = FUN_01bfb960(param_2,iVar4);
          FUN_01c07890(*(undefined8 *)(lVar2 + 0x80),param_3);
        }
        uVar3 = FUN_01bfb960(param_2,iVar4);
        cVar1 = FUN_01bfaa20(uVar3);
        if (cVar1 != '\0') {
          uVar3 = FUN_01bfb960(param_2,iVar4);
          uVar3 = FUN_01bfaa70(uVar3);
          FUN_01bfbc70(uVar3,param_3);
          uVar3 = FUN_01bfb960(param_2,iVar4);
          uVar3 = FUN_01bfaa70(uVar3);
          FUN_01bfbd50(param_1,uVar3,param_3);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

