/* Ghidra address: 009ec5c0 */
/* Ghidra symbol: FUN_009ec5c0 */


void FUN_009ec5c0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_24;
  longlong local_20;
  int local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_14 = thunk_FUN_03d4bee8(L"HTML Format");
  local_24 = 0;
  if (param_1 != 0) {
    local_24 = *(int *)(param_1 + -4);
  }
  local_18 = local_24;
  local_10 = thunk_FUN_0412a7bb(0x2002,(longlong)(local_24 + 1));
  local_20 = thunk_FUN_0416a623(local_10);
  uVar1 = FUN_00415ab0(param_1);
  FUN_00409a70(uVar1,local_20,(longlong)local_18);
  *(undefined1 *)(local_20 + local_18) = 0;
  thunk_FUN_0415744e(local_14,local_10);
  thunk_FUN_04172795(local_10);
  return;
}

