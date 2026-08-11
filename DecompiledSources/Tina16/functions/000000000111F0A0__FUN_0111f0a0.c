/* Ghidra address: 0111f0a0 */
/* Ghidra symbol: FUN_0111f0a0 */


int FUN_0111f0a0(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  
  puVar3 = (ushort *)FUN_00416740(*(undefined8 *)(param_1 + 0x50));
  if (puVar3 == (ushort *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    for (; (uVar1 = *puVar3, uVar1 != 0 && (uVar1 < 0x21)); puVar3 = puVar3 + 1) {
      if (uVar1 == 9) {
        iVar2 = iVar2 + *(int *)(param_1 + 0x4c);
      }
      else {
        iVar2 = iVar2 + 1;
      }
    }
  }
  return iVar2;
}

