/* Ghidra address: 01d01bc0 */
/* Ghidra symbol: FUN_01d01bc0 */


void FUN_01d01bc0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_01d01940(param_1);
  iVar2 = iVar2 + (uint)*(ushort *)(param_1 + 0xf6) + (uint)*(ushort *)(param_1 + 0xf4);
  iVar4 = 1;
  iVar5 = iVar2;
  if (0 < iVar2) {
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar4 * 99 + 0x5b);
      uVar3 = (**(code **)*puVar1)(puVar1);
      FUN_00418590(uVar3,&DAT_01cf1390);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_004095f0(*(undefined8 *)(param_1 + 0x168),(longlong)((iVar2 + 1) * 99));
  if (*(ushort *)(param_1 + 0xf6) != 0) {
    FUN_004095f0(*(undefined8 *)(param_1 + 0x178),(uint)*(ushort *)(param_1 + 0xf6) * 4);
  }
  *(undefined8 *)(param_1 + 0x168) = 0;
  return;
}

