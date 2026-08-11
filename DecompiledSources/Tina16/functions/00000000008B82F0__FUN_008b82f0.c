/* Ghidra address: 008b82f0 */
/* Ghidra symbol: FUN_008b82f0 */


void FUN_008b82f0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0) && (param_2 != param_1)) {
    pcVar1 = (code *)FUN_00411550(param_2,0xffffffff);
    lVar2 = (*pcVar1)(param_2);
    if (lVar2 != param_1) {
      pcVar1 = (code *)FUN_00411550(param_2,0xffffffff);
      uVar3 = (*pcVar1)(param_2);
      uVar3 = FUN_004113f0(uVar3,&PTR_FUN_008b43d0);
      FUN_008b83d0(uVar3,param_2);
      FUN_008b8360(param_1,param_2);
    }
  }
  return;
}

