/* Ghidra address: 01ca17a0 */
/* Ghidra symbol: FUN_01ca17a0 */


void FUN_01ca17a0(void)

{
  undefined8 uVar1;
  
  if (*(longlong *)PTR_DAT_02002f98 == 0) {
    uVar1 = FUN_01aebb40(&PTR_FUN_012ee0d8,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02002f98 = uVar1;
  }
  FUN_008059a0(*(undefined8 *)PTR_DAT_02002f98);
  return;
}

