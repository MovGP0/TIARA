/* Ghidra address: 00cdd790 */
/* Ghidra symbol: FUN_00cdd790 */


void FUN_00cdd790(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  if (DAT_01eb0290 == (longlong *)0x0) {
    DAT_01eb0290 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  }
  iVar1 = (**(code **)(*DAT_01eb0290 + 0xb0))(DAT_01eb0290,param_1);
  if (iVar1 < 0) {
    (**(code **)(*DAT_01eb0290 + 0x80))(DAT_01eb0290,param_1,param_2);
  }
  else {
    (**(code **)(*DAT_01eb0290 + 0x48))(DAT_01eb0290,iVar1,param_2);
  }
  return;
}

