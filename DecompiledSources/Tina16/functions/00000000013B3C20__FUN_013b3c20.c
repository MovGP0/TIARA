/* Ghidra address: 013b3c20 */
/* Ghidra symbol: FUN_013b3c20 */


int FUN_013b3c20(longlong param_1,byte *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined1 local_3b8;
  byte local_3b7 [655];
  byte local_128 [256];
  
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar4 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar4 = *param_2;
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 1;
  }
  iVar5 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar5 + -1) {
    do {
      FUN_013b49f0(param_1,iVar3,&local_3b8);
      iVar1 = FUN_00414f50(local_3b7,local_128,(ulonglong)local_3b7[0] + 1);
      if (iVar1 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

