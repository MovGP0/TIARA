/* Ghidra address: 009ac0d0 */
/* Ghidra symbol: FUN_009ac0d0 */


undefined8 FUN_009ac0d0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_009b4640(&PTR_FUN_009c5ef8,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

