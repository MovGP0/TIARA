/* Ghidra address: 00593260 */
/* Ghidra symbol: FUN_00593260 */


undefined ** FUN_00593260(void)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)FUN_00589390();
  bVar1 = *pbVar2;
  if (bVar1 < 3) {
    if (bVar1 == 2) {
      return &PTR_PTR_01de1ee0;
    }
    if (bVar1 == 0) {
      return &PTR_PTR_01de1e30;
    }
    if (bVar1 == 1) {
      return &PTR_PTR_01de1e88;
    }
  }
  else {
    if (bVar1 == 3) {
      return &PTR_PTR_01de1f38;
    }
    if (bVar1 == 4) {
      return &PTR_PTR_01de1f90;
    }
  }
  FUN_004098e0(4);
  return (undefined **)0x0;
}

