/* Ghidra address: 01c93da0 */
/* Ghidra symbol: FUN_01c93da0 */


void FUN_01c93da0(void)

{
  undefined8 uVar1;
  
  if (*(longlong *)PTR_DAT_02001e80 == 0) {
    uVar1 = FUN_007fc180(&PTR_FUN_014b6a28,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02001e80 = uVar1;
  }
  FUN_008059a0(*(undefined8 *)PTR_DAT_02001e80);
  FUN_0064e1d0(*(undefined8 *)PTR_DAT_02001e80);
  FUN_014b7800(*(undefined8 *)PTR_DAT_02001e80,0);
  return;
}

