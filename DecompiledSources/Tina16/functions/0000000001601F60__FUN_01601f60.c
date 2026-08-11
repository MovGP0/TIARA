/* Ghidra address: 01601f60 */
/* Ghidra symbol: FUN_01601f60 */


int FUN_01601f60(byte *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  byte local_128 [264];
  
  lVar2 = (ulonglong)*param_1 + 1;
  pbVar4 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar4 = *param_1;
    param_1 = param_1 + 1;
    pbVar4 = pbVar4 + 1;
  }
  if (param_2 == 0) {
    iVar3 = 1;
    pbVar4 = PTR_DAT_02005110;
    do {
      iVar1 = FUN_00414f50(pbVar4,local_128,(ulonglong)*pbVar4 + 1);
      if (iVar1 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      pbVar4 = pbVar4 + 0x11;
    } while (iVar3 != 0x21);
  }
  else if (param_2 == 1) {
    iVar3 = 1;
    pbVar4 = PTR_DAT_020049f8;
    do {
      iVar1 = FUN_00414f50(pbVar4,local_128,(ulonglong)*pbVar4 + 1);
      if (iVar1 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      pbVar4 = pbVar4 + 0x11;
    } while (iVar3 != 0x40);
  }
  else if (param_2 == 2) {
    iVar3 = 1;
    pbVar4 = PTR_DAT_020040f8;
    do {
      iVar1 = FUN_00414f50(pbVar4,local_128,(ulonglong)*pbVar4 + 1);
      if (iVar1 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      pbVar4 = pbVar4 + 0x11;
    } while (iVar3 != 0x3d);
  }
  return -1;
}

