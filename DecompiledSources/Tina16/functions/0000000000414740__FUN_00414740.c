/* Ghidra address: 00414740 */
/* Ghidra symbol: FUN_00414740 */


void FUN_00414740(undefined8 *param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 local_30 [2];
  
  local_30[0] = *param_1;
  if (param_3 < 1) {
    *param_1 = 0;
  }
  else {
    uVar1 = FUN_00414350(param_3);
    *param_1 = uVar1;
    if (param_2 != 0) {
      FUN_00409a70(param_2,uVar1,(longlong)(param_3 * 2));
    }
  }
  FUN_00414480(local_30);
  return;
}

