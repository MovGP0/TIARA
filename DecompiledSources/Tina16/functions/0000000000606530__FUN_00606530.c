/* Ghidra address: 00606530 */
/* Ghidra symbol: FUN_00606530 */


void FUN_00606530(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  longlong local_88;
  undefined1 local_7c [24];
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_4c;
  longlong local_10;
  
  local_90 = auStack_b8;
  FUN_00606460(param_1);
  FUN_004b84c0(param_2,local_7c,0x6c);
  if (local_54 != 0x464d4520) {
    FUN_005ffe90();
  }
  if (local_4c < 0x6c) {
    FUN_005ffe90();
  }
  local_10 = FUN_004095c0(local_4c);
  local_88 = *(longlong *)(param_1 + 0x48);
  FUN_00409a70(local_7c,local_10,0x6c);
  FUN_004b84c0(param_2,local_10 + 0x6c,local_4c - 0x6c);
  uVar1 = thunk_FUN_0412ef49(local_4c,local_10);
  *(undefined8 *)(local_88 + 0x10) = uVar1;
  if (*(longlong *)(local_88 + 0x10) == 0) {
    FUN_005ffe90();
  }
  *(undefined2 *)(local_88 + 0x28) = 0;
  *(int *)(local_88 + 0x18) = local_5c - local_64;
  *(int *)(local_88 + 0x1c) = local_58 - local_60;
  *(undefined1 *)(param_1 + 0x50) = 1;
  FUN_004095f0(local_10,local_4c);
  return;
}

