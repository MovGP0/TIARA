/* Ghidra address: 015fad90 */
/* Ghidra symbol: FUN_015fad90 */


longlong FUN_015fad90(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_2 + 0x9b8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x9b8),iVar3);
      lVar2 = FUN_01565d40(lVar1);
      if ((param_1 == lVar2) && (*(char *)(lVar1 + 0x38) == param_3)) {
        return lVar1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

