/* Ghidra address: 00bfe0f0 */
/* Ghidra symbol: FUN_00bfe0f0 */


undefined8 FUN_00bfe0f0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0044f080();
  if (iVar1 < 5) {
    iVar1 = FUN_0044f080();
    if (iVar1 == 4) {
      iVar1 = FUN_0044f0a0();
      if (0 < iVar1) goto LAB_00bfe115;
    }
    uVar2 = 0;
  }
  else {
LAB_00bfe115:
    uVar2 = 1;
  }
  return uVar2;
}

