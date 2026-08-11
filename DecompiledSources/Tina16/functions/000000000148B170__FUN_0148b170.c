/* Ghidra address: 0148b170 */
/* Ghidra symbol: FUN_0148b170 */


undefined8 FUN_0148b170(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_0148b8d0(&PTR_FUN_014901e8,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

