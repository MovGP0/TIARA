/* Ghidra address: 0059aa10 */
/* Ghidra symbol: FUN_0059aa10 */


void FUN_0059aa10(longlong *param_1,uint param_2,uint param_3)

{
  undefined2 uVar1;
  
  if (param_2 != param_3) {
    if (*(uint *)(param_1 + 1) <= param_2) {
      FUN_00594f90();
    }
    if (*(uint *)(param_1 + 1) <= param_3) {
      FUN_00594f90();
    }
    uVar1 = *(undefined2 *)(*param_1 + (longlong)(int)param_2 * 2);
    if ((int)param_2 < (int)param_3) {
      FUN_00409a70(*param_1 + (longlong)(int)(param_2 + 1) * 2,*param_1 + (longlong)(int)param_2 * 2
                   ,(longlong)(int)((param_3 - param_2) * 2));
    }
    else {
      FUN_00409a70(*param_1 + (longlong)(int)param_3 * 2,*param_1 + (longlong)(int)(param_3 + 1) * 2
                   ,(longlong)(int)((param_2 - param_3) * 2));
    }
    *(undefined2 *)(*param_1 + (longlong)(int)param_3 * 2) = uVar1;
  }
  return;
}

