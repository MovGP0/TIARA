/* Ghidra address: 012beda0 */
/* Ghidra symbol: FUN_012beda0 */


longlong FUN_012beda0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_012bedf0(param_1,param_2);
  if (lVar1 == 0) {
    lVar1 = FUN_012be250(&DAT_012bd440,1,param_2);
    FUN_004ae7e0(param_1,lVar1);
  }
  return lVar1;
}

