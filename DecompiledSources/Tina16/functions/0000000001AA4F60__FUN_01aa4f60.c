/* Ghidra address: 01aa4f60 */
/* Ghidra symbol: FUN_01aa4f60 */


void FUN_01aa4f60(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte local_e0 [100];
  byte local_7c [108];
  
  bVar3 = *param_1;
  bVar2 = 1;
  if (bVar3 != 0) {
    pbVar1 = local_e0;
    do {
      *pbVar1 = param_1[(ulonglong)bVar2 + 0x567];
      bVar2 = bVar2 + 1;
      pbVar1 = pbVar1 + 1;
      bVar3 = bVar3 - 1;
    } while (bVar3 != 0);
  }
  if (param_1[0x563] != 0) {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_e0,1);
  }
  if (param_1[0x564] == 0) {
    if (1 < *param_1) {
      cVar4 = *param_1 - 1;
      pbVar1 = local_e0;
      do {
        pbVar1 = pbVar1 + 1;
        local_e0[0] = (&DAT_01fce3fd)[(ulonglong)*pbVar1 + (ulonglong)local_e0[0] * 4];
        cVar4 = cVar4 + -1;
      } while (cVar4 != '\0');
    }
    param_1[0x5a8] = (&DAT_01fce3e8)[local_e0[0]];
  }
  else {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_7c,2);
    param_1[0x5a8] = local_7c[0];
  }
  return;
}

