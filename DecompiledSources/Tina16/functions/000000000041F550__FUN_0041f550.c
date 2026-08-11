/* Ghidra address: 0041f550 */
/* Ghidra symbol: FUN_0041f550 */


void FUN_0041f550(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  if (param_4 < 0) {
    param_4 = 0;
    if (param_3 != 0) {
      param_4 = *(int *)(param_3 + -4);
    }
    param_4 = param_4 + 1;
  }
  uVar2 = FUN_00416740(param_3);
  FUN_00409a70(uVar2,uVar1,(longlong)(param_4 * 2));
  return;
}

