/* Ghidra address: 00c3d880 */
/* Ghidra symbol: FUN_00c3d880 */


undefined8 FUN_00c3d880(undefined8 param_1,longlong param_2,double param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined1 local_290;
  undefined1 local_28f;
  undefined1 local_28e;
  undefined1 local_28d;
  undefined1 local_28c;
  undefined1 local_28b;
  undefined1 local_28a;
  undefined1 local_289;
  undefined1 local_288 [64];
  undefined4 local_248;
  undefined4 local_244;
  undefined1 local_240 [544];
  
  uVar3 = thunk_FUN_040ef593(0);
  iVar1 = thunk_FUN_03f3ed25(8,0x60,0x48);
  local_2a4 = FUN_0040c770((double)-iVar1 * param_3);
  local_2a0 = 0;
  local_29c = 0;
  local_298 = 0;
  local_294 = 300;
  local_290 = 0;
  local_28f = 0;
  local_28e = 0;
  local_28d = 1;
  local_28c = 0;
  local_28b = 0;
  local_28a = 0;
  local_289 = 0;
  FUN_00442620(local_288,PTR_u_Arial_01ea2dc0);
  uVar4 = thunk_FUN_041a15ee(&local_2a4);
  uVar4 = thunk_FUN_041a19a1(uVar3,uVar4);
  uVar5 = FUN_00442620(local_240,param_2);
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(undefined4 *)(param_2 + -4);
  }
  thunk_FUN_040d447e(uVar3,uVar5,uVar2,&local_248);
  uVar4 = thunk_FUN_041a19a1(uVar3,uVar4);
  thunk_FUN_0416f828(uVar4);
  thunk_FUN_041a9b5c(0,uVar3);
  return CONCAT44(local_244,local_248);
}

