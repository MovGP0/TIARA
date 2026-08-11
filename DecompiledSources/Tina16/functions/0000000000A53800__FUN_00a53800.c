/* Ghidra address: 00a53800 */
/* Ghidra symbol: FUN_00a53800 */


void FUN_00a53800(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 - 0x4b0U < 2) || (param_2 == 0xfde9)) {
    FUN_00a53420(param_1,1,param_2);
  }
  else {
    uVar1 = FUN_009f44a0(param_2);
    FUN_00a53420(param_1,uVar1,param_2);
  }
  return;
}

