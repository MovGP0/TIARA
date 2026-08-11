/* Ghidra address: 01aa5b00 */
/* Ghidra symbol: FUN_01aa5b00 */


void FUN_01aa5b00(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  byte local_f0 [100];
  byte local_8c;
  byte local_8b;
  
  bVar4 = false;
  bVar5 = false;
  iVar1 = 1;
  uVar3 = (uint)*param_1;
  if (uVar3 != 0) {
    pbVar2 = local_f0;
    do {
      *pbVar2 = param_1[(longlong)iVar1 + 0x567];
      iVar1 = iVar1 + 1;
      pbVar2 = pbVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_1[0x563] != 0) {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_f0,1);
  }
  if (param_1[0x564] != 0) {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),&local_8c,2);
    bVar4 = local_8c != 4;
    bVar5 = local_8b != 4;
  }
  if (local_f0[1] == '\0') {
    if (bVar4) {
      param_1[0x5a8] = local_8c;
    }
    else {
      param_1[0x5a8] = 0;
    }
  }
  if (local_f0[2] == '\0') {
    if (bVar4) {
      param_1[0x5a8] = local_8c;
    }
    else {
      param_1[0x5a8] = 1;
    }
  }
  if (bVar5) {
    param_1[0xd30] = local_8b;
  }
  else {
    param_1[0xd30] = (&DAT_01fce3e8)[param_1[0x5a8]];
  }
  **(byte **)(param_1 + 0x41e8) = local_f0[0];
  return;
}

