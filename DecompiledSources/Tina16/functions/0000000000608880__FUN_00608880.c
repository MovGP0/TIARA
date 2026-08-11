/* Ghidra address: 00608880 */
/* Ghidra symbol: FUN_00608880 */


undefined8 FUN_00608880(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 local_420;
  undefined2 local_41e;
  undefined1 local_41c [1024];
  int local_1c;
  
  uVar2 = 0;
  if (param_1 != 0) {
    local_1c = 0;
    iVar1 = thunk_FUN_03d2c01a(param_1,4,&local_1c);
    if ((iVar1 != 0) && (local_1c != 0)) {
      local_420 = 0x300;
      local_41e = (undefined2)local_1c;
      thunk_FUN_041a3f2d(param_1,0,local_1c,local_41c);
      uVar2 = thunk_FUN_04123694(&local_420);
    }
  }
  return uVar2;
}

