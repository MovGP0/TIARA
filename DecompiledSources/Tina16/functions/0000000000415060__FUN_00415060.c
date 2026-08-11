/* Ghidra address: 00415060 */
/* Ghidra symbol: FUN_00415060 */


void FUN_00415060(byte *param_1,byte *param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte local_118 [256];
  
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar5 = local_118;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar5 = *param_2;
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
  }
  bVar1 = *param_1;
  uVar3 = (uint)local_118[0];
  if (0xff < (uint)bVar1 + (uint)local_118[0]) {
    uVar3 = 0xff - bVar1;
  }
  *param_1 = bVar1 + (char)uVar3;
  iVar4 = 1;
  if (0 < (int)uVar3) {
    pbVar5 = local_118;
    do {
      pbVar5 = pbVar5 + 1;
      param_1[(int)((uint)bVar1 + iVar4)] = *pbVar5;
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

