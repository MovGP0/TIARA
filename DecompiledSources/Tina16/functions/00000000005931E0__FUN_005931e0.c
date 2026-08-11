/* Ghidra address: 005931e0 */
/* Ghidra symbol: FUN_005931e0 */


undefined ** FUN_005931e0(void)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)FUN_00589390();
  bVar1 = *pbVar2;
  if (bVar1 < 3) {
    if (bVar1 == 2) {
      return &PTR_PTR_01de1eb0;
    }
    if (bVar1 == 0) {
      return &PTR_PTR_01de1e00;
    }
    if (bVar1 == 1) {
      return &PTR_PTR_01de1e58;
    }
  }
  else {
    if (bVar1 == 3) {
      return &PTR_PTR_01de1f08;
    }
    if (bVar1 == 4) {
      return &PTR_PTR_01de1f60;
    }
  }
  FUN_004098e0(4);
  return (undefined **)0x0;
}

