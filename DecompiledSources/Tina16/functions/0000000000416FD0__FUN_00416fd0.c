/* Ghidra address: 00416fd0 */
/* Ghidra symbol: FUN_00416fd0 */


int FUN_00416fd0(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  byte local_228 [256];
  byte local_128 [264];
  
  lVar4 = (ulonglong)*param_1 + 1;
  pbVar5 = local_128;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pbVar5 = *param_1;
    param_1 = param_1 + 1;
    pbVar5 = pbVar5 + 1;
  }
  lVar4 = (ulonglong)*param_2 + 1;
  pbVar5 = local_228;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pbVar5 = *param_2;
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
  }
  iVar1 = ((uint)local_228[0] - param_3) - (uint)local_128[0];
  iVar2 = iVar1 + 1;
  if (((0 < param_3) && (-1 < iVar2)) && (local_128[0] != 0)) {
    iVar3 = 0;
    if (-1 < iVar2) {
      iVar1 = iVar1 + 2;
      do {
        iVar2 = 0;
        while ((-1 < iVar2 && (iVar2 < (int)(uint)local_128[0]))) {
          if (local_228[(longlong)(iVar3 + iVar2) + (longlong)(param_3 + -1) + 1] ==
              local_128[(longlong)iVar2 + 1]) {
            iVar2 = iVar2 + 1;
          }
          else {
            iVar2 = -1;
          }
        }
        if ((int)(uint)local_128[0] <= iVar2) {
          return iVar3 + param_3;
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return 0;
}

