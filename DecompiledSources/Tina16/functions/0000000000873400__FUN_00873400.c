/* Ghidra address: 00873400 */
/* Ghidra symbol: FUN_00873400 */


undefined8 FUN_00873400(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  
  if (param_3 == 0) {
    FUN_00414480(param_2);
  }
  else {
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = *(ulonglong *)(param_3 + -8);
    }
    FUN_008734d0(param_1,param_2,param_3,uVar1 & 0xffffffff);
  }
  return param_2;
}

