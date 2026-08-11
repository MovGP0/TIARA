/* Ghidra address: 00dde110 */
/* Ghidra symbol: FUN_00dde110 */


void FUN_00dde110(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  FUN_00dde660(param_1);
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    uVar2 = thunk_FUN_0412a7bb(2,0);
    *(undefined8 *)(param_1 + 0x4a8) = uVar2;
    if (*(longlong *)(param_1 + 0x4a8) == 0) {
      FUN_0044d470();
    }
    uVar2 = FUN_0041b800(&local_10);
    uVar1 = thunk_FUN_039b661f(*(undefined8 *)(param_1 + 0x4a8),0,uVar2);
    FUN_006245b0(uVar1);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x4b8) + 0x30))
                      (*(longlong **)(param_1 + 0x4b8),local_10,0xffffffff);
    FUN_006245b0(uVar1);
  }
  FUN_0041b800(&local_10);
  return;
}

