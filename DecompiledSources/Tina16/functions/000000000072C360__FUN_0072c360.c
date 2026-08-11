/* Ghidra address: 0072c360 */
/* Ghidra symbol: FUN_0072c360 */


void FUN_0072c360(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_res10 [3];
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 *local_30;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = thunk_FUN_041186c5(0);
  if (iVar1 == 0) {
    uVar2 = FUN_0044d710(&PTR_FUN_004334c0,1,PTR_PTR_020018c0);
    FUN_004134c0(uVar2);
  }
  else {
    local_1c = 0;
    local_38 = local_res10[0];
    if (local_res10[0] != 0) {
      local_1c = *(int *)(local_res10[0] + -4);
    }
    local_10 = thunk_FUN_0412a7bb(0x2002,(longlong)(local_1c * 2 + 2));
    local_18 = thunk_FUN_0416a623(local_10);
    local_20 = 0;
    if (local_38 != 0) {
      local_20 = *(int *)(local_38 + -4);
    }
    uVar2 = FUN_00416740(local_res10[0]);
    FUN_00409a70(uVar2,local_18,(longlong)(local_20 * 2 + 2));
    thunk_FUN_03ff56c8();
    thunk_FUN_0415744e(0xd,local_10);
    thunk_FUN_04172795(local_10);
    thunk_FUN_0411986d();
  }
  FUN_00414480(local_res10);
  return;
}

