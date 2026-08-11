/* Ghidra address: 00427c10 */
/* Ghidra symbol: FUN_00427c10 */


undefined8 FUN_00427c10(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  if (param_2 >> 0x10 == 0) {
    local_20 = auStack_48;
    local_18 = thunk_FUN_041aa1c3(param_1,param_2);
  }
  else {
    FUN_004144d0(&local_10);
    FUN_00415460(&local_10,param_2,0);
    uVar1 = FUN_00415ab0(local_10);
    local_18 = thunk_FUN_041aa1c3(param_1,uVar1);
    FUN_004144d0(&local_10);
  }
  FUN_004144d0(&local_10);
  return local_18;
}

