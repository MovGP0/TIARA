/* Ghidra address: 00688790 */
/* Ghidra symbol: FUN_00688790 */


void FUN_00688790(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[0x9c];
  if (param_2 != lVar1) {
    if (lVar1 != 0) {
      FUN_007d7c60(lVar1,param_1[0x99]);
    }
    param_1[0x9c] = param_2;
    if (param_2 != 0) {
      FUN_007d7c70(param_2,param_1[0x99]);
      FUN_004d26c0(param_1[0x9c],param_1);
    }
    (**(code **)(*param_1 + 0x278))(param_1);
  }
  return;
}

