/* Ghidra address: 00607cd0 */
/* Ghidra symbol: FUN_00607cd0 */


void FUN_00607cd0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_458 [40];
  undefined1 *local_430;
  undefined1 local_424 [1024];
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_430 = auStack_458;
  if ((param_1 != 0) && (*(ushort *)(param_3 + 0x2e) < 9)) {
    local_24 = FUN_00600c50(param_2,local_424,0xff);
    if (local_24 != 0) {
      local_20 = thunk_FUN_040ef593(0);
      local_10 = thunk_FUN_04137b5f(local_20);
      local_18 = thunk_FUN_041a19a1(local_10,param_1);
      thunk_FUN_039d79c0(local_10,0,local_24,local_424);
      thunk_FUN_041a19a1(local_10,local_18);
      thunk_FUN_041a2fd8(local_10);
      thunk_FUN_041a9b5c(0,local_20);
    }
  }
  return;
}

