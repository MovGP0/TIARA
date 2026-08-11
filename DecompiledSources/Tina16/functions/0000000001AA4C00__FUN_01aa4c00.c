/* Ghidra address: 01aa4c00 */
/* Ghidra symbol: FUN_01aa4c00 */


bool FUN_01aa4c00(char *param_1,undefined8 param_2)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  byte local_f0 [100];
  byte local_8c [124];
  
  cVar3 = *param_1;
  bVar1 = 1;
  if (cVar3 != '\0') {
    pbVar2 = local_f0;
    do {
      *pbVar2 = param_1[(ulonglong)bVar1 + 0x587];
      bVar1 = bVar1 + 1;
      pbVar2 = pbVar2 + 1;
      cVar3 = cVar3 + -1;
    } while (cVar3 != '\0');
  }
  if (param_1[0x563] != '\0') {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_f0,1);
  }
  if (param_1[0x564] == '\0') {
    local_8c[0] = (&DAT_01fce41d)[(ulonglong)local_f0[1] + (ulonglong)local_f0[0] * 4];
  }
  else {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_8c,2);
  }
  bVar1 = (&DAT_01fce41d)[(ulonglong)(byte)param_1[0x569] + (ulonglong)(byte)param_1[0x568] * 4];
  if (bVar1 != local_8c[0]) {
    FUN_01aa3a80(param_1 + 0x5a8,param_2,
                 *(undefined8 *)
                  (*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 0x20 + (ulonglong)local_8c[0] * 8
                  ),local_8c[0]);
  }
  param_1[0x568] = local_f0[0];
  param_1[0x569] = local_f0[1];
  return bVar1 != local_8c[0];
}

