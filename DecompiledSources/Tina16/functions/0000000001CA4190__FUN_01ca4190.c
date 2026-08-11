/* Ghidra address: 01ca4190 */
/* Ghidra symbol: FUN_01ca4190 */


void FUN_01ca4190(void)

{
  undefined8 uVar1;
  
  if (*(longlong *)PTR_DAT_020044c0 == 0) {
    uVar1 = FUN_007fc180(&PTR_FUN_014b90e8,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_020044c0 = uVar1;
    FUN_008059a0(*(undefined8 *)PTR_DAT_020044c0);
  }
  return;
}

