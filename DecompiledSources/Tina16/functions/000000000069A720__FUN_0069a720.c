/* Ghidra address: 0069a720 */
/* Ghidra symbol: FUN_0069a720 */


void FUN_0069a720(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*param_2 == 0xb00c) {
    FUN_0069a680(param_1);
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else if (*param_2 - 0xbd32U < 7) {
    uVar1 = FUN_005fbf20(*(undefined4 *)(param_1 + 0x1c));
    thunk_FUN_0412a071(*(undefined8 *)(param_2 + 2),uVar1);
    uVar1 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) + 0x28));
    thunk_FUN_03e3a7dc(*(undefined8 *)(param_2 + 2),uVar1);
    uVar2 = FUN_005fdb10(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_2 + 6) = uVar2;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  else {
    FUN_00813880(param_1,param_2);
  }
  return;
}

