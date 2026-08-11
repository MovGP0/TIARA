/* Ghidra address: 0049ed70 */
/* Ghidra symbol: FUN_0049ed70 */


longlong FUN_0049ed70(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  lVar3 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  uVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x18);
      if (*(uint *)(lVar1 + 0x10) <= uVar4) {
        FUN_00594f90();
      }
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar4 * 8);
      cVar2 = FUN_00411580(param_2,lVar1);
      if ((cVar2 != '\0') && ((lVar3 == 0 || (cVar2 = FUN_00411580(lVar1,lVar3), cVar2 != '\0')))) {
        lVar3 = lVar1;
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return lVar3;
}

