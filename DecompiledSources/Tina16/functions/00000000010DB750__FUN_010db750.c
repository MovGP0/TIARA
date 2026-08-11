/* Ghidra address: 010db750 */
/* Ghidra symbol: FUN_010db750 */


void FUN_010db750(void)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong in_stack_ffffffffffffffd8;
  
  if ((*(longlong *)PTR_DAT_02004d38 != 0) && (*(longlong *)PTR_DAT_02001970 != 0)) {
    lVar1 = FUN_010e1630(3,0,0,0);
    if (lVar1 == 0) {
      uVar2 = FUN_010e1810(&PTR_FUN_01133e90,1,*(undefined8 *)PTR_DAT_02004030,0,
                           in_stack_ffffffffffffffd8 & 0xffffffffffffff00,3,0,0,0);
      FUN_010e1710(3,0,0,uVar2,0);
    }
  }
  return;
}

