/* Ghidra address: 008f72e0 */
/* Ghidra symbol: FUN_008f72e0 */


undefined8 FUN_008f72e0(longlong param_1,longlong param_2)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  if (param_1 != 0) {
    uVar5 = *(uint *)(param_1 + -4) >> 1;
  }
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + -4) >> 1;
  }
  if (uVar5 <= uVar1) {
    psVar2 = (short *)FUN_00415f70();
    psVar3 = (short *)FUN_00415f70(param_2);
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      if (*psVar2 != *psVar3) {
        return 0;
      }
      psVar2 = psVar2 + 1;
      psVar3 = psVar3 + 1;
    }
    uVar4 = 1;
  }
  return uVar4;
}

