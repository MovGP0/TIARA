/* Ghidra address: 01228540 */
/* Ghidra symbol: FUN_01228540 */


void FUN_01228540(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 local_90;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68 [88];
  
  local_90 = 0;
  iVar2 = FUN_005fce00(*(undefined8 *)(param_1 + 0x70));
  lVar1 = *(longlong *)(param_1 + 0x70);
  lVar3 = FUN_0040c840((double)(-iVar2 * *(int *)(lVar1 + 0x2c)) / 72.0);
  local_84 = FUN_0040c770((double)lVar3 * 1.0);
  local_80 = 0;
  if (DAT_0210771c == '\0') {
    if (DAT_0210771d != '\0') {
      local_7c = DAT_02107720;
      local_78 = DAT_02107720;
    }
  }
  else {
    local_7c = 900;
    local_78 = 900;
  }
  uVar4 = FUN_005fce60(lVar1);
  if ((uVar4 & 1) == 0) {
    local_74 = 400;
  }
  else {
    local_74 = 700;
  }
  uVar4 = FUN_005fce60(*(undefined8 *)(param_1 + 0x70));
  local_70 = (uVar4 & 2) != 0;
  uVar4 = FUN_005fce60(*(undefined8 *)(param_1 + 0x70));
  local_6f = (uVar4 & 4) != 0;
  uVar4 = FUN_005fce60(*(undefined8 *)(param_1 + 0x70));
  local_6e = (uVar4 & 8) != 0;
  local_6d = 1;
  local_6c = 7;
  local_6b = 0;
  local_6a = 2;
  local_69 = 2;
  FUN_005fccd0(*(undefined8 *)(param_1 + 0x70),&local_90);
  FUN_00442620(local_68,local_90);
  uVar5 = thunk_FUN_041a15ee(&local_84);
  FUN_005fcc40(*(undefined8 *)(param_1 + 0x70),uVar5);
  FUN_00414480(&local_90);
  return;
}

