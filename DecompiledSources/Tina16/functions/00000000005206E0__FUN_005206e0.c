/* Ghidra address: 005206e0 */
/* Ghidra symbol: FUN_005206e0 */


undefined8 FUN_005206e0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_005215c0(&PTR_FUN_005242f0,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

