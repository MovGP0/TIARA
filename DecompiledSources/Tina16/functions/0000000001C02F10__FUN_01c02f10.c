/* Ghidra address: 01c02f10 */
/* Ghidra symbol: FUN_01c02f10 */


void FUN_01c02f10(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[0x93] != 0) {
    lVar1 = FUN_01bfaa70();
    iVar4 = *(int *)(*(longlong *)(lVar1 + 0x10) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_01bfaa70(param_1[0x93]);
        lVar1 = FUN_01bfb960(uVar2,iVar3);
        FUN_00410f20(*(undefined8 *)(lVar1 + 0x80));
        uVar2 = FUN_01bfaa70(param_1[0x93]);
        lVar1 = FUN_01bfb960(uVar2,iVar3);
        *(undefined8 *)(lVar1 + 0x80) = 0;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    (**(code **)(*param_1 + 0x278))(param_1);
  }
  return;
}

