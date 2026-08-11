/* Ghidra address: 010bb3e0 */
/* Ghidra symbol: FUN_010bb3e0 */


int FUN_010bb3e0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  
  uVar4 = FUN_01cf0700(param_1,param_2);
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (*(byte *)(param_2 + 0x78) & 0x1f) &
            0x39U) != 0;
  }
  else {
    bVar6 = false;
  }
  iVar1 = FUN_01d322a0(*(undefined8 *)(param_1 + 0x30));
  uVar5 = FUN_01d31f80(*(undefined8 *)(param_1 + 0x30));
  if (!bVar6) {
    iVar1 = (int)uVar5;
  }
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << (*(byte *)(param_2 + 0x78) & 0x1f) &
            0x39U) != 0;
  }
  else {
    bVar6 = false;
  }
  iVar2 = FUN_01d322a0(*(undefined8 *)(param_1 + 0x28));
  iVar3 = FUN_01d31f80(*(undefined8 *)(param_1 + 0x28));
  if (bVar6) {
    iVar3 = iVar2;
  }
  return (int)uVar4 + iVar1 + iVar3 + 1;
}

