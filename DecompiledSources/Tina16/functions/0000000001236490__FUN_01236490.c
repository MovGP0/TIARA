/* Ghidra address: 01236490 */
/* Ghidra symbol: FUN_01236490 */


void FUN_01236490(void)

{
  undefined8 uVar1;
  
  if (*(longlong *)PTR_DAT_02004f98 == 0) {
    uVar1 = FUN_007fc180(&PTR_FUN_0115d7a8,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02004f98 = uVar1;
  }
  FUN_008059a0(*(undefined8 *)PTR_DAT_02004f98);
  return;
}

