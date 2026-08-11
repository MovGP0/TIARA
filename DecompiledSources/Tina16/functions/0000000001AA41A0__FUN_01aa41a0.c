/* Ghidra address: 01aa41a0 */
/* Ghidra symbol: FUN_01aa41a0 */


bool FUN_01aa41a0(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte local_f0 [100];
  byte local_8c [116];
  
  iVar2 = 1;
  uVar4 = (uint)*param_1;
  if (uVar4 != 0) {
    pbVar3 = local_f0;
    do {
      *pbVar3 = param_1[(longlong)iVar2 + 0x587];
      iVar2 = iVar2 + 1;
      pbVar3 = pbVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_1[0x563] != 0) {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_f0,1);
  }
  if (param_1[0x564] == 0) {
    local_8c[0] = (&DAT_01fce3e8)[local_f0[0]];
  }
  else {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_8c,2);
  }
  bVar1 = (&DAT_01fce3e8)[param_1[0x568]];
  if (bVar1 != local_8c[0]) {
    FUN_01aa3960(param_1,1,param_1 + 0x5a8,param_2,
                 *(undefined8 *)
                  (*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 0x20 + (ulonglong)local_8c[0] * 8
                  ),local_8c[0]);
  }
  param_1[0x568] = local_f0[0];
  return bVar1 != local_8c[0];
}

