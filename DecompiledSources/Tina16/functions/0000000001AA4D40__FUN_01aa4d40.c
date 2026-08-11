/* Ghidra address: 01aa4d40 */
/* Ghidra symbol: FUN_01aa4d40 */


void FUN_01aa4d40(char *param_1)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  byte local_e0 [100];
  char local_7c [108];
  
  cVar3 = *param_1;
  bVar1 = 1;
  if (cVar3 != '\0') {
    pbVar2 = local_e0;
    do {
      *pbVar2 = param_1[(ulonglong)bVar1 + 0x567];
      bVar1 = bVar1 + 1;
      pbVar2 = pbVar2 + 1;
      cVar3 = cVar3 + -1;
    } while (cVar3 != '\0');
  }
  if (param_1[0x563] != '\0') {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_e0,1);
  }
  if (param_1[0x564] == '\0') {
    param_1[0x5a8] =
         (&DAT_01fce3e8)[(byte)(&DAT_01fce41d)[(ulonglong)local_e0[1] + (ulonglong)local_e0[0] * 4]]
    ;
  }
  else {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_7c,2);
    param_1[0x5a8] = local_7c[0];
  }
  return;
}

