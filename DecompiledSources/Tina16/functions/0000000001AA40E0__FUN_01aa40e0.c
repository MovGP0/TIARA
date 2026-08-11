/* Ghidra address: 01aa40e0 */
/* Ghidra symbol: FUN_01aa40e0 */


void FUN_01aa40e0(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  byte local_e0 [100];
  byte local_7c [108];
  
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
  if (param_1[0x564] == 0) {
    param_1[0x5a8] = (&DAT_01fce3e8)[local_e0[0]];
  }
  else {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_7c,2);
    param_1[0x5a8] = local_7c[0];
  }
  return;
}

