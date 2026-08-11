/* Ghidra address: 01d06f90 */
/* Ghidra symbol: FUN_01d06f90 */


undefined8 FUN_01d06f90(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_01d06e20();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00c41110(lVar1);
  }
  return uVar2;
}

