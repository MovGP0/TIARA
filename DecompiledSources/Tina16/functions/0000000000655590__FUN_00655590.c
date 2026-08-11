/* Ghidra address: 00655590 */
/* Ghidra symbol: FUN_00655590 */


ulonglong FUN_00655590(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40);
  if ((lVar2 == 0) ||
     (cVar1 = FUN_00655570(param_1,*(longlong *)(param_1 + 0x70) + 0x47c,lVar2 + 0x47c),
     cVar1 == '\0')) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x370);
    if (lVar2 != 0) {
      iVar4 = 0;
      iVar5 = *(int *)(lVar2 + 0x10);
      if (-1 < iVar5 + -1) {
        do {
          lVar2 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x370),iVar4);
          if ((*(char *)(lVar2 + 0xad) == '\0') && (*(char *)(lVar2 + 0xb3) != '\x03'))
          goto LAB_00655695;
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x378);
    if (lVar2 != 0) {
      iVar5 = *(int *)(lVar2 + 0x10);
      iVar4 = 0;
      if (-1 < iVar5 + -1) {
        do {
          lVar2 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x378),iVar4);
          if ((*(char *)(lVar2 + 0xad) == '\0') && (*(char *)(lVar2 + 0xb3) != '\x03'))
          goto LAB_00655695;
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  uVar3 = 0;
LAB_00655695:
  return uVar3 & 0xffffffff;
}

