/* Ghidra address: 010ec980 */
/* Ghidra symbol: FUN_010ec980 */


void FUN_010ec980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_010e7720();
  if (lVar1 != 0) {
    uVar2 = FUN_004113f0(lVar1,&PTR_FUN_010fe770);
    FUN_01102fd0(uVar2,param_3,param_4,param_5,param_6);
  }
  return;
}

