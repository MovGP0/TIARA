/* Ghidra address: 0134f040 */
/* Ghidra symbol: FUN_0134f040 */


void FUN_0134f040(undefined8 param_1,int param_2,int param_3,byte param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_2;
  uVar2 = *(uint *)(DAT_021078e0 + 4 + lVar4 * 8);
  if (uVar2 != 0xffffffff) {
    uVar3 = param_3 + (uint)*(byte *)(DAT_021078e0 + lVar4 * 8) + DAT_021080e8;
    if (uVar3 < uVar2) {
      *(uint *)(DAT_021078e0 + 4 + lVar4 * 8) = uVar3;
      *(byte *)(DAT_021078e0 + 3 + lVar4 * 8) = param_4;
      FUN_0134e850(uVar3);
    }
    else if (uVar3 == uVar2) {
      pbVar1 = (byte *)(DAT_021078e0 + 3 + lVar4 * 8);
      *pbVar1 = *pbVar1 | param_4;
    }
  }
  return;
}

