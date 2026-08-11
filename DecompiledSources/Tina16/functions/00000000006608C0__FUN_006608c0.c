/* Ghidra address: 006608c0 */
/* Ghidra symbol: FUN_006608c0 */


void FUN_006608c0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar1 = FUN_006605f0(param_1);
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x20) != '\0')) {
    lVar4 = FUN_00660e70(param_1);
    if (*(char *)(param_1 + 0x20) == '\x01') {
      iVar1 = FUN_006607d0(param_1,1);
    }
    else if (*(char *)(param_1 + 0x20) == '\x02') {
      iVar1 = FUN_006607d0(param_1,2);
    }
    else {
      iVar1 = 0;
    }
    iVar2 = FUN_006605f0(param_1);
    for (; lVar4 != 0; lVar4 = FUN_00660e20(lVar4)) {
      if (*(longlong *)(lVar4 + 0x18) == 0) {
        FUN_00660d10(lVar4,iVar1);
      }
      else {
        iVar3 = FUN_00660670(lVar4);
        FUN_00660d10(lVar4,iVar3 + iVar1 / iVar2);
      }
      FUN_00660af0(lVar4);
    }
  }
  return;
}

