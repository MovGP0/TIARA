/* Ghidra address: 0188c5e0 */
/* Ghidra symbol: FUN_0188c5e0 */


void FUN_0188c5e0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    if (*(char *)(param_1 + 0xb8) == '\0') {
      uVar1 = FUN_00416740(*(undefined8 *)(param_1 + 0xd8));
      uVar2 = FUN_00416740(*(undefined8 *)(param_1 + 0x60));
      uVar1 = thunk_FUN_041ae455(uVar1,uVar2,0,*(undefined8 *)(param_1 + 0xe0));
      *(undefined8 *)(param_1 + 0xd0) = uVar1;
    }
    else {
      uVar1 = FUN_00416740(*(undefined8 *)(param_1 + 0xd8));
      uVar2 = FUN_00416740(*(undefined8 *)(param_1 + 0x60));
      uVar1 = thunk_FUN_04162799(uVar1,uVar2,0,*(undefined8 *)(param_1 + 0xe0));
      *(undefined8 *)(param_1 + 0xd0) = uVar1;
    }
    FUN_005ffb10(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0xd0));
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x100))(*(longlong **)(param_1 + 0x18));
    FUN_0188b570(*(undefined8 *)(param_1 + 0x18));
  }
  return;
}

