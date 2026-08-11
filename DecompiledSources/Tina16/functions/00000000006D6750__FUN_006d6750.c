/* Ghidra address: 006d6750 */
/* Ghidra symbol: FUN_006d6750 */


void FUN_006d6750(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[0x93];
  if (lVar1 != param_2) {
    if (lVar1 != 0) {
      FUN_006d77b0(lVar1,param_1);
    }
    (**(code **)(*param_1 + 0x130))(param_1,param_2);
    if (param_2 != 0) {
      FUN_006d76a0(param_2,param_1);
    }
  }
  return;
}

