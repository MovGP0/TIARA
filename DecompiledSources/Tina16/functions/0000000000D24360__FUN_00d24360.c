/* Ghidra address: 00d24360 */
/* Ghidra symbol: FUN_00d24360 */


void FUN_00d24360(longlong param_1,byte *param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  int iVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x68);
  lVar1 = lVar3 + 0x100;
  pbVar4 = (byte *)(lVar3 + 0x200);
  iVar5 = *(int *)(param_1 + 0x78);
  if (0 < iVar5) {
    do {
      *param_2 = *param_2 ^ *pbVar4;
      param_2[1] = param_2[1] + pbVar4[1];
      param_2[2] = param_2[2] + pbVar4[2];
      param_2[3] = param_2[3] ^ pbVar4[3];
      param_2[4] = param_2[4] ^ pbVar4[4];
      param_2[5] = param_2[5] + pbVar4[5];
      param_2[6] = param_2[6] + pbVar4[6];
      param_2[7] = param_2[7] ^ pbVar4[7];
      *param_2 = *(char *)(lVar3 + (ulonglong)*param_2) + pbVar4[8];
      param_2[1] = *(byte *)(lVar1 + (ulonglong)param_2[1]) ^ pbVar4[9];
      param_2[2] = *(byte *)(lVar1 + (ulonglong)param_2[2]) ^ pbVar4[10];
      param_2[3] = *(char *)(lVar3 + (ulonglong)param_2[3]) + pbVar4[0xb];
      param_2[4] = *(char *)(lVar3 + (ulonglong)param_2[4]) + pbVar4[0xc];
      param_2[5] = *(byte *)(lVar1 + (ulonglong)param_2[5]) ^ pbVar4[0xd];
      param_2[6] = *(byte *)(lVar1 + (ulonglong)param_2[6]) ^ pbVar4[0xe];
      param_2[7] = *(char *)(lVar3 + (ulonglong)param_2[7]) + pbVar4[0xf];
      param_2[1] = param_2[1] + *param_2;
      *param_2 = *param_2 + param_2[1];
      param_2[3] = param_2[3] + param_2[2];
      param_2[2] = param_2[2] + param_2[3];
      param_2[5] = param_2[5] + param_2[4];
      param_2[4] = param_2[4] + param_2[5];
      param_2[7] = param_2[7] + param_2[6];
      param_2[6] = param_2[6] + param_2[7];
      param_2[2] = param_2[2] + *param_2;
      *param_2 = *param_2 + param_2[2];
      param_2[6] = param_2[6] + param_2[4];
      param_2[4] = param_2[4] + param_2[6];
      param_2[3] = param_2[3] + param_2[1];
      param_2[1] = param_2[1] + param_2[3];
      param_2[7] = param_2[7] + param_2[5];
      param_2[5] = param_2[5] + param_2[7];
      param_2[4] = param_2[4] + *param_2;
      *param_2 = *param_2 + param_2[4];
      param_2[5] = param_2[5] + param_2[1];
      param_2[1] = param_2[1] + param_2[5];
      param_2[6] = param_2[6] + param_2[2];
      param_2[2] = param_2[2] + param_2[6];
      param_2[7] = param_2[7] + param_2[3];
      param_2[3] = param_2[3] + param_2[7];
      bVar2 = param_2[1];
      param_2[1] = param_2[4];
      param_2[4] = param_2[2];
      param_2[2] = bVar2;
      bVar2 = param_2[3];
      param_2[3] = param_2[5];
      param_2[5] = param_2[6];
      param_2[6] = bVar2;
      pbVar4 = pbVar4 + 0x10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *param_2 = *param_2 ^ *pbVar4;
  param_2[1] = param_2[1] + pbVar4[1];
  param_2[2] = param_2[2] + pbVar4[2];
  param_2[3] = param_2[3] ^ pbVar4[3];
  param_2[4] = param_2[4] ^ pbVar4[4];
  param_2[5] = param_2[5] + pbVar4[5];
  param_2[6] = param_2[6] + pbVar4[6];
  param_2[7] = param_2[7] ^ pbVar4[7];
  return;
}

