/* Ghidra address: 0060a6d0 */
/* Ghidra symbol: FUN_0060a6d0 */


void FUN_0060a6d0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((*(char *)(param_1 + 0x52) == '\0') || (*(char *)(param_1 + 0x51) == '\0')) {
    lVar1 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(lVar1 + 0x18) != 0) {
      FUN_00607750(*(longlong *)(lVar1 + 0x18));
      thunk_FUN_0416f828(*(undefined8 *)(lVar1 + 0x18));
      *(undefined8 *)(lVar1 + 0x18) = 0;
    }
    FUN_0060a440(param_1);
    FUN_0060a460(param_1);
    lVar1 = *(longlong *)(param_1 + 0x60);
    uVar2 = FUN_0060a330(param_1);
    uVar3 = FUN_00608910(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x20),uVar2);
    *(undefined8 *)(lVar1 + 0x18) = uVar3;
    *(undefined1 *)(param_1 + 0x52) = 1;
    *(undefined1 *)(param_1 + 0x51) = 1;
  }
  return;
}

