/* Ghidra address: 0041f5a0 */
/* Ghidra symbol: FUN_0041f5a0 */


void FUN_0041f5a0(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,int param_5
                 )

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_2;
  if (param_5 < 0) {
    param_5 = 0;
    if (param_4 != 0) {
      param_5 = *(int *)(param_4 + -4);
    }
    param_5 = param_5 + 1;
  }
  uVar2 = FUN_00416740(param_4);
  FUN_00409a70(uVar2,lVar1 + param_3,(longlong)(param_5 * 2));
  return;
}

