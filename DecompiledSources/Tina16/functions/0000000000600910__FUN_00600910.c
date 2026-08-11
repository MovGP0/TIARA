/* Ghidra address: 00600910 */
/* Ghidra symbol: FUN_00600910 */


undefined8 FUN_00600910(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_458 [40];
  undefined1 *local_430;
  undefined2 local_420;
  ushort local_41e;
  undefined1 local_41c [28];
  int local_400;
  undefined1 local_3fc [992];
  int local_1c;
  undefined8 local_10;
  
  local_430 = auStack_458;
  local_420 = 0x300;
  local_41e = 0x10;
  FUN_00409a70(param_1,local_41c,0x40);
  local_10 = thunk_FUN_040ef593(0);
  local_1c = thunk_FUN_03e5bd07(local_10,0x68);
  if (0xf < local_1c) {
    thunk_FUN_041f459c(local_10,0,8,local_41c);
    if (local_400 == 0xc0c0c0) {
      thunk_FUN_041f459c(local_10,local_1c + -8,1,&local_400);
      thunk_FUN_041f459c(local_10,local_1c + -7,7,local_41c + (longlong)(int)(local_41e - 7) * 4);
      thunk_FUN_041f459c(local_10,7,1,local_3fc);
    }
    else {
      thunk_FUN_041f459c(local_10,local_1c + -8,8,local_41c + (longlong)(int)(local_41e - 8) * 4);
    }
  }
  thunk_FUN_041a9b5c(0,local_10);
  uVar1 = thunk_FUN_04123694(&local_420);
  return uVar1;
}

