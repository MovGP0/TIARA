/* Ghidra address: 00bba660 */
/* Ghidra symbol: FUN_00bba660 */


void FUN_00bba660(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x18),param_2,param_3);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x28),param_2,param_3);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x2c),param_2,param_3);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(*(longlong *)(lVar1 + 0x18) + 0x28),param_2,param_3);
  FUN_005fcc80(lVar1,uVar2);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_1);
  }
  return;
}

