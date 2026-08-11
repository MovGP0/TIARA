/* Ghidra address: 01aa6000 */
/* Ghidra symbol: FUN_01aa6000 */


void FUN_01aa6000(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  byte local_e0 [100];
  byte local_7c [100];
  
  bVar4 = false;
  iVar1 = 1;
  uVar3 = (uint)*param_1;
  if (uVar3 != 0) {
    pbVar2 = local_e0;
    do {
      *pbVar2 = param_1[(longlong)iVar1 + 0x567];
      iVar1 = iVar1 + 1;
      pbVar2 = pbVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_1[0x563] != 0) {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_e0,1);
  }
  if (param_1[0x564] != 0) {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_7c,2);
    bVar4 = local_7c[0] != 4;
  }
  if (local_e0[3] == '\0') {
    if (bVar4) {
      param_1[0x5a8] = local_7c[0];
    }
    else {
      param_1[0x5a8] = 1;
    }
  }
  if (local_e0[2] == '\0') {
    if (bVar4) {
      param_1[0x5a8] = local_7c[0];
    }
    else {
      param_1[0x5a8] = 0;
    }
  }
  param_1[0xd30] = (&DAT_01fce3e8)[param_1[0x5a8]];
  pbVar2 = *(byte **)(param_1 + 0x41e8);
  *pbVar2 = param_1[0x568];
  pbVar2[1] = param_1[0x569];
  return;
}

