/* Ghidra address: 006d6630 */
/* Ghidra symbol: FUN_006d6630 */


int FUN_006d6630(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar4 = 0;
  if (*(char *)(param_1 + 0x4a1) == '\0') {
    iVar4 = -1;
  }
  else {
    iVar1 = FUN_006d6600();
    iVar5 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar2 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x498) + 0x528),iVar5);
        iVar4 = iVar3;
        if (*(char *)(lVar2 + 0x4a1) != '\0') {
          iVar4 = iVar3 + 1;
        }
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
        iVar3 = iVar4;
      } while (iVar1 != 0);
    }
  }
  return iVar4;
}

