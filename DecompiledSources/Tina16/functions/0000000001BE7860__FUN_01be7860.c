/* Ghidra address: 01be7860 */
/* Ghidra symbol: FUN_01be7860 */


undefined8 FUN_01be7860(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  lVar1 = FUN_01c07120(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x5d0) + 0x5b0)
                      );
  lVar1 = FUN_01bfaa70(*(undefined8 *)(lVar1 + 0x498));
  iVar6 = *(int *)(*(longlong *)(lVar1 + 0x10) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar2 = FUN_01bfb960(lVar1,iVar5);
      lVar3 = FUN_01bfd980(uVar2);
      lVar4 = FUN_01bfd980(param_2);
      if (lVar3 == lVar4) {
        uVar2 = FUN_01bfb960(lVar1,iVar5);
        return uVar2;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

