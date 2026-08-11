/* Ghidra address: 0112d9d0 */
/* Ghidra symbol: FUN_0112d9d0 */


void FUN_0112d9d0(byte *param_1,int *param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  
  *param_3 = (uint)(param_1[1] & 0x3f);
  bVar1 = *param_1;
  *param_2 = (uint)bVar1 - *param_3;
  uVar5 = bVar1 / 2;
  if (uVar5 - 1 < 0x80000000) {
    pbVar3 = param_1 + 2;
    do {
      if (*pbVar3 != 0) {
        if ((*pbVar3 & 0xf0) == 0) {
          *param_2 = *param_2 + -1;
        }
        break;
      }
      *param_2 = *param_2 + -2;
      if (*param_2 < 1) {
        *param_2 = 0;
        break;
      }
      pbVar3 = pbVar3 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (0 < (int)*param_3) {
    iVar4 = 1;
    for (uVar5 = (uint)(param_1[1] & 0x3f); uVar5 != 0; uVar5 = uVar5 - 1) {
      uVar2 = (uint)*param_1 - iVar4;
      if ((uVar2 & 1) == 0) {
        bVar1 = param_1[(longlong)((int)uVar2 / 2) + 2] & 0xf0;
      }
      else {
        bVar1 = param_1[(longlong)((int)uVar2 / 2) + 2] & 0xf;
      }
      if (bVar1 != 0) {
        return;
      }
      *param_3 = *param_3 - 1;
      iVar4 = iVar4 + 1;
    }
  }
  return;
}

