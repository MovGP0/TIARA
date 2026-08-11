/* Ghidra address: 013ff060 */
/* Ghidra symbol: FUN_013ff060 */


undefined8 FUN_013ff060(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined1 local_280;
  undefined1 local_27f;
  undefined1 local_27e;
  undefined1 local_27d;
  undefined1 local_27c;
  undefined1 local_27b;
  undefined1 local_27a;
  undefined1 local_279;
  undefined1 local_278 [64];
  undefined4 local_238;
  undefined4 local_234;
  undefined1 local_230 [528];
  
  uVar3 = thunk_FUN_040ef593(0);
  iVar1 = thunk_FUN_03f3ed25(8,0x60,0x48);
  local_294 = FUN_0040c770((double)-iVar1 * 0.9);
  local_290 = 0;
  local_28c = 0;
  local_288 = 0;
  local_284 = 300;
  local_280 = 0;
  local_27f = 0;
  local_27e = 0;
  local_27d = 1;
  local_27c = 0;
  local_27b = 0;
  local_27a = 0;
  local_279 = 0;
  FUN_00442620(local_278,PTR_u_Arial_01f46e88);
  uVar4 = thunk_FUN_041a15ee(&local_294);
  uVar4 = thunk_FUN_041a19a1(uVar3,uVar4);
  uVar5 = FUN_00442620(local_230,param_2);
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(undefined4 *)(param_2 + -4);
  }
  thunk_FUN_040d447e(uVar3,uVar5,uVar2,&local_238);
  uVar4 = thunk_FUN_041a19a1(uVar3,uVar4);
  thunk_FUN_0416f828(uVar4);
  thunk_FUN_041a9b5c(0,uVar3);
  return CONCAT44(local_234,local_238);
}

