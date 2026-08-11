/* Ghidra address: 00d1af00 */
/* Ghidra symbol: FUN_00d1af00 */


void FUN_00d1af00(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if (0 < (int)param_3) {
    uVar1 = *(uint *)(param_1 + 0x2c) & 0x1f;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_3;
    iVar2 = 0;
    if (uVar1 != 0) {
      iVar2 = 0x20 - uVar1;
      if ((int)param_3 < iVar2) {
        FUN_00409a70(param_2,param_1 + 0x70 + (longlong)(int)uVar1,(longlong)(int)param_3);
        return;
      }
      FUN_00409a70(param_2,param_1 + 0x70 + (longlong)(int)uVar1,(longlong)iVar2);
      FUN_00d1acd0(param_1,param_1 + 0x70);
      param_3 = param_3 - iVar2;
    }
    lVar3 = param_2 + iVar2;
    uVar1 = param_3 & 0xffffffe0;
    for (; 0x1f < (int)param_3; param_3 = param_3 - 0x20) {
      FUN_00d1acd0(param_1,lVar3);
      lVar3 = lVar3 + 0x20;
    }
    FUN_00409a70(param_2 + (int)(iVar2 + uVar1),param_1 + 0x70,(longlong)(int)param_3);
  }
  return;
}

