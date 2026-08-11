/* Ghidra address: 006079e0 */
/* Ghidra symbol: FUN_006079e0 */


void FUN_006079e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_005fdf10(param_1);
    FUN_0060a460(*(undefined8 *)(param_1 + 0x98));
    FUN_00607750(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x60) + 0x10));
    FUN_0060a750(*(undefined8 *)(param_1 + 0x98));
    local_10 = thunk_FUN_04137b5f(0);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x60) + 0x10);
    if (lVar1 == 0) {
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    else {
      uVar2 = thunk_FUN_041a19a1(local_10,lVar1);
      *(undefined8 *)(param_1 + 0xa0) = uVar2;
    }
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x60) + 0x20);
    if (lVar1 == 0) {
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    else {
      uVar2 = thunk_FUN_0418f5de(local_10,lVar1,0xffffffff);
      *(undefined8 *)(param_1 + 0xa8) = uVar2;
      thunk_FUN_03a5de49(local_10);
    }
    FUN_005ffb10(param_1,local_10);
    FUN_004afc10(DAT_01dee370,param_1);
    FUN_005fe090(param_1);
  }
  return;
}

