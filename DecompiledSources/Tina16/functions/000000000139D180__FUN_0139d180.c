/* Ghidra address: 0139d180 */
/* Ghidra symbol: FUN_0139d180 */


undefined8 FUN_0139d180(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  uVar2 = FUN_0198a580(param_2);
  if ((byte)uVar2 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << ((byte)uVar2 & 0x1f) & 0x1aU) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    iVar1 = 0;
    do {
      if ((int)*(short *)(param_2 + 0x26 + (longlong)iVar1 * 2) == (uint)*(ushort *)(param_1 + 0x50)
         ) {
        *(undefined2 *)(param_2 + 0x26 + (longlong)iVar1 * 2) = *(undefined2 *)(param_1 + 0x58);
        uVar3 = 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x15);
  }
  return uVar3;
}

