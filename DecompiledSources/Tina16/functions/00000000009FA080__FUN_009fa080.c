/* Ghidra address: 009fa080 */
/* Ghidra symbol: FUN_009fa080 */


uint FUN_009fa080(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_009fa160(param_1);
  }
  iVar3 = 0;
  if (0 < (int)uVar2) {
    do {
      uVar4 = iVar3 + uVar2 >> 1;
      lVar1 = FUN_009fa100(param_1,uVar4);
      if (*(int *)(lVar1 + 0x10) < param_2) {
        iVar3 = uVar4 + 1;
        uVar4 = uVar2;
      }
      uVar2 = uVar4;
    } while (iVar3 < (int)uVar2);
  }
  lVar1 = FUN_009fa100(param_1,uVar2);
  if (*(int *)(lVar1 + 0x10) != param_2) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

