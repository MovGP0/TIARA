/* Ghidra address: 01ca2a40 */
/* Ghidra symbol: FUN_01ca2a40 */


void FUN_01ca2a40(void)

{
  undefined8 uVar1;
  
  if (*(longlong *)PTR_DAT_02005498 == 0) {
    uVar1 = FUN_007fc180(&PTR_FUN_014906e8,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02005498 = uVar1;
  }
  FUN_008059a0(*(undefined8 *)PTR_DAT_02005498);
  uVar1 = FUN_0065b870(*(undefined8 *)PTR_DAT_02005498);
  thunk_FUN_041775c2(uVar1);
  return;
}

