/* Ghidra address: 01a97e00 */
/* Ghidra symbol: FUN_01a97e00 */


undefined8 FUN_01a97e00(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = thunk_FUN_041715dd(4);
    uVar1 = thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x148),uVar1);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    uVar1 = thunk_FUN_041715dd(7);
    uVar1 = thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x148),uVar1);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    uVar1 = thunk_FUN_041715dd(0xd);
    uVar1 = thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x148),uVar1);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    uVar1 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_005ffb10(uVar1,*(undefined8 *)(param_1 + 0x148));
  return uVar1;
}

