/* Ghidra address: 004c9990 */
/* Ghidra symbol: FUN_004c9990 */


undefined8 * FUN_004c9990(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort *puVar2;
  ulonglong uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  
  if (*(short *)(param_1 + 0x56) == 2) {
    uVar3 = *(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40);
  }
  else {
    uVar3 = *(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x40);
  }
  uVar5 = (undefined4)uVar3;
  FUN_004169f0(param_2,uVar3 & 0xffffffff);
  puVar2 = (ushort *)FUN_00416740(*param_2);
  pbVar4 = (byte *)(*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x40));
  bVar1 = *pbVar4;
  while ((0 < (longlong)uVar3 && ((bVar1 & 0x80) == 0))) {
    *puVar2 = (ushort)bVar1;
    pbVar4 = pbVar4 + 1;
    puVar2 = puVar2 + 1;
    uVar3 = uVar3 - 1;
    bVar1 = *pbVar4;
  }
  if (uVar3 != 0) {
    FUN_0045aba0(*(undefined8 *)(param_1 + 0x78),param_2,*(undefined8 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x40),uVar5);
  }
  return param_2;
}

