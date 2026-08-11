/* Ghidra address: 01aa45e0 */
/* Ghidra symbol: FUN_01aa45e0 */


bool FUN_01aa45e0(byte *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte local_f0 [100];
  byte local_8c [116];
  
  bVar2 = *param_1;
  bVar3 = 1;
  if (bVar2 != 0) {
    pbVar1 = local_f0;
    do {
      *pbVar1 = param_1[(ulonglong)bVar3 + 0x587];
      bVar3 = bVar3 + 1;
      pbVar1 = pbVar1 + 1;
      bVar2 = bVar2 - 1;
    } while (bVar2 != 0);
  }
  if (param_1[0x563] != 0) {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_f0,1);
  }
  if (param_1[0x564] == 0) {
    local_8c[0] = local_f0[0];
    if (1 < *param_1) {
      cVar5 = *param_1 - 1;
      pbVar1 = local_f0;
      do {
        pbVar1 = pbVar1 + 1;
        local_8c[0] = (&DAT_01fce3fd)[(ulonglong)*pbVar1 + (ulonglong)local_f0[0] * 4];
        cVar5 = cVar5 + -1;
        local_f0[0] = local_8c[0];
      } while (cVar5 != '\0');
    }
  }
  else {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_8c,2);
  }
  bVar2 = param_1[0x568];
  bVar3 = 2;
  if (1 < *param_1) {
    cVar5 = *param_1 - 1;
    do {
      bVar2 = (&DAT_01fce3fd)[(ulonglong)param_1[(ulonglong)bVar3 + 0x567] + (ulonglong)bVar2 * 4];
      bVar3 = bVar3 + 1;
      cVar5 = cVar5 + -1;
    } while (cVar5 != '\0');
  }
  if (bVar2 != local_8c[0]) {
    FUN_01aa3960(param_1,1,param_1 + 0x5a8,param_2,
                 *(undefined8 *)
                  (*(longlong *)(param_1 + 8) + (ulonglong)bVar2 * 0x20 + (ulonglong)local_8c[0] * 8
                  ),local_8c[0]);
  }
  bVar3 = *param_1;
  bVar4 = 1;
  if (bVar3 != 0) {
    pbVar1 = local_f0;
    do {
      param_1[(ulonglong)bVar4 + 0x567] = *pbVar1;
      bVar4 = bVar4 + 1;
      pbVar1 = pbVar1 + 1;
      bVar3 = bVar3 - 1;
    } while (bVar3 != 0);
  }
  return bVar2 != local_8c[0];
}

