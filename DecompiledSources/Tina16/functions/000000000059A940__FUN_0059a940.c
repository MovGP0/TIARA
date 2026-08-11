/* Ghidra address: 0059a940 */
/* Ghidra symbol: FUN_0059a940 */


void FUN_0059a940(longlong *param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  
  if (param_2 != param_3) {
    if (*(uint *)(param_1 + 1) <= param_2) {
      FUN_00594f90();
    }
    if (*(uint *)(param_1 + 1) <= param_3) {
      FUN_00594f90();
    }
    uVar1 = *(undefined1 *)(*param_1 + (longlong)(int)param_2);
    if ((int)param_2 < (int)param_3) {
      FUN_00409a70(*param_1 + (longlong)(int)(param_2 + 1),*param_1 + (longlong)(int)param_2,
                   (longlong)(int)(param_3 - param_2));
    }
    else {
      FUN_00409a70(*param_1 + (longlong)(int)param_3,*param_1 + (longlong)(int)(param_3 + 1),
                   (longlong)(int)(param_2 - param_3));
    }
    *(undefined1 *)(*param_1 + (longlong)(int)param_3) = uVar1;
  }
  return;
}

