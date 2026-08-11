/* Ghidra address: 01c98850 */
/* Ghidra symbol: FUN_01c98850 */


ulonglong FUN_01c98850(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar3);
      if (((*(longlong *)(lVar1 + 0x20) != 0) &&
          (*(char *)(*(longlong *)(lVar1 + 0x20) + 0x70) == param_2)) &&
         (*(char *)(lVar1 + 0x978) != '\0')) {
        uVar2 = 0;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return uVar2 & 0xffffffff;
}

