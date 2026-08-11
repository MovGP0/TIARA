/* Ghidra address: 00600b60 */
/* Ghidra symbol: FUN_00600b60 */


undefined8 FUN_00600b60(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 local_42c;
  short local_42a;
  undefined1 local_428 [1024];
  
  local_42c = 0x300;
  if (param_1 == 0) {
    if (0x100 < param_3) {
      FUN_005ffe20(PTR_PTR_02002850);
    }
    local_42a = (short)param_3;
    FUN_00409a70(param_2,local_428,(longlong)(param_3 * 4));
  }
  else {
    uVar2 = thunk_FUN_04137b5f(0);
    uVar3 = thunk_FUN_041a19a1(uVar2,param_1);
    local_42a = thunk_FUN_041fe7d8(uVar2,0,0x100,local_428);
    thunk_FUN_041a19a1(uVar2,uVar3);
    thunk_FUN_041a2fd8(uVar2);
  }
  if (local_42a != 0) {
    if ((local_42a != 0x10) || (cVar1 = FUN_00600a90(&local_42c), cVar1 == '\0')) {
      FUN_006008d0(local_428,local_42a);
    }
    uVar2 = thunk_FUN_04123694(&local_42c);
    return uVar2;
  }
  return 0;
}

