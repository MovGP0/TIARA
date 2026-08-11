/* Ghidra address: 00d3ee00 */
/* Ghidra symbol: FUN_00d3ee00 */


ulonglong FUN_00d3ee00(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  int iVar6;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  lVar3 = FUN_00d3f4f0(param_1);
  if (lVar3 != 0) {
    FUN_00d3f4f0(param_1);
    iVar1 = thunk_FUN_041b99e8();
    iVar6 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar4 = FUN_00d3f4f0(param_1);
        iVar2 = thunk_FUN_0413f56d(uVar4,iVar6);
        if (iVar2 == 0xf060) {
          uVar5 = 0;
          break;
        }
        iVar6 = iVar6 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return uVar5 & 0xffffffff;
}

