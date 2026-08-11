/* Ghidra address: 010b6c40 */
/* Ghidra symbol: FUN_010b6c40 */


undefined8 FUN_010b6c40(undefined8 param_1)

{
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  int local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_50 = auStack_78;
  local_30 = 8;
  local_20 = 0;
  local_2c = 0;
  local_28 = 0;
  local_3c = thunk_FUN_041d810e(param_1,0,0);
  local_10 = thunk_FUN_0412a7bb(2,(longlong)local_3c);
  if (local_10 == 0) {
    FUN_010b6bb0();
  }
  local_38 = thunk_FUN_0416a623(local_10);
  thunk_FUN_041d810e(param_1,local_3c,local_38);
  local_18 = thunk_FUN_03b4ba23(local_3c,local_38,0,&local_30);
  thunk_FUN_041806b4(param_1);
  thunk_FUN_04172795(local_10);
  thunk_FUN_03d5bf3d(local_10);
  return local_18;
}

