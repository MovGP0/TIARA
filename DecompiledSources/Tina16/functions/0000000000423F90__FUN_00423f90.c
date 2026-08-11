/* Ghidra address: 00423f90 */
/* Ghidra symbol: FUN_00423f90 */


undefined8 FUN_00423f90(void)

{
  undefined8 uVar1;
  
  if (PTR_PTR_0200c2c0 == (undefined *)0x0) {
    FUN_004098e0(0x1b);
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)PTR_PTR_0200c2c0)(PTR_PTR_0200c2c0);
  }
  return uVar1;
}

