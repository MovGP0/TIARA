/* Ghidra address: 00725bf0 */
/* Ghidra symbol: FUN_00725bf0 */


void FUN_00725bf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_20;
  ushort *local_18;
  ushort *local_10;
  
  local_20 = auStack_58;
  local_18 = (ushort *)thunk_FUN_0416a623(param_2);
  local_10 = local_18;
  uVar1 = FUN_0069e8a0();
  local_38 = param_1;
  FUN_0069d7c0(uVar1,local_10 + local_18[1],local_10 + *local_18,local_10 + local_18[2]);
  thunk_FUN_04172795(param_2);
  thunk_FUN_03d5bf3d(param_2);
  return;
}

