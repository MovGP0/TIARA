/* Ghidra address: 00872c10 */
/* Ghidra symbol: FUN_00872c10 */


undefined8 FUN_00872c10(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  
  if (param_3 == 0) {
    FUN_00419430(param_2,&DAT_0086e978);
  }
  else {
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = *(ulonglong *)(param_3 + -8);
    }
    FUN_00872d30(param_1,param_2,param_3,uVar1 & 0xffffffff);
  }
  return param_2;
}

