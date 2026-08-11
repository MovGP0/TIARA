/* Ghidra address: 00bac3d0 */
/* Ghidra symbol: FUN_00bac3d0 */


undefined8 FUN_00bac3d0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_00bb2de0(&PTR_FUN_00ba54a8,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0xc0;
  }
  FUN_0041b840(param_1,lVar1);
  return param_1;
}

