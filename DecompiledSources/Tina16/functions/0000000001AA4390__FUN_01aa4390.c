/* Ghidra address: 01aa4390 */
/* Ghidra symbol: FUN_01aa4390 */


bool FUN_01aa4390(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte local_f0 [100];
  byte local_8c [124];
  
  iVar3 = 1;
  uVar4 = (uint)*param_1;
  if (uVar4 != 0) {
    pbVar2 = local_f0;
    do {
      *pbVar2 = param_1[(longlong)iVar3 + 0x587];
      iVar3 = iVar3 + 1;
      pbVar2 = pbVar2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_1[0x563] != 0) {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_f0,1);
  }
  if (param_1[0x564] == 0) {
    local_8c[0] = (&DAT_01fce3ed)[(ulonglong)local_f0[1] + (ulonglong)local_f0[0] * 4];
  }
  else {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_8c,2);
  }
  bVar1 = (&DAT_01fce3ed)[(ulonglong)param_1[0x569] + (ulonglong)param_1[0x568] * 4];
  if (bVar1 != local_8c[0]) {
    FUN_01aa3a80(param_1 + 0x5a8,param_2,
                 *(undefined8 *)
                  (*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 0x20 + (ulonglong)local_8c[0] * 8
                  ),local_8c[0]);
  }
  iVar3 = 1;
  uVar4 = (uint)*param_1;
  if (uVar4 != 0) {
    pbVar2 = local_f0;
    do {
      param_1[(longlong)iVar3 + 0x567] = *pbVar2;
      iVar3 = iVar3 + 1;
      pbVar2 = pbVar2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return bVar1 != local_8c[0];
}

