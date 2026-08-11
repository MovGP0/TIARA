/* Ghidra address: 01cce280 */
/* Ghidra symbol: FUN_01cce280 */


undefined8 FUN_01cce280(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 local_80;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58 [80];
  
  local_80 = 0;
  iVar1 = FUN_005fce00(param_2);
  lVar2 = FUN_0040c840((double)(-iVar1 * *(int *)(param_2 + 0x2c)) / 72.0);
  local_74 = FUN_0040c770((double)lVar2 * 1.0);
  local_70 = 0;
  local_6c = 900;
  local_68 = 0;
  uVar3 = FUN_005fce60(param_2);
  if ((uVar3 & 1) == 0) {
    local_64 = 400;
  }
  else {
    local_64 = 700;
  }
  uVar3 = FUN_005fce60(param_2);
  local_60 = (uVar3 & 2) != 0;
  uVar3 = FUN_005fce60(param_2);
  local_5f = (uVar3 & 4) != 0;
  uVar3 = FUN_005fce60(param_2);
  local_5e = (uVar3 & 8) != 0;
  local_5d = 1;
  local_5c = 7;
  local_5b = 0;
  local_5a = 2;
  local_59 = 2;
  FUN_005fccd0(param_2,&local_80);
  FUN_00442620(local_58,local_80);
  uVar4 = thunk_FUN_041a15ee(&local_74);
  FUN_00414480(&local_80);
  return uVar4;
}

