/* Ghidra address: 00c79860 */
/* Ghidra symbol: FUN_00c79860 */


undefined8 FUN_00c79860(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  int local_14;
  undefined8 local_10;
  
  local_20 = auStack_48;
  uVar1 = FUN_00c78d60(param_1);
  local_14 = thunk_FUN_041d55cc(uVar1);
  local_10 = FUN_00442b60(local_14 + 2);
  uVar1 = FUN_00c78d60(param_1);
  thunk_FUN_041ca87a(uVar1,local_10,local_14 + 1);
  FUN_004167d0(param_2,local_10);
  FUN_00442c30(local_10);
  return param_2;
}

