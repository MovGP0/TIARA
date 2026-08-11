/* Ghidra address: 017efbc0 */
/* Ghidra symbol: FUN_017efbc0 */


void FUN_017efbc0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)PTR_DAT_020025d8 == 0) {
    uVar1 = FUN_007fc180(&PTR_FUN_01115378,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_020025d8 = uVar1;
    FUN_01115920(*(undefined8 *)PTR_DAT_020025d8,*(undefined8 *)(param_1 + 0xb48));
  }
  FUN_008059a0(*(undefined8 *)PTR_DAT_020025d8);
  return;
}

