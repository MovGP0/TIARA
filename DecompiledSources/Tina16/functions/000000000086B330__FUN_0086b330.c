/* Ghidra address: 0086b330 */
/* Ghidra symbol: FUN_0086b330 */


undefined8 FUN_0086b330(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_008631f0(&DAT_0085e538,1,0);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x20;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

