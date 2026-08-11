/* Ghidra address: 01c80630 */
/* Ghidra symbol: FUN_01c80630 */


void FUN_01c80630(void)

{
  undefined8 uVar1;
  
  if (*(longlong *)PTR_DAT_02002d20 == 0) {
    uVar1 = FUN_01aebb40(&PTR_FUN_017ec3a8,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02002d20 = uVar1;
  }
  else {
    FUN_0064e1d0(*(undefined8 *)PTR_DAT_02002d20);
  }
  uVar1 = FUN_0065b870(*(undefined8 *)PTR_DAT_02002d20);
  thunk_FUN_03ab0e43(uVar1,9);
  return;
}

