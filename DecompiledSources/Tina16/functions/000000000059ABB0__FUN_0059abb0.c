/* Ghidra address: 0059abb0 */
/* Ghidra symbol: FUN_0059abb0 */


void FUN_0059abb0(longlong *param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_2 != param_3) {
    if (*(uint *)(param_1 + 1) <= param_2) {
      FUN_00594f90();
    }
    if (*(uint *)(param_1 + 1) <= param_3) {
      FUN_00594f90();
    }
    uVar1 = *(undefined8 *)(*param_1 + (longlong)(int)param_2 * 8);
    if ((int)param_2 < (int)param_3) {
      FUN_00409a70(*param_1 + (longlong)(int)(param_2 + 1) * 8,*param_1 + (longlong)(int)param_2 * 8
                   ,(longlong)(int)((param_3 - param_2) * 8));
    }
    else {
      FUN_00409a70(*param_1 + (longlong)(int)param_3 * 8,*param_1 + (longlong)(int)(param_3 + 1) * 8
                   ,(longlong)(int)((param_2 - param_3) * 8));
    }
    *(undefined8 *)(*param_1 + (longlong)(int)param_3 * 8) = uVar1;
  }
  return;
}

