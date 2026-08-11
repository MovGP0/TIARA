/* Ghidra address: 00bd4480 */
/* Ghidra symbol: FUN_00bd4480 */


void FUN_00bd4480(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_1[1] != param_2) {
    param_1[1] = param_2;
    uVar1 = thunk_FUN_03b57162(param_2);
    *(undefined4 *)(param_1 + 2) = uVar1;
    thunk_FUN_041a19a1(param_2,param_1[7]);
    uVar1 = FUN_005fbf20((int)param_1[9]);
    thunk_FUN_0412a071(param_2,uVar1);
    uVar1 = FUN_005fbf20(*(undefined4 *)((longlong)param_1 + 0x4c));
    thunk_FUN_03e3a7dc(param_2,uVar1);
    (**(code **)(*param_1 + 0x10))(param_1,(int)param_1[10]);
  }
  *(int *)((longlong)param_1 + 0x54) = *(int *)((longlong)param_1 + 0x54) + 1;
  return;
}

