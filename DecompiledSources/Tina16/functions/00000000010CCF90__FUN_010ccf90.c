/* Ghidra address: 010ccf90 */
/* Ghidra symbol: FUN_010ccf90 */


undefined8 FUN_010ccf90(byte *param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  byte *pbVar5;
  byte local_79;
  byte local_78 [88];
  
  uVar2 = (ulonglong)*param_1;
  if (0x4f < uVar2) {
    uVar2 = 0x50;
  }
  local_79 = (byte)uVar2;
  pbVar5 = local_78;
  for (; param_1 = param_1 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    *pbVar5 = *param_1;
    pbVar5 = pbVar5 + 1;
  }
  iVar4 = 10;
  puVar3 = &DAT_01f19ee0;
  do {
    iVar1 = FUN_00414f50(&local_79,puVar3,(ulonglong)local_79 + 1);
    if (iVar1 == 0) {
      return 1;
    }
    puVar3 = puVar3 + 0x18;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 0;
}

