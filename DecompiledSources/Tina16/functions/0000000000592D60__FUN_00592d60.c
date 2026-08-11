/* Ghidra address: 00592d60 */
/* Ghidra symbol: FUN_00592d60 */


undefined ** FUN_00592d60(void)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)FUN_00589390();
  bVar1 = *pbVar2;
  if (bVar1 < 4) {
    if (bVar1 == 3) {
      return &PTR_PTR_01de1c60;
    }
    if (bVar1 == 0) {
      return &PTR_PTR_01de1c48;
    }
    if (bVar1 == 1) {
      return &PTR_PTR_01de1c50;
    }
    if (bVar1 == 2) {
      return &PTR_PTR_01de1c58;
    }
  }
  else {
    if (bVar1 == 4) {
      return &PTR_PTR_01de1c68;
    }
    if (bVar1 == 5) {
      return &PTR_PTR_01de1c70;
    }
  }
  FUN_004098e0(4);
  return (undefined **)0x0;
}

