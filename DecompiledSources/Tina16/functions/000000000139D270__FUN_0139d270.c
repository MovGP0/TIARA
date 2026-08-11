/* Ghidra address: 0139d270 */
/* Ghidra symbol: FUN_0139d270 */


bool FUN_0139d270(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = false;
  uVar1 = FUN_0198a580(param_2);
  if ((byte)uVar1 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << ((byte)uVar1 & 0x1f) & 0x1aU) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    bVar3 = (int)*(short *)(param_2 + 0x24) == (uint)*(ushort *)(param_1 + 0x50);
  }
  return bVar3;
}

