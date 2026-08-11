/* Ghidra address: 00831a60 */
/* Ghidra symbol: FUN_00831a60 */


ulonglong FUN_00831a60(longlong param_1,int param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar4 = 0;
  iVar5 = 0;
  if (param_1 != 0) {
    iVar5 = *(int *)(param_1 + -4);
  }
  iVar3 = 0;
  if (-1 < iVar5 + -1) {
    do {
      sVar1 = *(short *)(param_1 + (longlong)iVar3 * 2);
      if (sVar1 == 0x21) {
        uVar4 = uVar4 | 1;
      }
      else if ((sVar1 == 0x3e) && (iVar3 < param_2 + -1)) {
        uVar4 = uVar4 & 0xfffffffffffffffb;
        if ((iVar3 < 1) || (*(short *)(param_1 + (longlong)(iVar3 + -1) * 2) != 0x3c)) {
          uVar4 = uVar4 | 2;
        }
      }
      else if ((sVar1 == 0x3c) && (iVar3 < param_2 + -1)) {
        uVar4 = uVar4 & 0xfffffffffffffffd | 4;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  cVar2 = FUN_008317e0(param_1);
  if (cVar2 == '\x01') {
    uVar4 = uVar4 | 8;
  }
  return uVar4;
}

