/* Ghidra address: 01ca1750 */
/* Ghidra symbol: FUN_01ca1750 */


void FUN_01ca1750(void)

{
  undefined8 uVar1;
  
  if (*(longlong *)PTR_DAT_02004f00 == 0) {
    uVar1 = FUN_01aebb40(&PTR_FUN_012bfe48,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02004f00 = uVar1;
  }
  FUN_008059a0(*(undefined8 *)PTR_DAT_02004f00);
  return;
}

