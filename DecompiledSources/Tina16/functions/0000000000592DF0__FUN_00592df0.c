/* Ghidra address: 00592df0 */
/* Ghidra symbol: FUN_00592df0 */


undefined ** FUN_00592df0(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined **ppuVar3;
  
  pbVar2 = (byte *)FUN_00589390();
  bVar1 = *pbVar2;
  if (bVar1 < 2) {
    ppuVar3 = &PTR_PTR_01de1cf0;
  }
  else if ((byte)(bVar1 - 2) < 2) {
    ppuVar3 = &PTR_PTR_01de1cf8;
  }
  else if ((byte)(bVar1 - 4) < 2) {
    ppuVar3 = &PTR_PTR_01de1d00;
  }
  else {
    FUN_004098e0(4);
    ppuVar3 = (undefined **)0x0;
  }
  return ppuVar3;
}

